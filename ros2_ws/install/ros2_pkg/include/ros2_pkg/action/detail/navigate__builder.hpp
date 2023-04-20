// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros2_pkg:action/Navigate.idl
// generated code does not contain a copyright notice

#ifndef ROS2_PKG__ACTION__DETAIL__NAVIGATE__BUILDER_HPP_
#define ROS2_PKG__ACTION__DETAIL__NAVIGATE__BUILDER_HPP_

#include "ros2_pkg/action/detail/navigate__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace ros2_pkg
{

namespace action
{

namespace builder
{

class Init_Navigate_Goal_goal_point
{
public:
  Init_Navigate_Goal_goal_point()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ros2_pkg::action::Navigate_Goal goal_point(::ros2_pkg::action::Navigate_Goal::_goal_point_type arg)
  {
    msg_.goal_point = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_pkg::action::Navigate_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_pkg::action::Navigate_Goal>()
{
  return ros2_pkg::action::builder::Init_Navigate_Goal_goal_point();
}

}  // namespace ros2_pkg


namespace ros2_pkg
{

namespace action
{

namespace builder
{

class Init_Navigate_Result_elapsed_time
{
public:
  Init_Navigate_Result_elapsed_time()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ros2_pkg::action::Navigate_Result elapsed_time(::ros2_pkg::action::Navigate_Result::_elapsed_time_type arg)
  {
    msg_.elapsed_time = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_pkg::action::Navigate_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_pkg::action::Navigate_Result>()
{
  return ros2_pkg::action::builder::Init_Navigate_Result_elapsed_time();
}

}  // namespace ros2_pkg


namespace ros2_pkg
{

namespace action
{

namespace builder
{

class Init_Navigate_Feedback_distance_to_point
{
public:
  Init_Navigate_Feedback_distance_to_point()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ros2_pkg::action::Navigate_Feedback distance_to_point(::ros2_pkg::action::Navigate_Feedback::_distance_to_point_type arg)
  {
    msg_.distance_to_point = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_pkg::action::Navigate_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_pkg::action::Navigate_Feedback>()
{
  return ros2_pkg::action::builder::Init_Navigate_Feedback_distance_to_point();
}

}  // namespace ros2_pkg


namespace ros2_pkg
{

namespace action
{

namespace builder
{

class Init_Navigate_SendGoal_Request_goal
{
public:
  explicit Init_Navigate_SendGoal_Request_goal(::ros2_pkg::action::Navigate_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::ros2_pkg::action::Navigate_SendGoal_Request goal(::ros2_pkg::action::Navigate_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_pkg::action::Navigate_SendGoal_Request msg_;
};

class Init_Navigate_SendGoal_Request_goal_id
{
public:
  Init_Navigate_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Navigate_SendGoal_Request_goal goal_id(::ros2_pkg::action::Navigate_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Navigate_SendGoal_Request_goal(msg_);
  }

private:
  ::ros2_pkg::action::Navigate_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_pkg::action::Navigate_SendGoal_Request>()
{
  return ros2_pkg::action::builder::Init_Navigate_SendGoal_Request_goal_id();
}

}  // namespace ros2_pkg


namespace ros2_pkg
{

namespace action
{

namespace builder
{

class Init_Navigate_SendGoal_Response_stamp
{
public:
  explicit Init_Navigate_SendGoal_Response_stamp(::ros2_pkg::action::Navigate_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::ros2_pkg::action::Navigate_SendGoal_Response stamp(::ros2_pkg::action::Navigate_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_pkg::action::Navigate_SendGoal_Response msg_;
};

class Init_Navigate_SendGoal_Response_accepted
{
public:
  Init_Navigate_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Navigate_SendGoal_Response_stamp accepted(::ros2_pkg::action::Navigate_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_Navigate_SendGoal_Response_stamp(msg_);
  }

private:
  ::ros2_pkg::action::Navigate_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_pkg::action::Navigate_SendGoal_Response>()
{
  return ros2_pkg::action::builder::Init_Navigate_SendGoal_Response_accepted();
}

}  // namespace ros2_pkg


namespace ros2_pkg
{

namespace action
{

namespace builder
{

class Init_Navigate_GetResult_Request_goal_id
{
public:
  Init_Navigate_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ros2_pkg::action::Navigate_GetResult_Request goal_id(::ros2_pkg::action::Navigate_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_pkg::action::Navigate_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_pkg::action::Navigate_GetResult_Request>()
{
  return ros2_pkg::action::builder::Init_Navigate_GetResult_Request_goal_id();
}

}  // namespace ros2_pkg


namespace ros2_pkg
{

namespace action
{

namespace builder
{

class Init_Navigate_GetResult_Response_result
{
public:
  explicit Init_Navigate_GetResult_Response_result(::ros2_pkg::action::Navigate_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::ros2_pkg::action::Navigate_GetResult_Response result(::ros2_pkg::action::Navigate_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_pkg::action::Navigate_GetResult_Response msg_;
};

class Init_Navigate_GetResult_Response_status
{
public:
  Init_Navigate_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Navigate_GetResult_Response_result status(::ros2_pkg::action::Navigate_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_Navigate_GetResult_Response_result(msg_);
  }

private:
  ::ros2_pkg::action::Navigate_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_pkg::action::Navigate_GetResult_Response>()
{
  return ros2_pkg::action::builder::Init_Navigate_GetResult_Response_status();
}

}  // namespace ros2_pkg


namespace ros2_pkg
{

namespace action
{

namespace builder
{

class Init_Navigate_FeedbackMessage_feedback
{
public:
  explicit Init_Navigate_FeedbackMessage_feedback(::ros2_pkg::action::Navigate_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::ros2_pkg::action::Navigate_FeedbackMessage feedback(::ros2_pkg::action::Navigate_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_pkg::action::Navigate_FeedbackMessage msg_;
};

class Init_Navigate_FeedbackMessage_goal_id
{
public:
  Init_Navigate_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Navigate_FeedbackMessage_feedback goal_id(::ros2_pkg::action::Navigate_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Navigate_FeedbackMessage_feedback(msg_);
  }

private:
  ::ros2_pkg::action::Navigate_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_pkg::action::Navigate_FeedbackMessage>()
{
  return ros2_pkg::action::builder::Init_Navigate_FeedbackMessage_goal_id();
}

}  // namespace ros2_pkg

#endif  // ROS2_PKG__ACTION__DETAIL__NAVIGATE__BUILDER_HPP_
