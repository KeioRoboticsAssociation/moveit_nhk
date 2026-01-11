# generated from rosidl_generator_py/resource/_idl.py.em
# with input from stm32_mavlink_msgs:msg/DCMotorCommand.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_DCMotorCommand(type):
    """Metaclass of message 'DCMotorCommand'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'CONTROL_MODE_POSITION': 0,
        'CONTROL_MODE_VELOCITY': 1,
        'CONTROL_MODE_CURRENT': 2,
        'CONTROL_MODE_DUTY_TO_POSITION': 3,
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
                'stm32_mavlink_msgs.msg.DCMotorCommand')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__dc_motor_command
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__dc_motor_command
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__dc_motor_command
            cls._TYPE_SUPPORT = module.type_support_msg__msg__dc_motor_command
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__dc_motor_command

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'CONTROL_MODE_POSITION': cls.__constants['CONTROL_MODE_POSITION'],
            'CONTROL_MODE_VELOCITY': cls.__constants['CONTROL_MODE_VELOCITY'],
            'CONTROL_MODE_CURRENT': cls.__constants['CONTROL_MODE_CURRENT'],
            'CONTROL_MODE_DUTY_TO_POSITION': cls.__constants['CONTROL_MODE_DUTY_TO_POSITION'],
        }

    @property
    def CONTROL_MODE_POSITION(self):
        """Message constant 'CONTROL_MODE_POSITION'."""
        return Metaclass_DCMotorCommand.__constants['CONTROL_MODE_POSITION']

    @property
    def CONTROL_MODE_VELOCITY(self):
        """Message constant 'CONTROL_MODE_VELOCITY'."""
        return Metaclass_DCMotorCommand.__constants['CONTROL_MODE_VELOCITY']

    @property
    def CONTROL_MODE_CURRENT(self):
        """Message constant 'CONTROL_MODE_CURRENT'."""
        return Metaclass_DCMotorCommand.__constants['CONTROL_MODE_CURRENT']

    @property
    def CONTROL_MODE_DUTY_TO_POSITION(self):
        """Message constant 'CONTROL_MODE_DUTY_TO_POSITION'."""
        return Metaclass_DCMotorCommand.__constants['CONTROL_MODE_DUTY_TO_POSITION']


class DCMotorCommand(metaclass=Metaclass_DCMotorCommand):
    """
    Message class 'DCMotorCommand'.

    Constants:
      CONTROL_MODE_POSITION
      CONTROL_MODE_VELOCITY
      CONTROL_MODE_CURRENT
      CONTROL_MODE_DUTY_TO_POSITION
    """

    __slots__ = [
        '_motor_id',
        '_control_mode',
        '_target_value',
        '_target_position_rad',
        '_enabled',
    ]

    _fields_and_field_types = {
        'motor_id': 'uint8',
        'control_mode': 'uint8',
        'target_value': 'float',
        'target_position_rad': 'float',
        'enabled': 'boolean',
    }

    SLOT_TYPES = (
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
        self.control_mode = kwargs.get('control_mode', int())
        self.target_value = kwargs.get('target_value', float())
        self.target_position_rad = kwargs.get('target_position_rad', float())
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
        if self.control_mode != other.control_mode:
            return False
        if self.target_value != other.target_value:
            return False
        if self.target_position_rad != other.target_position_rad:
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
    def target_value(self):
        """Message field 'target_value'."""
        return self._target_value

    @target_value.setter
    def target_value(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'target_value' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'target_value' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._target_value = value

    @builtins.property
    def target_position_rad(self):
        """Message field 'target_position_rad'."""
        return self._target_position_rad

    @target_position_rad.setter
    def target_position_rad(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'target_position_rad' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'target_position_rad' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._target_position_rad = value

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
