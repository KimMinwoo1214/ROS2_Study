// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from cv_msg:srv/SrvServo.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "cv_msg/srv/detail/srv_servo__rosidl_typesupport_introspection_c.h"
#include "cv_msg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "cv_msg/srv/detail/srv_servo__functions.h"
#include "cv_msg/srv/detail/srv_servo__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void cv_msg__srv__SrvServo_Request__rosidl_typesupport_introspection_c__SrvServo_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  cv_msg__srv__SrvServo_Request__init(message_memory);
}

void cv_msg__srv__SrvServo_Request__rosidl_typesupport_introspection_c__SrvServo_Request_fini_function(void * message_memory)
{
  cv_msg__srv__SrvServo_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember cv_msg__srv__SrvServo_Request__rosidl_typesupport_introspection_c__SrvServo_Request_message_member_array[1] = {
  {
    "degree",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cv_msg__srv__SrvServo_Request, degree),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers cv_msg__srv__SrvServo_Request__rosidl_typesupport_introspection_c__SrvServo_Request_message_members = {
  "cv_msg__srv",  // message namespace
  "SrvServo_Request",  // message name
  1,  // number of fields
  sizeof(cv_msg__srv__SrvServo_Request),
  cv_msg__srv__SrvServo_Request__rosidl_typesupport_introspection_c__SrvServo_Request_message_member_array,  // message members
  cv_msg__srv__SrvServo_Request__rosidl_typesupport_introspection_c__SrvServo_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  cv_msg__srv__SrvServo_Request__rosidl_typesupport_introspection_c__SrvServo_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t cv_msg__srv__SrvServo_Request__rosidl_typesupport_introspection_c__SrvServo_Request_message_type_support_handle = {
  0,
  &cv_msg__srv__SrvServo_Request__rosidl_typesupport_introspection_c__SrvServo_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_cv_msg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cv_msg, srv, SrvServo_Request)() {
  if (!cv_msg__srv__SrvServo_Request__rosidl_typesupport_introspection_c__SrvServo_Request_message_type_support_handle.typesupport_identifier) {
    cv_msg__srv__SrvServo_Request__rosidl_typesupport_introspection_c__SrvServo_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &cv_msg__srv__SrvServo_Request__rosidl_typesupport_introspection_c__SrvServo_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "cv_msg/srv/detail/srv_servo__rosidl_typesupport_introspection_c.h"
// already included above
// #include "cv_msg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "cv_msg/srv/detail/srv_servo__functions.h"
// already included above
// #include "cv_msg/srv/detail/srv_servo__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void cv_msg__srv__SrvServo_Response__rosidl_typesupport_introspection_c__SrvServo_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  cv_msg__srv__SrvServo_Response__init(message_memory);
}

void cv_msg__srv__SrvServo_Response__rosidl_typesupport_introspection_c__SrvServo_Response_fini_function(void * message_memory)
{
  cv_msg__srv__SrvServo_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember cv_msg__srv__SrvServo_Response__rosidl_typesupport_introspection_c__SrvServo_Response_message_member_array[1] = {
  {
    "result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cv_msg__srv__SrvServo_Response, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers cv_msg__srv__SrvServo_Response__rosidl_typesupport_introspection_c__SrvServo_Response_message_members = {
  "cv_msg__srv",  // message namespace
  "SrvServo_Response",  // message name
  1,  // number of fields
  sizeof(cv_msg__srv__SrvServo_Response),
  cv_msg__srv__SrvServo_Response__rosidl_typesupport_introspection_c__SrvServo_Response_message_member_array,  // message members
  cv_msg__srv__SrvServo_Response__rosidl_typesupport_introspection_c__SrvServo_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  cv_msg__srv__SrvServo_Response__rosidl_typesupport_introspection_c__SrvServo_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t cv_msg__srv__SrvServo_Response__rosidl_typesupport_introspection_c__SrvServo_Response_message_type_support_handle = {
  0,
  &cv_msg__srv__SrvServo_Response__rosidl_typesupport_introspection_c__SrvServo_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_cv_msg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cv_msg, srv, SrvServo_Response)() {
  if (!cv_msg__srv__SrvServo_Response__rosidl_typesupport_introspection_c__SrvServo_Response_message_type_support_handle.typesupport_identifier) {
    cv_msg__srv__SrvServo_Response__rosidl_typesupport_introspection_c__SrvServo_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &cv_msg__srv__SrvServo_Response__rosidl_typesupport_introspection_c__SrvServo_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "cv_msg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "cv_msg/srv/detail/srv_servo__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers cv_msg__srv__detail__srv_servo__rosidl_typesupport_introspection_c__SrvServo_service_members = {
  "cv_msg__srv",  // service namespace
  "SrvServo",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // cv_msg__srv__detail__srv_servo__rosidl_typesupport_introspection_c__SrvServo_Request_message_type_support_handle,
  NULL  // response message
  // cv_msg__srv__detail__srv_servo__rosidl_typesupport_introspection_c__SrvServo_Response_message_type_support_handle
};

static rosidl_service_type_support_t cv_msg__srv__detail__srv_servo__rosidl_typesupport_introspection_c__SrvServo_service_type_support_handle = {
  0,
  &cv_msg__srv__detail__srv_servo__rosidl_typesupport_introspection_c__SrvServo_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cv_msg, srv, SrvServo_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cv_msg, srv, SrvServo_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_cv_msg
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cv_msg, srv, SrvServo)() {
  if (!cv_msg__srv__detail__srv_servo__rosidl_typesupport_introspection_c__SrvServo_service_type_support_handle.typesupport_identifier) {
    cv_msg__srv__detail__srv_servo__rosidl_typesupport_introspection_c__SrvServo_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)cv_msg__srv__detail__srv_servo__rosidl_typesupport_introspection_c__SrvServo_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cv_msg, srv, SrvServo_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cv_msg, srv, SrvServo_Response)()->data;
  }

  return &cv_msg__srv__detail__srv_servo__rosidl_typesupport_introspection_c__SrvServo_service_type_support_handle;
}
