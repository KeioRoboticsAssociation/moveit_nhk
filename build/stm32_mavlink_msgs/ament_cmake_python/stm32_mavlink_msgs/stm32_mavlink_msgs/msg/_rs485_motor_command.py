# generated from rosidl_generator_py/resource/_idl.py.em
# with input from stm32_mavlink_msgs:msg/RS485MotorCommand.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_RS485MotorCommand(type):
    """Metaclass of message 'RS485MotorCommand'."""

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
                'stm32_mavlink_msgs.msg.RS485MotorCommand')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__rs485_motor_command
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__rs485_motor_command
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__rs485_motor_command
            cls._TYPE_SUPPORT = module.type_support_msg__msg__rs485_motor_command
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__rs485_motor_command

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RS485MotorCommand(metaclass=Metaclass_RS485MotorCommand):
    """Message class 'RS485MotorCommand'."""

    __slots__ = [
        '_device_id',
        '_motor_index',
        '_control_mode',
        '_target_velocity',
        '_target_position',
        '_target_duty',
        '_acceleration',
        '_enabled',
    ]

    _fields_and_field_types = {
        'device_id': 'uint8',
        'motor_index': 'uint8',
        'control_mode': 'uint8',
        'target_velocity': 'float',
        'target_position': 'float',
        'target_duty': 'float',
        'acceleration': 'float',
        'enabled': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.device_id = kwargs.get('device_id', int())
        self.motor_index = kwargs.get('motor_index', int())
        self.control_mode = kwargs.get('control_mode', int())
        self.target_velocity = kwargs.get('target_velocity', float())
        self.target_position = kwargs.get('target_position', float())
        self.target_duty = kwargs.get('target_duty', float())
        self.acceleration = kwargs.get('acceleration', float())
        self.enabled = kwargs.get('enabled', bool())

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
        if self.device_id != other.device_id:
            return False
        if self.motor_index != other.motor_index:
            return False
        if self.control_mode != other.control_mode:
            return False
        if self.target_velocity != other.target_velocity:
            return False
        if self.target_position != other.target_position:
            return False
        if self.target_duty != other.target_duty:
            return False
        if self.acceleration != other.acceleration:
            return False
        if self.enabled != other.enabled:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

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
    def target_velocity(self):
        """Message field 'target_velocity'."""
        return self._target_velocity

    @target_velocity.setter
    def target_velocity(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'target_velocity' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'target_velocity' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._target_velocity = value

    @builtins.property
    def target_position(self):
        """Message field 'target_position'."""
        return self._target_position

    @target_position.setter
    def target_position(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'target_position' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'target_position' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._target_position = value

    @builtins.property
    def target_duty(self):
        """Message field 'target_duty'."""
        return self._target_duty

    @target_duty.setter
    def target_duty(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'target_duty' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'target_duty' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._target_duty = value

    @builtins.property
    def acceleration(self):
        """Message field 'acceleration'."""
        return self._acceleration

    @acceleration.setter
    def acceleration(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'acceleration' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'acceleration' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._acceleration = value

    @builtins.property
    def enabled(self):
        """Message field 'enabled'."""
        return self._enabled

    @enabled.setter
    def enabled(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'enabled' field must be of type 'bool'"
        self._enabled = value
