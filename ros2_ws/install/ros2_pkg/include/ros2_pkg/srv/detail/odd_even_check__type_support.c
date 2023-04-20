// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ros2_pkg:srv/OddEvenCheck.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ros2_pkg/srv/detail/odd_even_check__rosidl_typesupport_introspection_c.h"
#include "ros2_pkg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ros2_pkg/srv/detail/odd_even_check__functions.h"
#include "ros2_pkg/srv/detail/odd_even_check__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void OddEvenCheck_Request__rosidl_typesupport_introspection_c__OddEvenCheck_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ros2_pkg__srv__OddEvenCheck_Request__init(message_memory);
}

void OddEvenCheck_Request__rosidl_typesupport_introspection_c__OddEvenCheck_Request_fini_function(void * message_memory)
{
  ros2_pkg__srv__OddEvenCheck_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember OddEvenCheck_Request__rosidl_typesupport_introspection_c__OddEvenCheck_Request_message_member_array[1] = {
  {
    "number",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_pkg__srv__OddEvenCheck_Request, number),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers OddEvenCheck_Request__rosidl_typesupport_introspection_c__OddEvenCheck_Request_message_members = {
  "ros2_pkg__srv",  // message namespace
  "OddEvenCheck_Request",  // message name
  1,  // number of fields
  sizeof(ros2_pkg__srv__OddEvenCheck_Request),
  OddEvenCheck_Request__rosidl_typesupport_introspection_c__OddEvenCheck_Request_message_member_array,  // message members
  OddEvenCheck_Request__rosidl_typesupport_introspection_c__OddEvenCheck_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  OddEvenCheck_Request__rosidl_typesupport_introspection_c__OddEvenCheck_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t OddEvenCheck_Request__rosidl_typesupport_introspection_c__OddEvenCheck_Request_message_type_support_handle = {
  0,
  &OddEvenCheck_Request__rosidl_typesupport_introspection_c__OddEvenCheck_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ros2_pkg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2_pkg, srv, OddEvenCheck_Request)() {
  if (!OddEvenCheck_Request__rosidl_typesupport_introspection_c__OddEvenCheck_Request_message_type_support_handle.typesupport_identifier) {
    OddEvenCheck_Request__rosidl_typesupport_introspection_c__OddEvenCheck_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &OddEvenCheck_Request__rosidl_typesupport_introspection_c__OddEvenCheck_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "ros2_pkg/srv/detail/odd_even_check__rosidl_typesupport_introspection_c.h"
// already included above
// #include "ros2_pkg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "ros2_pkg/srv/detail/odd_even_check__functions.h"
// already included above
// #include "ros2_pkg/srv/detail/odd_even_check__struct.h"


// Include directives for member types
// Member `decision`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void OddEvenCheck_Response__rosidl_typesupport_introspection_c__OddEvenCheck_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ros2_pkg__srv__OddEvenCheck_Response__init(message_memory);
}

void OddEvenCheck_Response__rosidl_typesupport_introspection_c__OddEvenCheck_Response_fini_function(void * message_memory)
{
  ros2_pkg__srv__OddEvenCheck_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember OddEvenCheck_Response__rosidl_typesupport_introspection_c__OddEvenCheck_Response_message_member_array[1] = {
  {
    "decision",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_pkg__srv__OddEvenCheck_Response, decision),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers OddEvenCheck_Response__rosidl_typesupport_introspection_c__OddEvenCheck_Response_message_members = {
  "ros2_pkg__srv",  // message namespace
  "OddEvenCheck_Response",  // message name
  1,  // number of fields
  sizeof(ros2_pkg__srv__OddEvenCheck_Response),
  OddEvenCheck_Response__rosidl_typesupport_introspection_c__OddEvenCheck_Response_message_member_array,  // message members
  OddEvenCheck_Response__rosidl_typesupport_introspection_c__OddEvenCheck_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  OddEvenCheck_Response__rosidl_typesupport_introspection_c__OddEvenCheck_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t OddEvenCheck_Response__rosidl_typesupport_introspection_c__OddEvenCheck_Response_message_type_support_handle = {
  0,
  &OddEvenCheck_Response__rosidl_typesupport_introspection_c__OddEvenCheck_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ros2_pkg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2_pkg, srv, OddEvenCheck_Response)() {
  if (!OddEvenCheck_Response__rosidl_typesupport_introspection_c__OddEvenCheck_Response_message_type_support_handle.typesupport_identifier) {
    OddEvenCheck_Response__rosidl_typesupport_introspection_c__OddEvenCheck_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &OddEvenCheck_Response__rosidl_typesupport_introspection_c__OddEvenCheck_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "ros2_pkg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "ros2_pkg/srv/detail/odd_even_check__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers ros2_pkg__srv__detail__odd_even_check__rosidl_typesupport_introspection_c__OddEvenCheck_service_members = {
  "ros2_pkg__srv",  // service namespace
  "OddEvenCheck",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // ros2_pkg__srv__detail__odd_even_check__rosidl_typesupport_introspection_c__OddEvenCheck_Request_message_type_support_handle,
  NULL  // response message
  // ros2_pkg__srv__detail__odd_even_check__rosidl_typesupport_introspection_c__OddEvenCheck_Response_message_type_support_handle
};

static rosidl_service_type_support_t ros2_pkg__srv__detail__odd_even_check__rosidl_typesupport_introspection_c__OddEvenCheck_service_type_support_handle = {
  0,
  &ros2_pkg__srv__detail__odd_even_check__rosidl_typesupport_introspection_c__OddEvenCheck_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2_pkg, srv, OddEvenCheck_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2_pkg, srv, OddEvenCheck_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ros2_pkg
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2_pkg, srv, OddEvenCheck)() {
  if (!ros2_pkg__srv__detail__odd_even_check__rosidl_typesupport_introspection_c__OddEvenCheck_service_type_support_handle.typesupport_identifier) {
    ros2_pkg__srv__detail__odd_even_check__rosidl_typesupport_introspection_c__OddEvenCheck_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)ros2_pkg__srv__detail__odd_even_check__rosidl_typesupport_introspection_c__OddEvenCheck_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2_pkg, srv, OddEvenCheck_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2_pkg, srv, OddEvenCheck_Response)()->data;
  }

  return &ros2_pkg__srv__detail__odd_even_check__rosidl_typesupport_introspection_c__OddEvenCheck_service_type_support_handle;
}
