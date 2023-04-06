# generated from rosidl_generator_py/resource/_idl.py.em
# with input from wauto_perception_msgs:msg/ObjectClassification.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ObjectClassification(type):
    """Metaclass of message 'ObjectClassification'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'WA_OBJECT_CLASSIFICATION_UNKNOWN': 0,
        'WA_OBJECT_CLASSIFICATION_CAR': 1,
        'WA_OBJECT_CLASSIFICATION_PEDESTRIAN': 2,
        'WA_OBJECT_CLASSIFICATION_DEER': 3,
        'WA_OBJECT_CLASSIFICATION_BARRICADE': 4,
        'WA_OBJECT_CLASSIFICATION_TRAFFIC_LIGHT': 5,
        'WA_OBJECT_CLASSIFICATION_TRAFFIC_SIGN': 6,
        'WA_OBJECT_CLASSIFICATION_BARREL': 7,
        'WA_TRAFFIC_LIGHT_STATE_UNKNOWN': 0,
        'WA_TRAFFIC_LIGHT_STATE_RED': 1,
        'WA_TRAFFIC_LIGHT_STATE_YELLOW': 2,
        'WA_TRAFFIC_LIGHT_STATE_GREEN': 4,
        'WA_TRAFFIC_LIGHT_STATE_CIRCLE': 8,
        'WA_TRAFFIC_LIGHT_STATE_LEFT_ARROW': 16,
        'WA_TRAFFIC_LIGHT_STATE_RIGHT_ARROW': 32,
        'WA_TRAFFIC_LIGHT_STATE_FLASHING': 64,
        'WA_TRAFFIC_SIGN_UNKNOWN': 0,
        'WA_TRAFFIC_SIGN_SPEED_LIMIT': 1,
        'WA_TRAFFIC_SIGN_STOP': 2,
        'WA_TRAFFIC_SIGN_YIELD': 3,
        'WA_DYNPROP_UNKNOWN': 0,
        'WA_DYNPROP_NEVER': 1,
        'WA_DYNPROP_STOPPED': 2,
        'WA_DYNPROP_MOVING_SAME': 3,
        'WA_DYNPROP_MOVING_OPPOSITE': 4,
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
                'wauto_perception_msgs.msg.ObjectClassification')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__object_classification
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__object_classification
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__object_classification
            cls._TYPE_SUPPORT = module.type_support_msg__msg__object_classification
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__object_classification

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'WA_OBJECT_CLASSIFICATION_UNKNOWN': cls.__constants['WA_OBJECT_CLASSIFICATION_UNKNOWN'],
            'WA_OBJECT_CLASSIFICATION_CAR': cls.__constants['WA_OBJECT_CLASSIFICATION_CAR'],
            'WA_OBJECT_CLASSIFICATION_PEDESTRIAN': cls.__constants['WA_OBJECT_CLASSIFICATION_PEDESTRIAN'],
            'WA_OBJECT_CLASSIFICATION_DEER': cls.__constants['WA_OBJECT_CLASSIFICATION_DEER'],
            'WA_OBJECT_CLASSIFICATION_BARRICADE': cls.__constants['WA_OBJECT_CLASSIFICATION_BARRICADE'],
            'WA_OBJECT_CLASSIFICATION_TRAFFIC_LIGHT': cls.__constants['WA_OBJECT_CLASSIFICATION_TRAFFIC_LIGHT'],
            'WA_OBJECT_CLASSIFICATION_TRAFFIC_SIGN': cls.__constants['WA_OBJECT_CLASSIFICATION_TRAFFIC_SIGN'],
            'WA_OBJECT_CLASSIFICATION_BARREL': cls.__constants['WA_OBJECT_CLASSIFICATION_BARREL'],
            'WA_TRAFFIC_LIGHT_STATE_UNKNOWN': cls.__constants['WA_TRAFFIC_LIGHT_STATE_UNKNOWN'],
            'WA_TRAFFIC_LIGHT_STATE_RED': cls.__constants['WA_TRAFFIC_LIGHT_STATE_RED'],
            'WA_TRAFFIC_LIGHT_STATE_YELLOW': cls.__constants['WA_TRAFFIC_LIGHT_STATE_YELLOW'],
            'WA_TRAFFIC_LIGHT_STATE_GREEN': cls.__constants['WA_TRAFFIC_LIGHT_STATE_GREEN'],
            'WA_TRAFFIC_LIGHT_STATE_CIRCLE': cls.__constants['WA_TRAFFIC_LIGHT_STATE_CIRCLE'],
            'WA_TRAFFIC_LIGHT_STATE_LEFT_ARROW': cls.__constants['WA_TRAFFIC_LIGHT_STATE_LEFT_ARROW'],
            'WA_TRAFFIC_LIGHT_STATE_RIGHT_ARROW': cls.__constants['WA_TRAFFIC_LIGHT_STATE_RIGHT_ARROW'],
            'WA_TRAFFIC_LIGHT_STATE_FLASHING': cls.__constants['WA_TRAFFIC_LIGHT_STATE_FLASHING'],
            'WA_TRAFFIC_SIGN_UNKNOWN': cls.__constants['WA_TRAFFIC_SIGN_UNKNOWN'],
            'WA_TRAFFIC_SIGN_SPEED_LIMIT': cls.__constants['WA_TRAFFIC_SIGN_SPEED_LIMIT'],
            'WA_TRAFFIC_SIGN_STOP': cls.__constants['WA_TRAFFIC_SIGN_STOP'],
            'WA_TRAFFIC_SIGN_YIELD': cls.__constants['WA_TRAFFIC_SIGN_YIELD'],
            'WA_DYNPROP_UNKNOWN': cls.__constants['WA_DYNPROP_UNKNOWN'],
            'WA_DYNPROP_NEVER': cls.__constants['WA_DYNPROP_NEVER'],
            'WA_DYNPROP_STOPPED': cls.__constants['WA_DYNPROP_STOPPED'],
            'WA_DYNPROP_MOVING_SAME': cls.__constants['WA_DYNPROP_MOVING_SAME'],
            'WA_DYNPROP_MOVING_OPPOSITE': cls.__constants['WA_DYNPROP_MOVING_OPPOSITE'],
            'VALUE__DEFAULT': 0,
        }

    @property
    def WA_OBJECT_CLASSIFICATION_UNKNOWN(self):
        """Message constant 'WA_OBJECT_CLASSIFICATION_UNKNOWN'."""
        return Metaclass_ObjectClassification.__constants['WA_OBJECT_CLASSIFICATION_UNKNOWN']

    @property
    def WA_OBJECT_CLASSIFICATION_CAR(self):
        """Message constant 'WA_OBJECT_CLASSIFICATION_CAR'."""
        return Metaclass_ObjectClassification.__constants['WA_OBJECT_CLASSIFICATION_CAR']

    @property
    def WA_OBJECT_CLASSIFICATION_PEDESTRIAN(self):
        """Message constant 'WA_OBJECT_CLASSIFICATION_PEDESTRIAN'."""
        return Metaclass_ObjectClassification.__constants['WA_OBJECT_CLASSIFICATION_PEDESTRIAN']

    @property
    def WA_OBJECT_CLASSIFICATION_DEER(self):
        """Message constant 'WA_OBJECT_CLASSIFICATION_DEER'."""
        return Metaclass_ObjectClassification.__constants['WA_OBJECT_CLASSIFICATION_DEER']

    @property
    def WA_OBJECT_CLASSIFICATION_BARRICADE(self):
        """Message constant 'WA_OBJECT_CLASSIFICATION_BARRICADE'."""
        return Metaclass_ObjectClassification.__constants['WA_OBJECT_CLASSIFICATION_BARRICADE']

    @property
    def WA_OBJECT_CLASSIFICATION_TRAFFIC_LIGHT(self):
        """Message constant 'WA_OBJECT_CLASSIFICATION_TRAFFIC_LIGHT'."""
        return Metaclass_ObjectClassification.__constants['WA_OBJECT_CLASSIFICATION_TRAFFIC_LIGHT']

    @property
    def WA_OBJECT_CLASSIFICATION_TRAFFIC_SIGN(self):
        """Message constant 'WA_OBJECT_CLASSIFICATION_TRAFFIC_SIGN'."""
        return Metaclass_ObjectClassification.__constants['WA_OBJECT_CLASSIFICATION_TRAFFIC_SIGN']

    @property
    def WA_OBJECT_CLASSIFICATION_BARREL(self):
        """Message constant 'WA_OBJECT_CLASSIFICATION_BARREL'."""
        return Metaclass_ObjectClassification.__constants['WA_OBJECT_CLASSIFICATION_BARREL']

    @property
    def WA_TRAFFIC_LIGHT_STATE_UNKNOWN(self):
        """Message constant 'WA_TRAFFIC_LIGHT_STATE_UNKNOWN'."""
        return Metaclass_ObjectClassification.__constants['WA_TRAFFIC_LIGHT_STATE_UNKNOWN']

    @property
    def WA_TRAFFIC_LIGHT_STATE_RED(self):
        """Message constant 'WA_TRAFFIC_LIGHT_STATE_RED'."""
        return Metaclass_ObjectClassification.__constants['WA_TRAFFIC_LIGHT_STATE_RED']

    @property
    def WA_TRAFFIC_LIGHT_STATE_YELLOW(self):
        """Message constant 'WA_TRAFFIC_LIGHT_STATE_YELLOW'."""
        return Metaclass_ObjectClassification.__constants['WA_TRAFFIC_LIGHT_STATE_YELLOW']

    @property
    def WA_TRAFFIC_LIGHT_STATE_GREEN(self):
        """Message constant 'WA_TRAFFIC_LIGHT_STATE_GREEN'."""
        return Metaclass_ObjectClassification.__constants['WA_TRAFFIC_LIGHT_STATE_GREEN']

    @property
    def WA_TRAFFIC_LIGHT_STATE_CIRCLE(self):
        """Message constant 'WA_TRAFFIC_LIGHT_STATE_CIRCLE'."""
        return Metaclass_ObjectClassification.__constants['WA_TRAFFIC_LIGHT_STATE_CIRCLE']

    @property
    def WA_TRAFFIC_LIGHT_STATE_LEFT_ARROW(self):
        """Message constant 'WA_TRAFFIC_LIGHT_STATE_LEFT_ARROW'."""
        return Metaclass_ObjectClassification.__constants['WA_TRAFFIC_LIGHT_STATE_LEFT_ARROW']

    @property
    def WA_TRAFFIC_LIGHT_STATE_RIGHT_ARROW(self):
        """Message constant 'WA_TRAFFIC_LIGHT_STATE_RIGHT_ARROW'."""
        return Metaclass_ObjectClassification.__constants['WA_TRAFFIC_LIGHT_STATE_RIGHT_ARROW']

    @property
    def WA_TRAFFIC_LIGHT_STATE_FLASHING(self):
        """Message constant 'WA_TRAFFIC_LIGHT_STATE_FLASHING'."""
        return Metaclass_ObjectClassification.__constants['WA_TRAFFIC_LIGHT_STATE_FLASHING']

    @property
    def WA_TRAFFIC_SIGN_UNKNOWN(self):
        """Message constant 'WA_TRAFFIC_SIGN_UNKNOWN'."""
        return Metaclass_ObjectClassification.__constants['WA_TRAFFIC_SIGN_UNKNOWN']

    @property
    def WA_TRAFFIC_SIGN_SPEED_LIMIT(self):
        """Message constant 'WA_TRAFFIC_SIGN_SPEED_LIMIT'."""
        return Metaclass_ObjectClassification.__constants['WA_TRAFFIC_SIGN_SPEED_LIMIT']

    @property
    def WA_TRAFFIC_SIGN_STOP(self):
        """Message constant 'WA_TRAFFIC_SIGN_STOP'."""
        return Metaclass_ObjectClassification.__constants['WA_TRAFFIC_SIGN_STOP']

    @property
    def WA_TRAFFIC_SIGN_YIELD(self):
        """Message constant 'WA_TRAFFIC_SIGN_YIELD'."""
        return Metaclass_ObjectClassification.__constants['WA_TRAFFIC_SIGN_YIELD']

    @property
    def WA_DYNPROP_UNKNOWN(self):
        """Message constant 'WA_DYNPROP_UNKNOWN'."""
        return Metaclass_ObjectClassification.__constants['WA_DYNPROP_UNKNOWN']

    @property
    def WA_DYNPROP_NEVER(self):
        """Message constant 'WA_DYNPROP_NEVER'."""
        return Metaclass_ObjectClassification.__constants['WA_DYNPROP_NEVER']

    @property
    def WA_DYNPROP_STOPPED(self):
        """Message constant 'WA_DYNPROP_STOPPED'."""
        return Metaclass_ObjectClassification.__constants['WA_DYNPROP_STOPPED']

    @property
    def WA_DYNPROP_MOVING_SAME(self):
        """Message constant 'WA_DYNPROP_MOVING_SAME'."""
        return Metaclass_ObjectClassification.__constants['WA_DYNPROP_MOVING_SAME']

    @property
    def WA_DYNPROP_MOVING_OPPOSITE(self):
        """Message constant 'WA_DYNPROP_MOVING_OPPOSITE'."""
        return Metaclass_ObjectClassification.__constants['WA_DYNPROP_MOVING_OPPOSITE']

    @property
    def VALUE__DEFAULT(cls):
        """Return default value for message field 'value'."""
        return 0


class ObjectClassification(metaclass=Metaclass_ObjectClassification):
    """
    Message class 'ObjectClassification'.

    Constants:
      WA_OBJECT_CLASSIFICATION_UNKNOWN
      WA_OBJECT_CLASSIFICATION_CAR
      WA_OBJECT_CLASSIFICATION_PEDESTRIAN
      WA_OBJECT_CLASSIFICATION_DEER
      WA_OBJECT_CLASSIFICATION_BARRICADE
      WA_OBJECT_CLASSIFICATION_TRAFFIC_LIGHT
      WA_OBJECT_CLASSIFICATION_TRAFFIC_SIGN
      WA_OBJECT_CLASSIFICATION_BARREL
      WA_TRAFFIC_LIGHT_STATE_UNKNOWN
      WA_TRAFFIC_LIGHT_STATE_RED
      WA_TRAFFIC_LIGHT_STATE_YELLOW
      WA_TRAFFIC_LIGHT_STATE_GREEN
      WA_TRAFFIC_LIGHT_STATE_CIRCLE
      WA_TRAFFIC_LIGHT_STATE_LEFT_ARROW
      WA_TRAFFIC_LIGHT_STATE_RIGHT_ARROW
      WA_TRAFFIC_LIGHT_STATE_FLASHING
      WA_TRAFFIC_SIGN_UNKNOWN
      WA_TRAFFIC_SIGN_SPEED_LIMIT
      WA_TRAFFIC_SIGN_STOP
      WA_TRAFFIC_SIGN_YIELD
      WA_DYNPROP_UNKNOWN
      WA_DYNPROP_NEVER
      WA_DYNPROP_STOPPED
      WA_DYNPROP_MOVING_SAME
      WA_DYNPROP_MOVING_OPPOSITE
    """

    __slots__ = [
        '_confidence',
        '_classification',
        '_dynprop',
        '_custom_classification',
        '_value',
    ]

    _fields_and_field_types = {
        'confidence': 'float',
        'classification': 'uint8',
        'dynprop': 'uint8',
        'custom_classification': 'uint8',
        'value': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.confidence = kwargs.get('confidence', float())
        self.classification = kwargs.get('classification', int())
        self.dynprop = kwargs.get('dynprop', int())
        self.custom_classification = kwargs.get('custom_classification', int())
        self.value = kwargs.get(
            'value', ObjectClassification.VALUE__DEFAULT)

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
        if self.confidence != other.confidence:
            return False
        if self.classification != other.classification:
            return False
        if self.dynprop != other.dynprop:
            return False
        if self.custom_classification != other.custom_classification:
            return False
        if self.value != other.value:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def confidence(self):
        """Message field 'confidence'."""
        return self._confidence

    @confidence.setter
    def confidence(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'confidence' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'confidence' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._confidence = value

    @builtins.property
    def classification(self):
        """Message field 'classification'."""
        return self._classification

    @classification.setter
    def classification(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'classification' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'classification' field must be an unsigned integer in [0, 255]"
        self._classification = value

    @builtins.property
    def dynprop(self):
        """Message field 'dynprop'."""
        return self._dynprop

    @dynprop.setter
    def dynprop(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'dynprop' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'dynprop' field must be an unsigned integer in [0, 255]"
        self._dynprop = value

    @builtins.property
    def custom_classification(self):
        """Message field 'custom_classification'."""
        return self._custom_classification

    @custom_classification.setter
    def custom_classification(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'custom_classification' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'custom_classification' field must be an unsigned integer in [0, 255]"
        self._custom_classification = value

    @builtins.property
    def value(self):
        """Message field 'value'."""
        return self._value

    @value.setter
    def value(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'value' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'value' field must be an unsigned integer in [0, 255]"
        self._value = value
