// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros2_pkg:srv/TurnCamera.idl
// generated code does not contain a copyright notice

#ifndef ROS2_PKG__SRV__DETAIL__TURN_CAMERA__STRUCT_H_
#define ROS2_PKG__SRV__DETAIL__TURN_CAMERA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in srv/TurnCamera in the package ros2_pkg.
typedef struct ros2_pkg__srv__TurnCamera_Request
{
  float degree_turrn;
} ros2_pkg__srv__TurnCamera_Request;

// Struct for a sequence of ros2_pkg__srv__TurnCamera_Request.
typedef struct ros2_pkg__srv__TurnCamera_Request__Sequence
{
  ros2_pkg__srv__TurnCamera_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_pkg__srv__TurnCamera_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'image'
#include "sensor_msgs/msg/detail/image__struct.h"

// Struct defined in srv/TurnCamera in the package ros2_pkg.
typedef struct ros2_pkg__srv__TurnCamera_Response
{
  sensor_msgs__msg__Image image;
} ros2_pkg__srv__TurnCamera_Response;

// Struct for a sequence of ros2_pkg__srv__TurnCamera_Response.
typedef struct ros2_pkg__srv__TurnCamera_Response__Sequence
{
  ros2_pkg__srv__TurnCamera_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_pkg__srv__TurnCamera_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS2_PKG__SRV__DETAIL__TURN_CAMERA__STRUCT_H_
