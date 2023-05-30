// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ros2_pkg:srv/TurnCamera.idl
// generated code does not contain a copyright notice

#ifndef ROS2_PKG__SRV__DETAIL__TURN_CAMERA__TRAITS_HPP_
#define ROS2_PKG__SRV__DETAIL__TURN_CAMERA__TRAITS_HPP_

#include "ros2_pkg/srv/detail/turn_camera__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const ros2_pkg::srv::TurnCamera_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: degree_turn
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "degree_turn: ";
    value_to_yaml(msg.degree_turn, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ros2_pkg::srv::TurnCamera_Request & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<ros2_pkg::srv::TurnCamera_Request>()
{
  return "ros2_pkg::srv::TurnCamera_Request";
}

template<>
inline const char * name<ros2_pkg::srv::TurnCamera_Request>()
{
  return "ros2_pkg/srv/TurnCamera_Request";
}

template<>
struct has_fixed_size<ros2_pkg::srv::TurnCamera_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<ros2_pkg::srv::TurnCamera_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<ros2_pkg::srv::TurnCamera_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'image'
#include "sensor_msgs/msg/detail/image__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const ros2_pkg::srv::TurnCamera_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: image
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "image:\n";
    to_yaml(msg.image, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ros2_pkg::srv::TurnCamera_Response & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<ros2_pkg::srv::TurnCamera_Response>()
{
  return "ros2_pkg::srv::TurnCamera_Response";
}

template<>
inline const char * name<ros2_pkg::srv::TurnCamera_Response>()
{
  return "ros2_pkg/srv/TurnCamera_Response";
}

template<>
struct has_fixed_size<ros2_pkg::srv::TurnCamera_Response>
  : std::integral_constant<bool, has_fixed_size<sensor_msgs::msg::Image>::value> {};

template<>
struct has_bounded_size<ros2_pkg::srv::TurnCamera_Response>
  : std::integral_constant<bool, has_bounded_size<sensor_msgs::msg::Image>::value> {};

template<>
struct is_message<ros2_pkg::srv::TurnCamera_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ros2_pkg::srv::TurnCamera>()
{
  return "ros2_pkg::srv::TurnCamera";
}

template<>
inline const char * name<ros2_pkg::srv::TurnCamera>()
{
  return "ros2_pkg/srv/TurnCamera";
}

template<>
struct has_fixed_size<ros2_pkg::srv::TurnCamera>
  : std::integral_constant<
    bool,
    has_fixed_size<ros2_pkg::srv::TurnCamera_Request>::value &&
    has_fixed_size<ros2_pkg::srv::TurnCamera_Response>::value
  >
{
};

template<>
struct has_bounded_size<ros2_pkg::srv::TurnCamera>
  : std::integral_constant<
    bool,
    has_bounded_size<ros2_pkg::srv::TurnCamera_Request>::value &&
    has_bounded_size<ros2_pkg::srv::TurnCamera_Response>::value
  >
{
};

template<>
struct is_service<ros2_pkg::srv::TurnCamera>
  : std::true_type
{
};

template<>
struct is_service_request<ros2_pkg::srv::TurnCamera_Request>
  : std::true_type
{
};

template<>
struct is_service_response<ros2_pkg::srv::TurnCamera_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // ROS2_PKG__SRV__DETAIL__TURN_CAMERA__TRAITS_HPP_
