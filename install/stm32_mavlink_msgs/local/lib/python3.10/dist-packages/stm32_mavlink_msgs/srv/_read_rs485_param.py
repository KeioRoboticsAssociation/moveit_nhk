# generated from rosidl_generator_py/resource/_idl.py.em
# with input from stm32_mavlink_msgs:srv/ReadRS485Param.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ReadRS485Param_Request(type):
    """Metaclass of message 'ReadRS485Param_Request'."""

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
                'stm32_mavlink_msgs.srv.ReadRS485Param_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__read_rs485_param__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__read_rs485_param__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__read_rs485_param__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__read_rs485_param__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__read_rs485_param__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ReadRS485Param_Request(metaclass=Metaclass_ReadRS485Param_Request):
    """Message class 'ReadRS485Param_Request'."""

    __slots__ = [
        '_motor_id',
        '_address',
        '_length',
    ]

    _fields_and_field_types = {
        'motor_id': 'uint8',
        'address': 'uint16',
        'length': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.motor_id = kwargs.get('motor_id', int())
        self.address = kwargs.get('address', int())
        self.length = kwargs.get('length', int())

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
        if self.address != other.address:
            return False
        if self.length != other.length:
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
    def address(self):
        """Message field 'address'."""
        return self._address

    @address.setter
    def address(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'address' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'address' field must be an unsigned integer in [0, 65535]"
        self._address = value

    @builtins.property
    def length(self):
        """Message field 'length'."""
        return self._length

    @length.setter
    def length(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'length' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'length' field must be an unsigned integer in [0, 255]"
        self._length = value


# Import statements for member types

# already imported above
# import builtins

# Member 'data'
import numpy  # noqa: E402, I100

# already imported above
# import rosidl_parser.definition


class Metaclass_ReadRS485Param_Response(type):
    """Metaclass of message 'ReadRS485Param_Response'."""

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
                'stm32_mavlink_msgs.srv.ReadRS485Param_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__read_rs485_param__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__read_rs485_param__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__read_rs485_param__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__read_rs485_param__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__read_rs485_param__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ReadRS485Param_Response(metaclass=Metaclass_ReadRS485Param_Response):
    """Message class 'ReadRS485Param_Response'."""

    __slots__ = [
        '_success',
        '_data',
        '_status',
        '_rs485_error',
        '_message',
    ]

    _fields_and_field_types = {
        'success': 'boolean',
        'data': 'uint8[64]',
        'status': 'uint8',
        'rs485_error': 'uint8',
        'message': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('uint8'), 64),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.success = kwargs.get('success', bool())
        if 'data' not in kwargs:
            self.data = numpy.zeros(64, dtype=numpy.uint8)
        else:
            self.data = kwargs.get('data')
        self.status = kwargs.get('status', int())
        self.rs485_error = kwargs.get('rs485_error', int())
        self.message = kwargs.get('message', str())

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
        if self.success != other.success:
            return False
        if any(self.data != other.data):
            return False
        if self.status != other.status:
            return False
        if self.rs485_error != other.rs485_error:
            return False
        if self.message != other.message:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def success(self):
        """Message field 'success'."""
        return self._success

    @success.setter
    def success(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'success' field must be of type 'bool'"
        self._success = value

    @builtins.property
    def data(self):
        """Message field 'data'."""
        return self._data

    @data.setter
    def data(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.uint8, \
                "The 'data' numpy.ndarray() must have the dtype of 'numpy.uint8'"
            assert value.size == 64, \
                "The 'data' numpy.ndarray() must have a size of 64"
            self._data = value
            return
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
                 len(value) == 64 and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'data' field must be a set or sequence with length 64 and each value of type 'int' and each unsigned integer in [0, 255]"
        self._data = numpy.array(value, dtype=numpy.uint8)

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
    def rs485_error(self):
        """Message field 'rs485_error'."""
        return self._rs485_error

    @rs485_error.setter
    def rs485_error(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'rs485_error' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'rs485_error' field must be an unsigned integer in [0, 255]"
        self._rs485_error = value

    @builtins.property
    def message(self):
        """Message field 'message'."""
        return self._message

    @message.setter
    def message(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'message' field must be of type 'str'"
        self._message = value


class Metaclass_ReadRS485Param(type):
    """Metaclass of service 'ReadRS485Param'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('stm32_mavlink_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'stm32_mavlink_msgs.srv.ReadRS485Param')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__read_rs485_param

            from stm32_mavlink_msgs.srv import _read_rs485_param
            if _read_rs485_param.Metaclass_ReadRS485Param_Request._TYPE_SUPPORT is None:
                _read_rs485_param.Metaclass_ReadRS485Param_Request.__import_type_support__()
            if _read_rs485_param.Metaclass_ReadRS485Param_Response._TYPE_SUPPORT is None:
                _read_rs485_param.Metaclass_ReadRS485Param_Response.__import_type_support__()


class ReadRS485Param(metaclass=Metaclass_ReadRS485Param):
    from stm32_mavlink_msgs.srv._read_rs485_param import ReadRS485Param_Request as Request
    from stm32_mavlink_msgs.srv._read_rs485_param import ReadRS485Param_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
