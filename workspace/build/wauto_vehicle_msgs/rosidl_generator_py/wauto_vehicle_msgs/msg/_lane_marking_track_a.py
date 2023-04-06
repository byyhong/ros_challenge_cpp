# generated from rosidl_generator_py/resource/_idl.py.em
# with input from wauto_vehicle_msgs:msg/LaneMarkingTrackA.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_LaneMarkingTrackA(type):
    """Metaclass of message 'LaneMarkingTrackA'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'NAME': 'LaneMarking_TrackA',
        'LANEMARKINGLNHDNGTNGTV_1': 1,
        'LANEMARKINGLNHDNGTNGTV_0': 0,
        'LANEMARKINGLNDSTV_1': 1,
        'LANEMARKINGLNDSTV_0': 0,
        'LANEMARKINGLNCRVTV_1': 1,
        'LANEMARKINGLNCRVTV_0': 0,
        'LANEMARKINGLNCRVTGRADV_1': 1,
        'LANEMARKINGLNCRVTGRADV_0': 0,
        'LANEMARKINGLNMRKRTYP_0': 0,
        'LANEMARKINGLNMRKRTYP_1': 1,
        'LANEMARKINGLNMRKRTYP_2': 2,
        'LANEMARKINGLNMRKRTYP_3': 3,
        'LANEMARKINGLNMRKRTYP_4': 4,
        'LANEMARKINGLNMRKRTYP_5': 5,
        'LANEMARKINGLNMRKRTYP_6': 6,
        'LANEMARKINGCOLOR_0': 0,
        'LANEMARKINGCOLOR_1': 1,
        'LANEMARKINGCOLOR_2': 2,
        'LANEMARKINGCOLOR_3': 3,
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
                'wauto_vehicle_msgs.msg.LaneMarkingTrackA')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__lane_marking_track_a
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__lane_marking_track_a
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__lane_marking_track_a
            cls._TYPE_SUPPORT = module.type_support_msg__msg__lane_marking_track_a
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__lane_marking_track_a

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'NAME': cls.__constants['NAME'],
            'LANEMARKINGLNHDNGTNGTV_1': cls.__constants['LANEMARKINGLNHDNGTNGTV_1'],
            'LANEMARKINGLNHDNGTNGTV_0': cls.__constants['LANEMARKINGLNHDNGTNGTV_0'],
            'LANEMARKINGLNDSTV_1': cls.__constants['LANEMARKINGLNDSTV_1'],
            'LANEMARKINGLNDSTV_0': cls.__constants['LANEMARKINGLNDSTV_0'],
            'LANEMARKINGLNCRVTV_1': cls.__constants['LANEMARKINGLNCRVTV_1'],
            'LANEMARKINGLNCRVTV_0': cls.__constants['LANEMARKINGLNCRVTV_0'],
            'LANEMARKINGLNCRVTGRADV_1': cls.__constants['LANEMARKINGLNCRVTGRADV_1'],
            'LANEMARKINGLNCRVTGRADV_0': cls.__constants['LANEMARKINGLNCRVTGRADV_0'],
            'LANEMARKINGLNMRKRTYP_0': cls.__constants['LANEMARKINGLNMRKRTYP_0'],
            'LANEMARKINGLNMRKRTYP_1': cls.__constants['LANEMARKINGLNMRKRTYP_1'],
            'LANEMARKINGLNMRKRTYP_2': cls.__constants['LANEMARKINGLNMRKRTYP_2'],
            'LANEMARKINGLNMRKRTYP_3': cls.__constants['LANEMARKINGLNMRKRTYP_3'],
            'LANEMARKINGLNMRKRTYP_4': cls.__constants['LANEMARKINGLNMRKRTYP_4'],
            'LANEMARKINGLNMRKRTYP_5': cls.__constants['LANEMARKINGLNMRKRTYP_5'],
            'LANEMARKINGLNMRKRTYP_6': cls.__constants['LANEMARKINGLNMRKRTYP_6'],
            'LANEMARKINGCOLOR_0': cls.__constants['LANEMARKINGCOLOR_0'],
            'LANEMARKINGCOLOR_1': cls.__constants['LANEMARKINGCOLOR_1'],
            'LANEMARKINGCOLOR_2': cls.__constants['LANEMARKINGCOLOR_2'],
            'LANEMARKINGCOLOR_3': cls.__constants['LANEMARKINGCOLOR_3'],
            'ROLLING_COUNT__DEFAULT': 0,
            'LANEMARKINGID__DEFAULT': 0,
            'LANEMARKINGLNHDNGTNGTV__DEFAULT': 0,
            'LANEMARKINGLNHDNGTNGT__DEFAULT': 0,
            'LANEMARKINGLNDSTV__DEFAULT': 0,
            'LANEMARKINGLNDST__DEFAULT': 0,
            'LANEMARKINGLNCRVTV__DEFAULT': 0,
            'LANEMARKINGLNCRVTGRADV__DEFAULT': 0,
            'LANEMARKINGLNCRVTGRAD__DEFAULT': 0,
            'LANEMARKINGLNCRVT__DEFAULT': 0,
            'LANEMARKINGLNQLTYCONFLVL__DEFAULT': 0,
            'LANEMARKINGLNMRKRTYP__DEFAULT': 0,
            'LANEMARKINGCOLOR__DEFAULT': 0,
        }

    @property
    def NAME(self):
        """Message constant 'NAME'."""
        return Metaclass_LaneMarkingTrackA.__constants['NAME']

    @property
    def LANEMARKINGLNHDNGTNGTV_1(self):
        """Message constant 'LANEMARKINGLNHDNGTNGTV_1'."""
        return Metaclass_LaneMarkingTrackA.__constants['LANEMARKINGLNHDNGTNGTV_1']

    @property
    def LANEMARKINGLNHDNGTNGTV_0(self):
        """Message constant 'LANEMARKINGLNHDNGTNGTV_0'."""
        return Metaclass_LaneMarkingTrackA.__constants['LANEMARKINGLNHDNGTNGTV_0']

    @property
    def LANEMARKINGLNDSTV_1(self):
        """Message constant 'LANEMARKINGLNDSTV_1'."""
        return Metaclass_LaneMarkingTrackA.__constants['LANEMARKINGLNDSTV_1']

    @property
    def LANEMARKINGLNDSTV_0(self):
        """Message constant 'LANEMARKINGLNDSTV_0'."""
        return Metaclass_LaneMarkingTrackA.__constants['LANEMARKINGLNDSTV_0']

    @property
    def LANEMARKINGLNCRVTV_1(self):
        """Message constant 'LANEMARKINGLNCRVTV_1'."""
        return Metaclass_LaneMarkingTrackA.__constants['LANEMARKINGLNCRVTV_1']

    @property
    def LANEMARKINGLNCRVTV_0(self):
        """Message constant 'LANEMARKINGLNCRVTV_0'."""
        return Metaclass_LaneMarkingTrackA.__constants['LANEMARKINGLNCRVTV_0']

    @property
    def LANEMARKINGLNCRVTGRADV_1(self):
        """Message constant 'LANEMARKINGLNCRVTGRADV_1'."""
        return Metaclass_LaneMarkingTrackA.__constants['LANEMARKINGLNCRVTGRADV_1']

    @property
    def LANEMARKINGLNCRVTGRADV_0(self):
        """Message constant 'LANEMARKINGLNCRVTGRADV_0'."""
        return Metaclass_LaneMarkingTrackA.__constants['LANEMARKINGLNCRVTGRADV_0']

    @property
    def LANEMARKINGLNMRKRTYP_0(self):
        """Message constant 'LANEMARKINGLNMRKRTYP_0'."""
        return Metaclass_LaneMarkingTrackA.__constants['LANEMARKINGLNMRKRTYP_0']

    @property
    def LANEMARKINGLNMRKRTYP_1(self):
        """Message constant 'LANEMARKINGLNMRKRTYP_1'."""
        return Metaclass_LaneMarkingTrackA.__constants['LANEMARKINGLNMRKRTYP_1']

    @property
    def LANEMARKINGLNMRKRTYP_2(self):
        """Message constant 'LANEMARKINGLNMRKRTYP_2'."""
        return Metaclass_LaneMarkingTrackA.__constants['LANEMARKINGLNMRKRTYP_2']

    @property
    def LANEMARKINGLNMRKRTYP_3(self):
        """Message constant 'LANEMARKINGLNMRKRTYP_3'."""
        return Metaclass_LaneMarkingTrackA.__constants['LANEMARKINGLNMRKRTYP_3']

    @property
    def LANEMARKINGLNMRKRTYP_4(self):
        """Message constant 'LANEMARKINGLNMRKRTYP_4'."""
        return Metaclass_LaneMarkingTrackA.__constants['LANEMARKINGLNMRKRTYP_4']

    @property
    def LANEMARKINGLNMRKRTYP_5(self):
        """Message constant 'LANEMARKINGLNMRKRTYP_5'."""
        return Metaclass_LaneMarkingTrackA.__constants['LANEMARKINGLNMRKRTYP_5']

    @property
    def LANEMARKINGLNMRKRTYP_6(self):
        """Message constant 'LANEMARKINGLNMRKRTYP_6'."""
        return Metaclass_LaneMarkingTrackA.__constants['LANEMARKINGLNMRKRTYP_6']

    @property
    def LANEMARKINGCOLOR_0(self):
        """Message constant 'LANEMARKINGCOLOR_0'."""
        return Metaclass_LaneMarkingTrackA.__constants['LANEMARKINGCOLOR_0']

    @property
    def LANEMARKINGCOLOR_1(self):
        """Message constant 'LANEMARKINGCOLOR_1'."""
        return Metaclass_LaneMarkingTrackA.__constants['LANEMARKINGCOLOR_1']

    @property
    def LANEMARKINGCOLOR_2(self):
        """Message constant 'LANEMARKINGCOLOR_2'."""
        return Metaclass_LaneMarkingTrackA.__constants['LANEMARKINGCOLOR_2']

    @property
    def LANEMARKINGCOLOR_3(self):
        """Message constant 'LANEMARKINGCOLOR_3'."""
        return Metaclass_LaneMarkingTrackA.__constants['LANEMARKINGCOLOR_3']

    @property
    def ROLLING_COUNT__DEFAULT(cls):
        """Return default value for message field 'rolling_count'."""
        return 0

    @property
    def LANEMARKINGID__DEFAULT(cls):
        """Return default value for message field 'lanemarkingid'."""
        return 0

    @property
    def LANEMARKINGLNHDNGTNGTV__DEFAULT(cls):
        """Return default value for message field 'lanemarkinglnhdngtngtv'."""
        return 0

    @property
    def LANEMARKINGLNHDNGTNGT__DEFAULT(cls):
        """Return default value for message field 'lanemarkinglnhdngtngt'."""
        return 0

    @property
    def LANEMARKINGLNDSTV__DEFAULT(cls):
        """Return default value for message field 'lanemarkinglndstv'."""
        return 0

    @property
    def LANEMARKINGLNDST__DEFAULT(cls):
        """Return default value for message field 'lanemarkinglndst'."""
        return 0

    @property
    def LANEMARKINGLNCRVTV__DEFAULT(cls):
        """Return default value for message field 'lanemarkinglncrvtv'."""
        return 0

    @property
    def LANEMARKINGLNCRVTGRADV__DEFAULT(cls):
        """Return default value for message field 'lanemarkinglncrvtgradv'."""
        return 0

    @property
    def LANEMARKINGLNCRVTGRAD__DEFAULT(cls):
        """Return default value for message field 'lanemarkinglncrvtgrad'."""
        return 0

    @property
    def LANEMARKINGLNCRVT__DEFAULT(cls):
        """Return default value for message field 'lanemarkinglncrvt'."""
        return 0

    @property
    def LANEMARKINGLNQLTYCONFLVL__DEFAULT(cls):
        """Return default value for message field 'lanemarkinglnqltyconflvl'."""
        return 0

    @property
    def LANEMARKINGLNMRKRTYP__DEFAULT(cls):
        """Return default value for message field 'lanemarkinglnmrkrtyp'."""
        return 0

    @property
    def LANEMARKINGCOLOR__DEFAULT(cls):
        """Return default value for message field 'lanemarkingcolor'."""
        return 0


class LaneMarkingTrackA(metaclass=Metaclass_LaneMarkingTrackA):
    """
    Message class 'LaneMarkingTrackA'.

    Constants:
      NAME
      LANEMARKINGLNHDNGTNGTV_1
      LANEMARKINGLNHDNGTNGTV_0
      LANEMARKINGLNDSTV_1
      LANEMARKINGLNDSTV_0
      LANEMARKINGLNCRVTV_1
      LANEMARKINGLNCRVTV_0
      LANEMARKINGLNCRVTGRADV_1
      LANEMARKINGLNCRVTGRADV_0
      LANEMARKINGLNMRKRTYP_0
      LANEMARKINGLNMRKRTYP_1
      LANEMARKINGLNMRKRTYP_2
      LANEMARKINGLNMRKRTYP_3
      LANEMARKINGLNMRKRTYP_4
      LANEMARKINGLNMRKRTYP_5
      LANEMARKINGLNMRKRTYP_6
      LANEMARKINGCOLOR_0
      LANEMARKINGCOLOR_1
      LANEMARKINGCOLOR_2
      LANEMARKINGCOLOR_3
    """

    __slots__ = [
        '_rolling_count',
        '_lanemarkingid',
        '_lanemarkinglnhdngtngtv',
        '_lanemarkinglnhdngtngt',
        '_lanemarkinglndstv',
        '_lanemarkinglndst',
        '_lanemarkinglncrvtv',
        '_lanemarkinglncrvtgradv',
        '_lanemarkinglncrvtgrad',
        '_lanemarkinglncrvt',
        '_lanemarkinglnqltyconflvl',
        '_lanemarkinglnmrkrtyp',
        '_lanemarkingcolor',
    ]

    _fields_and_field_types = {
        'rolling_count': 'uint8',
        'lanemarkingid': 'uint8',
        'lanemarkinglnhdngtngtv': 'uint8',
        'lanemarkinglnhdngtngt': 'int8',
        'lanemarkinglndstv': 'uint8',
        'lanemarkinglndst': 'int8',
        'lanemarkinglncrvtv': 'uint8',
        'lanemarkinglncrvtgradv': 'uint8',
        'lanemarkinglncrvtgrad': 'int16',
        'lanemarkinglncrvt': 'int16',
        'lanemarkinglnqltyconflvl': 'uint8',
        'lanemarkinglnmrkrtyp': 'uint8',
        'lanemarkingcolor': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.rolling_count = kwargs.get(
            'rolling_count', LaneMarkingTrackA.ROLLING_COUNT__DEFAULT)
        self.lanemarkingid = kwargs.get(
            'lanemarkingid', LaneMarkingTrackA.LANEMARKINGID__DEFAULT)
        self.lanemarkinglnhdngtngtv = kwargs.get(
            'lanemarkinglnhdngtngtv', LaneMarkingTrackA.LANEMARKINGLNHDNGTNGTV__DEFAULT)
        self.lanemarkinglnhdngtngt = kwargs.get(
            'lanemarkinglnhdngtngt', LaneMarkingTrackA.LANEMARKINGLNHDNGTNGT__DEFAULT)
        self.lanemarkinglndstv = kwargs.get(
            'lanemarkinglndstv', LaneMarkingTrackA.LANEMARKINGLNDSTV__DEFAULT)
        self.lanemarkinglndst = kwargs.get(
            'lanemarkinglndst', LaneMarkingTrackA.LANEMARKINGLNDST__DEFAULT)
        self.lanemarkinglncrvtv = kwargs.get(
            'lanemarkinglncrvtv', LaneMarkingTrackA.LANEMARKINGLNCRVTV__DEFAULT)
        self.lanemarkinglncrvtgradv = kwargs.get(
            'lanemarkinglncrvtgradv', LaneMarkingTrackA.LANEMARKINGLNCRVTGRADV__DEFAULT)
        self.lanemarkinglncrvtgrad = kwargs.get(
            'lanemarkinglncrvtgrad', LaneMarkingTrackA.LANEMARKINGLNCRVTGRAD__DEFAULT)
        self.lanemarkinglncrvt = kwargs.get(
            'lanemarkinglncrvt', LaneMarkingTrackA.LANEMARKINGLNCRVT__DEFAULT)
        self.lanemarkinglnqltyconflvl = kwargs.get(
            'lanemarkinglnqltyconflvl', LaneMarkingTrackA.LANEMARKINGLNQLTYCONFLVL__DEFAULT)
        self.lanemarkinglnmrkrtyp = kwargs.get(
            'lanemarkinglnmrkrtyp', LaneMarkingTrackA.LANEMARKINGLNMRKRTYP__DEFAULT)
        self.lanemarkingcolor = kwargs.get(
            'lanemarkingcolor', LaneMarkingTrackA.LANEMARKINGCOLOR__DEFAULT)

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
        if self.lanemarkingid != other.lanemarkingid:
            return False
        if self.lanemarkinglnhdngtngtv != other.lanemarkinglnhdngtngtv:
            return False
        if self.lanemarkinglnhdngtngt != other.lanemarkinglnhdngtngt:
            return False
        if self.lanemarkinglndstv != other.lanemarkinglndstv:
            return False
        if self.lanemarkinglndst != other.lanemarkinglndst:
            return False
        if self.lanemarkinglncrvtv != other.lanemarkinglncrvtv:
            return False
        if self.lanemarkinglncrvtgradv != other.lanemarkinglncrvtgradv:
            return False
        if self.lanemarkinglncrvtgrad != other.lanemarkinglncrvtgrad:
            return False
        if self.lanemarkinglncrvt != other.lanemarkinglncrvt:
            return False
        if self.lanemarkinglnqltyconflvl != other.lanemarkinglnqltyconflvl:
            return False
        if self.lanemarkinglnmrkrtyp != other.lanemarkinglnmrkrtyp:
            return False
        if self.lanemarkingcolor != other.lanemarkingcolor:
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
    def lanemarkingid(self):
        """Message field 'lanemarkingid'."""
        return self._lanemarkingid

    @lanemarkingid.setter
    def lanemarkingid(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'lanemarkingid' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'lanemarkingid' field must be an unsigned integer in [0, 255]"
        self._lanemarkingid = value

    @builtins.property
    def lanemarkinglnhdngtngtv(self):
        """Message field 'lanemarkinglnhdngtngtv'."""
        return self._lanemarkinglnhdngtngtv

    @lanemarkinglnhdngtngtv.setter
    def lanemarkinglnhdngtngtv(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'lanemarkinglnhdngtngtv' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'lanemarkinglnhdngtngtv' field must be an unsigned integer in [0, 255]"
        self._lanemarkinglnhdngtngtv = value

    @builtins.property
    def lanemarkinglnhdngtngt(self):
        """Message field 'lanemarkinglnhdngtngt'."""
        return self._lanemarkinglnhdngtngt

    @lanemarkinglnhdngtngt.setter
    def lanemarkinglnhdngtngt(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'lanemarkinglnhdngtngt' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'lanemarkinglnhdngtngt' field must be an integer in [-128, 127]"
        self._lanemarkinglnhdngtngt = value

    @builtins.property
    def lanemarkinglndstv(self):
        """Message field 'lanemarkinglndstv'."""
        return self._lanemarkinglndstv

    @lanemarkinglndstv.setter
    def lanemarkinglndstv(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'lanemarkinglndstv' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'lanemarkinglndstv' field must be an unsigned integer in [0, 255]"
        self._lanemarkinglndstv = value

    @builtins.property
    def lanemarkinglndst(self):
        """Message field 'lanemarkinglndst'."""
        return self._lanemarkinglndst

    @lanemarkinglndst.setter
    def lanemarkinglndst(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'lanemarkinglndst' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'lanemarkinglndst' field must be an integer in [-128, 127]"
        self._lanemarkinglndst = value

    @builtins.property
    def lanemarkinglncrvtv(self):
        """Message field 'lanemarkinglncrvtv'."""
        return self._lanemarkinglncrvtv

    @lanemarkinglncrvtv.setter
    def lanemarkinglncrvtv(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'lanemarkinglncrvtv' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'lanemarkinglncrvtv' field must be an unsigned integer in [0, 255]"
        self._lanemarkinglncrvtv = value

    @builtins.property
    def lanemarkinglncrvtgradv(self):
        """Message field 'lanemarkinglncrvtgradv'."""
        return self._lanemarkinglncrvtgradv

    @lanemarkinglncrvtgradv.setter
    def lanemarkinglncrvtgradv(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'lanemarkinglncrvtgradv' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'lanemarkinglncrvtgradv' field must be an unsigned integer in [0, 255]"
        self._lanemarkinglncrvtgradv = value

    @builtins.property
    def lanemarkinglncrvtgrad(self):
        """Message field 'lanemarkinglncrvtgrad'."""
        return self._lanemarkinglncrvtgrad

    @lanemarkinglncrvtgrad.setter
    def lanemarkinglncrvtgrad(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'lanemarkinglncrvtgrad' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'lanemarkinglncrvtgrad' field must be an integer in [-32768, 32767]"
        self._lanemarkinglncrvtgrad = value

    @builtins.property
    def lanemarkinglncrvt(self):
        """Message field 'lanemarkinglncrvt'."""
        return self._lanemarkinglncrvt

    @lanemarkinglncrvt.setter
    def lanemarkinglncrvt(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'lanemarkinglncrvt' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'lanemarkinglncrvt' field must be an integer in [-32768, 32767]"
        self._lanemarkinglncrvt = value

    @builtins.property
    def lanemarkinglnqltyconflvl(self):
        """Message field 'lanemarkinglnqltyconflvl'."""
        return self._lanemarkinglnqltyconflvl

    @lanemarkinglnqltyconflvl.setter
    def lanemarkinglnqltyconflvl(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'lanemarkinglnqltyconflvl' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'lanemarkinglnqltyconflvl' field must be an unsigned integer in [0, 255]"
        self._lanemarkinglnqltyconflvl = value

    @builtins.property
    def lanemarkinglnmrkrtyp(self):
        """Message field 'lanemarkinglnmrkrtyp'."""
        return self._lanemarkinglnmrkrtyp

    @lanemarkinglnmrkrtyp.setter
    def lanemarkinglnmrkrtyp(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'lanemarkinglnmrkrtyp' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'lanemarkinglnmrkrtyp' field must be an unsigned integer in [0, 255]"
        self._lanemarkinglnmrkrtyp = value

    @builtins.property
    def lanemarkingcolor(self):
        """Message field 'lanemarkingcolor'."""
        return self._lanemarkingcolor

    @lanemarkingcolor.setter
    def lanemarkingcolor(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'lanemarkingcolor' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'lanemarkingcolor' field must be an unsigned integer in [0, 255]"
        self._lanemarkingcolor = value
