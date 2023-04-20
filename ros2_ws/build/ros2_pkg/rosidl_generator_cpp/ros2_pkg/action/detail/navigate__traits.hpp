// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ros2_pkg:action/Navigate.idl
// generated code does not contain a copyright notice

#ifndef ROS2_PKG__ACTION__DETAIL__NAVIGATE__TRAITS_HPP_
#define ROS2_PKG__ACTION__DETAIL__NAVIGATE__TRAITS_HPP_

#include "ros2_pkg/action/detail/navigate__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'goal_point'
#include "geometry_msgs/msg/detail/point__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ros2_pkg::action::Navigate_Goal>()
{
  return "ros2_pkg::action::Navigate_Goal";
}

template<>
inline const char * name<ros2_pkg::action::Navigate_Goal>()
{
  return "ros2_pkg/action/Navigate_Goal";
}

template<>
struct has_fixed_size<ros2_pkg::action::Navigate_Goal>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Point>::value> {};

template<>
struct has_bounded_size<ros2_pkg::action::Navigate_Goal>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Point>::value> {};

template<>
struct is_message<ros2_pkg::action::Navigate_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ros2_pkg::action::Navigate_Result>()
{
  return "ros2_pkg::action::Navigate_Result";
}

template<>
inline const char * name<ros2_pkg::action::Navigate_Result>()
{
  return "ros2_pkg/action/Navigate_Result";
}

template<>
struct has_fixed_size<ros2_pkg::action::Navigate_Result>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<ros2_pkg::action::Navigate_Result>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<ros2_pkg::action::Navigate_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ros2_pkg::action::Navigate_Feedback>()
{
  return "ros2_pkg::action::Navigate_Feedback";
}

template<>
inline const char * name<ros2_pkg::action::Navigate_Feedback>()
{
  return "ros2_pkg/action/Navigate_Feedback";
}

template<>
struct has_fixed_size<ros2_pkg::action::Navigate_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<ros2_pkg::action::Navigate_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<ros2_pkg::action::Navigate_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "ros2_pkg/action/detail/navigate__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ros2_pkg::action::Navigate_SendGoal_Request>()
{
  return "ros2_pkg::action::Navigate_SendGoal_Request";
}

template<>
inline const char * name<ros2_pkg::action::Navigate_SendGoal_Request>()
{
  return "ros2_pkg/action/Navigate_SendGoal_Request";
}

template<>
struct has_fixed_size<ros2_pkg::action::Navigate_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<ros2_pkg::action::Navigate_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<ros2_pkg::action::Navigate_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<ros2_pkg::action::Navigate_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<ros2_pkg::action::Navigate_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ros2_pkg::action::Navigate_SendGoal_Response>()
{
  return "ros2_pkg::action::Navigate_SendGoal_Response";
}

template<>
inline const char * name<ros2_pkg::action::Navigate_SendGoal_Response>()
{
  return "ros2_pkg/action/Navigate_SendGoal_Response";
}

template<>
struct has_fixed_size<ros2_pkg::action::Navigate_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<ros2_pkg::action::Navigate_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<ros2_pkg::action::Navigate_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ros2_pkg::action::Navigate_SendGoal>()
{
  return "ros2_pkg::action::Navigate_SendGoal";
}

template<>
inline const char * name<ros2_pkg::action::Navigate_SendGoal>()
{
  return "ros2_pkg/action/Navigate_SendGoal";
}

template<>
struct has_fixed_size<ros2_pkg::action::Navigate_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<ros2_pkg::action::Navigate_SendGoal_Request>::value &&
    has_fixed_size<ros2_pkg::action::Navigate_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<ros2_pkg::action::Navigate_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<ros2_pkg::action::Navigate_SendGoal_Request>::value &&
    has_bounded_size<ros2_pkg::action::Navigate_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<ros2_pkg::action::Navigate_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<ros2_pkg::action::Navigate_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<ros2_pkg::action::Navigate_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ros2_pkg::action::Navigate_GetResult_Request>()
{
  return "ros2_pkg::action::Navigate_GetResult_Request";
}

template<>
inline const char * name<ros2_pkg::action::Navigate_GetResult_Request>()
{
  return "ros2_pkg/action/Navigate_GetResult_Request";
}

template<>
struct has_fixed_size<ros2_pkg::action::Navigate_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<ros2_pkg::action::Navigate_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<ros2_pkg::action::Navigate_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "ros2_pkg/action/detail/navigate__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ros2_pkg::action::Navigate_GetResult_Response>()
{
  return "ros2_pkg::action::Navigate_GetResult_Response";
}

template<>
inline const char * name<ros2_pkg::action::Navigate_GetResult_Response>()
{
  return "ros2_pkg/action/Navigate_GetResult_Response";
}

template<>
struct has_fixed_size<ros2_pkg::action::Navigate_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<ros2_pkg::action::Navigate_Result>::value> {};

template<>
struct has_bounded_size<ros2_pkg::action::Navigate_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<ros2_pkg::action::Navigate_Result>::value> {};

template<>
struct is_message<ros2_pkg::action::Navigate_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ros2_pkg::action::Navigate_GetResult>()
{
  return "ros2_pkg::action::Navigate_GetResult";
}

template<>
inline const char * name<ros2_pkg::action::Navigate_GetResult>()
{
  return "ros2_pkg/action/Navigate_GetResult";
}

template<>
struct has_fixed_size<ros2_pkg::action::Navigate_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<ros2_pkg::action::Navigate_GetResult_Request>::value &&
    has_fixed_size<ros2_pkg::action::Navigate_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<ros2_pkg::action::Navigate_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<ros2_pkg::action::Navigate_GetResult_Request>::value &&
    has_bounded_size<ros2_pkg::action::Navigate_GetResult_Response>::value
  >
{
};

template<>
struct is_service<ros2_pkg::action::Navigate_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<ros2_pkg::action::Navigate_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<ros2_pkg::action::Navigate_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "ros2_pkg/action/detail/navigate__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ros2_pkg::action::Navigate_FeedbackMessage>()
{
  return "ros2_pkg::action::Navigate_FeedbackMessage";
}

template<>
inline const char * name<ros2_pkg::action::Navigate_FeedbackMessage>()
{
  return "ros2_pkg/action/Navigate_FeedbackMessage";
}

template<>
struct has_fixed_size<ros2_pkg::action::Navigate_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<ros2_pkg::action::Navigate_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<ros2_pkg::action::Navigate_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<ros2_pkg::action::Navigate_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<ros2_pkg::action::Navigate_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<ros2_pkg::action::Navigate>
  : std::true_type
{
};

template<>
struct is_action_goal<ros2_pkg::action::Navigate_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<ros2_pkg::action::Navigate_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<ros2_pkg::action::Navigate_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // ROS2_PKG__ACTION__DETAIL__NAVIGATE__TRAITS_HPP_
