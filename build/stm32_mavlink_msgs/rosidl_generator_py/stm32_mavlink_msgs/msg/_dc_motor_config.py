# generated from rosidl_generator_py/resource/_idl.py.em
# with input from stm32_mavlink_msgs:msg/DCMotorConfig.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_DCMotorConfig(type):
    """Metaclass of message 'DCMotorConfig'."""

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
                'stm32_mavlink_msgs.msg.DCMotorConfig')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__dc_motor_config
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__dc_motor_config
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__dc_motor_config
            cls._TYPE_SUPPORT = module.type_support_msg__msg__dc_motor_config
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__dc_motor_config

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class DCMotorConfig(metaclass=Metaclass_DCMotorConfig):
    """Message class 'DCMotorConfig'."""

    __slots__ = [
        '_motor_id',
        '_mode',
        '_speed_kp',
        '_speed_ki',
        '_speed_kd',
        '_speed_max_integral',
        '_speed_max_output',
        '_position_kp',
        '_position_ki',
        '_position_kd',
        '_position_max_integral',
        '_position_max_output',
        '_max_speed_rad_s',
        '_max_acceleration_rad_s2',
        '_use_position_limits',
        '_position_limit_min_rad',
        '_position_limit_max_rad',
        '_watchdog_timeout_ms',
        '_control_period_ms',
    ]

    _fields_and_field_types = {
        'motor_id': 'uint8',
        'mode': 'uint8',
        'speed_kp': 'float',
        'speed_ki': 'float',
        'speed_kd': 'float',
        'speed_max_integral': 'float',
        'speed_max_output': 'float',
        'position_kp': 'float',
        'position_ki': 'float',
        'position_kd': 'float',
        'position_max_integral': 'float',
        'position_max_output': 'float',
        'max_speed_rad_s': 'float',
        'max_acceleration_rad_s2': 'float',
        'use_position_limits': 'boolean',
        'position_limit_min_rad': 'float',
        'position_limit_max_rad': 'float',
        'watchdog_timeout_ms': 'uint32',
        'control_period_ms': 'uint32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.motor_id = kwargs.get('motor_id', int())
        self.mode = kwargs.get('mode', int())
        self.speed_kp = kwargs.get('speed_kp', float())
        self.speed_ki = kwargs.get('speed_ki', float())
        self.speed_kd = kwargs.get('speed_kd', float())
        self.speed_max_integral = kwargs.get('speed_max_integral', float())
        self.speed_max_output = kwargs.get('speed_max_output', float())
        self.position_kp = kwargs.get('position_kp', float())
        self.position_ki = kwargs.get('position_ki', float())
        self.position_kd = kwargs.get('position_kd', float())
        self.position_max_integral = kwargs.get('position_max_integral', float())
        self.position_max_output = kwargs.get('position_max_output', float())
        self.max_speed_rad_s = kwargs.get('max_speed_rad_s', float())
        self.max_acceleration_rad_s2 = kwargs.get('max_acceleration_rad_s2', float())
        self.use_position_limits = kwargs.get('use_position_limits', bool())
        self.position_limit_min_rad = kwargs.get('position_limit_min_rad', float())
        self.position_limit_max_rad = kwargs.get('position_limit_max_rad', float())
        self.watchdog_timeout_ms = kwargs.get('watchdog_timeout_ms', int())
        self.control_period_ms = kwargs.get('control_period_ms', int())

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
        if self.mode != other.mode:
            return False
        if self.speed_kp != other.speed_kp:
            return False
        if self.speed_ki != other.speed_ki:
            return False
        if self.speed_kd != other.speed_kd:
            return False
        if self.speed_max_integral != other.speed_max_integral:
            return False
        if self.speed_max_output != other.speed_max_output:
            return False
        if self.position_kp != other.position_kp:
            return False
        if self.position_ki != other.position_ki:
            return False
        if self.position_kd != other.position_kd:
            return False
        if self.position_max_integral != other.position_max_integral:
            return False
        if self.position_max_output != other.position_max_output:
            return False
        if self.max_speed_rad_s != other.max_speed_rad_s:
            return False
        if self.max_acceleration_rad_s2 != other.max_acceleration_rad_s2:
            return False
        if self.use_position_limits != other.use_position_limits:
            return False
        if self.position_limit_min_rad != other.position_limit_min_rad:
            return False
        if self.position_limit_max_rad != other.position_limit_max_rad:
            return False
        if self.watchdog_timeout_ms != other.watchdog_timeout_ms:
            return False
        if self.control_period_ms != other.control_period_ms:
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
    def mode(self):
        """Message field 'mode'."""
        return self._mode

    @mode.setter
    def mode(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'mode' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'mode' field must be an unsigned integer in [0, 255]"
        self._mode = value

    @builtins.property
    def speed_kp(self):
        """Message field 'speed_kp'."""
        return self._speed_kp

    @speed_kp.setter
    def speed_kp(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'speed_kp' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'speed_kp' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._speed_kp = value

    @builtins.property
    def speed_ki(self):
        """Message field 'speed_ki'."""
        return self._speed_ki

    @speed_ki.setter
    def speed_ki(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'speed_ki' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'speed_ki' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._speed_ki = value

    @builtins.property
    def speed_kd(self):
        """Message field 'speed_kd'."""
        return self._speed_kd

    @speed_kd.setter
    def speed_kd(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'speed_kd' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'speed_kd' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._speed_kd = value

    @builtins.property
    def speed_max_integral(self):
        """Message field 'speed_max_integral'."""
        return self._speed_max_integral

    @speed_max_integral.setter
    def speed_max_integral(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'speed_max_integral' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'speed_max_integral' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._speed_max_integral = value

    @builtins.property
    def speed_max_output(self):
        """Message field 'speed_max_output'."""
        return self._speed_max_output

    @speed_max_output.setter
    def speed_max_output(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'speed_max_output' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'speed_max_output' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._speed_max_output = value

    @builtins.property
    def position_kp(self):
        """Message field 'position_kp'."""
        return self._position_kp

    @position_kp.setter
    def position_kp(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'position_kp' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'position_kp' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._position_kp = value

    @builtins.property
    def position_ki(self):
        """Message field 'position_ki'."""
        return self._position_ki

    @position_ki.setter
    def position_ki(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'position_ki' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'position_ki' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._position_ki = value

    @builtins.property
    def position_kd(self):
        """Message field 'position_kd'."""
        return self._position_kd

    @position_kd.setter
    def position_kd(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'position_kd' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'position_kd' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._position_kd = value

    @builtins.property
    def position_max_integral(self):
        """Message field 'position_max_integral'."""
        return self._position_max_integral

    @position_max_integral.setter
    def position_max_integral(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'position_max_integral' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'position_max_integral' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._position_max_integral = value

    @builtins.property
    def position_max_output(self):
        """Message field 'position_max_output'."""
        return self._position_max_output

    @position_max_output.setter
    def position_max_output(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'position_max_output' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'position_max_output' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._position_max_output = value

    @builtins.property
    def max_speed_rad_s(self):
        """Message field 'max_speed_rad_s'."""
        return self._max_speed_rad_s

    @max_speed_rad_s.setter
    def max_speed_rad_s(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'max_speed_rad_s' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'max_speed_rad_s' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._max_speed_rad_s = value

    @builtins.property
    def max_acceleration_rad_s2(self):
        """Message field 'max_acceleration_rad_s2'."""
        return self._max_acceleration_rad_s2

    @max_acceleration_rad_s2.setter
    def max_acceleration_rad_s2(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'max_acceleration_rad_s2' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'max_acceleration_rad_s2' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._max_acceleration_rad_s2 = value

    @builtins.property
    def use_position_limits(self):
        """Message field 'use_position_limits'."""
        return self._use_position_limits

    @use_position_limits.setter
    def use_position_limits(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'use_position_limits' field must be of type 'bool'"
        self._use_position_limits = value

    @builtins.property
    def position_limit_min_rad(self):
        """Message field 'position_limit_min_rad'."""
        return self._position_limit_min_rad

    @position_limit_min_rad.setter
    def position_limit_min_rad(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'position_limit_min_rad' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'position_limit_min_rad' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._position_limit_min_rad = value

    @builtins.property
    def position_limit_max_rad(self):
        """Message field 'position_limit_max_rad'."""
        return self._position_limit_max_rad

    @position_limit_max_rad.setter
    def position_limit_max_rad(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'position_limit_max_rad' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'position_limit_max_rad' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._position_limit_max_rad = value

    @builtins.property
    def watchdog_timeout_ms(self):
        """Message field 'watchdog_timeout_ms'."""
        return self._watchdog_timeout_ms

    @watchdog_timeout_ms.setter
    def watchdog_timeout_ms(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'watchdog_timeout_ms' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'watchdog_timeout_ms' field must be an unsigned integer in [0, 4294967295]"
        self._watchdog_timeout_ms = value

    @builtins.property
    def control_period_ms(self):
        """Message field 'control_period_ms'."""
        return self._control_period_ms

    @control_period_ms.setter
    def control_period_ms(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'control_period_ms' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'control_period_ms' field must be an unsigned integer in [0, 4294967295]"
        self._control_period_ms = value
