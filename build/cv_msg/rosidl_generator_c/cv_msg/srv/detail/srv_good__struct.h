// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from cv_msg:srv/SrvGood.idl
// generated code does not contain a copyright notice

#ifndef CV_MSG__SRV__DETAIL__SRV_GOOD__STRUCT_H_
#define CV_MSG__SRV__DETAIL__SRV_GOOD__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/SrvGood in the package cv_msg.
typedef struct cv_msg__srv__SrvGood_Request
{
  int64_t a;
  int64_t b;
  int64_t c;
} cv_msg__srv__SrvGood_Request;

// Struct for a sequence of cv_msg__srv__SrvGood_Request.
typedef struct cv_msg__srv__SrvGood_Request__Sequence
{
  cv_msg__srv__SrvGood_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cv_msg__srv__SrvGood_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/SrvGood in the package cv_msg.
typedef struct cv_msg__srv__SrvGood_Response
{
  int64_t sum;
} cv_msg__srv__SrvGood_Response;

// Struct for a sequence of cv_msg__srv__SrvGood_Response.
typedef struct cv_msg__srv__SrvGood_Response__Sequence
{
  cv_msg__srv__SrvGood_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cv_msg__srv__SrvGood_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CV_MSG__SRV__DETAIL__SRV_GOOD__STRUCT_H_
