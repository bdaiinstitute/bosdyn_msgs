// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/ArmImpedanceCommandFeedback.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ARM_IMPEDANCE_COMMAND_FEEDBACK__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__ARM_IMPEDANCE_COMMAND_FEEDBACK__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/arm_impedance_command_feedback__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_ArmImpedanceCommandFeedback_total_measured_wrench_at_tool_in_desired_tool_is_set
{
public:
  explicit Init_ArmImpedanceCommandFeedback_total_measured_wrench_at_tool_in_desired_tool_is_set(::bosdyn_msgs::msg::ArmImpedanceCommandFeedback & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::ArmImpedanceCommandFeedback total_measured_wrench_at_tool_in_desired_tool_is_set(::bosdyn_msgs::msg::ArmImpedanceCommandFeedback::_total_measured_wrench_at_tool_in_desired_tool_is_set_type arg)
  {
    msg_.total_measured_wrench_at_tool_in_desired_tool_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::ArmImpedanceCommandFeedback msg_;
};

class Init_ArmImpedanceCommandFeedback_total_measured_wrench_at_tool_in_desired_tool
{
public:
  explicit Init_ArmImpedanceCommandFeedback_total_measured_wrench_at_tool_in_desired_tool(::bosdyn_msgs::msg::ArmImpedanceCommandFeedback & msg)
  : msg_(msg)
  {}
  Init_ArmImpedanceCommandFeedback_total_measured_wrench_at_tool_in_desired_tool_is_set total_measured_wrench_at_tool_in_desired_tool(::bosdyn_msgs::msg::ArmImpedanceCommandFeedback::_total_measured_wrench_at_tool_in_desired_tool_type arg)
  {
    msg_.total_measured_wrench_at_tool_in_desired_tool = std::move(arg);
    return Init_ArmImpedanceCommandFeedback_total_measured_wrench_at_tool_in_desired_tool_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ArmImpedanceCommandFeedback msg_;
};

class Init_ArmImpedanceCommandFeedback_total_commanded_wrench_at_tool_in_desired_tool_is_set
{
public:
  explicit Init_ArmImpedanceCommandFeedback_total_commanded_wrench_at_tool_in_desired_tool_is_set(::bosdyn_msgs::msg::ArmImpedanceCommandFeedback & msg)
  : msg_(msg)
  {}
  Init_ArmImpedanceCommandFeedback_total_measured_wrench_at_tool_in_desired_tool total_commanded_wrench_at_tool_in_desired_tool_is_set(::bosdyn_msgs::msg::ArmImpedanceCommandFeedback::_total_commanded_wrench_at_tool_in_desired_tool_is_set_type arg)
  {
    msg_.total_commanded_wrench_at_tool_in_desired_tool_is_set = std::move(arg);
    return Init_ArmImpedanceCommandFeedback_total_measured_wrench_at_tool_in_desired_tool(msg_);
  }

private:
  ::bosdyn_msgs::msg::ArmImpedanceCommandFeedback msg_;
};

class Init_ArmImpedanceCommandFeedback_total_commanded_wrench_at_tool_in_desired_tool
{
public:
  explicit Init_ArmImpedanceCommandFeedback_total_commanded_wrench_at_tool_in_desired_tool(::bosdyn_msgs::msg::ArmImpedanceCommandFeedback & msg)
  : msg_(msg)
  {}
  Init_ArmImpedanceCommandFeedback_total_commanded_wrench_at_tool_in_desired_tool_is_set total_commanded_wrench_at_tool_in_desired_tool(::bosdyn_msgs::msg::ArmImpedanceCommandFeedback::_total_commanded_wrench_at_tool_in_desired_tool_type arg)
  {
    msg_.total_commanded_wrench_at_tool_in_desired_tool = std::move(arg);
    return Init_ArmImpedanceCommandFeedback_total_commanded_wrench_at_tool_in_desired_tool_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ArmImpedanceCommandFeedback msg_;
};

class Init_ArmImpedanceCommandFeedback_commanded_wrench_from_feed_forward_at_tool_in_desired_tool_is_set
{
public:
  explicit Init_ArmImpedanceCommandFeedback_commanded_wrench_from_feed_forward_at_tool_in_desired_tool_is_set(::bosdyn_msgs::msg::ArmImpedanceCommandFeedback & msg)
  : msg_(msg)
  {}
  Init_ArmImpedanceCommandFeedback_total_commanded_wrench_at_tool_in_desired_tool commanded_wrench_from_feed_forward_at_tool_in_desired_tool_is_set(::bosdyn_msgs::msg::ArmImpedanceCommandFeedback::_commanded_wrench_from_feed_forward_at_tool_in_desired_tool_is_set_type arg)
  {
    msg_.commanded_wrench_from_feed_forward_at_tool_in_desired_tool_is_set = std::move(arg);
    return Init_ArmImpedanceCommandFeedback_total_commanded_wrench_at_tool_in_desired_tool(msg_);
  }

private:
  ::bosdyn_msgs::msg::ArmImpedanceCommandFeedback msg_;
};

class Init_ArmImpedanceCommandFeedback_commanded_wrench_from_feed_forward_at_tool_in_desired_tool
{
public:
  explicit Init_ArmImpedanceCommandFeedback_commanded_wrench_from_feed_forward_at_tool_in_desired_tool(::bosdyn_msgs::msg::ArmImpedanceCommandFeedback & msg)
  : msg_(msg)
  {}
  Init_ArmImpedanceCommandFeedback_commanded_wrench_from_feed_forward_at_tool_in_desired_tool_is_set commanded_wrench_from_feed_forward_at_tool_in_desired_tool(::bosdyn_msgs::msg::ArmImpedanceCommandFeedback::_commanded_wrench_from_feed_forward_at_tool_in_desired_tool_type arg)
  {
    msg_.commanded_wrench_from_feed_forward_at_tool_in_desired_tool = std::move(arg);
    return Init_ArmImpedanceCommandFeedback_commanded_wrench_from_feed_forward_at_tool_in_desired_tool_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ArmImpedanceCommandFeedback msg_;
};

class Init_ArmImpedanceCommandFeedback_commanded_wrench_from_damping_at_tool_in_desired_tool_is_set
{
public:
  explicit Init_ArmImpedanceCommandFeedback_commanded_wrench_from_damping_at_tool_in_desired_tool_is_set(::bosdyn_msgs::msg::ArmImpedanceCommandFeedback & msg)
  : msg_(msg)
  {}
  Init_ArmImpedanceCommandFeedback_commanded_wrench_from_feed_forward_at_tool_in_desired_tool commanded_wrench_from_damping_at_tool_in_desired_tool_is_set(::bosdyn_msgs::msg::ArmImpedanceCommandFeedback::_commanded_wrench_from_damping_at_tool_in_desired_tool_is_set_type arg)
  {
    msg_.commanded_wrench_from_damping_at_tool_in_desired_tool_is_set = std::move(arg);
    return Init_ArmImpedanceCommandFeedback_commanded_wrench_from_feed_forward_at_tool_in_desired_tool(msg_);
  }

private:
  ::bosdyn_msgs::msg::ArmImpedanceCommandFeedback msg_;
};

class Init_ArmImpedanceCommandFeedback_commanded_wrench_from_damping_at_tool_in_desired_tool
{
public:
  explicit Init_ArmImpedanceCommandFeedback_commanded_wrench_from_damping_at_tool_in_desired_tool(::bosdyn_msgs::msg::ArmImpedanceCommandFeedback & msg)
  : msg_(msg)
  {}
  Init_ArmImpedanceCommandFeedback_commanded_wrench_from_damping_at_tool_in_desired_tool_is_set commanded_wrench_from_damping_at_tool_in_desired_tool(::bosdyn_msgs::msg::ArmImpedanceCommandFeedback::_commanded_wrench_from_damping_at_tool_in_desired_tool_type arg)
  {
    msg_.commanded_wrench_from_damping_at_tool_in_desired_tool = std::move(arg);
    return Init_ArmImpedanceCommandFeedback_commanded_wrench_from_damping_at_tool_in_desired_tool_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ArmImpedanceCommandFeedback msg_;
};

class Init_ArmImpedanceCommandFeedback_commanded_wrench_from_stiffness_at_tool_in_desired_tool_is_set
{
public:
  explicit Init_ArmImpedanceCommandFeedback_commanded_wrench_from_stiffness_at_tool_in_desired_tool_is_set(::bosdyn_msgs::msg::ArmImpedanceCommandFeedback & msg)
  : msg_(msg)
  {}
  Init_ArmImpedanceCommandFeedback_commanded_wrench_from_damping_at_tool_in_desired_tool commanded_wrench_from_stiffness_at_tool_in_desired_tool_is_set(::bosdyn_msgs::msg::ArmImpedanceCommandFeedback::_commanded_wrench_from_stiffness_at_tool_in_desired_tool_is_set_type arg)
  {
    msg_.commanded_wrench_from_stiffness_at_tool_in_desired_tool_is_set = std::move(arg);
    return Init_ArmImpedanceCommandFeedback_commanded_wrench_from_damping_at_tool_in_desired_tool(msg_);
  }

private:
  ::bosdyn_msgs::msg::ArmImpedanceCommandFeedback msg_;
};

class Init_ArmImpedanceCommandFeedback_commanded_wrench_from_stiffness_at_tool_in_desired_tool
{
public:
  explicit Init_ArmImpedanceCommandFeedback_commanded_wrench_from_stiffness_at_tool_in_desired_tool(::bosdyn_msgs::msg::ArmImpedanceCommandFeedback & msg)
  : msg_(msg)
  {}
  Init_ArmImpedanceCommandFeedback_commanded_wrench_from_stiffness_at_tool_in_desired_tool_is_set commanded_wrench_from_stiffness_at_tool_in_desired_tool(::bosdyn_msgs::msg::ArmImpedanceCommandFeedback::_commanded_wrench_from_stiffness_at_tool_in_desired_tool_type arg)
  {
    msg_.commanded_wrench_from_stiffness_at_tool_in_desired_tool = std::move(arg);
    return Init_ArmImpedanceCommandFeedback_commanded_wrench_from_stiffness_at_tool_in_desired_tool_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ArmImpedanceCommandFeedback msg_;
};

class Init_ArmImpedanceCommandFeedback_transforms_snapshot_is_set
{
public:
  explicit Init_ArmImpedanceCommandFeedback_transforms_snapshot_is_set(::bosdyn_msgs::msg::ArmImpedanceCommandFeedback & msg)
  : msg_(msg)
  {}
  Init_ArmImpedanceCommandFeedback_commanded_wrench_from_stiffness_at_tool_in_desired_tool transforms_snapshot_is_set(::bosdyn_msgs::msg::ArmImpedanceCommandFeedback::_transforms_snapshot_is_set_type arg)
  {
    msg_.transforms_snapshot_is_set = std::move(arg);
    return Init_ArmImpedanceCommandFeedback_commanded_wrench_from_stiffness_at_tool_in_desired_tool(msg_);
  }

private:
  ::bosdyn_msgs::msg::ArmImpedanceCommandFeedback msg_;
};

class Init_ArmImpedanceCommandFeedback_transforms_snapshot
{
public:
  explicit Init_ArmImpedanceCommandFeedback_transforms_snapshot(::bosdyn_msgs::msg::ArmImpedanceCommandFeedback & msg)
  : msg_(msg)
  {}
  Init_ArmImpedanceCommandFeedback_transforms_snapshot_is_set transforms_snapshot(::bosdyn_msgs::msg::ArmImpedanceCommandFeedback::_transforms_snapshot_type arg)
  {
    msg_.transforms_snapshot = std::move(arg);
    return Init_ArmImpedanceCommandFeedback_transforms_snapshot_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ArmImpedanceCommandFeedback msg_;
};

class Init_ArmImpedanceCommandFeedback_status
{
public:
  Init_ArmImpedanceCommandFeedback_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ArmImpedanceCommandFeedback_transforms_snapshot status(::bosdyn_msgs::msg::ArmImpedanceCommandFeedback::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_ArmImpedanceCommandFeedback_transforms_snapshot(msg_);
  }

private:
  ::bosdyn_msgs::msg::ArmImpedanceCommandFeedback msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::ArmImpedanceCommandFeedback>()
{
  return bosdyn_msgs::msg::builder::Init_ArmImpedanceCommandFeedback_status();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__ARM_IMPEDANCE_COMMAND_FEEDBACK__BUILDER_HPP_
