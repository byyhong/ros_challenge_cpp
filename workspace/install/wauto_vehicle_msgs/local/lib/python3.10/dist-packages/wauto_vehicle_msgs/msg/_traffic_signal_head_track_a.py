# generated from rosidl_generator_py/resource/_idl.py.em
# with input from wauto_vehicle_msgs:msg/TrafficSignalHeadTrackA.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_TrafficSignalHeadTrackA(type):
    """Metaclass of message 'TrafficSignalHeadTrackA'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'NAME': 'TrafficSignalHead_TrackA',
        'CONFIDENCE_3': 3,
        'CONFIDENCE_2': 2,
        'CONFIDENCE_1': 1,
        'CONFIDENCE_0': 0,
        'SIGNAL_HEAD_TYPE_0': 0,
        'SIGNAL_HEAD_TYPE_1': 1,
        'SIGNAL_HEAD_TYPE_2': 2,
        'SIGNAL_HEAD_TYPE_3': 3,
        'SIGNAL_HEAD_TYPE_4': 4,
        'SIGNAL_HEAD_TYPE_5': 5,
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
                'wauto_vehicle_msgs.msg.TrafficSignalHeadTrackA')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__traffic_signal_head_track_a
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__traffic_signal_head_track_a
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__traffic_signal_head_track_a
            cls._TYPE_SUPPORT = module.type_support_msg__msg__traffic_signal_head_track_a
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__traffic_signal_head_track_a

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
            'SIGNAL_HEAD_TYPE_0': cls.__constants['SIGNAL_HEAD_TYPE_0'],
            'SIGNAL_HEAD_TYPE_1': cls.__constants['SIGNAL_HEAD_TYPE_1'],
            'SIGNAL_HEAD_TYPE_2': cls.__constants['SIGNAL_HEAD_TYPE_2'],
            'SIGNAL_HEAD_TYPE_3': cls.__constants['SIGNAL_HEAD_TYPE_3'],
            'SIGNAL_HEAD_TYPE_4': cls.__constants['SIGNAL_HEAD_TYPE_4'],
            'SIGNAL_HEAD_TYPE_5': cls.__constants['SIGNAL_HEAD_TYPE_5'],
            'ROLLING_COUNT__DEFAULT': 0,
            'SIGNALOBJECTID__DEFAULT': 0,
            'HEIGHT_ABOVE_GROUND__DEFAULT': 0,
            'LONGPOS__DEFAULT': 0,
            'LATPOS__DEFAULT': 0,
            'CONFIDENCE__DEFAULT': 0,
            'SIGNAL_HEAD_TYPE__DEFAULT': 0,
            'ILLUMLTNONE__DEFAULT': 0,
            'ILLUMLTREDBALL__DEFAULT': 0,
            'ILLUMLTYELLOWBALL__DEFAULT': 0,
            'ILLUMLTGREENBALL__DEFAULT': 0,
            'ILLUMLTFLSHNGREDBALL__DEFAULT': 0,
            'ILLUMLTFLSHNGYELLOWBALL__DEFAULT': 0,
            'ILLUMLTREDLEFTARROW__DEFAULT': 0,
            'ILLUMLTYELLOWLEFTARROW__DEFAULT': 0,
            'ILLUMLTGREENLEFTARROW__DEFAULT': 0,
            'ILLUMLTFLSHNGREDLEFTARROW__DEFAULT': 0,
            'ILLUMLTFLSHNGYELLOWLEFTARROW__DEFAULT': 0,
            'ILLUMLTREDRIGHTARROW__DEFAULT': 0,
            'ILLUMLTYELLOWRIGHTARROW__DEFAULT': 0,
            'ILLUMLTGREENRIGHTARROW__DEFAULT': 0,
            'ILLUMLTFLSHNGREDRIGHTARROW__DEFAULT': 0,
            'ILLUMLTFLSHNGYELLOWRIGHTARROW__DEFAULT': 0,
        }

    @property
    def NAME(self):
        """Message constant 'NAME'."""
        return Metaclass_TrafficSignalHeadTrackA.__constants['NAME']

    @property
    def CONFIDENCE_3(self):
        """Message constant 'CONFIDENCE_3'."""
        return Metaclass_TrafficSignalHeadTrackA.__constants['CONFIDENCE_3']

    @property
    def CONFIDENCE_2(self):
        """Message constant 'CONFIDENCE_2'."""
        return Metaclass_TrafficSignalHeadTrackA.__constants['CONFIDENCE_2']

    @property
    def CONFIDENCE_1(self):
        """Message constant 'CONFIDENCE_1'."""
        return Metaclass_TrafficSignalHeadTrackA.__constants['CONFIDENCE_1']

    @property
    def CONFIDENCE_0(self):
        """Message constant 'CONFIDENCE_0'."""
        return Metaclass_TrafficSignalHeadTrackA.__constants['CONFIDENCE_0']

    @property
    def SIGNAL_HEAD_TYPE_0(self):
        """Message constant 'SIGNAL_HEAD_TYPE_0'."""
        return Metaclass_TrafficSignalHeadTrackA.__constants['SIGNAL_HEAD_TYPE_0']

    @property
    def SIGNAL_HEAD_TYPE_1(self):
        """Message constant 'SIGNAL_HEAD_TYPE_1'."""
        return Metaclass_TrafficSignalHeadTrackA.__constants['SIGNAL_HEAD_TYPE_1']

    @property
    def SIGNAL_HEAD_TYPE_2(self):
        """Message constant 'SIGNAL_HEAD_TYPE_2'."""
        return Metaclass_TrafficSignalHeadTrackA.__constants['SIGNAL_HEAD_TYPE_2']

    @property
    def SIGNAL_HEAD_TYPE_3(self):
        """Message constant 'SIGNAL_HEAD_TYPE_3'."""
        return Metaclass_TrafficSignalHeadTrackA.__constants['SIGNAL_HEAD_TYPE_3']

    @property
    def SIGNAL_HEAD_TYPE_4(self):
        """Message constant 'SIGNAL_HEAD_TYPE_4'."""
        return Metaclass_TrafficSignalHeadTrackA.__constants['SIGNAL_HEAD_TYPE_4']

    @property
    def SIGNAL_HEAD_TYPE_5(self):
        """Message constant 'SIGNAL_HEAD_TYPE_5'."""
        return Metaclass_TrafficSignalHeadTrackA.__constants['SIGNAL_HEAD_TYPE_5']

    @property
    def ROLLING_COUNT__DEFAULT(cls):
        """Return default value for message field 'rolling_count'."""
        return 0

    @property
    def SIGNALOBJECTID__DEFAULT(cls):
        """Return default value for message field 'signalobjectid'."""
        return 0

    @property
    def HEIGHT_ABOVE_GROUND__DEFAULT(cls):
        """Return default value for message field 'height_above_ground'."""
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
    def CONFIDENCE__DEFAULT(cls):
        """Return default value for message field 'confidence'."""
        return 0

    @property
    def SIGNAL_HEAD_TYPE__DEFAULT(cls):
        """Return default value for message field 'signal_head_type'."""
        return 0

    @property
    def ILLUMLTNONE__DEFAULT(cls):
        """Return default value for message field 'illumltnone'."""
        return 0

    @property
    def ILLUMLTREDBALL__DEFAULT(cls):
        """Return default value for message field 'illumltredball'."""
        return 0

    @property
    def ILLUMLTYELLOWBALL__DEFAULT(cls):
        """Return default value for message field 'illumltyellowball'."""
        return 0

    @property
    def ILLUMLTGREENBALL__DEFAULT(cls):
        """Return default value for message field 'illumltgreenball'."""
        return 0

    @property
    def ILLUMLTFLSHNGREDBALL__DEFAULT(cls):
        """Return default value for message field 'illumltflshngredball'."""
        return 0

    @property
    def ILLUMLTFLSHNGYELLOWBALL__DEFAULT(cls):
        """Return default value for message field 'illumltflshngyellowball'."""
        return 0

    @property
    def ILLUMLTREDLEFTARROW__DEFAULT(cls):
        """Return default value for message field 'illumltredleftarrow'."""
        return 0

    @property
    def ILLUMLTYELLOWLEFTARROW__DEFAULT(cls):
        """Return default value for message field 'illumltyellowleftarrow'."""
        return 0

    @property
    def ILLUMLTGREENLEFTARROW__DEFAULT(cls):
        """Return default value for message field 'illumltgreenleftarrow'."""
        return 0

    @property
    def ILLUMLTFLSHNGREDLEFTARROW__DEFAULT(cls):
        """Return default value for message field 'illumltflshngredleftarrow'."""
        return 0

    @property
    def ILLUMLTFLSHNGYELLOWLEFTARROW__DEFAULT(cls):
        """Return default value for message field 'illumltflshngyellowleftarrow'."""
        return 0

    @property
    def ILLUMLTREDRIGHTARROW__DEFAULT(cls):
        """Return default value for message field 'illumltredrightarrow'."""
        return 0

    @property
    def ILLUMLTYELLOWRIGHTARROW__DEFAULT(cls):
        """Return default value for message field 'illumltyellowrightarrow'."""
        return 0

    @property
    def ILLUMLTGREENRIGHTARROW__DEFAULT(cls):
        """Return default value for message field 'illumltgreenrightarrow'."""
        return 0

    @property
    def ILLUMLTFLSHNGREDRIGHTARROW__DEFAULT(cls):
        """Return default value for message field 'illumltflshngredrightarrow'."""
        return 0

    @property
    def ILLUMLTFLSHNGYELLOWRIGHTARROW__DEFAULT(cls):
        """Return default value for message field 'illumltflshngyellowrightarrow'."""
        return 0


class TrafficSignalHeadTrackA(metaclass=Metaclass_TrafficSignalHeadTrackA):
    """
    Message class 'TrafficSignalHeadTrackA'.

    Constants:
      NAME
      CONFIDENCE_3
      CONFIDENCE_2
      CONFIDENCE_1
      CONFIDENCE_0
      SIGNAL_HEAD_TYPE_0
      SIGNAL_HEAD_TYPE_1
      SIGNAL_HEAD_TYPE_2
      SIGNAL_HEAD_TYPE_3
      SIGNAL_HEAD_TYPE_4
      SIGNAL_HEAD_TYPE_5
    """

    __slots__ = [
        '_rolling_count',
        '_signalobjectid',
        '_height_above_ground',
        '_longpos',
        '_latpos',
        '_confidence',
        '_signal_head_type',
        '_illumltnone',
        '_illumltredball',
        '_illumltyellowball',
        '_illumltgreenball',
        '_illumltflshngredball',
        '_illumltflshngyellowball',
        '_illumltredleftarrow',
        '_illumltyellowleftarrow',
        '_illumltgreenleftarrow',
        '_illumltflshngredleftarrow',
        '_illumltflshngyellowleftarrow',
        '_illumltredrightarrow',
        '_illumltyellowrightarrow',
        '_illumltgreenrightarrow',
        '_illumltflshngredrightarrow',
        '_illumltflshngyellowrightarrow',
    ]

    _fields_and_field_types = {
        'rolling_count': 'uint8',
        'signalobjectid': 'uint8',
        'height_above_ground': 'uint8',
        'longpos': 'int16',
        'latpos': 'int16',
        'confidence': 'uint8',
        'signal_head_type': 'uint8',
        'illumltnone': 'uint8',
        'illumltredball': 'uint8',
        'illumltyellowball': 'uint8',
        'illumltgreenball': 'uint8',
        'illumltflshngredball': 'uint8',
        'illumltflshngyellowball': 'uint8',
        'illumltredleftarrow': 'uint8',
        'illumltyellowleftarrow': 'uint8',
        'illumltgreenleftarrow': 'uint8',
        'illumltflshngredleftarrow': 'uint8',
        'illumltflshngyellowleftarrow': 'uint8',
        'illumltredrightarrow': 'uint8',
        'illumltyellowrightarrow': 'uint8',
        'illumltgreenrightarrow': 'uint8',
        'illumltflshngredrightarrow': 'uint8',
        'illumltflshngyellowrightarrow': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.rolling_count = kwargs.get(
            'rolling_count', TrafficSignalHeadTrackA.ROLLING_COUNT__DEFAULT)
        self.signalobjectid = kwargs.get(
            'signalobjectid', TrafficSignalHeadTrackA.SIGNALOBJECTID__DEFAULT)
        self.height_above_ground = kwargs.get(
            'height_above_ground', TrafficSignalHeadTrackA.HEIGHT_ABOVE_GROUND__DEFAULT)
        self.longpos = kwargs.get(
            'longpos', TrafficSignalHeadTrackA.LONGPOS__DEFAULT)
        self.latpos = kwargs.get(
            'latpos', TrafficSignalHeadTrackA.LATPOS__DEFAULT)
        self.confidence = kwargs.get(
            'confidence', TrafficSignalHeadTrackA.CONFIDENCE__DEFAULT)
        self.signal_head_type = kwargs.get(
            'signal_head_type', TrafficSignalHeadTrackA.SIGNAL_HEAD_TYPE__DEFAULT)
        self.illumltnone = kwargs.get(
            'illumltnone', TrafficSignalHeadTrackA.ILLUMLTNONE__DEFAULT)
        self.illumltredball = kwargs.get(
            'illumltredball', TrafficSignalHeadTrackA.ILLUMLTREDBALL__DEFAULT)
        self.illumltyellowball = kwargs.get(
            'illumltyellowball', TrafficSignalHeadTrackA.ILLUMLTYELLOWBALL__DEFAULT)
        self.illumltgreenball = kwargs.get(
            'illumltgreenball', TrafficSignalHeadTrackA.ILLUMLTGREENBALL__DEFAULT)
        self.illumltflshngredball = kwargs.get(
            'illumltflshngredball', TrafficSignalHeadTrackA.ILLUMLTFLSHNGREDBALL__DEFAULT)
        self.illumltflshngyellowball = kwargs.get(
            'illumltflshngyellowball', TrafficSignalHeadTrackA.ILLUMLTFLSHNGYELLOWBALL__DEFAULT)
        self.illumltredleftarrow = kwargs.get(
            'illumltredleftarrow', TrafficSignalHeadTrackA.ILLUMLTREDLEFTARROW__DEFAULT)
        self.illumltyellowleftarrow = kwargs.get(
            'illumltyellowleftarrow', TrafficSignalHeadTrackA.ILLUMLTYELLOWLEFTARROW__DEFAULT)
        self.illumltgreenleftarrow = kwargs.get(
            'illumltgreenleftarrow', TrafficSignalHeadTrackA.ILLUMLTGREENLEFTARROW__DEFAULT)
        self.illumltflshngredleftarrow = kwargs.get(
            'illumltflshngredleftarrow', TrafficSignalHeadTrackA.ILLUMLTFLSHNGREDLEFTARROW__DEFAULT)
        self.illumltflshngyellowleftarrow = kwargs.get(
            'illumltflshngyellowleftarrow', TrafficSignalHeadTrackA.ILLUMLTFLSHNGYELLOWLEFTARROW__DEFAULT)
        self.illumltredrightarrow = kwargs.get(
            'illumltredrightarrow', TrafficSignalHeadTrackA.ILLUMLTREDRIGHTARROW__DEFAULT)
        self.illumltyellowrightarrow = kwargs.get(
            'illumltyellowrightarrow', TrafficSignalHeadTrackA.ILLUMLTYELLOWRIGHTARROW__DEFAULT)
        self.illumltgreenrightarrow = kwargs.get(
            'illumltgreenrightarrow', TrafficSignalHeadTrackA.ILLUMLTGREENRIGHTARROW__DEFAULT)
        self.illumltflshngredrightarrow = kwargs.get(
            'illumltflshngredrightarrow', TrafficSignalHeadTrackA.ILLUMLTFLSHNGREDRIGHTARROW__DEFAULT)
        self.illumltflshngyellowrightarrow = kwargs.get(
            'illumltflshngyellowrightarrow', TrafficSignalHeadTrackA.ILLUMLTFLSHNGYELLOWRIGHTARROW__DEFAULT)

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
        if self.signalobjectid != other.signalobjectid:
            return False
        if self.height_above_ground != other.height_above_ground:
            return False
        if self.longpos != other.longpos:
            return False
        if self.latpos != other.latpos:
            return False
        if self.confidence != other.confidence:
            return False
        if self.signal_head_type != other.signal_head_type:
            return False
        if self.illumltnone != other.illumltnone:
            return False
        if self.illumltredball != other.illumltredball:
            return False
        if self.illumltyellowball != other.illumltyellowball:
            return False
        if self.illumltgreenball != other.illumltgreenball:
            return False
        if self.illumltflshngredball != other.illumltflshngredball:
            return False
        if self.illumltflshngyellowball != other.illumltflshngyellowball:
            return False
        if self.illumltredleftarrow != other.illumltredleftarrow:
            return False
        if self.illumltyellowleftarrow != other.illumltyellowleftarrow:
            return False
        if self.illumltgreenleftarrow != other.illumltgreenleftarrow:
            return False
        if self.illumltflshngredleftarrow != other.illumltflshngredleftarrow:
            return False
        if self.illumltflshngyellowleftarrow != other.illumltflshngyellowleftarrow:
            return False
        if self.illumltredrightarrow != other.illumltredrightarrow:
            return False
        if self.illumltyellowrightarrow != other.illumltyellowrightarrow:
            return False
        if self.illumltgreenrightarrow != other.illumltgreenrightarrow:
            return False
        if self.illumltflshngredrightarrow != other.illumltflshngredrightarrow:
            return False
        if self.illumltflshngyellowrightarrow != other.illumltflshngyellowrightarrow:
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
    def signalobjectid(self):
        """Message field 'signalobjectid'."""
        return self._signalobjectid

    @signalobjectid.setter
    def signalobjectid(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'signalobjectid' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'signalobjectid' field must be an unsigned integer in [0, 255]"
        self._signalobjectid = value

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
    def signal_head_type(self):
        """Message field 'signal_head_type'."""
        return self._signal_head_type

    @signal_head_type.setter
    def signal_head_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'signal_head_type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'signal_head_type' field must be an unsigned integer in [0, 255]"
        self._signal_head_type = value

    @builtins.property
    def illumltnone(self):
        """Message field 'illumltnone'."""
        return self._illumltnone

    @illumltnone.setter
    def illumltnone(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'illumltnone' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'illumltnone' field must be an unsigned integer in [0, 255]"
        self._illumltnone = value

    @builtins.property
    def illumltredball(self):
        """Message field 'illumltredball'."""
        return self._illumltredball

    @illumltredball.setter
    def illumltredball(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'illumltredball' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'illumltredball' field must be an unsigned integer in [0, 255]"
        self._illumltredball = value

    @builtins.property
    def illumltyellowball(self):
        """Message field 'illumltyellowball'."""
        return self._illumltyellowball

    @illumltyellowball.setter
    def illumltyellowball(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'illumltyellowball' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'illumltyellowball' field must be an unsigned integer in [0, 255]"
        self._illumltyellowball = value

    @builtins.property
    def illumltgreenball(self):
        """Message field 'illumltgreenball'."""
        return self._illumltgreenball

    @illumltgreenball.setter
    def illumltgreenball(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'illumltgreenball' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'illumltgreenball' field must be an unsigned integer in [0, 255]"
        self._illumltgreenball = value

    @builtins.property
    def illumltflshngredball(self):
        """Message field 'illumltflshngredball'."""
        return self._illumltflshngredball

    @illumltflshngredball.setter
    def illumltflshngredball(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'illumltflshngredball' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'illumltflshngredball' field must be an unsigned integer in [0, 255]"
        self._illumltflshngredball = value

    @builtins.property
    def illumltflshngyellowball(self):
        """Message field 'illumltflshngyellowball'."""
        return self._illumltflshngyellowball

    @illumltflshngyellowball.setter
    def illumltflshngyellowball(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'illumltflshngyellowball' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'illumltflshngyellowball' field must be an unsigned integer in [0, 255]"
        self._illumltflshngyellowball = value

    @builtins.property
    def illumltredleftarrow(self):
        """Message field 'illumltredleftarrow'."""
        return self._illumltredleftarrow

    @illumltredleftarrow.setter
    def illumltredleftarrow(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'illumltredleftarrow' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'illumltredleftarrow' field must be an unsigned integer in [0, 255]"
        self._illumltredleftarrow = value

    @builtins.property
    def illumltyellowleftarrow(self):
        """Message field 'illumltyellowleftarrow'."""
        return self._illumltyellowleftarrow

    @illumltyellowleftarrow.setter
    def illumltyellowleftarrow(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'illumltyellowleftarrow' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'illumltyellowleftarrow' field must be an unsigned integer in [0, 255]"
        self._illumltyellowleftarrow = value

    @builtins.property
    def illumltgreenleftarrow(self):
        """Message field 'illumltgreenleftarrow'."""
        return self._illumltgreenleftarrow

    @illumltgreenleftarrow.setter
    def illumltgreenleftarrow(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'illumltgreenleftarrow' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'illumltgreenleftarrow' field must be an unsigned integer in [0, 255]"
        self._illumltgreenleftarrow = value

    @builtins.property
    def illumltflshngredleftarrow(self):
        """Message field 'illumltflshngredleftarrow'."""
        return self._illumltflshngredleftarrow

    @illumltflshngredleftarrow.setter
    def illumltflshngredleftarrow(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'illumltflshngredleftarrow' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'illumltflshngredleftarrow' field must be an unsigned integer in [0, 255]"
        self._illumltflshngredleftarrow = value

    @builtins.property
    def illumltflshngyellowleftarrow(self):
        """Message field 'illumltflshngyellowleftarrow'."""
        return self._illumltflshngyellowleftarrow

    @illumltflshngyellowleftarrow.setter
    def illumltflshngyellowleftarrow(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'illumltflshngyellowleftarrow' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'illumltflshngyellowleftarrow' field must be an unsigned integer in [0, 255]"
        self._illumltflshngyellowleftarrow = value

    @builtins.property
    def illumltredrightarrow(self):
        """Message field 'illumltredrightarrow'."""
        return self._illumltredrightarrow

    @illumltredrightarrow.setter
    def illumltredrightarrow(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'illumltredrightarrow' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'illumltredrightarrow' field must be an unsigned integer in [0, 255]"
        self._illumltredrightarrow = value

    @builtins.property
    def illumltyellowrightarrow(self):
        """Message field 'illumltyellowrightarrow'."""
        return self._illumltyellowrightarrow

    @illumltyellowrightarrow.setter
    def illumltyellowrightarrow(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'illumltyellowrightarrow' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'illumltyellowrightarrow' field must be an unsigned integer in [0, 255]"
        self._illumltyellowrightarrow = value

    @builtins.property
    def illumltgreenrightarrow(self):
        """Message field 'illumltgreenrightarrow'."""
        return self._illumltgreenrightarrow

    @illumltgreenrightarrow.setter
    def illumltgreenrightarrow(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'illumltgreenrightarrow' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'illumltgreenrightarrow' field must be an unsigned integer in [0, 255]"
        self._illumltgreenrightarrow = value

    @builtins.property
    def illumltflshngredrightarrow(self):
        """Message field 'illumltflshngredrightarrow'."""
        return self._illumltflshngredrightarrow

    @illumltflshngredrightarrow.setter
    def illumltflshngredrightarrow(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'illumltflshngredrightarrow' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'illumltflshngredrightarrow' field must be an unsigned integer in [0, 255]"
        self._illumltflshngredrightarrow = value

    @builtins.property
    def illumltflshngyellowrightarrow(self):
        """Message field 'illumltflshngyellowrightarrow'."""
        return self._illumltflshngyellowrightarrow

    @illumltflshngyellowrightarrow.setter
    def illumltflshngyellowrightarrow(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'illumltflshngyellowrightarrow' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'illumltflshngyellowrightarrow' field must be an unsigned integer in [0, 255]"
        self._illumltflshngyellowrightarrow = value
