# generated from rosidl_generator_py/resource/_idl.py.em
# with input from stm32_mavlink_msgs:msg/RS485MotorState.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_RS485MotorState(type):
    """Metaclass of message 'RS485MotorState'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('stm32_mavlink_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'stm32_mavlink_msgs.msg.RS485MotorState')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__rs485_motor_state
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__rs485_motor_state
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__rs485_motor_state
            cls._TYPE_SUPPORT = module.type_support_msg__msg__rs485_motor_state
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__rs485_motor_state

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RS485MotorState(metaclass=Metaclass_RS485MotorState):
    """Message class 'RS485MotorState'."""

    __slots__ = [
        '_motor_id',
        '_device_id',
        '_motor_index',
        '_control_mode',
        '_status',
        '_error_code',
        '_current_position_rotations',
        '_current_velocity_rps',
        '_target_velocity_rps',
        '_acceleration_rps2',
        '_timestamp_ms',
    ]

    _fields_and_field_types = {
        'motor_id': 'uint8',
        'device_id': 'uint8',
        'motor_index': 'uint8',
        'control_mode': 'uint8',
        'status': 'uint8',
        'error_code': 'uint8',
        'current_position_rotations': 'float',
        'current_velocity_rps': 'float',
        'target_velocity_rps': 'float',
        'acceleration_rps2': 'float',
        'timestamp_ms': 'uint32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.motor_id = kwargs.get('motor_id', int())
        self.device_id = kwargs.get('device_id', int())
        self.motor_index = kwargs.get('motor_index', int())
        self.control_mode = kwargs.get('control_mode', int())
        self.status = kwargs.get('status', int())
        self.error_code = kwargs.get('error_code', int())
        self.current_position_rotations = kwargs.get('current_position_rotations', float())
        self.current_velocity_rps = kwargs.get('current_velocity_rps', float())
        self.target_velocity_rps = kwargs.get('target_velocity_rps', float())
        self.acceleration_rps2 = kwargs.get('acceleration_rps2', float())
        self.timestamp_ms = kwargs.get('timestamp_ms', int())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.motor_id != other.motor_id:
            return False
        if self.device_id != other.device_id:
            return False
        if self.motor_index != other.motor_index:
            return False
        if self.control_mode != other.control_mode:
            return False
        if self.status != other.status:
            return False
        if self.error_code != other.error_code:
            return False
        if self.current_position_rotations != other.current_position_rotations:
            return False
        if self.current_velocity_rps != other.current_velocity_rps:
            return False
        if self.target_velocity_rps != other.target_velocity_rps:
            return False
        if self.acceleration_rps2 != other.acceleration_rps2:
            return False
        if self.timestamp_ms != other.timestamp_ms:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def motor_id(self):
        """Message field 'motor_id'."""
        return self._motor_id

    @motor_id.setter
    def motor_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'motor_id' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'motor_id' field must be an unsigned integer in [0, 255]"
        self._motor_id = value

    @builtins.property
    def device_id(self):
        """Message field 'device_id'."""
        return self._device_id

    @device_id.setter
    def device_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'device_id' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'device_id' field must be an unsigned integer in [0, 255]"
        self._device_id = value

    @builtins.property
    def motor_index(self):
        """Message field 'motor_index'."""
        return self._motor_index

    @motor_index.setter
    def motor_index(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'motor_index' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'motor_index' field must be an unsigned integer in [0, 255]"
        self._motor_index = value

    @builtins.property
    def control_mode(self):
        """Message field 'control_mode'."""
        return self._control_mode

    @control_mode.setter
    def control_mode(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'control_mode' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'control_mode' field must be an unsigned integer in [0, 255]"
        self._control_mode = value

    @builtins.property
    def status(self):
        """Message field 'status'."""
        return self._status

    @status.setter
    def status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'status' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'status' field must be an unsigned integer in [0, 255]"
        self._status = value

    @builtins.property
    def error_code(self):
        """Message field 'error_code'."""
        return self._error_code

    @error_code.setter
    def error_code(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'error_code' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'error_code' field must be an unsigned integer in [0, 255]"
        self._error_code = value

    @builtins.property
    def current_position_rotations(self):
        """Message field 'current_position_rotations'."""
        return self._current_position_rotations

    @current_position_rotations.setter
    def current_position_rotations(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'current_position_rotations' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'current_position_rotations' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._current_position_rotations = value

    @builtins.property
    def current_velocity_rps(self):
        """Message field 'current_velocity_rps'."""
        return self._current_velocity_rps

    @current_velocity_rps.setter
    def current_velocity_rps(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'current_velocity_rps' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'current_velocity_rps' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._current_velocity_rps = value

    @builtins.property
    def target_velocity_rps(self):
        """Message field 'target_velocity_rps'."""
        return self._target_velocity_rps

    @target_velocity_rps.setter
    def target_velocity_rps(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'target_velocity_rps' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'target_velocity_rps' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._target_velocity_rps = value

    @builtins.property
    def acceleration_rps2(self):
        """Message field 'acceleration_rps2'."""
        return self._acceleration_rps2

    @acceleration_rps2.setter
    def acceleration_rps2(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'acceleration_rps2' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'acceleration_rps2' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._acceleration_rps2 = value

    @builtins.property
    def timestamp_ms(self):
        """Message field 'timestamp_ms'."""
        return self._timestamp_ms

    @timestamp_ms.setter
    def timestamp_ms(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'timestamp_ms' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'timestamp_ms' field must be an unsigned integer in [0, 4294967295]"
        self._timestamp_ms = value
