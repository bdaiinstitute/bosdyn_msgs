// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/Volume.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__VOLUME__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__VOLUME__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/volume__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_Volume_geometry
{
public:
  Init_Volume_geometry()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::bosdyn_msgs::msg::Volume geometry(::bosdyn_msgs::msg::Volume::_geometry_type arg)
  {
    msg_.geometry = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::Volume msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::Volume>()
{
  return bosdyn_msgs::msg::builder::Init_Volume_geometry();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__VOLUME__BUILDER_HPP_
