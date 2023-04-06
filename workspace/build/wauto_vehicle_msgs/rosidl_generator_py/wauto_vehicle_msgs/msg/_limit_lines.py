# generated from rosidl_generator_py/resource/_idl.py.em
# with input from wauto_vehicle_msgs:msg/LimitLines.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_LimitLines(type):
    """Metaclass of message 'LimitLines'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'NAME': 'LimitLines',
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('wauto_vehicle_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'wauto_vehicle_msgs.msg.LimitLines')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__limit_lines
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__limit_lines
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__limit_lines
            cls._TYPE_SUPPORT = module.type_support_msg__msg__limit_lines
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__limit_lines

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'NAME': cls.__constants['NAME'],
            'ROLLING_COUNT__DEFAULT': 0,
            'CURRENT_LIMIT_LINE_COUNT__DEFAULT': 0,
            'OBSERVATION_TIME_OF_HOUR__DEFAULT': 0,
        }

    @property
    def NAME(self):
        """Message constant 'NAME'."""
        return Metaclass_LimitLines.__constants['NAME']

    @property
    def ROLLING_COUNT__DEFAULT(cls):
        """Return default value for message field 'rolling_count'."""
        return 0

    @property
    def CURRENT_LIMIT_LINE_COUNT__DEFAULT(cls):
        """Return default value for message field 'current_limit_line_count'."""
        return 0

    @property
    def OBSERVATION_TIME_OF_HOUR__DEFAULT(cls):
        """Return default value for message field 'observation_time_of_hour'."""
        return 0


class LimitLines(metaclass=Metaclass_LimitLines):
    """
    Message class 'LimitLines'.

    Constants:
      NAME
    """

    __slots__ = [
        '_rolling_count',
        '_current_limit_line_count',
        '_observation_time_of_hour',
    ]

    _fields_and_field_types = {
        'rolling_count': 'uint8',
        'current_limit_line_count': 'uint8',
        'observation_time_of_hour': 'uint16',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.rolling_count = kwargs.get(
            'rolling_count', LimitLines.ROLLING_COUNT__DEFAULT)
        self.current_limit_line_count = kwargs.get(
            'current_limit_line_count', LimitLines.CURRENT_LIMIT_LINE_COUNT__DEFAULT)
        self.observation_time_of_hour = kwargs.get(
            'observation_time_of_hour', LimitLines.OBSERVATION_TIME_OF_HOUR__DEFAULT)

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
        if self.rolling_count != other.rolling_count:
            return False
        if self.current_limit_line_count != other.current_limit_line_count:
            return False
        if self.observation_time_of_hour != other.observation_time_of_hour:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def rolling_count(self):
        """Message field 'rolling_count'."""
        return self._rolling_count

    @rolling_count.setter
    def rolling_count(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'rolling_count' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'rolling_count' field must be an unsigned integer in [0, 255]"
        self._rolling_count = value

    @builtins.property
    def current_limit_line_count(self):
        """Message field 'current_limit_line_count'."""
        return self._current_limit_line_count

    @current_limit_line_count.setter
    def current_limit_line_count(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'current_limit_line_count' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'current_limit_line_count' field must be an unsigned integer in [0, 255]"
        self._current_limit_line_count = value

    @builtins.property
    def observation_time_of_hour(self):
        """Message field 'observation_time_of_hour'."""
        return self._observation_time_of_hour

    @observation_time_of_hour.setter
    def observation_time_of_hour(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'observation_time_of_hour' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'observation_time_of_hour' field must be an unsigned integer in [0, 65535]"
        self._observation_time_of_hour = value
