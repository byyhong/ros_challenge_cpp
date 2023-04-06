# generated from rosidl_generator_py/resource/_idl.py.em
# with input from wauto_vehicle_msgs:msg/TrafficSignTrackA.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_TrafficSignTrackA(type):
    """Metaclass of message 'TrafficSignTrackA'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'NAME': 'TrafficSign_TrackA',
        'CONFIDENCE_3': 3,
        'CONFIDENCE_2': 2,
        'CONFIDENCE_1': 1,
        'CONFIDENCE_0': 0,
        'SIGN_TYPE_0': 0,
        'SIGN_TYPE_1': 1,
        'SIGN_TYPE_2': 2,
        'SIGN_TYPE_3': 3,
        'SIGN_TYPE_4': 4,
        'SIGN_TYPE_5': 5,
        'SIGN_TYPE_6': 6,
        'SIGN_TYPE_7': 7,
        'SIGN_TYPE_8': 8,
        'SIGN_TYPE_9': 9,
        'SIGN_TYPE_10': 10,
        'SIGN_TYPE_11': 11,
        'SIGN_TYPE_12': 12,
        'SIGN_TYPE_13': 13,
        'SIGN_TYPE_14': 14,
        'SIGN_TYPE_15': 15,
        'SIGN_TYPE_16': 16,
        'SIGN_TYPE_17': 17,
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
                'wauto_vehicle_msgs.msg.TrafficSignTrackA')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__traffic_sign_track_a
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__traffic_sign_track_a
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__traffic_sign_track_a
            cls._TYPE_SUPPORT = module.type_support_msg__msg__traffic_sign_track_a
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__traffic_sign_track_a

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
            'SIGN_TYPE_0': cls.__constants['SIGN_TYPE_0'],
            'SIGN_TYPE_1': cls.__constants['SIGN_TYPE_1'],
            'SIGN_TYPE_2': cls.__constants['SIGN_TYPE_2'],
            'SIGN_TYPE_3': cls.__constants['SIGN_TYPE_3'],
            'SIGN_TYPE_4': cls.__constants['SIGN_TYPE_4'],
            'SIGN_TYPE_5': cls.__constants['SIGN_TYPE_5'],
            'SIGN_TYPE_6': cls.__constants['SIGN_TYPE_6'],
            'SIGN_TYPE_7': cls.__constants['SIGN_TYPE_7'],
            'SIGN_TYPE_8': cls.__constants['SIGN_TYPE_8'],
            'SIGN_TYPE_9': cls.__constants['SIGN_TYPE_9'],
            'SIGN_TYPE_10': cls.__constants['SIGN_TYPE_10'],
            'SIGN_TYPE_11': cls.__constants['SIGN_TYPE_11'],
            'SIGN_TYPE_12': cls.__constants['SIGN_TYPE_12'],
            'SIGN_TYPE_13': cls.__constants['SIGN_TYPE_13'],
            'SIGN_TYPE_14': cls.__constants['SIGN_TYPE_14'],
            'SIGN_TYPE_15': cls.__constants['SIGN_TYPE_15'],
            'SIGN_TYPE_16': cls.__constants['SIGN_TYPE_16'],
            'SIGN_TYPE_17': cls.__constants['SIGN_TYPE_17'],
            'ROLLING_COUNT__DEFAULT': 0,
            'SIGNOBJECTID__DEFAULT': 0,
            'CONFIDENCE__DEFAULT': 0,
            'LONGPOS__DEFAULT': 0,
            'HEIGHT_ABOVE_GROUND__DEFAULT': 0,
            'LATPOS__DEFAULT': 0,
            'SIGN_TYPE__DEFAULT': 0,
            'SIGN_VALUE__DEFAULT': 0,
        }

    @property
    def NAME(self):
        """Message constant 'NAME'."""
        return Metaclass_TrafficSignTrackA.__constants['NAME']

    @property
    def CONFIDENCE_3(self):
        """Message constant 'CONFIDENCE_3'."""
        return Metaclass_TrafficSignTrackA.__constants['CONFIDENCE_3']

    @property
    def CONFIDENCE_2(self):
        """Message constant 'CONFIDENCE_2'."""
        return Metaclass_TrafficSignTrackA.__constants['CONFIDENCE_2']

    @property
    def CONFIDENCE_1(self):
        """Message constant 'CONFIDENCE_1'."""
        return Metaclass_TrafficSignTrackA.__constants['CONFIDENCE_1']

    @property
    def CONFIDENCE_0(self):
        """Message constant 'CONFIDENCE_0'."""
        return Metaclass_TrafficSignTrackA.__constants['CONFIDENCE_0']

    @property
    def SIGN_TYPE_0(self):
        """Message constant 'SIGN_TYPE_0'."""
        return Metaclass_TrafficSignTrackA.__constants['SIGN_TYPE_0']

    @property
    def SIGN_TYPE_1(self):
        """Message constant 'SIGN_TYPE_1'."""
        return Metaclass_TrafficSignTrackA.__constants['SIGN_TYPE_1']

    @property
    def SIGN_TYPE_2(self):
        """Message constant 'SIGN_TYPE_2'."""
        return Metaclass_TrafficSignTrackA.__constants['SIGN_TYPE_2']

    @property
    def SIGN_TYPE_3(self):
        """Message constant 'SIGN_TYPE_3'."""
        return Metaclass_TrafficSignTrackA.__constants['SIGN_TYPE_3']

    @property
    def SIGN_TYPE_4(self):
        """Message constant 'SIGN_TYPE_4'."""
        return Metaclass_TrafficSignTrackA.__constants['SIGN_TYPE_4']

    @property
    def SIGN_TYPE_5(self):
        """Message constant 'SIGN_TYPE_5'."""
        return Metaclass_TrafficSignTrackA.__constants['SIGN_TYPE_5']

    @property
    def SIGN_TYPE_6(self):
        """Message constant 'SIGN_TYPE_6'."""
        return Metaclass_TrafficSignTrackA.__constants['SIGN_TYPE_6']

    @property
    def SIGN_TYPE_7(self):
        """Message constant 'SIGN_TYPE_7'."""
        return Metaclass_TrafficSignTrackA.__constants['SIGN_TYPE_7']

    @property
    def SIGN_TYPE_8(self):
        """Message constant 'SIGN_TYPE_8'."""
        return Metaclass_TrafficSignTrackA.__constants['SIGN_TYPE_8']

    @property
    def SIGN_TYPE_9(self):
        """Message constant 'SIGN_TYPE_9'."""
        return Metaclass_TrafficSignTrackA.__constants['SIGN_TYPE_9']

    @property
    def SIGN_TYPE_10(self):
        """Message constant 'SIGN_TYPE_10'."""
        return Metaclass_TrafficSignTrackA.__constants['SIGN_TYPE_10']

    @property
    def SIGN_TYPE_11(self):
        """Message constant 'SIGN_TYPE_11'."""
        return Metaclass_TrafficSignTrackA.__constants['SIGN_TYPE_11']

    @property
    def SIGN_TYPE_12(self):
        """Message constant 'SIGN_TYPE_12'."""
        return Metaclass_TrafficSignTrackA.__constants['SIGN_TYPE_12']

    @property
    def SIGN_TYPE_13(self):
        """Message constant 'SIGN_TYPE_13'."""
        return Metaclass_TrafficSignTrackA.__constants['SIGN_TYPE_13']

    @property
    def SIGN_TYPE_14(self):
        """Message constant 'SIGN_TYPE_14'."""
        return Metaclass_TrafficSignTrackA.__constants['SIGN_TYPE_14']

    @property
    def SIGN_TYPE_15(self):
        """Message constant 'SIGN_TYPE_15'."""
        return Metaclass_TrafficSignTrackA.__constants['SIGN_TYPE_15']

    @property
    def SIGN_TYPE_16(self):
        """Message constant 'SIGN_TYPE_16'."""
        return Metaclass_TrafficSignTrackA.__constants['SIGN_TYPE_16']

    @property
    def SIGN_TYPE_17(self):
        """Message constant 'SIGN_TYPE_17'."""
        return Metaclass_TrafficSignTrackA.__constants['SIGN_TYPE_17']

    @property
    def ROLLING_COUNT__DEFAULT(cls):
        """Return default value for message field 'rolling_count'."""
        return 0

    @property
    def SIGNOBJECTID__DEFAULT(cls):
        """Return default value for message field 'signobjectid'."""
        return 0

    @property
    def CONFIDENCE__DEFAULT(cls):
        """Return default value for message field 'confidence'."""
        return 0

    @property
    def LONGPOS__DEFAULT(cls):
        """Return default value for message field 'longpos'."""
        return 0

    @property
    def HEIGHT_ABOVE_GROUND__DEFAULT(cls):
        """Return default value for message field 'height_above_ground'."""
        return 0

    @property
    def LATPOS__DEFAULT(cls):
        """Return default value for message field 'latpos'."""
        return 0

    @property
    def SIGN_TYPE__DEFAULT(cls):
        """Return default value for message field 'sign_type'."""
        return 0

    @property
    def SIGN_VALUE__DEFAULT(cls):
        """Return default value for message field 'sign_value'."""
        return 0


class TrafficSignTrackA(metaclass=Metaclass_TrafficSignTrackA):
    """
    Message class 'TrafficSignTrackA'.

    Constants:
      NAME
      CONFIDENCE_3
      CONFIDENCE_2
      CONFIDENCE_1
      CONFIDENCE_0
      SIGN_TYPE_0
      SIGN_TYPE_1
      SIGN_TYPE_2
      SIGN_TYPE_3
      SIGN_TYPE_4
      SIGN_TYPE_5
      SIGN_TYPE_6
      SIGN_TYPE_7
      SIGN_TYPE_8
      SIGN_TYPE_9
      SIGN_TYPE_10
      SIGN_TYPE_11
      SIGN_TYPE_12
      SIGN_TYPE_13
      SIGN_TYPE_14
      SIGN_TYPE_15
      SIGN_TYPE_16
      SIGN_TYPE_17
    """

    __slots__ = [
        '_rolling_count',
        '_signobjectid',
        '_confidence',
        '_longpos',
        '_height_above_ground',
        '_latpos',
        '_sign_type',
        '_sign_value',
    ]

    _fields_and_field_types = {
        'rolling_count': 'uint8',
        'signobjectid': 'uint8',
        'confidence': 'uint8',
        'longpos': 'int16',
        'height_above_ground': 'uint8',
        'latpos': 'int16',
        'sign_type': 'uint8',
        'sign_value': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.rolling_count = kwargs.get(
            'rolling_count', TrafficSignTrackA.ROLLING_COUNT__DEFAULT)
        self.signobjectid = kwargs.get(
            'signobjectid', TrafficSignTrackA.SIGNOBJECTID__DEFAULT)
        self.confidence = kwargs.get(
            'confidence', TrafficSignTrackA.CONFIDENCE__DEFAULT)
        self.longpos = kwargs.get(
            'longpos', TrafficSignTrackA.LONGPOS__DEFAULT)
        self.height_above_ground = kwargs.get(
            'height_above_ground', TrafficSignTrackA.HEIGHT_ABOVE_GROUND__DEFAULT)
        self.latpos = kwargs.get(
            'latpos', TrafficSignTrackA.LATPOS__DEFAULT)
        self.sign_type = kwargs.get(
            'sign_type', TrafficSignTrackA.SIGN_TYPE__DEFAULT)
        self.sign_value = kwargs.get(
            'sign_value', TrafficSignTrackA.SIGN_VALUE__DEFAULT)

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
        if self.signobjectid != other.signobjectid:
            return False
        if self.confidence != other.confidence:
            return False
        if self.longpos != other.longpos:
            return False
        if self.height_above_ground != other.height_above_ground:
            return False
        if self.latpos != other.latpos:
            return False
        if self.sign_type != other.sign_type:
            return False
        if self.sign_value != other.sign_value:
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
    def signobjectid(self):
        """Message field 'signobjectid'."""
        return self._signobjectid

    @signobjectid.setter
    def signobjectid(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'signobjectid' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'signobjectid' field must be an unsigned integer in [0, 255]"
        self._signobjectid = value

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
    def height_above_ground(self):
        """Message field 'height_above_ground'."""
        return self._height_above_ground

    @height_above_ground.setter
    def height_above_ground(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'height_above_ground' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'height_above_ground' field must be an unsigned integer in [0, 255]"
        self._height_above_ground = value

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
    def sign_type(self):
        """Message field 'sign_type'."""
        return self._sign_type

    @sign_type.setter
    def sign_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'sign_type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'sign_type' field must be an unsigned integer in [0, 255]"
        self._sign_type = value

    @builtins.property
    def sign_value(self):
        """Message field 'sign_value'."""
        return self._sign_value

    @sign_value.setter
    def sign_value(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'sign_value' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'sign_value' field must be an unsigned integer in [0, 255]"
        self._sign_value = value
