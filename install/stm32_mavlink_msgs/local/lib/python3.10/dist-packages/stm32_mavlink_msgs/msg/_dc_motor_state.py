# generated from rosidl_generator_py/resource/_idl.py.em
# with input from stm32_mavlink_msgs:msg/DCMotorState.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_DCMotorState(type):
    """Metaclass of message 'DCMotorState'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'STATUS_OK': 0,
        'STATUS_NOT_INITIALIZED': 1,
        'STATUS_ERROR': 2,
        'STATUS_OVERHEAT': 3,
        'STATUS_OVERCURRENT': 4,
        'STATUS_TIMEOUT': 5,
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
                'stm32_mavlink_msgs.msg.DCMotorState')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__dc_motor_state
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__dc_motor_state
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__dc_motor_state
            cls._TYPE_SUPPORT = module.type_support_msg__msg__dc_motor_state
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__dc_motor_state

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'STATUS_OK': cls.__constants['STATUS_OK'],
            'STATUS_NOT_INITIALIZED': cls.__constants['STATUS_NOT_INITIALIZED'],
            'STATUS_ERROR': cls.__constants['STATUS_ERROR'],
            'STATUS_OVERHEAT': cls.__constants['STATUS_OVERHEAT'],
            'STATUS_OVERCURRENT': cls.__constants['STATUS_OVERCURRENT'],
            'STATUS_TIMEOUT': cls.__constants['STATUS_TIMEOUT'],
        }

    @property
    def STATUS_OK(self):
        """Message constant 'STATUS_OK'."""
        return Metaclass_DCMotorState.__constants['STATUS_OK']

    @property
    def STATUS_NOT_INITIALIZED(self):
        """Message constant 'STATUS_NOT_INITIALIZED'."""
        return Metaclass_DCMotorState.__constants['STATUS_NOT_INITIALIZED']

    @property
    def STATUS_ERROR(self):
        """Message constant 'STATUS_ERROR'."""
        return Metaclass_DCMotorState.__constants['STATUS_ERROR']

    @property
    def STATUS_OVERHEAT(self):
        """Message constant 'STATUS_OVERHEAT'."""
        return Metaclass_DCMotorState.__constants['STATUS_OVERHEAT']

    @property
    def STATUS_OVERCURRENT(self):
        """Message constant 'STATUS_OVERCURRENT'."""
        return Metaclass_DCMotorState.__constants['STATUS_OVERCURRENT']

    @property
    def STATUS_TIMEOUT(self):
        """Message constant 'STATUS_TIMEOUT'."""
        return Metaclass_DCMotorState.__constants['STATUS_TIMEOUT']


class DCMotorState(metaclass=Metaclass_DCMotorState):
    """
    Message class 'DCMotorState'.

    Constants:
      STATUS_OK
      STATUS_NOT_INITIALIZED
      STATUS_ERROR
      STATUS_OVERHEAT
      STATUS_OVERCURRENT
      STATUS_TIMEOUT
    """

    __slots__ = [
        '_motor_id',
        '_position_rad',
        '_velocity_rad_s',
        '_current_a',
        '_temperature_c',
        '_status',
        '_enabled',
        '_control_mode',
        '_current_duty_cycle',
        '_target_duty_cycle',
        '_target_velocity_rad_s',
        '_timestamp',
    ]

    _fields_and_field_types = {
        'motor_id': 'uint8',
        'position_rad': 'float',
        'velocity_rad_s': 'float',
        'current_a': 'float',
        'temperature_c': 'float',
        'status': 'uint8',
        'enabled': 'boolean',
        'control_mode': 'uint8',
        'current_duty_cycle': 'float',
        'target_duty_cycle': 'float',
        'target_velocity_rad_s': 'float',
        'timestamp': 'uint64',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.motor_id = kwargs.get('motor_id', int())
        self.position_rad = kwargs.get('position_rad', float())
        self.velocity_rad_s = kwargs.get('velocity_rad_s', float())
        self.current_a = kwargs.get('current_a', float())
        self.temperature_c = kwargs.get('temperature_c', float())
        self.status = kwargs.get('status', int())
        self.enabled = kwargs.get('enabled', bool())
        self.control_mode = kwargs.get('control_mode', int())
        self.current_duty_cycle = kwargs.get('current_duty_cycle', float())
        self.target_duty_cycle = kwargs.get('target_duty_cycle', float())
        self.target_velocity_rad_s = kwargs.get('target_velocity_rad_s', float())
        self.timestamp = kwargs.get('timestamp', int())

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
        if self.position_rad != other.position_rad:
            return False
        if self.velocity_rad_s != other.velocity_rad_s:
            return False
        if self.current_a != other.current_a:
            return False
        if self.temperature_c != other.temperature_c:
            return False
        if self.status != other.status:
            return False
        if self.enabled != other.enabled:
            return False
        if self.control_mode != other.control_mode:
            return False
        if self.current_duty_cycle != other.current_duty_cycle:
            return False
        if self.target_duty_cycle != other.target_duty_cycle:
            return False
        if self.target_velocity_rad_s != other.target_velocity_rad_s:
            return False
        if self.timestamp != other.timestamp:
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
    def position_rad(self):
        """Message field 'position_rad'."""
        return self._position_rad

    @position_rad.setter
    def position_rad(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'position_rad' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'position_rad' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._position_rad = value

    @builtins.property
    def velocity_rad_s(self):
        """Message field 'velocity_rad_s'."""
        return self._velocity_rad_s

    @velocity_rad_s.setter
    def velocity_rad_s(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'velocity_rad_s' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'velocity_rad_s' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._velocity_rad_s = value

    @builtins.property
    def current_a(self):
        """Message field 'current_a'."""
        return self._current_a

    @current_a.setter
    def current_a(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'current_a' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'current_a' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._current_a = value

    @builtins.property
    def temperature_c(self):
        """Message field 'temperature_c'."""
        return self._temperature_c

    @temperature_c.setter
    def temperature_c(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'temperature_c' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'temperature_c' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._temperature_c = value

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
    def current_duty_cycle(self):
        """Message field 'current_duty_cycle'."""
        return self._current_duty_cycle

    @current_duty_cycle.setter
    def current_duty_cycle(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'current_duty_cycle' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'current_duty_cycle' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._current_duty_cycle = value

    @builtins.property
    def target_duty_cycle(self):
        """Message field 'target_duty_cycle'."""
        return self._target_duty_cycle

    @target_duty_cycle.setter
    def target_duty_cycle(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'target_duty_cycle' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'target_duty_cycle' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._target_duty_cycle = value

    @builtins.property
    def target_velocity_rad_s(self):
        """Message field 'target_velocity_rad_s'."""
        return self._target_velocity_rad_s

    @target_velocity_rad_s.setter
    def target_velocity_rad_s(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'target_velocity_rad_s' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'target_velocity_rad_s' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._target_velocity_rad_s = value

    @builtins.property
    def timestamp(self):
        """Message field 'timestamp'."""
        return self._timestamp

    @timestamp.setter
    def timestamp(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'timestamp' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'timestamp' field must be an unsigned integer in [0, 18446744073709551615]"
        self._timestamp = value
