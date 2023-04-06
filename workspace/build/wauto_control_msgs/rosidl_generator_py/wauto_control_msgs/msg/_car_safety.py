# generated from rosidl_generator_py/resource/_idl.py.em
# with input from wauto_control_msgs:msg/CarSafety.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_CarSafety(type):
    """Metaclass of message 'CarSafety'."""

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
                'wauto_control_msgs.msg.CarSafety')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__car_safety
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__car_safety
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__car_safety
            cls._TYPE_SUPPORT = module.type_support_msg__msg__car_safety
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__car_safety

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class CarSafety(metaclass=Metaclass_CarSafety):
    """Message class 'CarSafety'."""

    __slots__ = [
        '_human_ready',
        '_human_stop',
        '_car_disabled',
        '_publishing_traj',
        '_finished_traj',
    ]

    _fields_and_field_types = {
        'human_ready': 'boolean',
        'human_stop': 'boolean',
        'car_disabled': 'boolean',
        'publishing_traj': 'boolean',
        'finished_traj': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.human_ready = kwargs.get('human_ready', bool())
        self.human_stop = kwargs.get('human_stop', bool())
        self.car_disabled = kwargs.get('car_disabled', bool())
        self.publishing_traj = kwargs.get('publishing_traj', bool())
        self.finished_traj = kwargs.get('finished_traj', bool())

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
        if self.human_ready != other.human_ready:
            return False
        if self.human_stop != other.human_stop:
            return False
        if self.car_disabled != other.car_disabled:
            return False
        if self.publishing_traj != other.publishing_traj:
            return False
        if self.finished_traj != other.finished_traj:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def human_ready(self):
        """Message field 'human_ready'."""
        return self._human_ready

    @human_ready.setter
    def human_ready(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'human_ready' field must be of type 'bool'"
        self._human_ready = value

    @builtins.property
    def human_stop(self):
        """Message field 'human_stop'."""
        return self._human_stop

    @human_stop.setter
    def human_stop(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'human_stop' field must be of type 'bool'"
        self._human_stop = value

    @builtins.property
    def car_disabled(self):
        """Message field 'car_disabled'."""
        return self._car_disabled

    @car_disabled.setter
    def car_disabled(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'car_disabled' field must be of type 'bool'"
        self._car_disabled = value

    @builtins.property
    def publishing_traj(self):
        """Message field 'publishing_traj'."""
        return self._publishing_traj

    @publishing_traj.setter
    def publishing_traj(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'publishing_traj' field must be of type 'bool'"
        self._publishing_traj = value

    @builtins.property
    def finished_traj(self):
        """Message field 'finished_traj'."""
        return self._finished_traj

    @finished_traj.setter
    def finished_traj(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'finished_traj' field must be of type 'bool'"
        self._finished_traj = value
