# generated from rosidl_generator_py/resource/_idl.py.em
# with input from wauto_control_msgs:msg/CarInput.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_CarInput(type):
    """Metaclass of message 'CarInput'."""

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
            module = import_type_support('wauto_control_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'wauto_control_msgs.msg.CarInput')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__car_input
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__car_input
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__car_input
            cls._TYPE_SUPPORT = module.type_support_msg__msg__car_input
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__car_input

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class CarInput(metaclass=Metaclass_CarInput):
    """Message class 'CarInput'."""

    __slots__ = [
        '_v_dot',
        '_psi_dot',
        '_gamma',
    ]

    _fields_and_field_types = {
        'v_dot': 'double',
        'psi_dot': 'double',
        'gamma': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.v_dot = kwargs.get('v_dot', float())
        self.psi_dot = kwargs.get('psi_dot', float())
        self.gamma = kwargs.get('gamma', float())

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
        if self.v_dot != other.v_dot:
            return False
        if self.psi_dot != other.psi_dot:
            return False
        if self.gamma != other.gamma:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def v_dot(self):
        """Message field 'v_dot'."""
        return self._v_dot

    @v_dot.setter
    def v_dot(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'v_dot' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'v_dot' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._v_dot = value

    @builtins.property
    def psi_dot(self):
        """Message field 'psi_dot'."""
        return self._psi_dot

    @psi_dot.setter
    def psi_dot(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'psi_dot' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'psi_dot' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._psi_dot = value

    @builtins.property
    def gamma(self):
        """Message field 'gamma'."""
        return self._gamma

    @gamma.setter
    def gamma(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'gamma' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'gamma' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._gamma = value
