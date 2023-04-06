# generated from rosidl_generator_py/resource/_idl.py.em
# with input from wauto_perception_msgs:msg/Roi.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Roi(type):
    """Metaclass of message 'Roi'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
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
                'wauto_perception_msgs.msg.Roi')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__roi
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__roi
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__roi
            cls._TYPE_SUPPORT = module.type_support_msg__msg__roi
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__roi

            from geometry_msgs.msg import Point
            if Point.__class__._TYPE_SUPPORT is None:
                Point.__class__.__import_type_support__()

            from wauto_perception_msgs.msg import ObjectClassification
            if ObjectClassification.__class__._TYPE_SUPPORT is None:
                ObjectClassification.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'ID__DEFAULT': 0,
        }

    @property
    def ID__DEFAULT(cls):
        """Return default value for message field 'id'."""
        return 0


class Roi(metaclass=Metaclass_Roi):
    """Message class 'Roi'."""

    __slots__ = [
        '_id',
        '_classification',
        '_bottom_left',
        '_top_right',
    ]

    _fields_and_field_types = {
        'id': 'uint8',
        'classification': 'wauto_perception_msgs/ObjectClassification',
        'bottom_left': 'geometry_msgs/Point',
        'top_right': 'geometry_msgs/Point',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['wauto_perception_msgs', 'msg'], 'ObjectClassification'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Point'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Point'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.id = kwargs.get(
            'id', Roi.ID__DEFAULT)
        from wauto_perception_msgs.msg import ObjectClassification
        self.classification = kwargs.get('classification', ObjectClassification())
        from geometry_msgs.msg import Point
        self.bottom_left = kwargs.get('bottom_left', Point())
        from geometry_msgs.msg import Point
        self.top_right = kwargs.get('top_right', Point())

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
        if self.classification != other.classification:
            return False
        if self.bottom_left != other.bottom_left:
            return False
        if self.top_right != other.top_right:
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
            assert value >= 0 and value < 256, \
                "The 'id' field must be an unsigned integer in [0, 255]"
        self._id = value

    @builtins.property
    def classification(self):
        """Message field 'classification'."""
        return self._classification

    @classification.setter
    def classification(self, value):
        if __debug__:
            from wauto_perception_msgs.msg import ObjectClassification
            assert \
                isinstance(value, ObjectClassification), \
                "The 'classification' field must be a sub message of type 'ObjectClassification'"
        self._classification = value

    @builtins.property
    def bottom_left(self):
        """Message field 'bottom_left'."""
        return self._bottom_left

    @bottom_left.setter
    def bottom_left(self, value):
        if __debug__:
            from geometry_msgs.msg import Point
            assert \
                isinstance(value, Point), \
                "The 'bottom_left' field must be a sub message of type 'Point'"
        self._bottom_left = value

    @builtins.property
    def top_right(self):
        """Message field 'top_right'."""
        return self._top_right

    @top_right.setter
    def top_right(self, value):
        if __debug__:
            from geometry_msgs.msg import Point
            assert \
                isinstance(value, Point), \
                "The 'top_right' field must be a sub message of type 'Point'"
        self._top_right = value
