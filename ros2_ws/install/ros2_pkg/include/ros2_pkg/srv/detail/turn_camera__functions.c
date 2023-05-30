// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ros2_pkg:srv/TurnCamera.idl
// generated code does not contain a copyright notice
#include "ros2_pkg/srv/detail/turn_camera__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

bool
ros2_pkg__srv__TurnCamera_Request__init(ros2_pkg__srv__TurnCamera_Request * msg)
{
  if (!msg) {
    return false;
  }
  // degree_turn
  return true;
}

void
ros2_pkg__srv__TurnCamera_Request__fini(ros2_pkg__srv__TurnCamera_Request * msg)
{
  if (!msg) {
    return;
  }
  // degree_turn
}

bool
ros2_pkg__srv__TurnCamera_Request__are_equal(const ros2_pkg__srv__TurnCamera_Request * lhs, const ros2_pkg__srv__TurnCamera_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // degree_turn
  if (lhs->degree_turn != rhs->degree_turn) {
    return false;
  }
  return true;
}

bool
ros2_pkg__srv__TurnCamera_Request__copy(
  const ros2_pkg__srv__TurnCamera_Request * input,
  ros2_pkg__srv__TurnCamera_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // degree_turn
  output->degree_turn = input->degree_turn;
  return true;
}

ros2_pkg__srv__TurnCamera_Request *
ros2_pkg__srv__TurnCamera_Request__create()
{
  ros2_pkg__srv__TurnCamera_Request * msg = (ros2_pkg__srv__TurnCamera_Request *)malloc(sizeof(ros2_pkg__srv__TurnCamera_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros2_pkg__srv__TurnCamera_Request));
  bool success = ros2_pkg__srv__TurnCamera_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
ros2_pkg__srv__TurnCamera_Request__destroy(ros2_pkg__srv__TurnCamera_Request * msg)
{
  if (msg) {
    ros2_pkg__srv__TurnCamera_Request__fini(msg);
  }
  free(msg);
}


bool
ros2_pkg__srv__TurnCamera_Request__Sequence__init(ros2_pkg__srv__TurnCamera_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  ros2_pkg__srv__TurnCamera_Request * data = NULL;
  if (size) {
    data = (ros2_pkg__srv__TurnCamera_Request *)calloc(size, sizeof(ros2_pkg__srv__TurnCamera_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros2_pkg__srv__TurnCamera_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros2_pkg__srv__TurnCamera_Request__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
ros2_pkg__srv__TurnCamera_Request__Sequence__fini(ros2_pkg__srv__TurnCamera_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      ros2_pkg__srv__TurnCamera_Request__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

ros2_pkg__srv__TurnCamera_Request__Sequence *
ros2_pkg__srv__TurnCamera_Request__Sequence__create(size_t size)
{
  ros2_pkg__srv__TurnCamera_Request__Sequence * array = (ros2_pkg__srv__TurnCamera_Request__Sequence *)malloc(sizeof(ros2_pkg__srv__TurnCamera_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = ros2_pkg__srv__TurnCamera_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
ros2_pkg__srv__TurnCamera_Request__Sequence__destroy(ros2_pkg__srv__TurnCamera_Request__Sequence * array)
{
  if (array) {
    ros2_pkg__srv__TurnCamera_Request__Sequence__fini(array);
  }
  free(array);
}

bool
ros2_pkg__srv__TurnCamera_Request__Sequence__are_equal(const ros2_pkg__srv__TurnCamera_Request__Sequence * lhs, const ros2_pkg__srv__TurnCamera_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ros2_pkg__srv__TurnCamera_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ros2_pkg__srv__TurnCamera_Request__Sequence__copy(
  const ros2_pkg__srv__TurnCamera_Request__Sequence * input,
  ros2_pkg__srv__TurnCamera_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ros2_pkg__srv__TurnCamera_Request);
    ros2_pkg__srv__TurnCamera_Request * data =
      (ros2_pkg__srv__TurnCamera_Request *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ros2_pkg__srv__TurnCamera_Request__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          ros2_pkg__srv__TurnCamera_Request__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ros2_pkg__srv__TurnCamera_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `image`
#include "sensor_msgs/msg/detail/image__functions.h"

bool
ros2_pkg__srv__TurnCamera_Response__init(ros2_pkg__srv__TurnCamera_Response * msg)
{
  if (!msg) {
    return false;
  }
  // image
  if (!sensor_msgs__msg__Image__init(&msg->image)) {
    ros2_pkg__srv__TurnCamera_Response__fini(msg);
    return false;
  }
  return true;
}

void
ros2_pkg__srv__TurnCamera_Response__fini(ros2_pkg__srv__TurnCamera_Response * msg)
{
  if (!msg) {
    return;
  }
  // image
  sensor_msgs__msg__Image__fini(&msg->image);
}

bool
ros2_pkg__srv__TurnCamera_Response__are_equal(const ros2_pkg__srv__TurnCamera_Response * lhs, const ros2_pkg__srv__TurnCamera_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // image
  if (!sensor_msgs__msg__Image__are_equal(
      &(lhs->image), &(rhs->image)))
  {
    return false;
  }
  return true;
}

bool
ros2_pkg__srv__TurnCamera_Response__copy(
  const ros2_pkg__srv__TurnCamera_Response * input,
  ros2_pkg__srv__TurnCamera_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // image
  if (!sensor_msgs__msg__Image__copy(
      &(input->image), &(output->image)))
  {
    return false;
  }
  return true;
}

ros2_pkg__srv__TurnCamera_Response *
ros2_pkg__srv__TurnCamera_Response__create()
{
  ros2_pkg__srv__TurnCamera_Response * msg = (ros2_pkg__srv__TurnCamera_Response *)malloc(sizeof(ros2_pkg__srv__TurnCamera_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros2_pkg__srv__TurnCamera_Response));
  bool success = ros2_pkg__srv__TurnCamera_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
ros2_pkg__srv__TurnCamera_Response__destroy(ros2_pkg__srv__TurnCamera_Response * msg)
{
  if (msg) {
    ros2_pkg__srv__TurnCamera_Response__fini(msg);
  }
  free(msg);
}


bool
ros2_pkg__srv__TurnCamera_Response__Sequence__init(ros2_pkg__srv__TurnCamera_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  ros2_pkg__srv__TurnCamera_Response * data = NULL;
  if (size) {
    data = (ros2_pkg__srv__TurnCamera_Response *)calloc(size, sizeof(ros2_pkg__srv__TurnCamera_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros2_pkg__srv__TurnCamera_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros2_pkg__srv__TurnCamera_Response__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
ros2_pkg__srv__TurnCamera_Response__Sequence__fini(ros2_pkg__srv__TurnCamera_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      ros2_pkg__srv__TurnCamera_Response__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

ros2_pkg__srv__TurnCamera_Response__Sequence *
ros2_pkg__srv__TurnCamera_Response__Sequence__create(size_t size)
{
  ros2_pkg__srv__TurnCamera_Response__Sequence * array = (ros2_pkg__srv__TurnCamera_Response__Sequence *)malloc(sizeof(ros2_pkg__srv__TurnCamera_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = ros2_pkg__srv__TurnCamera_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
ros2_pkg__srv__TurnCamera_Response__Sequence__destroy(ros2_pkg__srv__TurnCamera_Response__Sequence * array)
{
  if (array) {
    ros2_pkg__srv__TurnCamera_Response__Sequence__fini(array);
  }
  free(array);
}

bool
ros2_pkg__srv__TurnCamera_Response__Sequence__are_equal(const ros2_pkg__srv__TurnCamera_Response__Sequence * lhs, const ros2_pkg__srv__TurnCamera_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ros2_pkg__srv__TurnCamera_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ros2_pkg__srv__TurnCamera_Response__Sequence__copy(
  const ros2_pkg__srv__TurnCamera_Response__Sequence * input,
  ros2_pkg__srv__TurnCamera_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ros2_pkg__srv__TurnCamera_Response);
    ros2_pkg__srv__TurnCamera_Response * data =
      (ros2_pkg__srv__TurnCamera_Response *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ros2_pkg__srv__TurnCamera_Response__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          ros2_pkg__srv__TurnCamera_Response__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ros2_pkg__srv__TurnCamera_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
