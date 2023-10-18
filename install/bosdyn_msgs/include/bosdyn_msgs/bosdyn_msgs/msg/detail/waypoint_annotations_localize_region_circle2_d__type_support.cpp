// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from bosdyn_msgs:msg/WaypointAnnotationsLocalizeRegionCircle2D.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "bosdyn_msgs/msg/detail/waypoint_annotations_localize_region_circle2_d__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace bosdyn_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void WaypointAnnotationsLocalizeRegionCircle2D_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) bosdyn_msgs::msg::WaypointAnnotationsLocalizeRegionCircle2D(_init);
}

void WaypointAnnotationsLocalizeRegionCircle2D_fini_function(void * message_memory)
{
  auto typed_message = static_cast<bosdyn_msgs::msg::WaypointAnnotationsLocalizeRegionCircle2D *>(message_memory);
  typed_message->~WaypointAnnotationsLocalizeRegionCircle2D();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember WaypointAnnotationsLocalizeRegionCircle2D_message_member_array[1] = {
  {
    "dist_2d",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs::msg::WaypointAnnotationsLocalizeRegionCircle2D, dist_2d),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers WaypointAnnotationsLocalizeRegionCircle2D_message_members = {
  "bosdyn_msgs::msg",  // message namespace
  "WaypointAnnotationsLocalizeRegionCircle2D",  // message name
  1,  // number of fields
  sizeof(bosdyn_msgs::msg::WaypointAnnotationsLocalizeRegionCircle2D),
  WaypointAnnotationsLocalizeRegionCircle2D_message_member_array,  // message members
  WaypointAnnotationsLocalizeRegionCircle2D_init_function,  // function to initialize message memory (memory has to be allocated)
  WaypointAnnotationsLocalizeRegionCircle2D_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t WaypointAnnotationsLocalizeRegionCircle2D_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &WaypointAnnotationsLocalizeRegionCircle2D_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace bosdyn_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<bosdyn_msgs::msg::WaypointAnnotationsLocalizeRegionCircle2D>()
{
  return &::bosdyn_msgs::msg::rosidl_typesupport_introspection_cpp::WaypointAnnotationsLocalizeRegionCircle2D_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, bosdyn_msgs, msg, WaypointAnnotationsLocalizeRegionCircle2D)() {
  return &::bosdyn_msgs::msg::rosidl_typesupport_introspection_cpp::WaypointAnnotationsLocalizeRegionCircle2D_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
