// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from cv_msg:srv/SrvServo.idl
// generated code does not contain a copyright notice
#include "cv_msg/srv/detail/srv_servo__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
cv_msg__srv__SrvServo_Request__init(cv_msg__srv__SrvServo_Request * msg)
{
  if (!msg) {
    return false;
  }
  // degree
  return true;
}

void
cv_msg__srv__SrvServo_Request__fini(cv_msg__srv__SrvServo_Request * msg)
{
  if (!msg) {
    return;
  }
  // degree
}

bool
cv_msg__srv__SrvServo_Request__are_equal(const cv_msg__srv__SrvServo_Request * lhs, const cv_msg__srv__SrvServo_Request * rhs)
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
cv_msg__srv__SrvServo_Request__copy(
  const cv_msg__srv__SrvServo_Request * input,
  cv_msg__srv__SrvServo_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // degree
  output->degree = input->degree;
  return true;
}

cv_msg__srv__SrvServo_Request *
cv_msg__srv__SrvServo_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cv_msg__srv__SrvServo_Request * msg = (cv_msg__srv__SrvServo_Request *)allocator.allocate(sizeof(cv_msg__srv__SrvServo_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(cv_msg__srv__SrvServo_Request));
  bool success = cv_msg__srv__SrvServo_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
cv_msg__srv__SrvServo_Request__destroy(cv_msg__srv__SrvServo_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    cv_msg__srv__SrvServo_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
cv_msg__srv__SrvServo_Request__Sequence__init(cv_msg__srv__SrvServo_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cv_msg__srv__SrvServo_Request * data = NULL;

  if (size) {
    data = (cv_msg__srv__SrvServo_Request *)allocator.zero_allocate(size, sizeof(cv_msg__srv__SrvServo_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = cv_msg__srv__SrvServo_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        cv_msg__srv__SrvServo_Request__fini(&data[i - 1]);
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
cv_msg__srv__SrvServo_Request__Sequence__fini(cv_msg__srv__SrvServo_Request__Sequence * array)
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
      cv_msg__srv__SrvServo_Request__fini(&array->data[i]);
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

cv_msg__srv__SrvServo_Request__Sequence *
cv_msg__srv__SrvServo_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cv_msg__srv__SrvServo_Request__Sequence * array = (cv_msg__srv__SrvServo_Request__Sequence *)allocator.allocate(sizeof(cv_msg__srv__SrvServo_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = cv_msg__srv__SrvServo_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
cv_msg__srv__SrvServo_Request__Sequence__destroy(cv_msg__srv__SrvServo_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    cv_msg__srv__SrvServo_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
cv_msg__srv__SrvServo_Request__Sequence__are_equal(const cv_msg__srv__SrvServo_Request__Sequence * lhs, const cv_msg__srv__SrvServo_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!cv_msg__srv__SrvServo_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
cv_msg__srv__SrvServo_Request__Sequence__copy(
  const cv_msg__srv__SrvServo_Request__Sequence * input,
  cv_msg__srv__SrvServo_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(cv_msg__srv__SrvServo_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    cv_msg__srv__SrvServo_Request * data =
      (cv_msg__srv__SrvServo_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!cv_msg__srv__SrvServo_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          cv_msg__srv__SrvServo_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!cv_msg__srv__SrvServo_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
cv_msg__srv__SrvServo_Response__init(cv_msg__srv__SrvServo_Response * msg)
{
  if (!msg) {
    return false;
  }
  // result
  return true;
}

void
cv_msg__srv__SrvServo_Response__fini(cv_msg__srv__SrvServo_Response * msg)
{
  if (!msg) {
    return;
  }
  // result
}

bool
cv_msg__srv__SrvServo_Response__are_equal(const cv_msg__srv__SrvServo_Response * lhs, const cv_msg__srv__SrvServo_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // result
  if (lhs->result != rhs->result) {
    return false;
  }
  return true;
}

bool
cv_msg__srv__SrvServo_Response__copy(
  const cv_msg__srv__SrvServo_Response * input,
  cv_msg__srv__SrvServo_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // result
  output->result = input->result;
  return true;
}

cv_msg__srv__SrvServo_Response *
cv_msg__srv__SrvServo_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cv_msg__srv__SrvServo_Response * msg = (cv_msg__srv__SrvServo_Response *)allocator.allocate(sizeof(cv_msg__srv__SrvServo_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(cv_msg__srv__SrvServo_Response));
  bool success = cv_msg__srv__SrvServo_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
cv_msg__srv__SrvServo_Response__destroy(cv_msg__srv__SrvServo_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    cv_msg__srv__SrvServo_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
cv_msg__srv__SrvServo_Response__Sequence__init(cv_msg__srv__SrvServo_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cv_msg__srv__SrvServo_Response * data = NULL;

  if (size) {
    data = (cv_msg__srv__SrvServo_Response *)allocator.zero_allocate(size, sizeof(cv_msg__srv__SrvServo_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = cv_msg__srv__SrvServo_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        cv_msg__srv__SrvServo_Response__fini(&data[i - 1]);
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
cv_msg__srv__SrvServo_Response__Sequence__fini(cv_msg__srv__SrvServo_Response__Sequence * array)
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
      cv_msg__srv__SrvServo_Response__fini(&array->data[i]);
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

cv_msg__srv__SrvServo_Response__Sequence *
cv_msg__srv__SrvServo_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cv_msg__srv__SrvServo_Response__Sequence * array = (cv_msg__srv__SrvServo_Response__Sequence *)allocator.allocate(sizeof(cv_msg__srv__SrvServo_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = cv_msg__srv__SrvServo_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
cv_msg__srv__SrvServo_Response__Sequence__destroy(cv_msg__srv__SrvServo_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    cv_msg__srv__SrvServo_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
cv_msg__srv__SrvServo_Response__Sequence__are_equal(const cv_msg__srv__SrvServo_Response__Sequence * lhs, const cv_msg__srv__SrvServo_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!cv_msg__srv__SrvServo_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
cv_msg__srv__SrvServo_Response__Sequence__copy(
  const cv_msg__srv__SrvServo_Response__Sequence * input,
  cv_msg__srv__SrvServo_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(cv_msg__srv__SrvServo_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    cv_msg__srv__SrvServo_Response * data =
      (cv_msg__srv__SrvServo_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!cv_msg__srv__SrvServo_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          cv_msg__srv__SrvServo_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!cv_msg__srv__SrvServo_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
