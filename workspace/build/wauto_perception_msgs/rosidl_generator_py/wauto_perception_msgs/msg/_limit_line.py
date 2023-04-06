# generated from rosidl_generator_py/resource/_idl.py.em
# with input from wauto_perception_msgs:msg/LimitLine.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_LimitLine(type):
    """Metaclass of message 'LimitLine'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'WA_LIMIT_LINE_ASSIGN_UNKNOWN': 0,
        'WA_LIMIT_LINE_ASSIGN_HOST_LANE': 1,
        'WA_LIMIT_LINE_ASSIGN_LEFT_SHOULDER': 2,
        'WA_LIMIT_LINE_ASSIGN_LEFT_LANE': 3,
        'WA_LIMIT_LINE_ASSIGN_RIGHT_LANE': 4,
        'WA_LIMIT_LINE_ASSIGN_RIGHT_SHOULDER': 5,
        'WA_LIMIT_LINE_ASSIGN_OVERHEAD': 6,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('wauto_perception_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'wauto_perception_msgs.msg.LimitLine')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__limit_line
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__limit_line
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__limit_line
            cls._TYPE_SUPPORT = module.type_support_msg__msg__limit_line
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__limit_line

            from geometry_msgs.msg import Vector3
            if Vector3.__class__._TYPE_SUPPORT is None:
                Vector3.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'WA_LIMIT_LINE_ASSIGN_UNKNOWN': cls.__constants['WA_LIMIT_LINE_ASSIGN_UNKNOWN'],
            'WA_LIMIT_LINE_ASSIGN_HOST_LANE': cls.__constants['WA_LIMIT_LINE_ASSIGN_HOST_LANE'],
            'WA_LIMIT_LINE_ASSIGN_LEFT_SHOULDER': cls.__constants['WA_LIMIT_LINE_ASSIGN_LEFT_SHOULDER'],
            'WA_LIMIT_LINE_ASSIGN_LEFT_LANE': cls.__constants['WA_LIMIT_LINE_ASSIGN_LEFT_LANE'],
            'WA_LIMIT_LINE_ASSIGN_RIGHT_LANE': cls.__constants['WA_LIMIT_LINE_ASSIGN_RIGHT_LANE'],
            'WA_LIMIT_LINE_ASSIGN_RIGHT_SHOULDER': cls.__constants['WA_LIMIT_LINE_ASSIGN_RIGHT_SHOULDER'],
            'WA_LIMIT_LINE_ASSIGN_OVERHEAD': cls.__constants['WA_LIMIT_LINE_ASSIGN_OVERHEAD'],
            'ID__DEFAULT': 0,
        }

    @property
    def WA_LIMIT_LINE_ASSIGN_UNKNOWN(self):
        """Message constant 'WA_LIMIT_LINE_ASSIGN_UNKNOWN'."""
        return Metaclass_LimitLine.__constants['WA_LIMIT_LINE_ASSIGN_UNKNOWN']

    @property
    def WA_LIMIT_LINE_ASSIGN_HOST_LANE(self):
        """Message constant 'WA_LIMIT_LINE_ASSIGN_HOST_LANE'."""
        return Metaclass_LimitLine.__constants['WA_LIMIT_LINE_ASSIGN_HOST_LANE']

    @property
    def WA_LIMIT_LINE_ASSIGN_LEFT_SHOULDER(self):
        """Message constant 'WA_LIMIT_LINE_ASSIGN_LEFT_SHOULDER'."""
        return Metaclass_LimitLine.__constants['WA_LIMIT_LINE_ASSIGN_LEFT_SHOULDER']

    @property
    def WA_LIMIT_LINE_ASSIGN_LEFT_LANE(self):
        """Message constant 'WA_LIMIT_LINE_ASSIGN_LEFT_LANE'."""
        return Metaclass_LimitLine.__constants['WA_LIMIT_LINE_ASSIGN_LEFT_LANE']

    @property
    def WA_LIMIT_LINE_ASSIGN_RIGHT_LANE(self):
        """Message constant 'WA_LIMIT_LINE_ASSIGN_RIGHT_LANE'."""
        return Metaclass_LimitLine.__constants['WA_LIMIT_LINE_ASSIGN_RIGHT_LANE']

    @property
    def WA_LIMIT_LINE_ASSIGN_RIGHT_SHOULDER(self):
        """Message constant 'WA_LIMIT_LINE_ASSIGN_RIGHT_SHOULDER'."""
        return Metaclass_LimitLine.__constants['WA_LIMIT_LINE_ASSIGN_RIGHT_SHOULDER']

    @property
    def WA_LIMIT_LINE_ASSIGN_OVERHEAD(self):
        """Message constant 'WA_LIMIT_LINE_ASSIGN_OVERHEAD'."""
        return Metaclass_LimitLine.__constants['WA_LIMIT_LINE_ASSIGN_OVERHEAD']

    @property
    def ID__DEFAULT(cls):
        """Return default value for message field 'id'."""
        return 0


class LimitLine(metaclass=Metaclass_LimitLine):
    """
    Message class 'LimitLine'.

    Constants:
      WA_LIMIT_LINE_ASSIGN_UNKNOWN
      WA_LIMIT_LINE_ASSIGN_HOST_LANE
      WA_LIMIT_LINE_ASSIGN_LEFT_SHOULDER
      WA_LIMIT_LINE_ASSIGN_LEFT_LANE
      WA_LIMIT_LINE_ASSIGN_RIGHT_LANE
      WA_LIMIT_LINE_ASSIGN_RIGHT_SHOULDER
      WA_LIMIT_LINE_ASSIGN_OVERHEAD
    """

    __slots__ = [
        '_id',
        '_confidence',
        '_position',
        '_assignment',
    ]

    _fields_and_field_types = {
        'id': 'int32',
        'confidence': 'float',
        'position': 'geometry_msgs/Vector3',
        'assignment': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.id = kwargs.get(
            'id', LimitLine.ID__DEFAULT)
        self.confidence = kwargs.get('confidence', float())
        from geometry_msgs.msg import Vector3
        self.position = kwargs.get('position', Vector3())
        self.assignment = kwargs.get('assignment', int())

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
        if self.id != other.id:
            return False
        if self.confidence != other.confidence:
            return False
        if self.position != other.position:
            return False
        if self.assignment != other.assignment:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property  # noqa: A003
    def id(self):  # noqa: A003
        """Message field 'id'."""
        return self._id

    @id.setter  # noqa: A003
    def id(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'id' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'id' field must be an integer in [-2147483648, 2147483647]"
        self._id = value

    @builtins.property
    def confidence(self):
        """Message field 'confidence'."""
        return self._confidence

    @confidence.setter
    def confidence(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'confidence' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'confidence' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._confidence = value

    @builtins.property
    def position(self):
        """Message field 'position'."""
        return self._position

    @position.setter
    def position(self, value):
        if __debug__:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'position' field must be a sub message of type 'Vector3'"
        self._position = value

    @builtins.property
    def assignment(self):
        """Message field 'assignment'."""
        return self._assignment

    @assignment.setter
    def assignment(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'assignment' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'assignment' field must be an unsigned integer in [0, 255]"
        self._assignment = value
