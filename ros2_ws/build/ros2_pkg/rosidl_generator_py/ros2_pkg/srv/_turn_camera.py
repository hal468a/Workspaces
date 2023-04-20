# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ros2_pkg:srv/TurnCamera.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_TurnCamera_Request(type):
    """Metaclass of message 'TurnCamera_Request'."""

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
                'ros2_pkg.srv.TurnCamera_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__turn_camera__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__turn_camera__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__turn_camera__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__turn_camera__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__turn_camera__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class TurnCamera_Request(metaclass=Metaclass_TurnCamera_Request):
    """Message class 'TurnCamera_Request'."""

    __slots__ = [
        '_degree_turn',
    ]

    _fields_and_field_types = {
        'degree_turn': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.degree_turn = kwargs.get('degree_turn', float())

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
        if self.degree_turn != other.degree_turn:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def degree_turn(self):
        """Message field 'degree_turn'."""
        return self._degree_turn

    @degree_turn.setter
    def degree_turn(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'degree_turn' field must be of type 'float'"
        self._degree_turn = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_TurnCamera_Response(type):
    """Metaclass of message 'TurnCamera_Response'."""

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
                'ros2_pkg.srv.TurnCamera_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__turn_camera__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__turn_camera__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__turn_camera__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__turn_camera__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__turn_camera__response

            from sensor_msgs.msg import Image
            if Image.__class__._TYPE_SUPPORT is None:
                Image.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class TurnCamera_Response(metaclass=Metaclass_TurnCamera_Response):
    """Message class 'TurnCamera_Response'."""

    __slots__ = [
        '_image',
    ]

    _fields_and_field_types = {
        'image': 'sensor_msgs/Image',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['sensor_msgs', 'msg'], 'Image'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from sensor_msgs.msg import Image
        self.image = kwargs.get('image', Image())

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
        if self.image != other.image:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def image(self):
        """Message field 'image'."""
        return self._image

    @image.setter
    def image(self, value):
        if __debug__:
            from sensor_msgs.msg import Image
            assert \
                isinstance(value, Image), \
                "The 'image' field must be a sub message of type 'Image'"
        self._image = value


class Metaclass_TurnCamera(type):
    """Metaclass of service 'TurnCamera'."""

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
                'ros2_pkg.srv.TurnCamera')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__turn_camera

            from ros2_pkg.srv import _turn_camera
            if _turn_camera.Metaclass_TurnCamera_Request._TYPE_SUPPORT is None:
                _turn_camera.Metaclass_TurnCamera_Request.__import_type_support__()
            if _turn_camera.Metaclass_TurnCamera_Response._TYPE_SUPPORT is None:
                _turn_camera.Metaclass_TurnCamera_Response.__import_type_support__()


class TurnCamera(metaclass=Metaclass_TurnCamera):
    from ros2_pkg.srv._turn_camera import TurnCamera_Request as Request
    from ros2_pkg.srv._turn_camera import TurnCamera_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
