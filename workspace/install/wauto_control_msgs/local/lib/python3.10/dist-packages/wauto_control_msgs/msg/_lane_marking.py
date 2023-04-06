# generated from rosidl_generator_py/resource/_idl.py.em
# with input from wauto_control_msgs:msg/LaneMarking.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

# Member 'coordinates_x'
# Member 'coordinates_y'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_LaneMarking(type):
    """Metaclass of message 'LaneMarking'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'UNMARKED': 0,
        'SOLID': 1,
        'DASHED': 2,
        'DOUBLESOLID': 3,
        'DOUBLEDASHED': 4,
        'SOLIDDASHED': 5,
        'DASHEDSOLID': 6,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('wauto_control_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'wauto_control_msgs.msg.LaneMarking')
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
            'UNMARKED': cls.__constants['UNMARKED'],
            'SOLID': cls.__constants['SOLID'],
            'DASHED': cls.__constants['DASHED'],
            'DOUBLESOLID': cls.__constants['DOUBLESOLID'],
            'DOUBLEDASHED': cls.__constants['DOUBLEDASHED'],
            'SOLIDDASHED': cls.__constants['SOLIDDASHED'],
            'DASHEDSOLID': cls.__constants['DASHEDSOLID'],
        }

    @property
    def UNMARKED(self):
        """Message constant 'UNMARKED'."""
        return Metaclass_LaneMarking.__constants['UNMARKED']

    @property
    def SOLID(self):
        """Message constant 'SOLID'."""
        return Metaclass_LaneMarking.__constants['SOLID']

    @property
    def DASHED(self):
        """Message constant 'DASHED'."""
        return Metaclass_LaneMarking.__constants['DASHED']

    @property
    def DOUBLESOLID(self):
        """Message constant 'DOUBLESOLID'."""
        return Metaclass_LaneMarking.__constants['DOUBLESOLID']

    @property
    def DOUBLEDASHED(self):
        """Message constant 'DOUBLEDASHED'."""
        return Metaclass_LaneMarking.__constants['DOUBLEDASHED']

    @property
    def SOLIDDASHED(self):
        """Message constant 'SOLIDDASHED'."""
        return Metaclass_LaneMarking.__constants['SOLIDDASHED']

    @property
    def DASHEDSOLID(self):
        """Message constant 'DASHEDSOLID'."""
        return Metaclass_LaneMarking.__constants['DASHEDSOLID']


class LaneMarking(metaclass=Metaclass_LaneMarking):
    """
    Message class 'LaneMarking'.

    Constants:
      UNMARKED
      SOLID
      DASHED
      DOUBLESOLID
      DOUBLEDASHED
      SOLIDDASHED
      DASHEDSOLID
    """

    __slots__ = [
        '_boundary_type',
        '_lateral_offset',
        '_heading_angle',
        '_coordinates_x',
        '_coordinates_y',
    ]

    _fields_and_field_types = {
        'boundary_type': 'uint8',
        'lateral_offset': 'double',
        'heading_angle': 'double',
        'coordinates_x': 'double[20]',
        'coordinates_y': 'double[20]',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('double'), 20),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('double'), 20),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.boundary_type = kwargs.get('boundary_type', int())
        self.lateral_offset = kwargs.get('lateral_offset', float())
        self.heading_angle = kwargs.get('heading_angle', float())
        if 'coordinates_x' not in kwargs:
            self.coordinates_x = numpy.zeros(20, dtype=numpy.float64)
        else:
            self.coordinates_x = numpy.array(kwargs.get('coordinates_x'), dtype=numpy.float64)
            assert self.coordinates_x.shape == (20, )
        if 'coordinates_y' not in kwargs:
            self.coordinates_y = numpy.zeros(20, dtype=numpy.float64)
        else:
            self.coordinates_y = numpy.array(kwargs.get('coordinates_y'), dtype=numpy.float64)
            assert self.coordinates_y.shape == (20, )

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
        if self.boundary_type != other.boundary_type:
            return False
        if self.lateral_offset != other.lateral_offset:
            return False
        if self.heading_angle != other.heading_angle:
            return False
        if all(self.coordinates_x != other.coordinates_x):
            return False
        if all(self.coordinates_y != other.coordinates_y):
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def boundary_type(self):
        """Message field 'boundary_type'."""
        return self._boundary_type

    @boundary_type.setter
    def boundary_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'boundary_type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'boundary_type' field must be an unsigned integer in [0, 255]"
        self._boundary_type = value

    @builtins.property
    def lateral_offset(self):
        """Message field 'lateral_offset'."""
        return self._lateral_offset

    @lateral_offset.setter
    def lateral_offset(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'lateral_offset' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'lateral_offset' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._lateral_offset = value

    @builtins.property
    def heading_angle(self):
        """Message field 'heading_angle'."""
        return self._heading_angle

    @heading_angle.setter
    def heading_angle(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'heading_angle' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'heading_angle' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._heading_angle = value

    @builtins.property
    def coordinates_x(self):
        """Message field 'coordinates_x'."""
        return self._coordinates_x

    @coordinates_x.setter
    def coordinates_x(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float64, \
                "The 'coordinates_x' numpy.ndarray() must have the dtype of 'numpy.float64'"
            assert value.size == 20, \
                "The 'coordinates_x' numpy.ndarray() must have a size of 20"
            self._coordinates_x = value
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
                 len(value) == 20 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'coordinates_x' field must be a set or sequence with length 20 and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._coordinates_x = numpy.array(value, dtype=numpy.float64)

    @builtins.property
    def coordinates_y(self):
        """Message field 'coordinates_y'."""
        return self._coordinates_y

    @coordinates_y.setter
    def coordinates_y(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float64, \
                "The 'coordinates_y' numpy.ndarray() must have the dtype of 'numpy.float64'"
            assert value.size == 20, \
                "The 'coordinates_y' numpy.ndarray() must have a size of 20"
            self._coordinates_y = value
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
                 len(value) == 20 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'coordinates_y' field must be a set or sequence with length 20 and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._coordinates_y = numpy.array(value, dtype=numpy.float64)
