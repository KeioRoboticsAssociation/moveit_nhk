# generated from rosidl_generator_py/resource/_idl.py.em
# with input from rogidrive_msg:msg/RogidriveMessage.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_RogidriveMessage(type):
    """Metaclass of message 'RogidriveMessage'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'TORQUE_CONTROL': 1,
        'VELOCITY_CONTROL': 2,
        'POSITION_CONTROL': 3,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('rogidrive_msg')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'rogidrive_msg.msg.RogidriveMessage')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__rogidrive_message
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__rogidrive_message
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__rogidrive_message
            cls._TYPE_SUPPORT = module.type_support_msg__msg__rogidrive_message
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__rogidrive_message

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'TORQUE_CONTROL': cls.__constants['TORQUE_CONTROL'],
            'VELOCITY_CONTROL': cls.__constants['VELOCITY_CONTROL'],
            'POSITION_CONTROL': cls.__constants['POSITION_CONTROL'],
        }

    @property
    def TORQUE_CONTROL(self):
        """Message constant 'TORQUE_CONTROL'."""
        return Metaclass_RogidriveMessage.__constants['TORQUE_CONTROL']

    @property
    def VELOCITY_CONTROL(self):
        """Message constant 'VELOCITY_CONTROL'."""
        return Metaclass_RogidriveMessage.__constants['VELOCITY_CONTROL']

    @property
    def POSITION_CONTROL(self):
        """Message constant 'POSITION_CONTROL'."""
        return Metaclass_RogidriveMessage.__constants['POSITION_CONTROL']


class RogidriveMessage(metaclass=Metaclass_RogidriveMessage):
    """
    Message class 'RogidriveMessage'.

    Constants:
      TORQUE_CONTROL
      VELOCITY_CONTROL
      POSITION_CONTROL
    """

    __slots__ = [
        '_name',
        '_mode',
        '_vel',
        '_pos',
        '_current',
    ]

    _fields_and_field_types = {
        'name': 'string',
        'mode': 'int8',
        'vel': 'float',
        'pos': 'float',
        'current': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.name = kwargs.get('name', str())
        self.mode = kwargs.get('mode', int())
        self.vel = kwargs.get('vel', float())
        self.pos = kwargs.get('pos', float())
        self.current = kwargs.get('current', float())

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
        if self.name != other.name:
            return False
        if self.mode != other.mode:
            return False
        if self.vel != other.vel:
            return False
        if self.pos != other.pos:
            return False
        if self.current != other.current:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def name(self):
        """Message field 'name'."""
        return self._name

    @name.setter
    def name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'name' field must be of type 'str'"
        self._name = value

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
            assert value >= -128 and value < 128, \
                "The 'mode' field must be an integer in [-128, 127]"
        self._mode = value

    @builtins.property
    def vel(self):
        """Message field 'vel'."""
        return self._vel

    @vel.setter
    def vel(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'vel' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'vel' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._vel = value

    @builtins.property
    def pos(self):
        """Message field 'pos'."""
        return self._pos

    @pos.setter
    def pos(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'pos' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'pos' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._pos = value

    @builtins.property
    def current(self):
        """Message field 'current'."""
        return self._current

    @current.setter
    def current(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'current' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'current' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._current = value
