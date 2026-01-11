# generated from rosidl_generator_py/resource/_idl.py.em
# with input from stm32_mavlink_msgs:msg/LimitSwitchStatus.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_LimitSwitchStatus(type):
    """Metaclass of message 'LimitSwitchStatus'."""

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
                'stm32_mavlink_msgs.msg.LimitSwitchStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__limit_switch_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__limit_switch_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__limit_switch_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__limit_switch_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__limit_switch_status

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class LimitSwitchStatus(metaclass=Metaclass_LimitSwitchStatus):
    """Message class 'LimitSwitchStatus'."""

    __slots__ = [
        '_header',
        '_switch_count',
        '_switch_states',
        '_timestamp_ms',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'switch_count': 'uint8',
        'switch_states': 'boolean[16]',
        'timestamp_ms': 'uint32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('boolean'), 16),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.switch_count = kwargs.get('switch_count', int())
        self.switch_states = kwargs.get(
            'switch_states',
            [bool() for x in range(16)]
        )
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
        if self.header != other.header:
            return False
        if self.switch_count != other.switch_count:
            return False
        if self.switch_states != other.switch_states:
            return False
        if self.timestamp_ms != other.timestamp_ms:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def header(self):
        """Message field 'header'."""
        return self._header

    @header.setter
    def header(self, value):
        if __debug__:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

    @builtins.property
    def switch_count(self):
        """Message field 'switch_count'."""
        return self._switch_count

    @switch_count.setter
    def switch_count(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'switch_count' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'switch_count' field must be an unsigned integer in [0, 255]"
        self._switch_count = value

    @builtins.property
    def switch_states(self):
        """Message field 'switch_states'."""
        return self._switch_states

    @switch_states.setter
    def switch_states(self, value):
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 16 and
                 all(isinstance(v, bool) for v in value) and
                 True), \
                "The 'switch_states' field must be a set or sequence with length 16 and each value of type 'bool'"
        self._switch_states = value

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
