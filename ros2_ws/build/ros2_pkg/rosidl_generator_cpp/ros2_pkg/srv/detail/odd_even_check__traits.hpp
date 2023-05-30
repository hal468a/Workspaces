// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ros2_pkg:srv/OddEvenCheck.idl
// generated code does not contain a copyright notice

#ifndef ROS2_PKG__SRV__DETAIL__ODD_EVEN_CHECK__TRAITS_HPP_
#define ROS2_PKG__SRV__DETAIL__ODD_EVEN_CHECK__TRAITS_HPP_

#include "ros2_pkg/srv/detail/odd_even_check__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const ros2_pkg::srv::OddEvenCheck_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: number
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "number: ";
    value_to_yaml(msg.number, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ros2_pkg::srv::OddEvenCheck_Request & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<ros2_pkg::srv::OddEvenCheck_Request>()
{
  return "ros2_pkg::srv::OddEvenCheck_Request";
}

template<>
inline const char * name<ros2_pkg::srv::OddEvenCheck_Request>()
{
  return "ros2_pkg/srv/OddEvenCheck_Request";
}

template<>
struct has_fixed_size<ros2_pkg::srv::OddEvenCheck_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<ros2_pkg::srv::OddEvenCheck_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<ros2_pkg::srv::OddEvenCheck_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

inline void to_yaml(
  const ros2_pkg::srv::OddEvenCheck_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: decision
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "decision: ";
    value_to_yaml(msg.decision, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ros2_pkg::srv::OddEvenCheck_Response & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<ros2_pkg::srv::OddEvenCheck_Response>()
{
  return "ros2_pkg::srv::OddEvenCheck_Response";
}

template<>
inline const char * name<ros2_pkg::srv::OddEvenCheck_Response>()
{
  return "ros2_pkg/srv/OddEvenCheck_Response";
}

template<>
struct has_fixed_size<ros2_pkg::srv::OddEvenCheck_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ros2_pkg::srv::OddEvenCheck_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ros2_pkg::srv::OddEvenCheck_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ros2_pkg::srv::OddEvenCheck>()
{
  return "ros2_pkg::srv::OddEvenCheck";
}

template<>
inline const char * name<ros2_pkg::srv::OddEvenCheck>()
{
  return "ros2_pkg/srv/OddEvenCheck";
}

template<>
struct has_fixed_size<ros2_pkg::srv::OddEvenCheck>
  : std::integral_constant<
    bool,
    has_fixed_size<ros2_pkg::srv::OddEvenCheck_Request>::value &&
    has_fixed_size<ros2_pkg::srv::OddEvenCheck_Response>::value
  >
{
};

template<>
struct has_bounded_size<ros2_pkg::srv::OddEvenCheck>
  : std::integral_constant<
    bool,
    has_bounded_size<ros2_pkg::srv::OddEvenCheck_Request>::value &&
    has_bounded_size<ros2_pkg::srv::OddEvenCheck_Response>::value
  >
{
};

template<>
struct is_service<ros2_pkg::srv::OddEvenCheck>
  : std::true_type
{
};

template<>
struct is_service_request<ros2_pkg::srv::OddEvenCheck_Request>
  : std::true_type
{
};

template<>
struct is_service_response<ros2_pkg::srv::OddEvenCheck_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // ROS2_PKG__SRV__DETAIL__ODD_EVEN_CHECK__TRAITS_HPP_
