#!/usr/bin/env python3

import sys
import struct
import logging
from typing import Dict, Optional
from functools import wraps

import rclpy
from rclpy.node import Node
from rclpy.executors import MultiThreadedExecutor
from rclpy.qos import QoSProfile, ReliabilityPolicy, DurabilityPolicy

from PyQt5.QtWidgets import *
from PyQt5.QtCore import *
from PyQt5.QtGui import *

from stm32_mavlink_msgs.msg import RS485ReadRequest, RS485ReadResponse, RS485WriteRequest, RS485WriteResponse

# Setup logging
logging.basicConfig(
    level=logging.INFO,
    format='%(asctime)s - %(name)s - %(levelname)s - %(message)s'
)
logger = logging.getLogger(__name__)

# RS485 Protocol Constants (from RS485_PROTOCOL_v2-2.md)
class RS485Register:
    """RS485 Control Table Addresses"""
    # Global Parameters
    MODEL_NUMBER_L = 0x00
    MODEL_NUMBER_H = 0x01
    FIRMWARE_VERSION = 0x02
    DEVICE_ID = 0x03
    BAUD_RATE = 0x04

    # Motor-Specific EEPROM (base + motor_index * 0xA0)
    # Motor 0: 0x20-0xBF, Motor 1: 0xC0-0x15F, Motor 2: 0x160-0x1FF
    OPERATING_MODE = 0x20
    MOTOR_DIRECTION = 0x21
    VEL_PID_KP = 0x24
    VEL_PID_KI = 0x28
    VEL_PID_KD = 0x2C
    VEL_PID_MODE = 0x30
    POS_PID_KP = 0x34
    POS_PID_KI = 0x38
    POS_PID_KD = 0x3C
    POS_PID_MODE = 0x40
    MAX_PWM_DUTY = 0x44
    MAX_VELOCITY = 0x48
    MAX_ACCELERATION = 0x4C
    MAX_POSITION = 0x50
    MIN_POSITION = 0x54
    ENCODER_RESOLUTION = 0x58

    # RAM Area (volatile)
    TORQUE_ENABLE = 0x80
    GOAL_VELOCITY = 0x84
    GOAL_POSITION = 0x88
    GOAL_DUTY = 0x8C
    PRESENT_VELOCITY = 0x90
    PRESENT_POSITION = 0x94
    PRESENT_DUTY = 0x98
    HW_ERROR_STATUS = 0x9C

class SignalBridge(QObject):
    """Bridge class for Qt signals from ROS2 callbacks"""
    read_response_signal = pyqtSignal(object)
    write_response_signal = pyqtSignal(object)

class IkeyaMDWizardNode(Node):
    """ROS2 node for ikeyaMD Wizard communication"""

    def __init__(self, signal_bridge):
        super().__init__('ikeyamd_wizard_node')

        self.signal_bridge = signal_bridge

        # QoS profile for reliable communication
        qos_profile = QoSProfile(
            reliability=ReliabilityPolicy.RELIABLE,
            durability=DurabilityPolicy.VOLATILE,
            depth=10
        )

        # Publishers for RS485 read/write requests
        self.read_pub = self.create_publisher(
            RS485ReadRequest, '/rs485motor/read_request', qos_profile)
        self.write_pub = self.create_publisher(
            RS485WriteRequest, '/rs485motor/write_request', qos_profile)

        # Subscribers for RS485 responses
        self.read_response_sub = self.create_subscription(
            RS485ReadResponse, '/rs485motor/read_response',
            self.read_response_callback, qos_profile)
        self.write_response_sub = self.create_subscription(
            RS485WriteResponse, '/rs485motor/write_response',
            self.write_response_callback, qos_profile)

        self.get_logger().info('ikeyaMD Wizard Node initialized')

    def read_response_callback(self, msg):
        self.signal_bridge.read_response_signal.emit(msg)

    def write_response_callback(self, msg):
        self.signal_bridge.write_response_signal.emit(msg)

    def send_read_request(self, motor_id: int, address: int, length: int):
        """Send read request to RS485 motor"""
        msg = RS485ReadRequest()
        msg.motor_id = motor_id
        msg.address = address
        msg.length = length
        self.read_pub.publish(msg)
        self.get_logger().info(f'Read request: motor_id={motor_id}, addr=0x{address:04X}, len={length}')

    def send_write_request(self, motor_id: int, address: int, data: bytes):
        """Send write request to RS485 motor"""
        msg = RS485WriteRequest()
        msg.motor_id = motor_id
        msg.address = address
        msg.length = len(data)
        msg.data = list(data) + [0] * (64 - len(data))  # Pad to 64 bytes
        self.write_pub.publish(msg)
        self.get_logger().info(f'Write request: motor_id={motor_id}, addr=0x{address:04X}, data={data.hex()}')

class ParameterItemDelegate(QStyledItemDelegate):
    """Custom delegate for parameter value editing with type-specific editors"""

    def __init__(self, parent=None):
        super().__init__(parent)

    def createEditor(self, parent, option, index):
        """Create appropriate editor based on data type"""
        # Only handle the Value column (column 3)
        if index.column() != 3:
            return super().createEditor(parent, option, index)

        # Get data type from column 2 of the same row
        model = index.model()
        type_index = model.index(index.row(), 2)
        data_type = model.data(type_index)

        if data_type == 'float':
            editor = QDoubleSpinBox(parent)
            editor.setDecimals(6)
            editor.setRange(-1e9, 1e9)
            editor.setSingleStep(0.1)
            return editor
        elif data_type == 'int32':
            editor = QSpinBox(parent)
            editor.setRange(-2147483648, 2147483647)
            return editor
        elif data_type == 'uint16':
            editor = QSpinBox(parent)
            editor.setRange(0, 65535)
            return editor
        elif data_type == 'uint8':
            editor = QSpinBox(parent)
            editor.setRange(0, 255)
            return editor
        else:
            return super().createEditor(parent, option, index)

    def setEditorData(self, editor, index):
        """Set initial value in editor"""
        value_str = index.data()
        if value_str == '-' or value_str is None:
            value_str = '0'

        try:
            if isinstance(editor, QDoubleSpinBox):
                editor.setValue(float(value_str))
            elif isinstance(editor, QSpinBox):
                editor.setValue(int(float(value_str)))
            else:
                super().setEditorData(editor, index)
        except ValueError:
            if isinstance(editor, QDoubleSpinBox):
                editor.setValue(0.0)
            elif isinstance(editor, QSpinBox):
                editor.setValue(0)

    def setModelData(self, editor, model, index):
        """Get value from editor and set to model"""
        if isinstance(editor, QDoubleSpinBox):
            value = editor.value()
            model.setData(index, str(value))
        elif isinstance(editor, QSpinBox):
            value = editor.value()
            model.setData(index, str(value))
        else:
            super().setModelData(editor, model, index)

    def updateEditorGeometry(self, editor, option, index):
        """Set editor geometry"""
        editor.setGeometry(option.rect)


class ParameterTableWidget(QTableWidget):
    """Table widget for displaying and editing RS485 parameters"""

    def __init__(self):
        super().__init__()

        # Table setup
        self.setColumnCount(6)
        self.setHorizontalHeaderLabels(['Address', 'Parameter', 'Type', 'Value', 'Read', 'Write'])
        self.horizontalHeader().setStretchLastSection(False)
        self.horizontalHeader().setSectionResizeMode(1, QHeaderView.Stretch)
        self.setAlternatingRowColors(True)

        # Set custom delegate for type-safe value editing
        self.value_delegate = ParameterItemDelegate(self)
        self.setItemDelegateForColumn(3, self.value_delegate)

        # Initialize parameter definitions
        self.init_parameter_definitions()

    def init_parameter_definitions(self):
        """Initialize parameter table with common RS485 parameters"""
        parameters = [
            # Global Parameters
            (0x00, 'Model Number (Low)', 'uint8', True),
            (0x01, 'Model Number (High)', 'uint8', True),
            (0x02, 'Firmware Version', 'uint8', True),
            (0x03, 'Device ID', 'uint8', False),
            (0x04, 'Baud Rate', 'uint8', False),

            # Motor 0 EEPROM Parameters (0x20-0x7F)
            (0x20, 'Operating Mode', 'uint8', False),
            (0x21, 'Motor Direction', 'uint8', False),
            (0x24, 'Velocity PID Kp', 'float', False),
            (0x28, 'Velocity PID Ki', 'float', False),
            (0x2C, 'Velocity PID Kd', 'float', False),
            (0x30, 'Velocity PID Mode', 'uint8', False),
            (0x34, 'Position PID Kp', 'float', False),
            (0x38, 'Position PID Ki', 'float', False),
            (0x3C, 'Position PID Kd', 'float', False),
            (0x40, 'Position PID Mode', 'uint8', False),
            (0x44, 'Max PWM Duty', 'float', False),
            (0x48, 'Max Velocity', 'float', False),
            (0x4C, 'Max Acceleration', 'float', False),
            (0x50, 'Max Position', 'int32', False),
            (0x54, 'Min Position', 'int32', False),
            (0x58, 'Encoder Resolution', 'uint16', False),

            # RAM Parameters (0x80-0xFF)
            (0x80, 'Torque Enable', 'uint8', False),
            (0x84, 'Goal Velocity', 'float', False),
            (0x88, 'Goal Position', 'int32', False),
            (0x8C, 'Goal Duty', 'float', False),
            (0x90, 'Present Velocity', 'float', True),
            (0x94, 'Present Position', 'int32', True),
            (0x98, 'Present Duty', 'float', True),
            (0x9C, 'HW Error Status', 'uint8', True),
        ]

        self.setRowCount(len(parameters))

        for row, (addr, name, dtype, readonly) in enumerate(parameters):
            # Address
            addr_item = QTableWidgetItem(f'0x{addr:04X}')
            addr_item.setFlags(addr_item.flags() & ~Qt.ItemIsEditable)
            self.setItem(row, 0, addr_item)

            # Parameter name
            name_item = QTableWidgetItem(name)
            name_item.setFlags(name_item.flags() & ~Qt.ItemIsEditable)
            self.setItem(row, 1, name_item)

            # Data type
            type_item = QTableWidgetItem(dtype)
            type_item.setFlags(type_item.flags() & ~Qt.ItemIsEditable)
            self.setItem(row, 2, type_item)

            # Value (editable if not readonly)
            value_item = QTableWidgetItem('-')
            if readonly:
                value_item.setFlags(value_item.flags() & ~Qt.ItemIsEditable)
                value_item.setBackground(QColor(240, 240, 240))
            self.setItem(row, 3, value_item)

            # Read button
            read_btn = QPushButton('Read')
            read_btn.setProperty('address', addr)
            read_btn.setProperty('data_type', dtype)
            self.setCellWidget(row, 4, read_btn)

            # Write button (disabled for readonly)
            write_btn = QPushButton('Write')
            write_btn.setProperty('address', addr)
            write_btn.setProperty('data_type', dtype)
            write_btn.setEnabled(not readonly)
            self.setCellWidget(row, 5, write_btn)

        # Adjust column widths
        self.setColumnWidth(0, 80)
        self.setColumnWidth(2, 80)
        self.setColumnWidth(3, 120)
        self.setColumnWidth(4, 70)
        self.setColumnWidth(5, 70)

    def update_value(self, address: int, data: bytes, data_type: str):
        """Update parameter value in table"""
        for row in range(self.rowCount()):
            addr_item = self.item(row, 0)
            if addr_item and int(addr_item.text(), 16) == address:
                value = self.decode_value(data, data_type)
                self.item(row, 3).setText(str(value))
                break

    @staticmethod
    def decode_value(data: bytes, data_type: str):
        """Decode bytes to typed value"""
        try:
            if data_type == 'uint8':
                return struct.unpack('<B', data[:1])[0]
            elif data_type == 'uint16':
                return struct.unpack('<H', data[:2])[0]
            elif data_type == 'int32':
                return struct.unpack('<i', data[:4])[0]
            elif data_type == 'float':
                return struct.unpack('<f', data[:4])[0]
            else:
                return data.hex()
        except:
            return '-'

    @staticmethod
    def encode_value(value_str: str, data_type: str) -> bytes:
        """Encode string value to bytes"""
        try:
            if data_type == 'uint8':
                return struct.pack('<B', int(value_str))
            elif data_type == 'uint16':
                return struct.pack('<H', int(value_str))
            elif data_type == 'int32':
                return struct.pack('<i', int(value_str))
            elif data_type == 'float':
                return struct.pack('<f', float(value_str))
            else:
                return bytes.fromhex(value_str)
        except Exception as e:
            logger.error(f'Failed to encode value: {e}')
            return b''

class StatusMonitorWidget(QWidget):
    """Widget for continuously monitoring motor status"""

    def __init__(self):
        super().__init__()

        layout = QVBoxLayout()

        # Status display
        self.status_group = QGroupBox('Live Status')
        status_layout = QFormLayout()

        self.velocity_label = QLabel('-')
        self.position_label = QLabel('-')
        self.duty_label = QLabel('-')
        self.error_label = QLabel('-')
        self.torque_label = QLabel('-')

        status_layout.addRow('Present Velocity (RPS):', self.velocity_label)
        status_layout.addRow('Present Position:', self.position_label)
        status_layout.addRow('Present Duty:', self.duty_label)
        status_layout.addRow('Torque Enable:', self.torque_label)
        status_layout.addRow('HW Error Status:', self.error_label)

        self.status_group.setLayout(status_layout)
        layout.addWidget(self.status_group)

        # Auto-refresh control
        refresh_layout = QHBoxLayout()
        self.auto_refresh_cb = QCheckBox('Auto Refresh')
        self.auto_refresh_cb.setChecked(False)
        self.refresh_rate_spin = QSpinBox()
        self.refresh_rate_spin.setRange(1, 100)
        self.refresh_rate_spin.setValue(1)
        self.refresh_rate_spin.setSuffix(' Hz')

        refresh_layout.addWidget(self.auto_refresh_cb)
        refresh_layout.addWidget(QLabel('Rate:'))
        refresh_layout.addWidget(self.refresh_rate_spin)
        refresh_layout.addStretch()

        layout.addLayout(refresh_layout)
        layout.addStretch()

        self.setLayout(layout)

    def update_status(self, velocity: float, position: int, duty: float,
                     torque: int, error: int):
        """Update status display"""
        self.velocity_label.setText(f'{velocity:.3f}')
        self.position_label.setText(f'{position}')
        self.duty_label.setText(f'{duty:.3f}')
        self.torque_label.setText('Enabled' if torque else 'Disabled')
        self.error_label.setText(f'0x{error:02X}')

class QuickControlWidget(QWidget):
    """Widget for quick motor control actions"""

    def __init__(self):
        super().__init__()

        layout = QVBoxLayout()

        # Torque control
        torque_group = QGroupBox('Torque Control')
        torque_layout = QHBoxLayout()
        self.enable_torque_btn = QPushButton('Enable Torque')
        self.disable_torque_btn = QPushButton('Disable Torque')
        torque_layout.addWidget(self.enable_torque_btn)
        torque_layout.addWidget(self.disable_torque_btn)
        torque_group.setLayout(torque_layout)
        layout.addWidget(torque_group)

        # Goal control
        goal_group = QGroupBox('Goal Setting')
        goal_layout = QFormLayout()

        self.goal_velocity_spin = QDoubleSpinBox()
        self.goal_velocity_spin.setRange(-1000.0, 1000.0)
        self.goal_velocity_spin.setSingleStep(1.0)
        self.goal_velocity_spin.setSuffix(' RPS')
        self.goal_velocity_btn = QPushButton('Set')

        vel_layout = QHBoxLayout()
        vel_layout.addWidget(self.goal_velocity_spin)
        vel_layout.addWidget(self.goal_velocity_btn)
        goal_layout.addRow('Goal Velocity:', vel_layout)

        self.goal_position_spin = QSpinBox()
        self.goal_position_spin.setRange(-2147483648, 2147483647)
        self.goal_position_spin.setSingleStep(100)
        self.goal_position_btn = QPushButton('Set')

        pos_layout = QHBoxLayout()
        pos_layout.addWidget(self.goal_position_spin)
        pos_layout.addWidget(self.goal_position_btn)
        goal_layout.addRow('Goal Position:', pos_layout)

        self.goal_duty_spin = QDoubleSpinBox()
        self.goal_duty_spin.setRange(-1.0, 1.0)
        self.goal_duty_spin.setSingleStep(0.1)
        self.goal_duty_btn = QPushButton('Set')

        duty_layout = QHBoxLayout()
        duty_layout.addWidget(self.goal_duty_spin)
        duty_layout.addWidget(self.goal_duty_btn)
        goal_layout.addRow('Goal Duty:', duty_layout)

        goal_group.setLayout(goal_layout)
        layout.addWidget(goal_group)

        layout.addStretch()
        self.setLayout(layout)

class MainWindow(QMainWindow):
    """Main window for ikeyaMD Wizard"""

    def __init__(self, ros_node):
        super().__init__()

        self.ros_node = ros_node
        self.current_motor_id = 30  # Default RS485 motor ID
        self.current_motor_index = 0  # Default motor index (0-2)

        self.setWindowTitle('ikeyaMD Wizard - RS485 Motor Control')
        self.setGeometry(100, 100, 1200, 800)

        # Central widget
        central_widget = QWidget()
        self.setCentralWidget(central_widget)

        # Main layout
        main_layout = QVBoxLayout()
        central_widget.setLayout(main_layout)

        # Motor selection toolbar
        toolbar_layout = QHBoxLayout()

        toolbar_layout.addWidget(QLabel('Motor ID:'))
        self.motor_id_spin = QSpinBox()
        self.motor_id_spin.setRange(30, 49)  # RS485 motor IDs
        self.motor_id_spin.setValue(30)
        self.motor_id_spin.valueChanged.connect(self.on_motor_id_changed)
        toolbar_layout.addWidget(self.motor_id_spin)

        toolbar_layout.addWidget(QLabel('Motor Index:'))
        self.motor_index_combo = QComboBox()
        self.motor_index_combo.addItems(['Motor 0', 'Motor 1', 'Motor 2'])
        self.motor_index_combo.currentIndexChanged.connect(self.on_motor_index_changed)
        toolbar_layout.addWidget(self.motor_index_combo)

        toolbar_layout.addStretch()

        self.connection_label = QLabel('Status: Ready')
        toolbar_layout.addWidget(self.connection_label)

        main_layout.addLayout(toolbar_layout)

        # Content splitter
        splitter = QSplitter(Qt.Horizontal)

        # Left panel: Parameter table
        left_panel = QWidget()
        left_layout = QVBoxLayout()
        left_panel.setLayout(left_layout)

        left_layout.addWidget(QLabel('<b>Parameter Table</b>'))
        self.param_table = ParameterTableWidget()
        left_layout.addWidget(self.param_table)

        # Connect table buttons
        for row in range(self.param_table.rowCount()):
            read_btn = self.param_table.cellWidget(row, 4)
            write_btn = self.param_table.cellWidget(row, 5)
            read_btn.clicked.connect(self.on_read_parameter)
            write_btn.clicked.connect(self.on_write_parameter)

        splitter.addWidget(left_panel)

        # Right panel: Status monitor and quick controls
        right_panel = QWidget()
        right_layout = QVBoxLayout()
        right_panel.setLayout(right_layout)

        self.status_monitor = StatusMonitorWidget()
        right_layout.addWidget(self.status_monitor)

        self.quick_control = QuickControlWidget()
        right_layout.addWidget(self.quick_control)

        # Connect quick control buttons
        self.quick_control.enable_torque_btn.clicked.connect(self.on_enable_torque)
        self.quick_control.disable_torque_btn.clicked.connect(self.on_disable_torque)
        self.quick_control.goal_velocity_btn.clicked.connect(self.on_set_goal_velocity)
        self.quick_control.goal_position_btn.clicked.connect(self.on_set_goal_position)
        self.quick_control.goal_duty_btn.clicked.connect(self.on_set_goal_duty)

        splitter.addWidget(right_panel)

        splitter.setStretchFactor(0, 2)
        splitter.setStretchFactor(1, 1)

        main_layout.addWidget(splitter)

        # Status bar
        self.statusBar().showMessage('Ready')

        # Auto-refresh timer
        self.refresh_timer = QTimer()
        self.refresh_timer.timeout.connect(self.auto_refresh_status)
        self.status_monitor.auto_refresh_cb.stateChanged.connect(self.on_auto_refresh_changed)
        self.status_monitor.refresh_rate_spin.valueChanged.connect(self.on_refresh_rate_changed)
        self.on_auto_refresh_changed()

        # Connect ROS2 signals
        self.ros_node.signal_bridge.read_response_signal.connect(self.on_read_response)
        self.ros_node.signal_bridge.write_response_signal.connect(self.on_write_response)

        logger.info('Main window initialized')

    def get_motor_address(self, base_address: int) -> int:
        """Calculate actual address based on motor index"""
        # Motor-specific addresses use offset: motor_index * 0xA0
        if base_address >= 0x20 and base_address < 0x80:
            return base_address + (self.current_motor_index * 0xA0)
        return base_address

    def on_motor_id_changed(self, value):
        """Handle motor ID change"""
        self.current_motor_id = value
        self.connection_label.setText(f'Status: Motor ID {value}')

    def on_motor_index_changed(self, index):
        """Handle motor index change"""
        self.current_motor_index = index
        logger.info(f'Motor index changed to {index}')

    def on_read_parameter(self):
        """Handle read parameter button click"""
        sender = self.sender()
        address = sender.property('address')
        data_type = sender.property('data_type')

        # Calculate actual address based on motor index
        actual_address = self.get_motor_address(address)

        # Determine read length based on data type
        length_map = {'uint8': 1, 'uint16': 2, 'int32': 4, 'float': 4}
        length = length_map.get(data_type, 4)

        self.ros_node.send_read_request(self.current_motor_id, actual_address, length)
        self.statusBar().showMessage(f'Reading 0x{actual_address:04X}...')

    def on_write_parameter(self):
        """Handle write parameter button click"""
        sender = self.sender()
        address = sender.property('address')
        data_type = sender.property('data_type')

        # Get value from table
        for row in range(self.param_table.rowCount()):
            btn = self.param_table.cellWidget(row, 5)
            if btn == sender:
                value_item = self.param_table.item(row, 3)
                value_str = value_item.text()
                break
        else:
            logger.error('Could not find value for write')
            return

        # Encode value
        data = self.param_table.encode_value(value_str, data_type)
        if not data:
            QMessageBox.warning(self, 'Invalid Value', 'Failed to encode value')
            return

        # Calculate actual address based on motor index
        actual_address = self.get_motor_address(address)

        self.ros_node.send_write_request(self.current_motor_id, actual_address, data)
        self.statusBar().showMessage(f'Writing 0x{actual_address:04X}...')

    def on_read_response(self, msg):
        """Handle read response from ROS2"""
        if msg.status == 0:  # Success
            # Find base address (reverse motor index offset if applicable)
            base_address = msg.address
            if base_address >= 0x20:
                # Determine which motor's address range this is
                motor_offset = (base_address - 0x20) // 0xA0
                base_address = (base_address - 0x20) % 0xA0 + 0x20

            # Update table
            data = bytes(msg.data[:msg.length])
            for row in range(self.param_table.rowCount()):
                addr_item = self.param_table.item(row, 0)
                if addr_item and int(addr_item.text(), 16) == base_address:
                    data_type = self.param_table.item(row, 2).text()
                    self.param_table.update_value(base_address, data, data_type)
                    self.statusBar().showMessage(f'Read complete: 0x{msg.address:04X}', 3000)
                    break
        else:
            self.statusBar().showMessage(f'Read failed: status={msg.status}, error=0x{msg.rs485_error:02X}', 5000)
            logger.error(f'Read error: status={msg.status}, rs485_error={msg.rs485_error}')

    def on_write_response(self, msg):
        """Handle write response from ROS2"""
        if msg.status == 0:  # Success
            self.statusBar().showMessage(f'Write complete: 0x{msg.address:04X}', 3000)
        else:
            self.statusBar().showMessage(f'Write failed: status={msg.status}, error=0x{msg.rs485_error:02X}', 5000)
            logger.error(f'Write error: status={msg.status}, rs485_error={msg.rs485_error}')

    def auto_refresh_status(self):
        """Auto-refresh motor status parameters"""
        if not self.status_monitor.auto_refresh_cb.isChecked():
            return

        # Read status parameters
        motor_id = self.current_motor_id
        base_addr_torque = RS485Register.TORQUE_ENABLE
        base_addr_velocity = RS485Register.PRESENT_VELOCITY
        base_addr_position = RS485Register.PRESENT_POSITION
        base_addr_duty = RS485Register.PRESENT_DUTY
        base_addr_error = RS485Register.HW_ERROR_STATUS

        # Calculate actual addresses for current motor index
        addr_torque = self.get_motor_address(base_addr_torque)
        addr_velocity = self.get_motor_address(base_addr_velocity)
        addr_position = self.get_motor_address(base_addr_position)
        addr_duty = self.get_motor_address(base_addr_duty)
        addr_error = self.get_motor_address(base_addr_error)

        # Send read requests
        self.ros_node.send_read_request(motor_id, addr_torque, 1)
        self.ros_node.send_read_request(motor_id, addr_velocity, 4)
        self.ros_node.send_read_request(motor_id, addr_position, 4)
        self.ros_node.send_read_request(motor_id, addr_duty, 4)
        self.ros_node.send_read_request(motor_id, addr_error, 1)

    def on_auto_refresh_changed(self):
        """Handle auto-refresh checkbox change"""
        if self.status_monitor.auto_refresh_cb.isChecked():
            rate_hz = self.status_monitor.refresh_rate_spin.value()
            interval_ms = int(1000 / rate_hz)
            self.refresh_timer.start(interval_ms)
            logger.info(f'Auto-refresh enabled at {rate_hz} Hz')
        else:
            self.refresh_timer.stop()
            logger.info('Auto-refresh disabled')

    def on_refresh_rate_changed(self, value):
        """Handle refresh rate change"""
        if self.status_monitor.auto_refresh_cb.isChecked():
            interval_ms = int(1000 / value)
            self.refresh_timer.setInterval(interval_ms)
            logger.info(f'Refresh rate changed to {value} Hz')

    def on_enable_torque(self):
        """Enable motor torque"""
        address = self.get_motor_address(RS485Register.TORQUE_ENABLE)
        data = struct.pack('<B', 1)
        self.ros_node.send_write_request(self.current_motor_id, address, data)
        self.statusBar().showMessage('Enabling torque...')

    def on_disable_torque(self):
        """Disable motor torque"""
        address = self.get_motor_address(RS485Register.TORQUE_ENABLE)
        data = struct.pack('<B', 0)
        self.ros_node.send_write_request(self.current_motor_id, address, data)
        self.statusBar().showMessage('Disabling torque...')

    def on_set_goal_velocity(self):
        """Set goal velocity"""
        address = self.get_motor_address(RS485Register.GOAL_VELOCITY)
        velocity = self.quick_control.goal_velocity_spin.value()
        data = struct.pack('<f', velocity)
        self.ros_node.send_write_request(self.current_motor_id, address, data)
        self.statusBar().showMessage(f'Setting goal velocity to {velocity} RPS...')

    def on_set_goal_position(self):
        """Set goal position"""
        address = self.get_motor_address(RS485Register.GOAL_POSITION)
        position = self.quick_control.goal_position_spin.value()
        data = struct.pack('<i', position)
        self.ros_node.send_write_request(self.current_motor_id, address, data)
        self.statusBar().showMessage(f'Setting goal position to {position}...')

    def on_set_goal_duty(self):
        """Set goal duty cycle"""
        address = self.get_motor_address(RS485Register.GOAL_DUTY)
        duty = self.quick_control.goal_duty_spin.value()
        data = struct.pack('<f', duty)
        self.ros_node.send_write_request(self.current_motor_id, address, data)
        self.statusBar().showMessage(f'Setting goal duty to {duty}...')

def main():
    """Main entry point"""
    # Initialize ROS2
    rclpy.init()

    # Create Qt application
    app = QApplication(sys.argv)

    # Create signal bridge
    signal_bridge = SignalBridge()

    # Create ROS2 node
    ros_node = IkeyaMDWizardNode(signal_bridge)

    # Create main window
    window = MainWindow(ros_node)
    window.show()

    # Create ROS2 executor in separate thread
    executor = MultiThreadedExecutor()
    executor.add_node(ros_node)

    import threading
    ros_thread = threading.Thread(target=executor.spin, daemon=True)
    ros_thread.start()

    logger.info('ikeyaMD Wizard started')

    # Run Qt event loop
    exit_code = app.exec_()

    # Cleanup
    ros_node.destroy_node()
    rclpy.shutdown()
    ros_thread.join(timeout=1.0)

    sys.exit(exit_code)

if __name__ == '__main__':
    main()
