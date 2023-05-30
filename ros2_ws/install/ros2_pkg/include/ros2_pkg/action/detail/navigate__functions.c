// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ros2_pkg:action/Navigate.idl
// generated code does not contain a copyright notice
#include "ros2_pkg/action/detail/navigate__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `goal_point`
#include "geometry_msgs/msg/detail/point__functions.h"

bool
ros2_pkg__action__Navigate_Goal__init(ros2_pkg__action__Navigate_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // goal_point
  if (!geometry_msgs__msg__Point__init(&msg->goal_point)) {
    ros2_pkg__action__Navigate_Goal__fini(msg);
    return false;
  }
  return true;
}

void
ros2_pkg__action__Navigate_Goal__fini(ros2_pkg__action__Navigate_Goal * msg)
{
  if (!msg) {
    return;
  }
  // goal_point
  geometry_msgs__msg__Point__fini(&msg->goal_point);
}

bool
ros2_pkg__action__Navigate_Goal__are_equal(const ros2_pkg__action__Navigate_Goal * lhs, const ros2_pkg__action__Navigate_Goal * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_point
  if (!geometry_msgs__msg__Point__are_equal(
      &(lhs->goal_point), &(rhs->goal_point)))
  {
    return false;
  }
  return true;
}

bool
ros2_pkg__action__Navigate_Goal__copy(
  const ros2_pkg__action__Navigate_Goal * input,
  ros2_pkg__action__Navigate_Goal * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_point
  if (!geometry_msgs__msg__Point__copy(
      &(input->goal_point), &(output->goal_point)))
  {
    return false;
  }
  return true;
}

ros2_pkg__action__Navigate_Goal *
ros2_pkg__action__Navigate_Goal__create()
{
  ros2_pkg__action__Navigate_Goal * msg = (ros2_pkg__action__Navigate_Goal *)malloc(sizeof(ros2_pkg__action__Navigate_Goal));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros2_pkg__action__Navigate_Goal));
  bool success = ros2_pkg__action__Navigate_Goal__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
ros2_pkg__action__Navigate_Goal__destroy(ros2_pkg__action__Navigate_Goal * msg)
{
  if (msg) {
    ros2_pkg__action__Navigate_Goal__fini(msg);
  }
  free(msg);
}


bool
ros2_pkg__action__Navigate_Goal__Sequence__init(ros2_pkg__action__Navigate_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  ros2_pkg__action__Navigate_Goal * data = NULL;
  if (size) {
    data = (ros2_pkg__action__Navigate_Goal *)calloc(size, sizeof(ros2_pkg__action__Navigate_Goal));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros2_pkg__action__Navigate_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros2_pkg__action__Navigate_Goal__fini(&data[i - 1]);
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
ros2_pkg__action__Navigate_Goal__Sequence__fini(ros2_pkg__action__Navigate_Goal__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      ros2_pkg__action__Navigate_Goal__fini(&array->data[i]);
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

ros2_pkg__action__Navigate_Goal__Sequence *
ros2_pkg__action__Navigate_Goal__Sequence__create(size_t size)
{
  ros2_pkg__action__Navigate_Goal__Sequence * array = (ros2_pkg__action__Navigate_Goal__Sequence *)malloc(sizeof(ros2_pkg__action__Navigate_Goal__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = ros2_pkg__action__Navigate_Goal__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
ros2_pkg__action__Navigate_Goal__Sequence__destroy(ros2_pkg__action__Navigate_Goal__Sequence * array)
{
  if (array) {
    ros2_pkg__action__Navigate_Goal__Sequence__fini(array);
  }
  free(array);
}

bool
ros2_pkg__action__Navigate_Goal__Sequence__are_equal(const ros2_pkg__action__Navigate_Goal__Sequence * lhs, const ros2_pkg__action__Navigate_Goal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ros2_pkg__action__Navigate_Goal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ros2_pkg__action__Navigate_Goal__Sequence__copy(
  const ros2_pkg__action__Navigate_Goal__Sequence * input,
  ros2_pkg__action__Navigate_Goal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ros2_pkg__action__Navigate_Goal);
    ros2_pkg__action__Navigate_Goal * data =
      (ros2_pkg__action__Navigate_Goal *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ros2_pkg__action__Navigate_Goal__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          ros2_pkg__action__Navigate_Goal__fini(&data[i]);
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
    if (!ros2_pkg__action__Navigate_Goal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
ros2_pkg__action__Navigate_Result__init(ros2_pkg__action__Navigate_Result * msg)
{
  if (!msg) {
    return false;
  }
  // elapsed_time
  return true;
}

void
ros2_pkg__action__Navigate_Result__fini(ros2_pkg__action__Navigate_Result * msg)
{
  if (!msg) {
    return;
  }
  // elapsed_time
}

bool
ros2_pkg__action__Navigate_Result__are_equal(const ros2_pkg__action__Navigate_Result * lhs, const ros2_pkg__action__Navigate_Result * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // elapsed_time
  if (lhs->elapsed_time != rhs->elapsed_time) {
    return false;
  }
  return true;
}

bool
ros2_pkg__action__Navigate_Result__copy(
  const ros2_pkg__action__Navigate_Result * input,
  ros2_pkg__action__Navigate_Result * output)
{
  if (!input || !output) {
    return false;
  }
  // elapsed_time
  output->elapsed_time = input->elapsed_time;
  return true;
}

ros2_pkg__action__Navigate_Result *
ros2_pkg__action__Navigate_Result__create()
{
  ros2_pkg__action__Navigate_Result * msg = (ros2_pkg__action__Navigate_Result *)malloc(sizeof(ros2_pkg__action__Navigate_Result));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros2_pkg__action__Navigate_Result));
  bool success = ros2_pkg__action__Navigate_Result__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
ros2_pkg__action__Navigate_Result__destroy(ros2_pkg__action__Navigate_Result * msg)
{
  if (msg) {
    ros2_pkg__action__Navigate_Result__fini(msg);
  }
  free(msg);
}


bool
ros2_pkg__action__Navigate_Result__Sequence__init(ros2_pkg__action__Navigate_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  ros2_pkg__action__Navigate_Result * data = NULL;
  if (size) {
    data = (ros2_pkg__action__Navigate_Result *)calloc(size, sizeof(ros2_pkg__action__Navigate_Result));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros2_pkg__action__Navigate_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros2_pkg__action__Navigate_Result__fini(&data[i - 1]);
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
ros2_pkg__action__Navigate_Result__Sequence__fini(ros2_pkg__action__Navigate_Result__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      ros2_pkg__action__Navigate_Result__fini(&array->data[i]);
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

ros2_pkg__action__Navigate_Result__Sequence *
ros2_pkg__action__Navigate_Result__Sequence__create(size_t size)
{
  ros2_pkg__action__Navigate_Result__Sequence * array = (ros2_pkg__action__Navigate_Result__Sequence *)malloc(sizeof(ros2_pkg__action__Navigate_Result__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = ros2_pkg__action__Navigate_Result__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
ros2_pkg__action__Navigate_Result__Sequence__destroy(ros2_pkg__action__Navigate_Result__Sequence * array)
{
  if (array) {
    ros2_pkg__action__Navigate_Result__Sequence__fini(array);
  }
  free(array);
}

bool
ros2_pkg__action__Navigate_Result__Sequence__are_equal(const ros2_pkg__action__Navigate_Result__Sequence * lhs, const ros2_pkg__action__Navigate_Result__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ros2_pkg__action__Navigate_Result__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ros2_pkg__action__Navigate_Result__Sequence__copy(
  const ros2_pkg__action__Navigate_Result__Sequence * input,
  ros2_pkg__action__Navigate_Result__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ros2_pkg__action__Navigate_Result);
    ros2_pkg__action__Navigate_Result * data =
      (ros2_pkg__action__Navigate_Result *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ros2_pkg__action__Navigate_Result__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          ros2_pkg__action__Navigate_Result__fini(&data[i]);
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
    if (!ros2_pkg__action__Navigate_Result__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
ros2_pkg__action__Navigate_Feedback__init(ros2_pkg__action__Navigate_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // distance_to_point
  return true;
}

void
ros2_pkg__action__Navigate_Feedback__fini(ros2_pkg__action__Navigate_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // distance_to_point
}

bool
ros2_pkg__action__Navigate_Feedback__are_equal(const ros2_pkg__action__Navigate_Feedback * lhs, const ros2_pkg__action__Navigate_Feedback * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // distance_to_point
  if (lhs->distance_to_point != rhs->distance_to_point) {
    return false;
  }
  return true;
}

bool
ros2_pkg__action__Navigate_Feedback__copy(
  const ros2_pkg__action__Navigate_Feedback * input,
  ros2_pkg__action__Navigate_Feedback * output)
{
  if (!input || !output) {
    return false;
  }
  // distance_to_point
  output->distance_to_point = input->distance_to_point;
  return true;
}

ros2_pkg__action__Navigate_Feedback *
ros2_pkg__action__Navigate_Feedback__create()
{
  ros2_pkg__action__Navigate_Feedback * msg = (ros2_pkg__action__Navigate_Feedback *)malloc(sizeof(ros2_pkg__action__Navigate_Feedback));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros2_pkg__action__Navigate_Feedback));
  bool success = ros2_pkg__action__Navigate_Feedback__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
ros2_pkg__action__Navigate_Feedback__destroy(ros2_pkg__action__Navigate_Feedback * msg)
{
  if (msg) {
    ros2_pkg__action__Navigate_Feedback__fini(msg);
  }
  free(msg);
}


bool
ros2_pkg__action__Navigate_Feedback__Sequence__init(ros2_pkg__action__Navigate_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  ros2_pkg__action__Navigate_Feedback * data = NULL;
  if (size) {
    data = (ros2_pkg__action__Navigate_Feedback *)calloc(size, sizeof(ros2_pkg__action__Navigate_Feedback));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros2_pkg__action__Navigate_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros2_pkg__action__Navigate_Feedback__fini(&data[i - 1]);
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
ros2_pkg__action__Navigate_Feedback__Sequence__fini(ros2_pkg__action__Navigate_Feedback__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      ros2_pkg__action__Navigate_Feedback__fini(&array->data[i]);
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

ros2_pkg__action__Navigate_Feedback__Sequence *
ros2_pkg__action__Navigate_Feedback__Sequence__create(size_t size)
{
  ros2_pkg__action__Navigate_Feedback__Sequence * array = (ros2_pkg__action__Navigate_Feedback__Sequence *)malloc(sizeof(ros2_pkg__action__Navigate_Feedback__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = ros2_pkg__action__Navigate_Feedback__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
ros2_pkg__action__Navigate_Feedback__Sequence__destroy(ros2_pkg__action__Navigate_Feedback__Sequence * array)
{
  if (array) {
    ros2_pkg__action__Navigate_Feedback__Sequence__fini(array);
  }
  free(array);
}

bool
ros2_pkg__action__Navigate_Feedback__Sequence__are_equal(const ros2_pkg__action__Navigate_Feedback__Sequence * lhs, const ros2_pkg__action__Navigate_Feedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ros2_pkg__action__Navigate_Feedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ros2_pkg__action__Navigate_Feedback__Sequence__copy(
  const ros2_pkg__action__Navigate_Feedback__Sequence * input,
  ros2_pkg__action__Navigate_Feedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ros2_pkg__action__Navigate_Feedback);
    ros2_pkg__action__Navigate_Feedback * data =
      (ros2_pkg__action__Navigate_Feedback *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ros2_pkg__action__Navigate_Feedback__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          ros2_pkg__action__Navigate_Feedback__fini(&data[i]);
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
    if (!ros2_pkg__action__Navigate_Feedback__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `goal`
// already included above
// #include "ros2_pkg/action/detail/navigate__functions.h"

bool
ros2_pkg__action__Navigate_SendGoal_Request__init(ros2_pkg__action__Navigate_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    ros2_pkg__action__Navigate_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!ros2_pkg__action__Navigate_Goal__init(&msg->goal)) {
    ros2_pkg__action__Navigate_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
ros2_pkg__action__Navigate_SendGoal_Request__fini(ros2_pkg__action__Navigate_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  ros2_pkg__action__Navigate_Goal__fini(&msg->goal);
}

bool
ros2_pkg__action__Navigate_SendGoal_Request__are_equal(const ros2_pkg__action__Navigate_SendGoal_Request * lhs, const ros2_pkg__action__Navigate_SendGoal_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // goal
  if (!ros2_pkg__action__Navigate_Goal__are_equal(
      &(lhs->goal), &(rhs->goal)))
  {
    return false;
  }
  return true;
}

bool
ros2_pkg__action__Navigate_SendGoal_Request__copy(
  const ros2_pkg__action__Navigate_SendGoal_Request * input,
  ros2_pkg__action__Navigate_SendGoal_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // goal
  if (!ros2_pkg__action__Navigate_Goal__copy(
      &(input->goal), &(output->goal)))
  {
    return false;
  }
  return true;
}

ros2_pkg__action__Navigate_SendGoal_Request *
ros2_pkg__action__Navigate_SendGoal_Request__create()
{
  ros2_pkg__action__Navigate_SendGoal_Request * msg = (ros2_pkg__action__Navigate_SendGoal_Request *)malloc(sizeof(ros2_pkg__action__Navigate_SendGoal_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros2_pkg__action__Navigate_SendGoal_Request));
  bool success = ros2_pkg__action__Navigate_SendGoal_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
ros2_pkg__action__Navigate_SendGoal_Request__destroy(ros2_pkg__action__Navigate_SendGoal_Request * msg)
{
  if (msg) {
    ros2_pkg__action__Navigate_SendGoal_Request__fini(msg);
  }
  free(msg);
}


bool
ros2_pkg__action__Navigate_SendGoal_Request__Sequence__init(ros2_pkg__action__Navigate_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  ros2_pkg__action__Navigate_SendGoal_Request * data = NULL;
  if (size) {
    data = (ros2_pkg__action__Navigate_SendGoal_Request *)calloc(size, sizeof(ros2_pkg__action__Navigate_SendGoal_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros2_pkg__action__Navigate_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros2_pkg__action__Navigate_SendGoal_Request__fini(&data[i - 1]);
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
ros2_pkg__action__Navigate_SendGoal_Request__Sequence__fini(ros2_pkg__action__Navigate_SendGoal_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      ros2_pkg__action__Navigate_SendGoal_Request__fini(&array->data[i]);
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

ros2_pkg__action__Navigate_SendGoal_Request__Sequence *
ros2_pkg__action__Navigate_SendGoal_Request__Sequence__create(size_t size)
{
  ros2_pkg__action__Navigate_SendGoal_Request__Sequence * array = (ros2_pkg__action__Navigate_SendGoal_Request__Sequence *)malloc(sizeof(ros2_pkg__action__Navigate_SendGoal_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = ros2_pkg__action__Navigate_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
ros2_pkg__action__Navigate_SendGoal_Request__Sequence__destroy(ros2_pkg__action__Navigate_SendGoal_Request__Sequence * array)
{
  if (array) {
    ros2_pkg__action__Navigate_SendGoal_Request__Sequence__fini(array);
  }
  free(array);
}

bool
ros2_pkg__action__Navigate_SendGoal_Request__Sequence__are_equal(const ros2_pkg__action__Navigate_SendGoal_Request__Sequence * lhs, const ros2_pkg__action__Navigate_SendGoal_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ros2_pkg__action__Navigate_SendGoal_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ros2_pkg__action__Navigate_SendGoal_Request__Sequence__copy(
  const ros2_pkg__action__Navigate_SendGoal_Request__Sequence * input,
  ros2_pkg__action__Navigate_SendGoal_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ros2_pkg__action__Navigate_SendGoal_Request);
    ros2_pkg__action__Navigate_SendGoal_Request * data =
      (ros2_pkg__action__Navigate_SendGoal_Request *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ros2_pkg__action__Navigate_SendGoal_Request__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          ros2_pkg__action__Navigate_SendGoal_Request__fini(&data[i]);
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
    if (!ros2_pkg__action__Navigate_SendGoal_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
ros2_pkg__action__Navigate_SendGoal_Response__init(ros2_pkg__action__Navigate_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    ros2_pkg__action__Navigate_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
ros2_pkg__action__Navigate_SendGoal_Response__fini(ros2_pkg__action__Navigate_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

bool
ros2_pkg__action__Navigate_SendGoal_Response__are_equal(const ros2_pkg__action__Navigate_SendGoal_Response * lhs, const ros2_pkg__action__Navigate_SendGoal_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // accepted
  if (lhs->accepted != rhs->accepted) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  return true;
}

bool
ros2_pkg__action__Navigate_SendGoal_Response__copy(
  const ros2_pkg__action__Navigate_SendGoal_Response * input,
  ros2_pkg__action__Navigate_SendGoal_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // accepted
  output->accepted = input->accepted;
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  return true;
}

ros2_pkg__action__Navigate_SendGoal_Response *
ros2_pkg__action__Navigate_SendGoal_Response__create()
{
  ros2_pkg__action__Navigate_SendGoal_Response * msg = (ros2_pkg__action__Navigate_SendGoal_Response *)malloc(sizeof(ros2_pkg__action__Navigate_SendGoal_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros2_pkg__action__Navigate_SendGoal_Response));
  bool success = ros2_pkg__action__Navigate_SendGoal_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
ros2_pkg__action__Navigate_SendGoal_Response__destroy(ros2_pkg__action__Navigate_SendGoal_Response * msg)
{
  if (msg) {
    ros2_pkg__action__Navigate_SendGoal_Response__fini(msg);
  }
  free(msg);
}


bool
ros2_pkg__action__Navigate_SendGoal_Response__Sequence__init(ros2_pkg__action__Navigate_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  ros2_pkg__action__Navigate_SendGoal_Response * data = NULL;
  if (size) {
    data = (ros2_pkg__action__Navigate_SendGoal_Response *)calloc(size, sizeof(ros2_pkg__action__Navigate_SendGoal_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros2_pkg__action__Navigate_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros2_pkg__action__Navigate_SendGoal_Response__fini(&data[i - 1]);
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
ros2_pkg__action__Navigate_SendGoal_Response__Sequence__fini(ros2_pkg__action__Navigate_SendGoal_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      ros2_pkg__action__Navigate_SendGoal_Response__fini(&array->data[i]);
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

ros2_pkg__action__Navigate_SendGoal_Response__Sequence *
ros2_pkg__action__Navigate_SendGoal_Response__Sequence__create(size_t size)
{
  ros2_pkg__action__Navigate_SendGoal_Response__Sequence * array = (ros2_pkg__action__Navigate_SendGoal_Response__Sequence *)malloc(sizeof(ros2_pkg__action__Navigate_SendGoal_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = ros2_pkg__action__Navigate_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
ros2_pkg__action__Navigate_SendGoal_Response__Sequence__destroy(ros2_pkg__action__Navigate_SendGoal_Response__Sequence * array)
{
  if (array) {
    ros2_pkg__action__Navigate_SendGoal_Response__Sequence__fini(array);
  }
  free(array);
}

bool
ros2_pkg__action__Navigate_SendGoal_Response__Sequence__are_equal(const ros2_pkg__action__Navigate_SendGoal_Response__Sequence * lhs, const ros2_pkg__action__Navigate_SendGoal_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ros2_pkg__action__Navigate_SendGoal_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ros2_pkg__action__Navigate_SendGoal_Response__Sequence__copy(
  const ros2_pkg__action__Navigate_SendGoal_Response__Sequence * input,
  ros2_pkg__action__Navigate_SendGoal_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ros2_pkg__action__Navigate_SendGoal_Response);
    ros2_pkg__action__Navigate_SendGoal_Response * data =
      (ros2_pkg__action__Navigate_SendGoal_Response *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ros2_pkg__action__Navigate_SendGoal_Response__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          ros2_pkg__action__Navigate_SendGoal_Response__fini(&data[i]);
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
    if (!ros2_pkg__action__Navigate_SendGoal_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"

bool
ros2_pkg__action__Navigate_GetResult_Request__init(ros2_pkg__action__Navigate_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    ros2_pkg__action__Navigate_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
ros2_pkg__action__Navigate_GetResult_Request__fini(ros2_pkg__action__Navigate_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

bool
ros2_pkg__action__Navigate_GetResult_Request__are_equal(const ros2_pkg__action__Navigate_GetResult_Request * lhs, const ros2_pkg__action__Navigate_GetResult_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  return true;
}

bool
ros2_pkg__action__Navigate_GetResult_Request__copy(
  const ros2_pkg__action__Navigate_GetResult_Request * input,
  ros2_pkg__action__Navigate_GetResult_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  return true;
}

ros2_pkg__action__Navigate_GetResult_Request *
ros2_pkg__action__Navigate_GetResult_Request__create()
{
  ros2_pkg__action__Navigate_GetResult_Request * msg = (ros2_pkg__action__Navigate_GetResult_Request *)malloc(sizeof(ros2_pkg__action__Navigate_GetResult_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros2_pkg__action__Navigate_GetResult_Request));
  bool success = ros2_pkg__action__Navigate_GetResult_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
ros2_pkg__action__Navigate_GetResult_Request__destroy(ros2_pkg__action__Navigate_GetResult_Request * msg)
{
  if (msg) {
    ros2_pkg__action__Navigate_GetResult_Request__fini(msg);
  }
  free(msg);
}


bool
ros2_pkg__action__Navigate_GetResult_Request__Sequence__init(ros2_pkg__action__Navigate_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  ros2_pkg__action__Navigate_GetResult_Request * data = NULL;
  if (size) {
    data = (ros2_pkg__action__Navigate_GetResult_Request *)calloc(size, sizeof(ros2_pkg__action__Navigate_GetResult_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros2_pkg__action__Navigate_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros2_pkg__action__Navigate_GetResult_Request__fini(&data[i - 1]);
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
ros2_pkg__action__Navigate_GetResult_Request__Sequence__fini(ros2_pkg__action__Navigate_GetResult_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      ros2_pkg__action__Navigate_GetResult_Request__fini(&array->data[i]);
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

ros2_pkg__action__Navigate_GetResult_Request__Sequence *
ros2_pkg__action__Navigate_GetResult_Request__Sequence__create(size_t size)
{
  ros2_pkg__action__Navigate_GetResult_Request__Sequence * array = (ros2_pkg__action__Navigate_GetResult_Request__Sequence *)malloc(sizeof(ros2_pkg__action__Navigate_GetResult_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = ros2_pkg__action__Navigate_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
ros2_pkg__action__Navigate_GetResult_Request__Sequence__destroy(ros2_pkg__action__Navigate_GetResult_Request__Sequence * array)
{
  if (array) {
    ros2_pkg__action__Navigate_GetResult_Request__Sequence__fini(array);
  }
  free(array);
}

bool
ros2_pkg__action__Navigate_GetResult_Request__Sequence__are_equal(const ros2_pkg__action__Navigate_GetResult_Request__Sequence * lhs, const ros2_pkg__action__Navigate_GetResult_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ros2_pkg__action__Navigate_GetResult_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ros2_pkg__action__Navigate_GetResult_Request__Sequence__copy(
  const ros2_pkg__action__Navigate_GetResult_Request__Sequence * input,
  ros2_pkg__action__Navigate_GetResult_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ros2_pkg__action__Navigate_GetResult_Request);
    ros2_pkg__action__Navigate_GetResult_Request * data =
      (ros2_pkg__action__Navigate_GetResult_Request *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ros2_pkg__action__Navigate_GetResult_Request__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          ros2_pkg__action__Navigate_GetResult_Request__fini(&data[i]);
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
    if (!ros2_pkg__action__Navigate_GetResult_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `result`
// already included above
// #include "ros2_pkg/action/detail/navigate__functions.h"

bool
ros2_pkg__action__Navigate_GetResult_Response__init(ros2_pkg__action__Navigate_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!ros2_pkg__action__Navigate_Result__init(&msg->result)) {
    ros2_pkg__action__Navigate_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
ros2_pkg__action__Navigate_GetResult_Response__fini(ros2_pkg__action__Navigate_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  ros2_pkg__action__Navigate_Result__fini(&msg->result);
}

bool
ros2_pkg__action__Navigate_GetResult_Response__are_equal(const ros2_pkg__action__Navigate_GetResult_Response * lhs, const ros2_pkg__action__Navigate_GetResult_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // result
  if (!ros2_pkg__action__Navigate_Result__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
ros2_pkg__action__Navigate_GetResult_Response__copy(
  const ros2_pkg__action__Navigate_GetResult_Response * input,
  ros2_pkg__action__Navigate_GetResult_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  // result
  if (!ros2_pkg__action__Navigate_Result__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

ros2_pkg__action__Navigate_GetResult_Response *
ros2_pkg__action__Navigate_GetResult_Response__create()
{
  ros2_pkg__action__Navigate_GetResult_Response * msg = (ros2_pkg__action__Navigate_GetResult_Response *)malloc(sizeof(ros2_pkg__action__Navigate_GetResult_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros2_pkg__action__Navigate_GetResult_Response));
  bool success = ros2_pkg__action__Navigate_GetResult_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
ros2_pkg__action__Navigate_GetResult_Response__destroy(ros2_pkg__action__Navigate_GetResult_Response * msg)
{
  if (msg) {
    ros2_pkg__action__Navigate_GetResult_Response__fini(msg);
  }
  free(msg);
}


bool
ros2_pkg__action__Navigate_GetResult_Response__Sequence__init(ros2_pkg__action__Navigate_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  ros2_pkg__action__Navigate_GetResult_Response * data = NULL;
  if (size) {
    data = (ros2_pkg__action__Navigate_GetResult_Response *)calloc(size, sizeof(ros2_pkg__action__Navigate_GetResult_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros2_pkg__action__Navigate_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros2_pkg__action__Navigate_GetResult_Response__fini(&data[i - 1]);
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
ros2_pkg__action__Navigate_GetResult_Response__Sequence__fini(ros2_pkg__action__Navigate_GetResult_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      ros2_pkg__action__Navigate_GetResult_Response__fini(&array->data[i]);
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

ros2_pkg__action__Navigate_GetResult_Response__Sequence *
ros2_pkg__action__Navigate_GetResult_Response__Sequence__create(size_t size)
{
  ros2_pkg__action__Navigate_GetResult_Response__Sequence * array = (ros2_pkg__action__Navigate_GetResult_Response__Sequence *)malloc(sizeof(ros2_pkg__action__Navigate_GetResult_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = ros2_pkg__action__Navigate_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
ros2_pkg__action__Navigate_GetResult_Response__Sequence__destroy(ros2_pkg__action__Navigate_GetResult_Response__Sequence * array)
{
  if (array) {
    ros2_pkg__action__Navigate_GetResult_Response__Sequence__fini(array);
  }
  free(array);
}

bool
ros2_pkg__action__Navigate_GetResult_Response__Sequence__are_equal(const ros2_pkg__action__Navigate_GetResult_Response__Sequence * lhs, const ros2_pkg__action__Navigate_GetResult_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ros2_pkg__action__Navigate_GetResult_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ros2_pkg__action__Navigate_GetResult_Response__Sequence__copy(
  const ros2_pkg__action__Navigate_GetResult_Response__Sequence * input,
  ros2_pkg__action__Navigate_GetResult_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ros2_pkg__action__Navigate_GetResult_Response);
    ros2_pkg__action__Navigate_GetResult_Response * data =
      (ros2_pkg__action__Navigate_GetResult_Response *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ros2_pkg__action__Navigate_GetResult_Response__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          ros2_pkg__action__Navigate_GetResult_Response__fini(&data[i]);
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
    if (!ros2_pkg__action__Navigate_GetResult_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `feedback`
// already included above
// #include "ros2_pkg/action/detail/navigate__functions.h"

bool
ros2_pkg__action__Navigate_FeedbackMessage__init(ros2_pkg__action__Navigate_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    ros2_pkg__action__Navigate_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!ros2_pkg__action__Navigate_Feedback__init(&msg->feedback)) {
    ros2_pkg__action__Navigate_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
ros2_pkg__action__Navigate_FeedbackMessage__fini(ros2_pkg__action__Navigate_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  ros2_pkg__action__Navigate_Feedback__fini(&msg->feedback);
}

bool
ros2_pkg__action__Navigate_FeedbackMessage__are_equal(const ros2_pkg__action__Navigate_FeedbackMessage * lhs, const ros2_pkg__action__Navigate_FeedbackMessage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // feedback
  if (!ros2_pkg__action__Navigate_Feedback__are_equal(
      &(lhs->feedback), &(rhs->feedback)))
  {
    return false;
  }
  return true;
}

bool
ros2_pkg__action__Navigate_FeedbackMessage__copy(
  const ros2_pkg__action__Navigate_FeedbackMessage * input,
  ros2_pkg__action__Navigate_FeedbackMessage * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // feedback
  if (!ros2_pkg__action__Navigate_Feedback__copy(
      &(input->feedback), &(output->feedback)))
  {
    return false;
  }
  return true;
}

ros2_pkg__action__Navigate_FeedbackMessage *
ros2_pkg__action__Navigate_FeedbackMessage__create()
{
  ros2_pkg__action__Navigate_FeedbackMessage * msg = (ros2_pkg__action__Navigate_FeedbackMessage *)malloc(sizeof(ros2_pkg__action__Navigate_FeedbackMessage));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros2_pkg__action__Navigate_FeedbackMessage));
  bool success = ros2_pkg__action__Navigate_FeedbackMessage__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
ros2_pkg__action__Navigate_FeedbackMessage__destroy(ros2_pkg__action__Navigate_FeedbackMessage * msg)
{
  if (msg) {
    ros2_pkg__action__Navigate_FeedbackMessage__fini(msg);
  }
  free(msg);
}


bool
ros2_pkg__action__Navigate_FeedbackMessage__Sequence__init(ros2_pkg__action__Navigate_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  ros2_pkg__action__Navigate_FeedbackMessage * data = NULL;
  if (size) {
    data = (ros2_pkg__action__Navigate_FeedbackMessage *)calloc(size, sizeof(ros2_pkg__action__Navigate_FeedbackMessage));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros2_pkg__action__Navigate_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros2_pkg__action__Navigate_FeedbackMessage__fini(&data[i - 1]);
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
ros2_pkg__action__Navigate_FeedbackMessage__Sequence__fini(ros2_pkg__action__Navigate_FeedbackMessage__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      ros2_pkg__action__Navigate_FeedbackMessage__fini(&array->data[i]);
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

ros2_pkg__action__Navigate_FeedbackMessage__Sequence *
ros2_pkg__action__Navigate_FeedbackMessage__Sequence__create(size_t size)
{
  ros2_pkg__action__Navigate_FeedbackMessage__Sequence * array = (ros2_pkg__action__Navigate_FeedbackMessage__Sequence *)malloc(sizeof(ros2_pkg__action__Navigate_FeedbackMessage__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = ros2_pkg__action__Navigate_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
ros2_pkg__action__Navigate_FeedbackMessage__Sequence__destroy(ros2_pkg__action__Navigate_FeedbackMessage__Sequence * array)
{
  if (array) {
    ros2_pkg__action__Navigate_FeedbackMessage__Sequence__fini(array);
  }
  free(array);
}

bool
ros2_pkg__action__Navigate_FeedbackMessage__Sequence__are_equal(const ros2_pkg__action__Navigate_FeedbackMessage__Sequence * lhs, const ros2_pkg__action__Navigate_FeedbackMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ros2_pkg__action__Navigate_FeedbackMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ros2_pkg__action__Navigate_FeedbackMessage__Sequence__copy(
  const ros2_pkg__action__Navigate_FeedbackMessage__Sequence * input,
  ros2_pkg__action__Navigate_FeedbackMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ros2_pkg__action__Navigate_FeedbackMessage);
    ros2_pkg__action__Navigate_FeedbackMessage * data =
      (ros2_pkg__action__Navigate_FeedbackMessage *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ros2_pkg__action__Navigate_FeedbackMessage__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          ros2_pkg__action__Navigate_FeedbackMessage__fini(&data[i]);
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
    if (!ros2_pkg__action__Navigate_FeedbackMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
