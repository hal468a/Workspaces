// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros2_pkg:srv/OddEvenCheck.idl
// generated code does not contain a copyright notice

#ifndef ROS2_PKG__SRV__DETAIL__ODD_EVEN_CHECK__BUILDER_HPP_
#define ROS2_PKG__SRV__DETAIL__ODD_EVEN_CHECK__BUILDER_HPP_

#include "ros2_pkg/srv/detail/odd_even_check__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace ros2_pkg
{

namespace srv
{

namespace builder
{

class Init_OddEvenCheck_Request_number
{
public:
  Init_OddEvenCheck_Request_number()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ros2_pkg::srv::OddEvenCheck_Request number(::ros2_pkg::srv::OddEvenCheck_Request::_number_type arg)
  {
    msg_.number = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_pkg::srv::OddEvenCheck_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_pkg::srv::OddEvenCheck_Request>()
{
  return ros2_pkg::srv::builder::Init_OddEvenCheck_Request_number();
}

}  // namespace ros2_pkg


namespace ros2_pkg
{

namespace srv
{

namespace builder
{

class Init_OddEvenCheck_Response_decision
{
public:
  Init_OddEvenCheck_Response_decision()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ros2_pkg::srv::OddEvenCheck_Response decision(::ros2_pkg::srv::OddEvenCheck_Response::_decision_type arg)
  {
    msg_.decision = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_pkg::srv::OddEvenCheck_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_pkg::srv::OddEvenCheck_Response>()
{
  return ros2_pkg::srv::builder::Init_OddEvenCheck_Response_decision();
}

}  // namespace ros2_pkg

#endif  // ROS2_PKG__SRV__DETAIL__ODD_EVEN_CHECK__BUILDER_HPP_
