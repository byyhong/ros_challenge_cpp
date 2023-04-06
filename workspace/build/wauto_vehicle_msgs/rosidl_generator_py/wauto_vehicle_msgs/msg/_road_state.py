# generated from rosidl_generator_py/resource/_idl.py.em
# with input from wauto_vehicle_msgs:msg/RoadState.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_RoadState(type):
    """Metaclass of message 'RoadState'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'NAME': 'RoadState',
        'LLNDISTANCEVALID_1': 1,
        'LLNDISTANCEVALID_0': 0,
        'RLNDISTANCEVALID_1': 1,
        'RLNDISTANCEVALID_0': 0,
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
                'wauto_vehicle_msgs.msg.RoadState')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__road_state
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__road_state
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__road_state
            cls._TYPE_SUPPORT = module.type_support_msg__msg__road_state
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__road_state

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'NAME': cls.__constants['NAME'],
            'LLNDISTANCEVALID_1': cls.__constants['LLNDISTANCEVALID_1'],
            'LLNDISTANCEVALID_0': cls.__constants['LLNDISTANCEVALID_0'],
            'RLNDISTANCEVALID_1': cls.__constants['RLNDISTANCEVALID_1'],
            'RLNDISTANCEVALID_0': cls.__constants['RLNDISTANCEVALID_0'],
            'ROLLING_COUNT__DEFAULT': 0,
            'ACTIVE_TRAFFIC_SIGNAL_HEAD_ID__DEFAULT': 0,
            'CURRENT_OBSERVED_SPEED_LIMIT__DEFAULT': 0,
            'NEXT_OBSERVED_SPEED_LIMIT__DEFAULT': 0,
            'NEXT_OBSERVED_SPEED_LIMIT_LONGIT__DEFAULT': 0,
            'ACTIVE_LANE_NUMBER__DEFAULT': 0,
            'LEFT_LANE_MARKING_ID__DEFAULT': 0,
            'RIGHT_LANE_MARKING_ID__DEFAULT': 0,
            'LLNDISTANCEVALID__DEFAULT': 0,
            'DISTTOLLNEDGE__DEFAULT': 0,
            'RLNDISTANCEVALID__DEFAULT': 0,
            'DISTTORLNEDGE__DEFAULT': 0,
        }

    @property
    def NAME(self):
        """Message constant 'NAME'."""
        return Metaclass_RoadState.__constants['NAME']

    @property
    def LLNDISTANCEVALID_1(self):
        """Message constant 'LLNDISTANCEVALID_1'."""
        return Metaclass_RoadState.__constants['LLNDISTANCEVALID_1']

    @property
    def LLNDISTANCEVALID_0(self):
        """Message constant 'LLNDISTANCEVALID_0'."""
        return Metaclass_RoadState.__constants['LLNDISTANCEVALID_0']

    @property
    def RLNDISTANCEVALID_1(self):
        """Message constant 'RLNDISTANCEVALID_1'."""
        return Metaclass_RoadState.__constants['RLNDISTANCEVALID_1']

    @property
    def RLNDISTANCEVALID_0(self):
        """Message constant 'RLNDISTANCEVALID_0'."""
        return Metaclass_RoadState.__constants['RLNDISTANCEVALID_0']

    @property
    def ROLLING_COUNT__DEFAULT(cls):
        """Return default value for message field 'rolling_count'."""
        return 0

    @property
    def ACTIVE_TRAFFIC_SIGNAL_HEAD_ID__DEFAULT(cls):
        """Return default value for message field 'active_traffic_signal_head_id'."""
        return 0

    @property
    def CURRENT_OBSERVED_SPEED_LIMIT__DEFAULT(cls):
        """Return default value for message field 'current_observed_speed_limit'."""
        return 0

    @property
    def NEXT_OBSERVED_SPEED_LIMIT__DEFAULT(cls):
        """Return default value for message field 'next_observed_speed_limit'."""
        return 0

    @property
    def NEXT_OBSERVED_SPEED_LIMIT_LONGIT__DEFAULT(cls):
        """Return default value for message field 'next_observed_speed_limit_longit'."""
        return 0

    @property
    def ACTIVE_LANE_NUMBER__DEFAULT(cls):
        """Return default value for message field 'active_lane_number'."""
        return 0

    @property
    def LEFT_LANE_MARKING_ID__DEFAULT(cls):
        """Return default value for message field 'left_lane_marking_id'."""
        return 0

    @property
    def RIGHT_LANE_MARKING_ID__DEFAULT(cls):
        """Return default value for message field 'right_lane_marking_id'."""
        return 0

    @property
    def LLNDISTANCEVALID__DEFAULT(cls):
        """Return default value for message field 'llndistancevalid'."""
        return 0

    @property
    def DISTTOLLNEDGE__DEFAULT(cls):
        """Return default value for message field 'disttollnedge'."""
        return 0

    @property
    def RLNDISTANCEVALID__DEFAULT(cls):
        """Return default value for message field 'rlndistancevalid'."""
        return 0

    @property
    def DISTTORLNEDGE__DEFAULT(cls):
        """Return default value for message field 'disttorlnedge'."""
        return 0


class RoadState(metaclass=Metaclass_RoadState):
    """
    Message class 'RoadState'.

    Constants:
      NAME
      LLNDISTANCEVALID_1
      LLNDISTANCEVALID_0
      RLNDISTANCEVALID_1
      RLNDISTANCEVALID_0
    """

    __slots__ = [
        '_rolling_count',
        '_active_traffic_signal_head_id',
        '_current_observed_speed_limit',
        '_next_observed_speed_limit',
        '_next_observed_speed_limit_longit',
        '_active_lane_number',
        '_left_lane_marking_id',
        '_right_lane_marking_id',
        '_llndistancevalid',
        '_disttollnedge',
        '_rlndistancevalid',
        '_disttorlnedge',
    ]

    _fields_and_field_types = {
        'rolling_count': 'uint8',
        'active_traffic_signal_head_id': 'uint8',
        'current_observed_speed_limit': 'uint8',
        'next_observed_speed_limit': 'uint8',
        'next_observed_speed_limit_longit': 'uint8',
        'active_lane_number': 'uint8',
        'left_lane_marking_id': 'uint8',
        'right_lane_marking_id': 'uint8',
        'llndistancevalid': 'uint8',
        'disttollnedge': 'uint8',
        'rlndistancevalid': 'uint8',
        'disttorlnedge': 'uint8',
    }

    SLOT_TYPES = (
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
            'rolling_count', RoadState.ROLLING_COUNT__DEFAULT)
        self.active_traffic_signal_head_id = kwargs.get(
            'active_traffic_signal_head_id', RoadState.ACTIVE_TRAFFIC_SIGNAL_HEAD_ID__DEFAULT)
        self.current_observed_speed_limit = kwargs.get(
            'current_observed_speed_limit', RoadState.CURRENT_OBSERVED_SPEED_LIMIT__DEFAULT)
        self.next_observed_speed_limit = kwargs.get(
            'next_observed_speed_limit', RoadState.NEXT_OBSERVED_SPEED_LIMIT__DEFAULT)
        self.next_observed_speed_limit_longit = kwargs.get(
            'next_observed_speed_limit_longit', RoadState.NEXT_OBSERVED_SPEED_LIMIT_LONGIT__DEFAULT)
        self.active_lane_number = kwargs.get(
            'active_lane_number', RoadState.ACTIVE_LANE_NUMBER__DEFAULT)
        self.left_lane_marking_id = kwargs.get(
            'left_lane_marking_id', RoadState.LEFT_LANE_MARKING_ID__DEFAULT)
        self.right_lane_marking_id = kwargs.get(
            'right_lane_marking_id', RoadState.RIGHT_LANE_MARKING_ID__DEFAULT)
        self.llndistancevalid = kwargs.get(
            'llndistancevalid', RoadState.LLNDISTANCEVALID__DEFAULT)
        self.disttollnedge = kwargs.get(
            'disttollnedge', RoadState.DISTTOLLNEDGE__DEFAULT)
        self.rlndistancevalid = kwargs.get(
            'rlndistancevalid', RoadState.RLNDISTANCEVALID__DEFAULT)
        self.disttorlnedge = kwargs.get(
            'disttorlnedge', RoadState.DISTTORLNEDGE__DEFAULT)

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
        if self.active_traffic_signal_head_id != other.active_traffic_signal_head_id:
            return False
        if self.current_observed_speed_limit != other.current_observed_speed_limit:
            return False
        if self.next_observed_speed_limit != other.next_observed_speed_limit:
            return False
        if self.next_observed_speed_limit_longit != other.next_observed_speed_limit_longit:
            return False
        if self.active_lane_number != other.active_lane_number:
            return False
        if self.left_lane_marking_id != other.left_lane_marking_id:
            return False
        if self.right_lane_marking_id != other.right_lane_marking_id:
            return False
        if self.llndistancevalid != other.llndistancevalid:
            return False
        if self.disttollnedge != other.disttollnedge:
            return False
        if self.rlndistancevalid != other.rlndistancevalid:
            return False
        if self.disttorlnedge != other.disttorlnedge:
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
    def active_traffic_signal_head_id(self):
        """Message field 'active_traffic_signal_head_id'."""
        return self._active_traffic_signal_head_id

    @active_traffic_signal_head_id.setter
    def active_traffic_signal_head_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'active_traffic_signal_head_id' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'active_traffic_signal_head_id' field must be an unsigned integer in [0, 255]"
        self._active_traffic_signal_head_id = value

    @builtins.property
    def current_observed_speed_limit(self):
        """Message field 'current_observed_speed_limit'."""
        return self._current_observed_speed_limit

    @current_observed_speed_limit.setter
    def current_observed_speed_limit(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'current_observed_speed_limit' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'current_observed_speed_limit' field must be an unsigned integer in [0, 255]"
        self._current_observed_speed_limit = value

    @builtins.property
    def next_observed_speed_limit(self):
        """Message field 'next_observed_speed_limit'."""
        return self._next_observed_speed_limit

    @next_observed_speed_limit.setter
    def next_observed_speed_limit(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'next_observed_speed_limit' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'next_observed_speed_limit' field must be an unsigned integer in [0, 255]"
        self._next_observed_speed_limit = value

    @builtins.property
    def next_observed_speed_limit_longit(self):
        """Message field 'next_observed_speed_limit_longit'."""
        return self._next_observed_speed_limit_longit

    @next_observed_speed_limit_longit.setter
    def next_observed_speed_limit_longit(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'next_observed_speed_limit_longit' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'next_observed_speed_limit_longit' field must be an unsigned integer in [0, 255]"
        self._next_observed_speed_limit_longit = value

    @builtins.property
    def active_lane_number(self):
        """Message field 'active_lane_number'."""
        return self._active_lane_number

    @active_lane_number.setter
    def active_lane_number(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'active_lane_number' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'active_lane_number' field must be an unsigned integer in [0, 255]"
        self._active_lane_number = value

    @builtins.property
    def left_lane_marking_id(self):
        """Message field 'left_lane_marking_id'."""
        return self._left_lane_marking_id

    @left_lane_marking_id.setter
    def left_lane_marking_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'left_lane_marking_id' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'left_lane_marking_id' field must be an unsigned integer in [0, 255]"
        self._left_lane_marking_id = value

    @builtins.property
    def right_lane_marking_id(self):
        """Message field 'right_lane_marking_id'."""
        return self._right_lane_marking_id

    @right_lane_marking_id.setter
    def right_lane_marking_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'right_lane_marking_id' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'right_lane_marking_id' field must be an unsigned integer in [0, 255]"
        self._right_lane_marking_id = value

    @builtins.property
    def llndistancevalid(self):
        """Message field 'llndistancevalid'."""
        return self._llndistancevalid

    @llndistancevalid.setter
    def llndistancevalid(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'llndistancevalid' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'llndistancevalid' field must be an unsigned integer in [0, 255]"
        self._llndistancevalid = value

    @builtins.property
    def disttollnedge(self):
        """Message field 'disttollnedge'."""
        return self._disttollnedge

    @disttollnedge.setter
    def disttollnedge(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'disttollnedge' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'disttollnedge' field must be an unsigned integer in [0, 255]"
        self._disttollnedge = value

    @builtins.property
    def rlndistancevalid(self):
        """Message field 'rlndistancevalid'."""
        return self._rlndistancevalid

    @rlndistancevalid.setter
    def rlndistancevalid(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'rlndistancevalid' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'rlndistancevalid' field must be an unsigned integer in [0, 255]"
        self._rlndistancevalid = value

    @builtins.property
    def disttorlnedge(self):
        """Message field 'disttorlnedge'."""
        return self._disttorlnedge

    @disttorlnedge.setter
    def disttorlnedge(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'disttorlnedge' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'disttorlnedge' field must be an unsigned integer in [0, 255]"
        self._disttorlnedge = value
