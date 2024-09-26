// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from cv_msg:msg/MsgServo.idl
// generated code does not contain a copyright notice
#include "cv_msg/msg/detail/msg_servo__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
cv_msg__msg__MsgServo__init(cv_msg__msg__MsgServo * msg)
{
  if (!msg) {
    return false;
  }
  // degree
  return true;
}

void
cv_msg__msg__MsgServo__fini(cv_msg__msg__MsgServo * msg)
{
  if (!msg) {
    return;
  }
  // degree
}

bool
cv_msg__msg__MsgServo__are_equal(const cv_msg__msg__MsgServo * lhs, const cv_msg__msg__MsgServo * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // degree
  if (lhs->degree != rhs->degree) {
    return false;
  }
  return true;
}

bool
cv_msg__msg__MsgServo__copy(
  const cv_msg__msg__MsgServo * input,
  cv_msg__msg__MsgServo * output)
{
  if (!input || !output) {
    return false;
  }
  // degree
  output->degree = input->degree;
  return true;
}

cv_msg__msg__MsgServo *
cv_msg__msg__MsgServo__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cv_msg__msg__MsgServo * msg = (cv_msg__msg__MsgServo *)allocator.allocate(sizeof(cv_msg__msg__MsgServo), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(cv_msg__msg__MsgServo));
  bool success = cv_msg__msg__MsgServo__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
cv_msg__msg__MsgServo__destroy(cv_msg__msg__MsgServo * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    cv_msg__msg__MsgServo__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
cv_msg__msg__MsgServo__Sequence__init(cv_msg__msg__MsgServo__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cv_msg__msg__MsgServo * data = NULL;

  if (size) {
    data = (cv_msg__msg__MsgServo *)allocator.zero_allocate(size, sizeof(cv_msg__msg__MsgServo), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = cv_msg__msg__MsgServo__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        cv_msg__msg__MsgServo__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
cv_msg__msg__MsgServo__Sequence__fini(cv_msg__msg__MsgServo__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      cv_msg__msg__MsgServo__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

cv_msg__msg__MsgServo__Sequence *
cv_msg__msg__MsgServo__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cv_msg__msg__MsgServo__Sequence * array = (cv_msg__msg__MsgServo__Sequence *)allocator.allocate(sizeof(cv_msg__msg__MsgServo__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = cv_msg__msg__MsgServo__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
cv_msg__msg__MsgServo__Sequence__destroy(cv_msg__msg__MsgServo__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    cv_msg__msg__MsgServo__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
cv_msg__msg__MsgServo__Sequence__are_equal(const cv_msg__msg__MsgServo__Sequence * lhs, const cv_msg__msg__MsgServo__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!cv_msg__msg__MsgServo__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
cv_msg__msg__MsgServo__Sequence__copy(
  const cv_msg__msg__MsgServo__Sequence * input,
  cv_msg__msg__MsgServo__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(cv_msg__msg__MsgServo);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    cv_msg__msg__MsgServo * data =
      (cv_msg__msg__MsgServo *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!cv_msg__msg__MsgServo__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          cv_msg__msg__MsgServo__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!cv_msg__msg__MsgServo__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
