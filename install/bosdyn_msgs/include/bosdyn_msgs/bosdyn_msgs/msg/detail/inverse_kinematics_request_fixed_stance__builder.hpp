// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/InverseKinematicsRequestFixedStance.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__INVERSE_KINEMATICS_REQUEST_FIXED_STANCE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__INVERSE_KINEMATICS_REQUEST_FIXED_STANCE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/inverse_kinematics_request_fixed_stance__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_InverseKinematicsRequestFixedStance_hr_rt_scene_is_set
{
public:
  explicit Init_InverseKinematicsRequestFixedStance_hr_rt_scene_is_set(::bosdyn_msgs::msg::InverseKinematicsRequestFixedStance & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::InverseKinematicsRequestFixedStance hr_rt_scene_is_set(::bosdyn_msgs::msg::InverseKinematicsRequestFixedStance::_hr_rt_scene_is_set_type arg)
  {
    msg_.hr_rt_scene_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::InverseKinematicsRequestFixedStance msg_;
};

class Init_InverseKinematicsRequestFixedStance_hr_rt_scene
{
public:
  explicit Init_InverseKinematicsRequestFixedStance_hr_rt_scene(::bosdyn_msgs::msg::InverseKinematicsRequestFixedStance & msg)
  : msg_(msg)
  {}
  Init_InverseKinematicsRequestFixedStance_hr_rt_scene_is_set hr_rt_scene(::bosdyn_msgs::msg::InverseKinematicsRequestFixedStance::_hr_rt_scene_type arg)
  {
    msg_.hr_rt_scene = std::move(arg);
    return Init_InverseKinematicsRequestFixedStance_hr_rt_scene_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::InverseKinematicsRequestFixedStance msg_;
};

class Init_InverseKinematicsRequestFixedStance_hl_rt_scene_is_set
{
public:
  explicit Init_InverseKinematicsRequestFixedStance_hl_rt_scene_is_set(::bosdyn_msgs::msg::InverseKinematicsRequestFixedStance & msg)
  : msg_(msg)
  {}
  Init_InverseKinematicsRequestFixedStance_hr_rt_scene hl_rt_scene_is_set(::bosdyn_msgs::msg::InverseKinematicsRequestFixedStance::_hl_rt_scene_is_set_type arg)
  {
    msg_.hl_rt_scene_is_set = std::move(arg);
    return Init_InverseKinematicsRequestFixedStance_hr_rt_scene(msg_);
  }

private:
  ::bosdyn_msgs::msg::InverseKinematicsRequestFixedStance msg_;
};

class Init_InverseKinematicsRequestFixedStance_hl_rt_scene
{
public:
  explicit Init_InverseKinematicsRequestFixedStance_hl_rt_scene(::bosdyn_msgs::msg::InverseKinematicsRequestFixedStance & msg)
  : msg_(msg)
  {}
  Init_InverseKinematicsRequestFixedStance_hl_rt_scene_is_set hl_rt_scene(::bosdyn_msgs::msg::InverseKinematicsRequestFixedStance::_hl_rt_scene_type arg)
  {
    msg_.hl_rt_scene = std::move(arg);
    return Init_InverseKinematicsRequestFixedStance_hl_rt_scene_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::InverseKinematicsRequestFixedStance msg_;
};

class Init_InverseKinematicsRequestFixedStance_fr_rt_scene_is_set
{
public:
  explicit Init_InverseKinematicsRequestFixedStance_fr_rt_scene_is_set(::bosdyn_msgs::msg::InverseKinematicsRequestFixedStance & msg)
  : msg_(msg)
  {}
  Init_InverseKinematicsRequestFixedStance_hl_rt_scene fr_rt_scene_is_set(::bosdyn_msgs::msg::InverseKinematicsRequestFixedStance::_fr_rt_scene_is_set_type arg)
  {
    msg_.fr_rt_scene_is_set = std::move(arg);
    return Init_InverseKinematicsRequestFixedStance_hl_rt_scene(msg_);
  }

private:
  ::bosdyn_msgs::msg::InverseKinematicsRequestFixedStance msg_;
};

class Init_InverseKinematicsRequestFixedStance_fr_rt_scene
{
public:
  explicit Init_InverseKinematicsRequestFixedStance_fr_rt_scene(::bosdyn_msgs::msg::InverseKinematicsRequestFixedStance & msg)
  : msg_(msg)
  {}
  Init_InverseKinematicsRequestFixedStance_fr_rt_scene_is_set fr_rt_scene(::bosdyn_msgs::msg::InverseKinematicsRequestFixedStance::_fr_rt_scene_type arg)
  {
    msg_.fr_rt_scene = std::move(arg);
    return Init_InverseKinematicsRequestFixedStance_fr_rt_scene_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::InverseKinematicsRequestFixedStance msg_;
};

class Init_InverseKinematicsRequestFixedStance_fl_rt_scene_is_set
{
public:
  explicit Init_InverseKinematicsRequestFixedStance_fl_rt_scene_is_set(::bosdyn_msgs::msg::InverseKinematicsRequestFixedStance & msg)
  : msg_(msg)
  {}
  Init_InverseKinematicsRequestFixedStance_fr_rt_scene fl_rt_scene_is_set(::bosdyn_msgs::msg::InverseKinematicsRequestFixedStance::_fl_rt_scene_is_set_type arg)
  {
    msg_.fl_rt_scene_is_set = std::move(arg);
    return Init_InverseKinematicsRequestFixedStance_fr_rt_scene(msg_);
  }

private:
  ::bosdyn_msgs::msg::InverseKinematicsRequestFixedStance msg_;
};

class Init_InverseKinematicsRequestFixedStance_fl_rt_scene
{
public:
  Init_InverseKinematicsRequestFixedStance_fl_rt_scene()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_InverseKinematicsRequestFixedStance_fl_rt_scene_is_set fl_rt_scene(::bosdyn_msgs::msg::InverseKinematicsRequestFixedStance::_fl_rt_scene_type arg)
  {
    msg_.fl_rt_scene = std::move(arg);
    return Init_InverseKinematicsRequestFixedStance_fl_rt_scene_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::InverseKinematicsRequestFixedStance msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::InverseKinematicsRequestFixedStance>()
{
  return bosdyn_msgs::msg::builder::Init_InverseKinematicsRequestFixedStance_fl_rt_scene();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__INVERSE_KINEMATICS_REQUEST_FIXED_STANCE__BUILDER_HPP_
