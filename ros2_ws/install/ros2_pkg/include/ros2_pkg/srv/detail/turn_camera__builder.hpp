// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros2_pkg:srv/TurnCamera.idl
// generated code does not contain a copyright notice

#ifndef ROS2_PKG__SRV__DETAIL__TURN_CAMERA__BUILDER_HPP_
#define ROS2_PKG__SRV__DETAIL__TURN_CAMERA__BUILDER_HPP_

#include "ros2_pkg/srv/detail/turn_camera__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace ros2_pkg
{

namespace srv
{

namespace builder
{

class Init_TurnCamera_Request_degree_turn
{
public:
  Init_TurnCamera_Request_degree_turn()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ros2_pkg::srv::TurnCamera_Request degree_turn(::ros2_pkg::srv::TurnCamera_Request::_degree_turn_type arg)
  {
    msg_.degree_turn = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_pkg::srv::TurnCamera_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_pkg::srv::TurnCamera_Request>()
{
  return ros2_pkg::srv::builder::Init_TurnCamera_Request_degree_turn();
}

}  // namespace ros2_pkg


namespace ros2_pkg
{

namespace srv
{

namespace builder
{

class Init_TurnCamera_Response_image
{
public:
  Init_TurnCamera_Response_image()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ros2_pkg::srv::TurnCamera_Response image(::ros2_pkg::srv::TurnCamera_Response::_image_type arg)
  {
    msg_.image = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_pkg::srv::TurnCamera_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_pkg::srv::TurnCamera_Response>()
{
  return ros2_pkg::srv::builder::Init_TurnCamera_Response_image();
}

}  // namespace ros2_pkg

#endif  // ROS2_PKG__SRV__DETAIL__TURN_CAMERA__BUILDER_HPP_
