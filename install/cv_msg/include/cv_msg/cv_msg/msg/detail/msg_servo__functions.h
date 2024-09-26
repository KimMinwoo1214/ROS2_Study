// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from cv_msg:msg/MsgServo.idl
// generated code does not contain a copyright notice

#ifndef CV_MSG__MSG__DETAIL__MSG_SERVO__FUNCTIONS_H_
#define CV_MSG__MSG__DETAIL__MSG_SERVO__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "cv_msg/msg/rosidl_generator_c__visibility_control.h"

#include "cv_msg/msg/detail/msg_servo__struct.h"

/// Initialize msg/MsgServo message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * cv_msg__msg__MsgServo
 * )) before or use
 * cv_msg__msg__MsgServo__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_cv_msg
bool
cv_msg__msg__MsgServo__init(cv_msg__msg__MsgServo * msg);

/// Finalize msg/MsgServo message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cv_msg
void
cv_msg__msg__MsgServo__fini(cv_msg__msg__MsgServo * msg);

/// Create msg/MsgServo message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * cv_msg__msg__MsgServo__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_cv_msg
cv_msg__msg__MsgServo *
cv_msg__msg__MsgServo__create();

/// Destroy msg/MsgServo message.
/**
 * It calls
 * cv_msg__msg__MsgServo__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cv_msg
void
cv_msg__msg__MsgServo__destroy(cv_msg__msg__MsgServo * msg);

/// Check for msg/MsgServo message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_cv_msg
bool
cv_msg__msg__MsgServo__are_equal(const cv_msg__msg__MsgServo * lhs, const cv_msg__msg__MsgServo * rhs);

/// Copy a msg/MsgServo message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_cv_msg
bool
cv_msg__msg__MsgServo__copy(
  const cv_msg__msg__MsgServo * input,
  cv_msg__msg__MsgServo * output);

/// Initialize array of msg/MsgServo messages.
/**
 * It allocates the memory for the number of elements and calls
 * cv_msg__msg__MsgServo__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_cv_msg
bool
cv_msg__msg__MsgServo__Sequence__init(cv_msg__msg__MsgServo__Sequence * array, size_t size);

/// Finalize array of msg/MsgServo messages.
/**
 * It calls
 * cv_msg__msg__MsgServo__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cv_msg
void
cv_msg__msg__MsgServo__Sequence__fini(cv_msg__msg__MsgServo__Sequence * array);

/// Create array of msg/MsgServo messages.
/**
 * It allocates the memory for the array and calls
 * cv_msg__msg__MsgServo__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_cv_msg
cv_msg__msg__MsgServo__Sequence *
cv_msg__msg__MsgServo__Sequence__create(size_t size);

/// Destroy array of msg/MsgServo messages.
/**
 * It calls
 * cv_msg__msg__MsgServo__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cv_msg
void
cv_msg__msg__MsgServo__Sequence__destroy(cv_msg__msg__MsgServo__Sequence * array);

/// Check for msg/MsgServo message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_cv_msg
bool
cv_msg__msg__MsgServo__Sequence__are_equal(const cv_msg__msg__MsgServo__Sequence * lhs, const cv_msg__msg__MsgServo__Sequence * rhs);

/// Copy an array of msg/MsgServo messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_cv_msg
bool
cv_msg__msg__MsgServo__Sequence__copy(
  const cv_msg__msg__MsgServo__Sequence * input,
  cv_msg__msg__MsgServo__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // CV_MSG__MSG__DETAIL__MSG_SERVO__FUNCTIONS_H_
