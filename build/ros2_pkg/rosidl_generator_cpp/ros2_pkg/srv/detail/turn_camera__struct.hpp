// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ros2_pkg:srv/TurnCamera.idl
// generated code does not contain a copyright notice

#ifndef ROS2_PKG__SRV__DETAIL__TURN_CAMERA__STRUCT_HPP_
#define ROS2_PKG__SRV__DETAIL__TURN_CAMERA__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__ros2_pkg__srv__TurnCamera_Request __attribute__((deprecated))
#else
# define DEPRECATED__ros2_pkg__srv__TurnCamera_Request __declspec(deprecated)
#endif

namespace ros2_pkg
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct TurnCamera_Request_
{
  using Type = TurnCamera_Request_<ContainerAllocator>;

  explicit TurnCamera_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->degree_turrn = 0.0f;
    }
  }

  explicit TurnCamera_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->degree_turrn = 0.0f;
    }
  }

  // field types and members
  using _degree_turrn_type =
    float;
  _degree_turrn_type degree_turrn;

  // setters for named parameter idiom
  Type & set__degree_turrn(
    const float & _arg)
  {
    this->degree_turrn = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros2_pkg::srv::TurnCamera_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros2_pkg::srv::TurnCamera_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros2_pkg::srv::TurnCamera_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros2_pkg::srv::TurnCamera_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros2_pkg::srv::TurnCamera_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros2_pkg::srv::TurnCamera_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros2_pkg::srv::TurnCamera_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros2_pkg::srv::TurnCamera_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros2_pkg::srv::TurnCamera_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros2_pkg::srv::TurnCamera_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros2_pkg__srv__TurnCamera_Request
    std::shared_ptr<ros2_pkg::srv::TurnCamera_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros2_pkg__srv__TurnCamera_Request
    std::shared_ptr<ros2_pkg::srv::TurnCamera_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TurnCamera_Request_ & other) const
  {
    if (this->degree_turrn != other.degree_turrn) {
      return false;
    }
    return true;
  }
  bool operator!=(const TurnCamera_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TurnCamera_Request_

// alias to use template instance with default allocator
using TurnCamera_Request =
  ros2_pkg::srv::TurnCamera_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace ros2_pkg


// Include directives for member types
// Member 'image'
#include "sensor_msgs/msg/detail/image__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ros2_pkg__srv__TurnCamera_Response __attribute__((deprecated))
#else
# define DEPRECATED__ros2_pkg__srv__TurnCamera_Response __declspec(deprecated)
#endif

namespace ros2_pkg
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct TurnCamera_Response_
{
  using Type = TurnCamera_Response_<ContainerAllocator>;

  explicit TurnCamera_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : image(_init)
  {
    (void)_init;
  }

  explicit TurnCamera_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : image(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _image_type =
    sensor_msgs::msg::Image_<ContainerAllocator>;
  _image_type image;

  // setters for named parameter idiom
  Type & set__image(
    const sensor_msgs::msg::Image_<ContainerAllocator> & _arg)
  {
    this->image = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros2_pkg::srv::TurnCamera_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros2_pkg::srv::TurnCamera_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros2_pkg::srv::TurnCamera_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros2_pkg::srv::TurnCamera_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros2_pkg::srv::TurnCamera_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros2_pkg::srv::TurnCamera_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros2_pkg::srv::TurnCamera_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros2_pkg::srv::TurnCamera_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros2_pkg::srv::TurnCamera_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros2_pkg::srv::TurnCamera_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros2_pkg__srv__TurnCamera_Response
    std::shared_ptr<ros2_pkg::srv::TurnCamera_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros2_pkg__srv__TurnCamera_Response
    std::shared_ptr<ros2_pkg::srv::TurnCamera_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TurnCamera_Response_ & other) const
  {
    if (this->image != other.image) {
      return false;
    }
    return true;
  }
  bool operator!=(const TurnCamera_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TurnCamera_Response_

// alias to use template instance with default allocator
using TurnCamera_Response =
  ros2_pkg::srv::TurnCamera_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace ros2_pkg

namespace ros2_pkg
{

namespace srv
{

struct TurnCamera
{
  using Request = ros2_pkg::srv::TurnCamera_Request;
  using Response = ros2_pkg::srv::TurnCamera_Response;
};

}  // namespace srv

}  // namespace ros2_pkg

#endif  // ROS2_PKG__SRV__DETAIL__TURN_CAMERA__STRUCT_HPP_
