# generated from rosidl_generator_py/resource/_idl.py.em
# with input from wauto_perception_msgs:msg/LaneMarking.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_LaneMarking(type):
    """Metaclass of message 'LaneMarking'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'WA_LANE_MARKING_TYPE_UNKNOWN': 0,
        'WA_LANE_MARKING_TYPE_SOLID': 1,
        'WA_LANE_MARKING_TYPE_DASHED': 2,
        'WA_LANE_MARKING_TYPE_DOTTED': 3,
        'WA_LANE_MARKING_TYPE_BOTTS_DOTS': 4,
        'WA_LANE_MARKING_TYPE_DOUBLE': 5,
        'WA_LANE_MARKING_TYPE_ROAD_EDGE': 6,
        'WA_LANE_MARKING_COLOR_UNKNOWN': 0,
        'WA_LANE_MARKING_COLOR_WHITE': 1,
        'WA_LANE_MARKING_COLOR_YELLOW': 2,
        'WA_LANE_MARKING_COLOR_OTHER': 3,
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
                'wauto_perception_msgs.msg.LaneMarking')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__lane_marking
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__lane_marking
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__lane_marking
            cls._TYPE_SUPPORT = module.type_support_msg__msg__lane_marking
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__lane_marking

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'WA_LANE_MARKING_TYPE_UNKNOWN': cls.__constants['WA_LANE_MARKING_TYPE_UNKNOWN'],
            'WA_LANE_MARKING_TYPE_SOLID': cls.__constants['WA_LANE_MARKING_TYPE_SOLID'],
            'WA_LANE_MARKING_TYPE_DASHED': cls.__constants['WA_LANE_MARKING_TYPE_DASHED'],
            'WA_LANE_MARKING_TYPE_DOTTED': cls.__constants['WA_LANE_MARKING_TYPE_DOTTED'],
            'WA_LANE_MARKING_TYPE_BOTTS_DOTS': cls.__constants['WA_LANE_MARKING_TYPE_BOTTS_DOTS'],
            'WA_LANE_MARKING_TYPE_DOUBLE': cls.__constants['WA_LANE_MARKING_TYPE_DOUBLE'],
            'WA_LANE_MARKING_TYPE_ROAD_EDGE': cls.__constants['WA_LANE_MARKING_TYPE_ROAD_EDGE'],
            'WA_LANE_MARKING_COLOR_UNKNOWN': cls.__constants['WA_LANE_MARKING_COLOR_UNKNOWN'],
            'WA_LANE_MARKING_COLOR_WHITE': cls.__constants['WA_LANE_MARKING_COLOR_WHITE'],
            'WA_LANE_MARKING_COLOR_YELLOW': cls.__constants['WA_LANE_MARKING_COLOR_YELLOW'],
            'WA_LANE_MARKING_COLOR_OTHER': cls.__constants['WA_LANE_MARKING_COLOR_OTHER'],
            'ID__DEFAULT': 0,
        }

    @property
    def WA_LANE_MARKING_TYPE_UNKNOWN(self):
        """Message constant 'WA_LANE_MARKING_TYPE_UNKNOWN'."""
        return Metaclass_LaneMarking.__constants['WA_LANE_MARKING_TYPE_UNKNOWN']

    @property
    def WA_LANE_MARKING_TYPE_SOLID(self):
        """Message constant 'WA_LANE_MARKING_TYPE_SOLID'."""
        return Metaclass_LaneMarking.__constants['WA_LANE_MARKING_TYPE_SOLID']

    @property
    def WA_LANE_MARKING_TYPE_DASHED(self):
        """Message constant 'WA_LANE_MARKING_TYPE_DASHED'."""
        return Metaclass_LaneMarking.__constants['WA_LANE_MARKING_TYPE_DASHED']

    @property
    def WA_LANE_MARKING_TYPE_DOTTED(self):
        """Message constant 'WA_LANE_MARKING_TYPE_DOTTED'."""
        return Metaclass_LaneMarking.__constants['WA_LANE_MARKING_TYPE_DOTTED']

    @property
    def WA_LANE_MARKING_TYPE_BOTTS_DOTS(self):
        """Message constant 'WA_LANE_MARKING_TYPE_BOTTS_DOTS'."""
        return Metaclass_LaneMarking.__constants['WA_LANE_MARKING_TYPE_BOTTS_DOTS']

    @property
    def WA_LANE_MARKING_TYPE_DOUBLE(self):
        """Message constant 'WA_LANE_MARKING_TYPE_DOUBLE'."""
        return Metaclass_LaneMarking.__constants['WA_LANE_MARKING_TYPE_DOUBLE']

    @property
    def WA_LANE_MARKING_TYPE_ROAD_EDGE(self):
        """Message constant 'WA_LANE_MARKING_TYPE_ROAD_EDGE'."""
        return Metaclass_LaneMarking.__constants['WA_LANE_MARKING_TYPE_ROAD_EDGE']

    @property
    def WA_LANE_MARKING_COLOR_UNKNOWN(self):
        """Message constant 'WA_LANE_MARKING_COLOR_UNKNOWN'."""
        return Metaclass_LaneMarking.__constants['WA_LANE_MARKING_COLOR_UNKNOWN']

    @property
    def WA_LANE_MARKING_COLOR_WHITE(self):
        """Message constant 'WA_LANE_MARKING_COLOR_WHITE'."""
        return Metaclass_LaneMarking.__constants['WA_LANE_MARKING_COLOR_WHITE']

    @property
    def WA_LANE_MARKING_COLOR_YELLOW(self):
        """Message constant 'WA_LANE_MARKING_COLOR_YELLOW'."""
        return Metaclass_LaneMarking.__constants['WA_LANE_MARKING_COLOR_YELLOW']

    @property
    def WA_LANE_MARKING_COLOR_OTHER(self):
        """Message constant 'WA_LANE_MARKING_COLOR_OTHER'."""
        return Metaclass_LaneMarking.__constants['WA_LANE_MARKING_COLOR_OTHER']

    @property
    def ID__DEFAULT(cls):
        """Return default value for message field 'id'."""
        return 0


class LaneMarking(metaclass=Metaclass_LaneMarking):
    """
    Message class 'LaneMarking'.

    Constants:
      WA_LANE_MARKING_TYPE_UNKNOWN
      WA_LANE_MARKING_TYPE_SOLID
      WA_LANE_MARKING_TYPE_DASHED
      WA_LANE_MARKING_TYPE_DOTTED
      WA_LANE_MARKING_TYPE_BOTTS_DOTS
      WA_LANE_MARKING_TYPE_DOUBLE
      WA_LANE_MARKING_TYPE_ROAD_EDGE
      WA_LANE_MARKING_COLOR_UNKNOWN
      WA_LANE_MARKING_COLOR_WHITE
      WA_LANE_MARKING_COLOR_YELLOW
      WA_LANE_MARKING_COLOR_OTHER
    """

    __slots__ = [
        '_id',
        '_distance',
        '_type',
        '_color',
    ]

    _fields_and_field_types = {
        'id': 'int32',
        'distance': 'int8',
        'type': 'uint8',
        'color': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.id = kwargs.get(
            'id', LaneMarking.ID__DEFAULT)
        self.distance = kwargs.get('distance', int())
        self.type = kwargs.get('type', int())
        self.color = kwargs.get('color', int())

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
        if self.distance != other.distance:
            return False
        if self.type != other.type:
            return False
        if self.color != other.color:
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
    def distance(self):
        """Message field 'distance'."""
        return self._distance

    @distance.setter
    def distance(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'distance' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'distance' field must be an integer in [-128, 127]"
        self._distance = value

    @builtins.property  # noqa: A003
    def type(self):  # noqa: A003
        """Message field 'type'."""
        return self._type

    @type.setter  # noqa: A003
    def type(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'type' field must be an unsigned integer in [0, 255]"
        self._type = value

    @builtins.property
    def color(self):
        """Message field 'color'."""
        return self._color

    @color.setter
    def color(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'color' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'color' field must be an unsigned integer in [0, 255]"
        self._color = value
