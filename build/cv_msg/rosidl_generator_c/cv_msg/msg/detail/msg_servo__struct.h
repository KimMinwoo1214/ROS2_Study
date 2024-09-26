// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from cv_msg:msg/MsgServo.idl
// generated code does not contain a copyright notice

#ifndef CV_MSG__MSG__DETAIL__MSG_SERVO__STRUCT_H_
#define CV_MSG__MSG__DETAIL__MSG_SERVO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/MsgServo in the package cv_msg.
typedef struct cv_msg__msg__MsgServo
{
  int64_t degree;
} cv_msg__msg__MsgServo;

// Struct for a sequence of cv_msg__msg__MsgServo.
typedef struct cv_msg__msg__MsgServo__Sequence
{
  cv_msg__msg__MsgServo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cv_msg__msg__MsgServo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CV_MSG__MSG__DETAIL__MSG_SERVO__STRUCT_H_
