// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/BodyControlParamsBodyPose.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__BODY_CONTROL_PARAMS_BODY_POSE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__BODY_CONTROL_PARAMS_BODY_POSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/body_control_params_body_pose__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_BodyControlParamsBodyPose_base_offset_rt_root_is_set
{
public:
  explicit Init_BodyControlParamsBodyPose_base_offset_rt_root_is_set(::bosdyn_msgs::msg::BodyControlParamsBodyPose & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::BodyControlParamsBodyPose base_offset_rt_root_is_set(::bosdyn_msgs::msg::BodyControlParamsBodyPose::_base_offset_rt_root_is_set_type arg)
  {
    msg_.base_offset_rt_root_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::BodyControlParamsBodyPose msg_;
};

class Init_BodyControlParamsBodyPose_base_offset_rt_root
{
public:
  explicit Init_BodyControlParamsBodyPose_base_offset_rt_root(::bosdyn_msgs::msg::BodyControlParamsBodyPose & msg)
  : msg_(msg)
  {}
  Init_BodyControlParamsBodyPose_base_offset_rt_root_is_set base_offset_rt_root(::bosdyn_msgs::msg::BodyControlParamsBodyPose::_base_offset_rt_root_type arg)
  {
    msg_.base_offset_rt_root = std::move(arg);
    return Init_BodyControlParamsBodyPose_base_offset_rt_root_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::BodyControlParamsBodyPose msg_;
};

class Init_BodyControlParamsBodyPose_root_frame_name
{
public:
  Init_BodyControlParamsBodyPose_root_frame_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BodyControlParamsBodyPose_base_offset_rt_root root_frame_name(::bosdyn_msgs::msg::BodyControlParamsBodyPose::_root_frame_name_type arg)
  {
    msg_.root_frame_name = std::move(arg);
    return Init_BodyControlParamsBodyPose_base_offset_rt_root(msg_);
  }

private:
  ::bosdyn_msgs::msg::BodyControlParamsBodyPose msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::BodyControlParamsBodyPose>()
{
  return bosdyn_msgs::msg::builder::Init_BodyControlParamsBodyPose_root_frame_name();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__BODY_CONTROL_PARAMS_BODY_POSE__BUILDER_HPP_
