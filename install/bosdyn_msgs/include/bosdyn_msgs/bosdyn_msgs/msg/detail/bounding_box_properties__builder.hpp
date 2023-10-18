// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/BoundingBoxProperties.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__BOUNDING_BOX_PROPERTIES__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__BOUNDING_BOX_PROPERTIES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/bounding_box_properties__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_BoundingBoxProperties_frame
{
public:
  explicit Init_BoundingBoxProperties_frame(::bosdyn_msgs::msg::BoundingBoxProperties & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::BoundingBoxProperties frame(::bosdyn_msgs::msg::BoundingBoxProperties::_frame_type arg)
  {
    msg_.frame = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::BoundingBoxProperties msg_;
};

class Init_BoundingBoxProperties_size_ewrt_frame_is_set
{
public:
  explicit Init_BoundingBoxProperties_size_ewrt_frame_is_set(::bosdyn_msgs::msg::BoundingBoxProperties & msg)
  : msg_(msg)
  {}
  Init_BoundingBoxProperties_frame size_ewrt_frame_is_set(::bosdyn_msgs::msg::BoundingBoxProperties::_size_ewrt_frame_is_set_type arg)
  {
    msg_.size_ewrt_frame_is_set = std::move(arg);
    return Init_BoundingBoxProperties_frame(msg_);
  }

private:
  ::bosdyn_msgs::msg::BoundingBoxProperties msg_;
};

class Init_BoundingBoxProperties_size_ewrt_frame
{
public:
  Init_BoundingBoxProperties_size_ewrt_frame()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BoundingBoxProperties_size_ewrt_frame_is_set size_ewrt_frame(::bosdyn_msgs::msg::BoundingBoxProperties::_size_ewrt_frame_type arg)
  {
    msg_.size_ewrt_frame = std::move(arg);
    return Init_BoundingBoxProperties_size_ewrt_frame_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::BoundingBoxProperties msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::BoundingBoxProperties>()
{
  return bosdyn_msgs::msg::builder::Init_BoundingBoxProperties_size_ewrt_frame();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__BOUNDING_BOX_PROPERTIES__BUILDER_HPP_
