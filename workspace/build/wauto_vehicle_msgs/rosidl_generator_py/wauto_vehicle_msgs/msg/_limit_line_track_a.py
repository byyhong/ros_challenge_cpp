# generated from rosidl_generator_py/resource/_idl.py.em
# with input from wauto_vehicle_msgs:msg/LimitLineTrackA.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_LimitLineTrackA(type):
    """Metaclass of message 'LimitLineTrackA'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'NAME': 'LimitLine_TrackA',
        'CONFIDENCE_3': 3,
        'CONFIDENCE_2': 2,
        'CONFIDENCE_1': 1,
        'CONFIDENCE_0': 0,
        'RELATIVE_LANE_0': 0,
        'RELATIVE_LANE_1': 1,
        'RELATIVE_LANE_3': 3,
        'RELATIVE_LANE_4': 4,
        'RELATIVE_LANE_5': 5,
        'RELATIVE_LANE_6': 6,
        'RELATIVE_LANE_7': 7,
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
                'wauto_vehicle_msgs.msg.LimitLineTrackA')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__limit_line_track_a
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__limit_line_track_a
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__limit_line_track_a
            cls._TYPE_SUPPORT = module.type_support_msg__msg__limit_line_track_a
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__limit_line_track_a

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'NAME': cls.__constants['NAME'],
            'CONFIDENCE_3': cls.__constants['CONFIDENCE_3'],
            'CONFIDENCE_2': cls.__constants['CONFIDENCE_2'],
            'CONFIDENCE_1': cls.__constants['CONFIDENCE_1'],
            'CONFIDENCE_0': cls.__constants['CONFIDENCE_0'],
            'RELATIVE_LANE_0': cls.__constants['RELATIVE_LANE_0'],
            'RELATIVE_LANE_1': cls.__constants['RELATIVE_LANE_1'],
            'RELATIVE_LANE_3': cls.__constants['RELATIVE_LANE_3'],
            'RELATIVE_LANE_4': cls.__constants['RELATIVE_LANE_4'],
            'RELATIVE_LANE_5': cls.__constants['RELATIVE_LANE_5'],
            'RELATIVE_LANE_6': cls.__constants['RELATIVE_LANE_6'],
            'RELATIVE_LANE_7': cls.__constants['RELATIVE_LANE_7'],
            'ROLLING_COUNT__DEFAULT': 0,
            'LINEOBJECTID__DEFAULT': 0,
            'CONFIDENCE__DEFAULT': 0,
            'LONGITUDINAL_LENGTH__DEFAULT': 0,
            'WIDTH__DEFAULT': 0,
            'LONGPOS__DEFAULT': 0,
            'LATPOS__DEFAULT': 0,
            'RELATIVE_LANE__DEFAULT': 0,
        }

    @property
    def NAME(self):
        """Message constant 'NAME'."""
        return Metaclass_LimitLineTrackA.__constants['NAME']

    @property
    def CONFIDENCE_3(self):
        """Message constant 'CONFIDENCE_3'."""
        return Metaclass_LimitLineTrackA.__constants['CONFIDENCE_3']

    @property
    def CONFIDENCE_2(self):
        """Message constant 'CONFIDENCE_2'."""
        return Metaclass_LimitLineTrackA.__constants['CONFIDENCE_2']

    @property
    def CONFIDENCE_1(self):
        """Message constant 'CONFIDENCE_1'."""
        return Metaclass_LimitLineTrackA.__constants['CONFIDENCE_1']

    @property
    def CONFIDENCE_0(self):
        """Message constant 'CONFIDENCE_0'."""
        return Metaclass_LimitLineTrackA.__constants['CONFIDENCE_0']

    @property
    def RELATIVE_LANE_0(self):
        """Message constant 'RELATIVE_LANE_0'."""
        return Metaclass_LimitLineTrackA.__constants['RELATIVE_LANE_0']

    @property
    def RELATIVE_LANE_1(self):
        """Message constant 'RELATIVE_LANE_1'."""
        return Metaclass_LimitLineTrackA.__constants['RELATIVE_LANE_1']

    @property
    def RELATIVE_LANE_3(self):
        """Message constant 'RELATIVE_LANE_3'."""
        return Metaclass_LimitLineTrackA.__constants['RELATIVE_LANE_3']

    @property
    def RELATIVE_LANE_4(self):
        """Message constant 'RELATIVE_LANE_4'."""
        return Metaclass_LimitLineTrackA.__constants['RELATIVE_LANE_4']

    @property
    def RELATIVE_LANE_5(self):
        """Message constant 'RELATIVE_LANE_5'."""
        return Metaclass_LimitLineTrackA.__constants['RELATIVE_LANE_5']

    @property
    def RELATIVE_LANE_6(self):
        """Message constant 'RELATIVE_LANE_6'."""
        return Metaclass_LimitLineTrackA.__constants['RELATIVE_LANE_6']

    @property
    def RELATIVE_LANE_7(self):
        """Message constant 'RELATIVE_LANE_7'."""
        return Metaclass_LimitLineTrackA.__constants['RELATIVE_LANE_7']

    @property
    def ROLLING_COUNT__DEFAULT(cls):
        """Return default value for message field 'rolling_count'."""
        return 0

    @property
    def LINEOBJECTID__DEFAULT(cls):
        """Return default value for message field 'lineobjectid'."""
        return 0

    @property
    def CONFIDENCE__DEFAULT(cls):
        """Return default value for message field 'confidence'."""
        return 0

    @property
    def LONGITUDINAL_LENGTH__DEFAULT(cls):
        """Return default value for message field 'longitudinal_length'."""
        return 0

    @property
    def WIDTH__DEFAULT(cls):
        """Return default value for message field 'width'."""
        return 0

    @property
    def LONGPOS__DEFAULT(cls):
        """Return default value for message field 'longpos'."""
        return 0

    @property
    def LATPOS__DEFAULT(cls):
        """Return default value for message field 'latpos'."""
        return 0

    @property
    def RELATIVE_LANE__DEFAULT(cls):
        """Return default value for message field 'relative_lane'."""
        return 0


class LimitLineTrackA(metaclass=Metaclass_LimitLineTrackA):
    """
    Message class 'LimitLineTrackA'.

    Constants:
      NAME
      CONFIDENCE_3
      CONFIDENCE_2
      CONFIDENCE_1
      CONFIDENCE_0
      RELATIVE_LANE_0
      RELATIVE_LANE_1
      RELATIVE_LANE_3
      RELATIVE_LANE_4
      RELATIVE_LANE_5
      RELATIVE_LANE_6
      RELATIVE_LANE_7
    """

    __slots__ = [
        '_rolling_count',
        '_lineobjectid',
        '_confidence',
        '_longitudinal_length',
        '_width',
        '_longpos',
        '_latpos',
        '_relative_lane',
    ]

    _fields_and_field_types = {
        'rolling_count': 'uint8',
        'lineobjectid': 'uint8',
        'confidence': 'uint8',
        'longitudinal_length': 'uint8',
        'width': 'uint8',
        'longpos': 'int16',
        'latpos': 'int16',
        'relative_lane': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.rolling_count = kwargs.get(
            'rolling_count', LimitLineTrackA.ROLLING_COUNT__DEFAULT)
        self.lineobjectid = kwargs.get(
            'lineobjectid', LimitLineTrackA.LINEOBJECTID__DEFAULT)
        self.confidence = kwargs.get(
            'confidence', LimitLineTrackA.CONFIDENCE__DEFAULT)
        self.longitudinal_length = kwargs.get(
            'longitudinal_length', LimitLineTrackA.LONGITUDINAL_LENGTH__DEFAULT)
        self.width = kwargs.get(
            'width', LimitLineTrackA.WIDTH__DEFAULT)
        self.longpos = kwargs.get(
            'longpos', LimitLineTrackA.LONGPOS__DEFAULT)
        self.latpos = kwargs.get(
            'latpos', LimitLineTrackA.LATPOS__DEFAULT)
        self.relative_lane = kwargs.get(
            'relative_lane', LimitLineTrackA.RELATIVE_LANE__DEFAULT)

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
        if self.lineobjectid != other.lineobjectid:
            return False
        if self.confidence != other.confidence:
            return False
        if self.longitudinal_length != other.longitudinal_length:
            return False
        if self.width != other.width:
            return False
        if self.longpos != other.longpos:
            return False
        if self.latpos != other.latpos:
            return False
        if self.relative_lane != other.relative_lane:
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
    def lineobjectid(self):
        """Message field 'lineobjectid'."""
        return self._lineobjectid

    @lineobjectid.setter
    def lineobjectid(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'lineobjectid' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'lineobjectid' field must be an unsigned integer in [0, 255]"
        self._lineobjectid = value

    @builtins.property
    def confidence(self):
        """Message field 'confidence'."""
        return self._confidence

    @confidence.setter
    def confidence(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'confidence' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'confidence' field must be an unsigned integer in [0, 255]"
        self._confidence = value

    @builtins.property
    def longitudinal_length(self):
        """Message field 'longitudinal_length'."""
        return self._longitudinal_length

    @longitudinal_length.setter
    def longitudinal_length(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'longitudinal_length' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'longitudinal_length' field must be an unsigned integer in [0, 255]"
        self._longitudinal_length = value

    @builtins.property
    def width(self):
        """Message field 'width'."""
        return self._width

    @width.setter
    def width(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'width' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'width' field must be an unsigned integer in [0, 255]"
        self._width = value

    @builtins.property
    def longpos(self):
        """Message field 'longpos'."""
        return self._longpos

    @longpos.setter
    def longpos(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'longpos' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'longpos' field must be an integer in [-32768, 32767]"
        self._longpos = value

    @builtins.property
    def latpos(self):
        """Message field 'latpos'."""
        return self._latpos

    @latpos.setter
    def latpos(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'latpos' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'latpos' field must be an integer in [-32768, 32767]"
        self._latpos = value

    @builtins.property
    def relative_lane(self):
        """Message field 'relative_lane'."""
        return self._relative_lane

    @relative_lane.setter
    def relative_lane(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'relative_lane' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'relative_lane' field must be an unsigned integer in [0, 255]"
        self._relative_lane = value
