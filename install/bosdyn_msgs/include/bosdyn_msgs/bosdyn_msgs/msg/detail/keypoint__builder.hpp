// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/Keypoint.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__KEYPOINT__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__KEYPOINT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/keypoint__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_Keypoint_angle
{
public:
  explicit Init_Keypoint_angle(::bosdyn_msgs::msg::Keypoint & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::Keypoint angle(::bosdyn_msgs::msg::Keypoint::_angle_type arg)
  {
    msg_.angle = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::Keypoint msg_;
};

class Init_Keypoint_size
{
public:
  explicit Init_Keypoint_size(::bosdyn_msgs::msg::Keypoint & msg)
  : msg_(msg)
  {}
  Init_Keypoint_angle size(::bosdyn_msgs::msg::Keypoint::_size_type arg)
  {
    msg_.size = std::move(arg);
    return Init_Keypoint_angle(msg_);
  }

private:
  ::bosdyn_msgs::msg::Keypoint msg_;
};

class Init_Keypoint_score
{
public:
  explicit Init_Keypoint_score(::bosdyn_msgs::msg::Keypoint & msg)
  : msg_(msg)
  {}
  Init_Keypoint_size score(::bosdyn_msgs::msg::Keypoint::_score_type arg)
  {
    msg_.score = std::move(arg);
    return Init_Keypoint_size(msg_);
  }

private:
  ::bosdyn_msgs::msg::Keypoint msg_;
};

class Init_Keypoint_binary_descriptor
{
public:
  explicit Init_Keypoint_binary_descriptor(::bosdyn_msgs::msg::Keypoint & msg)
  : msg_(msg)
  {}
  Init_Keypoint_score binary_descriptor(::bosdyn_msgs::msg::Keypoint::_binary_descriptor_type arg)
  {
    msg_.binary_descriptor = std::move(arg);
    return Init_Keypoint_score(msg_);
  }

private:
  ::bosdyn_msgs::msg::Keypoint msg_;
};

class Init_Keypoint_coordinates_is_set
{
public:
  explicit Init_Keypoint_coordinates_is_set(::bosdyn_msgs::msg::Keypoint & msg)
  : msg_(msg)
  {}
  Init_Keypoint_binary_descriptor coordinates_is_set(::bosdyn_msgs::msg::Keypoint::_coordinates_is_set_type arg)
  {
    msg_.coordinates_is_set = std::move(arg);
    return Init_Keypoint_binary_descriptor(msg_);
  }

private:
  ::bosdyn_msgs::msg::Keypoint msg_;
};

class Init_Keypoint_coordinates
{
public:
  Init_Keypoint_coordinates()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Keypoint_coordinates_is_set coordinates(::bosdyn_msgs::msg::Keypoint::_coordinates_type arg)
  {
    msg_.coordinates = std::move(arg);
    return Init_Keypoint_coordinates_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::Keypoint msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::Keypoint>()
{
  return bosdyn_msgs::msg::builder::Init_Keypoint_coordinates();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__KEYPOINT__BUILDER_HPP_
