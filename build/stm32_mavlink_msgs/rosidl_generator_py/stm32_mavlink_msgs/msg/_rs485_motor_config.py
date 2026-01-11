# generated from rosidl_generator_py/resource/_idl.py.em
# with input from stm32_mavlink_msgs:msg/RS485MotorConfig.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_RS485MotorConfig(type):
    """Metaclass of message 'RS485MotorConfig'."""

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
                'stm32_mavlink_msgs.msg.RS485MotorConfig')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__rs485_motor_config
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__rs485_motor_config
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__rs485_motor_config
            cls._TYPE_SUPPORT = module.type_support_msg__msg__rs485_motor_config
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__rs485_motor_config

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RS485MotorConfig(metaclass=Metaclass_RS485MotorConfig):
    """Message class 'RS485MotorConfig'."""

    __slots__ = [
        '_motor_id',
        '_device_id',
        '_motor_index',
        '_max_velocity_rps',
        '_max_acceleration',
        '_enabled',
    ]

    _fields_and_field_types = {
        'motor_id': 'uint8',
        'device_id': 'uint8',
        'motor_index': 'uint8',
        'max_velocity_rps': 'float',
        'max_acceleration': 'float',
        'enabled': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.motor_id = kwargs.get('motor_id', int())
        self.device_id = kwargs.get('device_id', int())
        self.motor_index = kwargs.get('motor_index', int())
        self.max_velocity_rps = kwargs.get('max_velocity_rps', float())
        self.max_acceleration = kwargs.get('max_acceleration', float())
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
        if self.motor_id != other.motor_id:
            return False
        if self.device_id != other.device_id:
            return False
        if self.motor_index != other.motor_index:
            return False
        if self.max_velocity_rps != other.max_velocity_rps:
            return False
        if self.max_acceleration != other.max_acceleration:
            return False
        if self.enabled != other.enabled:
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
    def max_velocity_rps(self):
        """Message field 'max_velocity_rps'."""
        return self._max_velocity_rps

    @max_velocity_rps.setter
    def max_velocity_rps(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'max_velocity_rps' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'max_velocity_rps' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._max_velocity_rps = value

    @builtins.property
    def max_acceleration(self):
        """Message field 'max_acceleration'."""
        return self._max_acceleration

    @max_acceleration.setter
    def max_acceleration(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'max_acceleration' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'max_acceleration' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._max_acceleration = value

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
