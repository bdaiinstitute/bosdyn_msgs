// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/BodyControlParamsOneOfParam.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__BODY_CONTROL_PARAMS_ONE_OF_PARAM__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__BODY_CONTROL_PARAMS_ONE_OF_PARAM__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/body_control_params_one_of_param__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_BodyControlParamsOneOfParam_param_choice
{
public:
  explicit Init_BodyControlParamsOneOfParam_param_choice(::bosdyn_msgs::msg::BodyControlParamsOneOfParam & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::BodyControlParamsOneOfParam param_choice(::bosdyn_msgs::msg::BodyControlParamsOneOfParam::_param_choice_type arg)
  {
    msg_.param_choice = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::BodyControlParamsOneOfParam msg_;
};

class Init_BodyControlParamsOneOfParam_body_pose
{
public:
  explicit Init_BodyControlParamsOneOfParam_body_pose(::bosdyn_msgs::msg::BodyControlParamsOneOfParam & msg)
  : msg_(msg)
  {}
  Init_BodyControlParamsOneOfParam_param_choice body_pose(::bosdyn_msgs::msg::BodyControlParamsOneOfParam::_body_pose_type arg)
  {
    msg_.body_pose = std::move(arg);
    return Init_BodyControlParamsOneOfParam_param_choice(msg_);
  }

private:
  ::bosdyn_msgs::msg::BodyControlParamsOneOfParam msg_;
};

class Init_BodyControlParamsOneOfParam_body_assist_for_manipulation
{
public:
  explicit Init_BodyControlParamsOneOfParam_body_assist_for_manipulation(::bosdyn_msgs::msg::BodyControlParamsOneOfParam & msg)
  : msg_(msg)
  {}
  Init_BodyControlParamsOneOfParam_body_pose body_assist_for_manipulation(::bosdyn_msgs::msg::BodyControlParamsOneOfParam::_body_assist_for_manipulation_type arg)
  {
    msg_.body_assist_for_manipulation = std::move(arg);
    return Init_BodyControlParamsOneOfParam_body_pose(msg_);
  }

private:
  ::bosdyn_msgs::msg::BodyControlParamsOneOfParam msg_;
};

class Init_BodyControlParamsOneOfParam_base_offset_rt_footprint
{
public:
  Init_BodyControlParamsOneOfParam_base_offset_rt_footprint()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BodyControlParamsOneOfParam_body_assist_for_manipulation base_offset_rt_footprint(::bosdyn_msgs::msg::BodyControlParamsOneOfParam::_base_offset_rt_footprint_type arg)
  {
    msg_.base_offset_rt_footprint = std::move(arg);
    return Init_BodyControlParamsOneOfParam_body_assist_for_manipulation(msg_);
  }

private:
  ::bosdyn_msgs::msg::BodyControlParamsOneOfParam msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::BodyControlParamsOneOfParam>()
{
  return bosdyn_msgs::msg::builder::Init_BodyControlParamsOneOfParam_base_offset_rt_footprint();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__BODY_CONTROL_PARAMS_ONE_OF_PARAM__BUILDER_HPP_
