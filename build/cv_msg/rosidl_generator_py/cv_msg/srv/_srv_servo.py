# generated from rosidl_generator_py/resource/_idl.py.em
# with input from cv_msg:srv/SrvServo.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SrvServo_Request(type):
    """Metaclass of message 'SrvServo_Request'."""

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
            module = import_type_support('cv_msg')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'cv_msg.srv.SrvServo_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__srv_servo__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__srv_servo__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__srv_servo__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__srv_servo__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__srv_servo__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SrvServo_Request(metaclass=Metaclass_SrvServo_Request):
    """Message class 'SrvServo_Request'."""

    __slots__ = [
        '_degree',
    ]

    _fields_and_field_types = {
        'degree': 'int64',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.degree = kwargs.get('degree', int())

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
        if self.degree != other.degree:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def degree(self):
        """Message field 'degree'."""
        return self._degree

    @degree.setter
    def degree(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'degree' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'degree' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._degree = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_SrvServo_Response(type):
    """Metaclass of message 'SrvServo_Response'."""

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
            module = import_type_support('cv_msg')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'cv_msg.srv.SrvServo_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__srv_servo__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__srv_servo__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__srv_servo__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__srv_servo__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__srv_servo__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SrvServo_Response(metaclass=Metaclass_SrvServo_Response):
    """Message class 'SrvServo_Response'."""

    __slots__ = [
        '_result',
    ]

    _fields_and_field_types = {
        'result': 'int64',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.result = kwargs.get('result', int())

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
        if self.result != other.result:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def result(self):
        """Message field 'result'."""
        return self._result

    @result.setter
    def result(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'result' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'result' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._result = value


class Metaclass_SrvServo(type):
    """Metaclass of service 'SrvServo'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('cv_msg')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'cv_msg.srv.SrvServo')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__srv_servo

            from cv_msg.srv import _srv_servo
            if _srv_servo.Metaclass_SrvServo_Request._TYPE_SUPPORT is None:
                _srv_servo.Metaclass_SrvServo_Request.__import_type_support__()
            if _srv_servo.Metaclass_SrvServo_Response._TYPE_SUPPORT is None:
                _srv_servo.Metaclass_SrvServo_Response.__import_type_support__()


class SrvServo(metaclass=Metaclass_SrvServo):
    from cv_msg.srv._srv_servo import SrvServo_Request as Request
    from cv_msg.srv._srv_servo import SrvServo_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
