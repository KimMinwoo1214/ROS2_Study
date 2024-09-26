// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from cv_msg:msg/MsgCenter.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "cv_msg/msg/detail/msg_center__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace cv_msg
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void MsgCenter_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) cv_msg::msg::MsgCenter(_init);
}

void MsgCenter_fini_function(void * message_memory)
{
  auto typed_message = static_cast<cv_msg::msg::MsgCenter *>(message_memory);
  typed_message->~MsgCenter();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember MsgCenter_message_member_array[2] = {
  {
    "x",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cv_msg::msg::MsgCenter, x),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "y",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cv_msg::msg::MsgCenter, y),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers MsgCenter_message_members = {
  "cv_msg::msg",  // message namespace
  "MsgCenter",  // message name
  2,  // number of fields
  sizeof(cv_msg::msg::MsgCenter),
  MsgCenter_message_member_array,  // message members
  MsgCenter_init_function,  // function to initialize message memory (memory has to be allocated)
  MsgCenter_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t MsgCenter_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &MsgCenter_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace cv_msg


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<cv_msg::msg::MsgCenter>()
{
  return &::cv_msg::msg::rosidl_typesupport_introspection_cpp::MsgCenter_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, cv_msg, msg, MsgCenter)() {
  return &::cv_msg::msg::rosidl_typesupport_introspection_cpp::MsgCenter_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
