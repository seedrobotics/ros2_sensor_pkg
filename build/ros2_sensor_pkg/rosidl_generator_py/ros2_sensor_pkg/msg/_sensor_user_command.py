# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ros2_sensor_pkg:msg/SensorUserCommand.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SensorUserCommand(type):
    """Metaclass of message 'SensorUserCommand'."""

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
            module = import_type_support('ros2_sensor_pkg')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'ros2_sensor_pkg.msg.SensorUserCommand')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__sensor_user_command
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__sensor_user_command
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__sensor_user_command
            cls._TYPE_SUPPORT = module.type_support_msg__msg__sensor_user_command
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__sensor_user_command

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SensorUserCommand(metaclass=Metaclass_SensorUserCommand):
    """Message class 'SensorUserCommand'."""

    __slots__ = [
        '_calibrate',
        '_setepoch',
        '_epoch_sec',
        '_epoch_msec',
        '_diagnosis_request',
        '_set_frequency',
        '_frequency',
        '_raw_string',
        '_raw',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'calibrate': 'boolean',
        'setepoch': 'boolean',
        'epoch_sec': 'string',
        'epoch_msec': 'string',
        'diagnosis_request': 'boolean',
        'set_frequency': 'boolean',
        'frequency': 'int8',
        'raw_string': 'boolean',
        'raw': 'string',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        if 'check_fields' in kwargs:
            self._check_fields = kwargs['check_fields']
        else:
            self._check_fields = ros_python_check_fields == '1'
        if self._check_fields:
            assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
                'Invalid arguments passed to constructor: %s' % \
                ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.calibrate = kwargs.get('calibrate', bool())
        self.setepoch = kwargs.get('setepoch', bool())
        self.epoch_sec = kwargs.get('epoch_sec', str())
        self.epoch_msec = kwargs.get('epoch_msec', str())
        self.diagnosis_request = kwargs.get('diagnosis_request', bool())
        self.set_frequency = kwargs.get('set_frequency', bool())
        self.frequency = kwargs.get('frequency', int())
        self.raw_string = kwargs.get('raw_string', bool())
        self.raw = kwargs.get('raw', str())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.get_fields_and_field_types().keys(), self.SLOT_TYPES):
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
                    if self._check_fields:
                        assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.calibrate != other.calibrate:
            return False
        if self.setepoch != other.setepoch:
            return False
        if self.epoch_sec != other.epoch_sec:
            return False
        if self.epoch_msec != other.epoch_msec:
            return False
        if self.diagnosis_request != other.diagnosis_request:
            return False
        if self.set_frequency != other.set_frequency:
            return False
        if self.frequency != other.frequency:
            return False
        if self.raw_string != other.raw_string:
            return False
        if self.raw != other.raw:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def calibrate(self):
        """Message field 'calibrate'."""
        return self._calibrate

    @calibrate.setter
    def calibrate(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'calibrate' field must be of type 'bool'"
        self._calibrate = value

    @builtins.property
    def setepoch(self):
        """Message field 'setepoch'."""
        return self._setepoch

    @setepoch.setter
    def setepoch(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'setepoch' field must be of type 'bool'"
        self._setepoch = value

    @builtins.property
    def epoch_sec(self):
        """Message field 'epoch_sec'."""
        return self._epoch_sec

    @epoch_sec.setter
    def epoch_sec(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'epoch_sec' field must be of type 'str'"
        self._epoch_sec = value

    @builtins.property
    def epoch_msec(self):
        """Message field 'epoch_msec'."""
        return self._epoch_msec

    @epoch_msec.setter
    def epoch_msec(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'epoch_msec' field must be of type 'str'"
        self._epoch_msec = value

    @builtins.property
    def diagnosis_request(self):
        """Message field 'diagnosis_request'."""
        return self._diagnosis_request

    @diagnosis_request.setter
    def diagnosis_request(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'diagnosis_request' field must be of type 'bool'"
        self._diagnosis_request = value

    @builtins.property
    def set_frequency(self):
        """Message field 'set_frequency'."""
        return self._set_frequency

    @set_frequency.setter
    def set_frequency(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'set_frequency' field must be of type 'bool'"
        self._set_frequency = value

    @builtins.property
    def frequency(self):
        """Message field 'frequency'."""
        return self._frequency

    @frequency.setter
    def frequency(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'frequency' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'frequency' field must be an integer in [-128, 127]"
        self._frequency = value

    @builtins.property
    def raw_string(self):
        """Message field 'raw_string'."""
        return self._raw_string

    @raw_string.setter
    def raw_string(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'raw_string' field must be of type 'bool'"
        self._raw_string = value

    @builtins.property
    def raw(self):
        """Message field 'raw'."""
        return self._raw

    @raw.setter
    def raw(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'raw' field must be of type 'str'"
        self._raw = value
