# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ros2_pkg:srv/OddEvenCheck.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_OddEvenCheck_Request(type):
    """Metaclass of message 'OddEvenCheck_Request'."""

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
            module = import_type_support('ros2_pkg')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'ros2_pkg.srv.OddEvenCheck_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__odd_even_check__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__odd_even_check__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__odd_even_check__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__odd_even_check__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__odd_even_check__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class OddEvenCheck_Request(metaclass=Metaclass_OddEvenCheck_Request):
    """Message class 'OddEvenCheck_Request'."""

    __slots__ = [
        '_number',
    ]

    _fields_and_field_types = {
        'number': 'int64',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.number = kwargs.get('number', int())

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
        if self.number != other.number:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def number(self):
        """Message field 'number'."""
        return self._number

    @number.setter
    def number(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'number' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'number' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._number = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_OddEvenCheck_Response(type):
    """Metaclass of message 'OddEvenCheck_Response'."""

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
            module = import_type_support('ros2_pkg')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'ros2_pkg.srv.OddEvenCheck_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__odd_even_check__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__odd_even_check__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__odd_even_check__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__odd_even_check__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__odd_even_check__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class OddEvenCheck_Response(metaclass=Metaclass_OddEvenCheck_Response):
    """Message class 'OddEvenCheck_Response'."""

    __slots__ = [
        '_decision',
    ]

    _fields_and_field_types = {
        'decision': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.decision = kwargs.get('decision', str())

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
        if self.decision != other.decision:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def decision(self):
        """Message field 'decision'."""
        return self._decision

    @decision.setter
    def decision(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'decision' field must be of type 'str'"
        self._decision = value


class Metaclass_OddEvenCheck(type):
    """Metaclass of service 'OddEvenCheck'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('ros2_pkg')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'ros2_pkg.srv.OddEvenCheck')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__odd_even_check

            from ros2_pkg.srv import _odd_even_check
            if _odd_even_check.Metaclass_OddEvenCheck_Request._TYPE_SUPPORT is None:
                _odd_even_check.Metaclass_OddEvenCheck_Request.__import_type_support__()
            if _odd_even_check.Metaclass_OddEvenCheck_Response._TYPE_SUPPORT is None:
                _odd_even_check.Metaclass_OddEvenCheck_Response.__import_type_support__()


class OddEvenCheck(metaclass=Metaclass_OddEvenCheck):
    from ros2_pkg.srv._odd_even_check import OddEvenCheck_Request as Request
    from ros2_pkg.srv._odd_even_check import OddEvenCheck_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
