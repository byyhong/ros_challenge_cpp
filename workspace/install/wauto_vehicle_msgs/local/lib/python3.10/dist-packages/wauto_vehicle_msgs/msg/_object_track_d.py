# generated from rosidl_generator_py/resource/_idl.py.em
# with input from wauto_vehicle_msgs:msg/ObjectTrackD.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ObjectTrackD(type):
    """Metaclass of message 'ObjectTrackD'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'NAME': 'Object_TrackD',
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
                'wauto_vehicle_msgs.msg.ObjectTrackD')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__object_track_d
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__object_track_d
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__object_track_d
            cls._TYPE_SUPPORT = module.type_support_msg__msg__object_track_d
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__object_track_d

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'NAME': cls.__constants['NAME'],
            'ROLLING_COUNT__DEFAULT': 0,
            'OBJOBJECTID__DEFAULT': 0,
            'OBJECT_LONGITUDE__DEFAULT': 0,
        }

    @property
    def NAME(self):
        """Message constant 'NAME'."""
        return Metaclass_ObjectTrackD.__constants['NAME']

    @property
    def ROLLING_COUNT__DEFAULT(cls):
        """Return default value for message field 'rolling_count'."""
        return 0

    @property
    def OBJOBJECTID__DEFAULT(cls):
        """Return default value for message field 'objobjectid'."""
        return 0

    @property
    def OBJECT_LONGITUDE__DEFAULT(cls):
        """Return default value for message field 'object_longitude'."""
        return 0


class ObjectTrackD(metaclass=Metaclass_ObjectTrackD):
    """
    Message class 'ObjectTrackD'.

    Constants:
      NAME
    """

    __slots__ = [
        '_rolling_count',
        '_objobjectid',
        '_object_longitude',
    ]

    _fields_and_field_types = {
        'rolling_count': 'uint8',
        'objobjectid': 'uint8',
        'object_longitude': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.rolling_count = kwargs.get(
            'rolling_count', ObjectTrackD.ROLLING_COUNT__DEFAULT)
        self.objobjectid = kwargs.get(
            'objobjectid', ObjectTrackD.OBJOBJECTID__DEFAULT)
        self.object_longitude = kwargs.get(
            'object_longitude', ObjectTrackD.OBJECT_LONGITUDE__DEFAULT)

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
        if self.objobjectid != other.objobjectid:
            return False
        if self.object_longitude != other.object_longitude:
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
    def objobjectid(self):
        """Message field 'objobjectid'."""
        return self._objobjectid

    @objobjectid.setter
    def objobjectid(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'objobjectid' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'objobjectid' field must be an unsigned integer in [0, 255]"
        self._objobjectid = value

    @builtins.property
    def object_longitude(self):
        """Message field 'object_longitude'."""
        return self._object_longitude

    @object_longitude.setter
    def object_longitude(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'object_longitude' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'object_longitude' field must be an integer in [-2147483648, 2147483647]"
        self._object_longitude = value
