// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/SkeletonLink.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__SKELETON_LINK__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__SKELETON_LINK__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/skeleton_link__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_SkeletonLink_obj_model_is_set
{
public:
  explicit Init_SkeletonLink_obj_model_is_set(::bosdyn_msgs::msg::SkeletonLink & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::SkeletonLink obj_model_is_set(::bosdyn_msgs::msg::SkeletonLink::_obj_model_is_set_type arg)
  {
    msg_.obj_model_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::SkeletonLink msg_;
};

class Init_SkeletonLink_obj_model
{
public:
  explicit Init_SkeletonLink_obj_model(::bosdyn_msgs::msg::SkeletonLink & msg)
  : msg_(msg)
  {}
  Init_SkeletonLink_obj_model_is_set obj_model(::bosdyn_msgs::msg::SkeletonLink::_obj_model_type arg)
  {
    msg_.obj_model = std::move(arg);
    return Init_SkeletonLink_obj_model_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::SkeletonLink msg_;
};

class Init_SkeletonLink_name
{
public:
  Init_SkeletonLink_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SkeletonLink_obj_model name(::bosdyn_msgs::msg::SkeletonLink::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_SkeletonLink_obj_model(msg_);
  }

private:
  ::bosdyn_msgs::msg::SkeletonLink msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::SkeletonLink>()
{
  return bosdyn_msgs::msg::builder::Init_SkeletonLink_name();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__SKELETON_LINK__BUILDER_HPP_
