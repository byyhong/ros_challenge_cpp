# generated from rosidl_generator_py/resource/_idl.py.em
# with input from wauto_vehicle_msgs:msg/ObjectTrackB.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ObjectTrackB(type):
    """Metaclass of message 'ObjectTrackB'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'NAME': 'Object_TrackB',
        'OBJECT_SOURCE_CAMERA_1': 1,
        'OBJECT_SOURCE_CAMERA_0': 0,
        'OBJECT_SOURCE_RADAR_1': 1,
        'OBJECT_SOURCE_RADAR_0': 0,
        'OBJECT_SOURCE_ULTRASONIC_1': 1,
        'OBJECT_SOURCE_ULTRASONIC_0': 0,
        'OBJECT_SOURCE_V2X_1': 1,
        'OBJECT_SOURCE_V2X_0': 0,
        'OBJECT_SOURCE_LIDAR_1': 1,
        'OBJECT_SOURCE_LIDAR_0': 0,
        'OBJECT_SOURCE_OTHER_1': 1,
        'OBJECT_SOURCE_OTHER_0': 0,
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
                'wauto_vehicle_msgs.msg.ObjectTrackB')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__object_track_b
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__object_track_b
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__object_track_b
            cls._TYPE_SUPPORT = module.type_support_msg__msg__object_track_b
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__object_track_b

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'NAME': cls.__constants['NAME'],
            'OBJECT_SOURCE_CAMERA_1': cls.__constants['OBJECT_SOURCE_CAMERA_1'],
            'OBJECT_SOURCE_CAMERA_0': cls.__constants['OBJECT_SOURCE_CAMERA_0'],
            'OBJECT_SOURCE_RADAR_1': cls.__constants['OBJECT_SOURCE_RADAR_1'],
            'OBJECT_SOURCE_RADAR_0': cls.__constants['OBJECT_SOURCE_RADAR_0'],
            'OBJECT_SOURCE_ULTRASONIC_1': cls.__constants['OBJECT_SOURCE_ULTRASONIC_1'],
            'OBJECT_SOURCE_ULTRASONIC_0': cls.__constants['OBJECT_SOURCE_ULTRASONIC_0'],
            'OBJECT_SOURCE_V2X_1': cls.__constants['OBJECT_SOURCE_V2X_1'],
            'OBJECT_SOURCE_V2X_0': cls.__constants['OBJECT_SOURCE_V2X_0'],
            'OBJECT_SOURCE_LIDAR_1': cls.__constants['OBJECT_SOURCE_LIDAR_1'],
            'OBJECT_SOURCE_LIDAR_0': cls.__constants['OBJECT_SOURCE_LIDAR_0'],
            'OBJECT_SOURCE_OTHER_1': cls.__constants['OBJECT_SOURCE_OTHER_1'],
            'OBJECT_SOURCE_OTHER_0': cls.__constants['OBJECT_SOURCE_OTHER_0'],
            'ROLLING_COUNT__DEFAULT': 0,
            'OBJOBJECTID__DEFAULT': 0,
            'WIDTH__DEFAULT': 0,
            'HEIGHT__DEFAULT': 0,
            'OBJECT_RELATIVE_ORIENTATION__DEFAULT': 0,
            'RELLNPOSITION__DEFAULT': 0,
            'OBJECT_SOURCE_CAMERA__DEFAULT': 0,
            'OBJECT_SOURCE_RADAR__DEFAULT': 0,
            'OBJECT_SOURCE_ULTRASONIC__DEFAULT': 0,
            'OBJECT_SOURCE_V2X__DEFAULT': 0,
            'OBJECT_SOURCE_LIDAR__DEFAULT': 0,
            'OBJECT_SOURCE_OTHER__DEFAULT': 0,
        }

    @property
    def NAME(self):
        """Message constant 'NAME'."""
        return Metaclass_ObjectTrackB.__constants['NAME']

    @property
    def OBJECT_SOURCE_CAMERA_1(self):
        """Message constant 'OBJECT_SOURCE_CAMERA_1'."""
        return Metaclass_ObjectTrackB.__constants['OBJECT_SOURCE_CAMERA_1']

    @property
    def OBJECT_SOURCE_CAMERA_0(self):
        """Message constant 'OBJECT_SOURCE_CAMERA_0'."""
        return Metaclass_ObjectTrackB.__constants['OBJECT_SOURCE_CAMERA_0']

    @property
    def OBJECT_SOURCE_RADAR_1(self):
        """Message constant 'OBJECT_SOURCE_RADAR_1'."""
        return Metaclass_ObjectTrackB.__constants['OBJECT_SOURCE_RADAR_1']

    @property
    def OBJECT_SOURCE_RADAR_0(self):
        """Message constant 'OBJECT_SOURCE_RADAR_0'."""
        return Metaclass_ObjectTrackB.__constants['OBJECT_SOURCE_RADAR_0']

    @property
    def OBJECT_SOURCE_ULTRASONIC_1(self):
        """Message constant 'OBJECT_SOURCE_ULTRASONIC_1'."""
        return Metaclass_ObjectTrackB.__constants['OBJECT_SOURCE_ULTRASONIC_1']

    @property
    def OBJECT_SOURCE_ULTRASONIC_0(self):
        """Message constant 'OBJECT_SOURCE_ULTRASONIC_0'."""
        return Metaclass_ObjectTrackB.__constants['OBJECT_SOURCE_ULTRASONIC_0']

    @property
    def OBJECT_SOURCE_V2X_1(self):
        """Message constant 'OBJECT_SOURCE_V2X_1'."""
        return Metaclass_ObjectTrackB.__constants['OBJECT_SOURCE_V2X_1']

    @property
    def OBJECT_SOURCE_V2X_0(self):
        """Message constant 'OBJECT_SOURCE_V2X_0'."""
        return Metaclass_ObjectTrackB.__constants['OBJECT_SOURCE_V2X_0']

    @property
    def OBJECT_SOURCE_LIDAR_1(self):
        """Message constant 'OBJECT_SOURCE_LIDAR_1'."""
        return Metaclass_ObjectTrackB.__constants['OBJECT_SOURCE_LIDAR_1']

    @property
    def OBJECT_SOURCE_LIDAR_0(self):
        """Message constant 'OBJECT_SOURCE_LIDAR_0'."""
        return Metaclass_ObjectTrackB.__constants['OBJECT_SOURCE_LIDAR_0']

    @property
    def OBJECT_SOURCE_OTHER_1(self):
        """Message constant 'OBJECT_SOURCE_OTHER_1'."""
        return Metaclass_ObjectTrackB.__constants['OBJECT_SOURCE_OTHER_1']

    @property
    def OBJECT_SOURCE_OTHER_0(self):
        """Message constant 'OBJECT_SOURCE_OTHER_0'."""
        return Metaclass_ObjectTrackB.__constants['OBJECT_SOURCE_OTHER_0']

    @property
    def ROLLING_COUNT__DEFAULT(cls):
        """Return default value for message field 'rolling_count'."""
        return 0

    @property
    def OBJOBJECTID__DEFAULT(cls):
        """Return default value for message field 'objobjectid'."""
        return 0

    @property
    def WIDTH__DEFAULT(cls):
        """Return default value for message field 'width'."""
        return 0

    @property
    def HEIGHT__DEFAULT(cls):
        """Return default value for message field 'height'."""
        return 0

    @property
    def OBJECT_RELATIVE_ORIENTATION__DEFAULT(cls):
        """Return default value for message field 'object_relative_orientation'."""
        return 0

    @property
    def RELLNPOSITION__DEFAULT(cls):
        """Return default value for message field 'rellnposition'."""
        return 0

    @property
    def OBJECT_SOURCE_CAMERA__DEFAULT(cls):
        """Return default value for message field 'object_source_camera'."""
        return 0

    @property
    def OBJECT_SOURCE_RADAR__DEFAULT(cls):
        """Return default value for message field 'object_source_radar'."""
        return 0

    @property
    def OBJECT_SOURCE_ULTRASONIC__DEFAULT(cls):
        """Return default value for message field 'object_source_ultrasonic'."""
        return 0

    @property
    def OBJECT_SOURCE_V2X__DEFAULT(cls):
        """Return default value for message field 'object_source_v2x'."""
        return 0

    @property
    def OBJECT_SOURCE_LIDAR__DEFAULT(cls):
        """Return default value for message field 'object_source_lidar'."""
        return 0

    @property
    def OBJECT_SOURCE_OTHER__DEFAULT(cls):
        """Return default value for message field 'object_source_other'."""
        return 0


class ObjectTrackB(metaclass=Metaclass_ObjectTrackB):
    """
    Message class 'ObjectTrackB'.

    Constants:
      NAME
      OBJECT_SOURCE_CAMERA_1
      OBJECT_SOURCE_CAMERA_0
      OBJECT_SOURCE_RADAR_1
      OBJECT_SOURCE_RADAR_0
      OBJECT_SOURCE_ULTRASONIC_1
      OBJECT_SOURCE_ULTRASONIC_0
      OBJECT_SOURCE_V2X_1
      OBJECT_SOURCE_V2X_0
      OBJECT_SOURCE_LIDAR_1
      OBJECT_SOURCE_LIDAR_0
      OBJECT_SOURCE_OTHER_1
      OBJECT_SOURCE_OTHER_0
    """

    __slots__ = [
        '_rolling_count',
        '_objobjectid',
        '_width',
        '_height',
        '_object_relative_orientation',
        '_rellnposition',
        '_object_source_camera',
        '_object_source_radar',
        '_object_source_ultrasonic',
        '_object_source_v2x',
        '_object_source_lidar',
        '_object_source_other',
    ]

    _fields_and_field_types = {
        'rolling_count': 'uint8',
        'objobjectid': 'uint8',
        'width': 'uint8',
        'height': 'uint8',
        'object_relative_orientation': 'uint8',
        'rellnposition': 'int8',
        'object_source_camera': 'uint8',
        'object_source_radar': 'uint8',
        'object_source_ultrasonic': 'uint8',
        'object_source_v2x': 'uint8',
        'object_source_lidar': 'uint8',
        'object_source_other': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
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
            'rolling_count', ObjectTrackB.ROLLING_COUNT__DEFAULT)
        self.objobjectid = kwargs.get(
            'objobjectid', ObjectTrackB.OBJOBJECTID__DEFAULT)
        self.width = kwargs.get(
            'width', ObjectTrackB.WIDTH__DEFAULT)
        self.height = kwargs.get(
            'height', ObjectTrackB.HEIGHT__DEFAULT)
        self.object_relative_orientation = kwargs.get(
            'object_relative_orientation', ObjectTrackB.OBJECT_RELATIVE_ORIENTATION__DEFAULT)
        self.rellnposition = kwargs.get(
            'rellnposition', ObjectTrackB.RELLNPOSITION__DEFAULT)
        self.object_source_camera = kwargs.get(
            'object_source_camera', ObjectTrackB.OBJECT_SOURCE_CAMERA__DEFAULT)
        self.object_source_radar = kwargs.get(
            'object_source_radar', ObjectTrackB.OBJECT_SOURCE_RADAR__DEFAULT)
        self.object_source_ultrasonic = kwargs.get(
            'object_source_ultrasonic', ObjectTrackB.OBJECT_SOURCE_ULTRASONIC__DEFAULT)
        self.object_source_v2x = kwargs.get(
            'object_source_v2x', ObjectTrackB.OBJECT_SOURCE_V2X__DEFAULT)
        self.object_source_lidar = kwargs.get(
            'object_source_lidar', ObjectTrackB.OBJECT_SOURCE_LIDAR__DEFAULT)
        self.object_source_other = kwargs.get(
            'object_source_other', ObjectTrackB.OBJECT_SOURCE_OTHER__DEFAULT)

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
        if self.width != other.width:
            return False
        if self.height != other.height:
            return False
        if self.object_relative_orientation != other.object_relative_orientation:
            return False
        if self.rellnposition != other.rellnposition:
            return False
        if self.object_source_camera != other.object_source_camera:
            return False
        if self.object_source_radar != other.object_source_radar:
            return False
        if self.object_source_ultrasonic != other.object_source_ultrasonic:
            return False
        if self.object_source_v2x != other.object_source_v2x:
            return False
        if self.object_source_lidar != other.object_source_lidar:
            return False
        if self.object_source_other != other.object_source_other:
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
    def height(self):
        """Message field 'height'."""
        return self._height

    @height.setter
    def height(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'height' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'height' field must be an unsigned integer in [0, 255]"
        self._height = value

    @builtins.property
    def object_relative_orientation(self):
        """Message field 'object_relative_orientation'."""
        return self._object_relative_orientation

    @object_relative_orientation.setter
    def object_relative_orientation(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'object_relative_orientation' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'object_relative_orientation' field must be an unsigned integer in [0, 255]"
        self._object_relative_orientation = value

    @builtins.property
    def rellnposition(self):
        """Message field 'rellnposition'."""
        return self._rellnposition

    @rellnposition.setter
    def rellnposition(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'rellnposition' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'rellnposition' field must be an integer in [-128, 127]"
        self._rellnposition = value

    @builtins.property
    def object_source_camera(self):
        """Message field 'object_source_camera'."""
        return self._object_source_camera

    @object_source_camera.setter
    def object_source_camera(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'object_source_camera' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'object_source_camera' field must be an unsigned integer in [0, 255]"
        self._object_source_camera = value

    @builtins.property
    def object_source_radar(self):
        """Message field 'object_source_radar'."""
        return self._object_source_radar

    @object_source_radar.setter
    def object_source_radar(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'object_source_radar' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'object_source_radar' field must be an unsigned integer in [0, 255]"
        self._object_source_radar = value

    @builtins.property
    def object_source_ultrasonic(self):
        """Message field 'object_source_ultrasonic'."""
        return self._object_source_ultrasonic

    @object_source_ultrasonic.setter
    def object_source_ultrasonic(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'object_source_ultrasonic' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'object_source_ultrasonic' field must be an unsigned integer in [0, 255]"
        self._object_source_ultrasonic = value

    @builtins.property
    def object_source_v2x(self):
        """Message field 'object_source_v2x'."""
        return self._object_source_v2x

    @object_source_v2x.setter
    def object_source_v2x(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'object_source_v2x' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'object_source_v2x' field must be an unsigned integer in [0, 255]"
        self._object_source_v2x = value

    @builtins.property
    def object_source_lidar(self):
        """Message field 'object_source_lidar'."""
        return self._object_source_lidar

    @object_source_lidar.setter
    def object_source_lidar(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'object_source_lidar' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'object_source_lidar' field must be an unsigned integer in [0, 255]"
        self._object_source_lidar = value

    @builtins.property
    def object_source_other(self):
        """Message field 'object_source_other'."""
        return self._object_source_other

    @object_source_other.setter
    def object_source_other(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'object_source_other' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'object_source_other' field must be an unsigned integer in [0, 255]"
        self._object_source_other = value
