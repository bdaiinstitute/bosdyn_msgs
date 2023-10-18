// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/InverseKinematicsRequestOneOfToolSpecification.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__INVERSE_KINEMATICS_REQUEST_ONE_OF_TOOL_SPECIFICATION__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__INVERSE_KINEMATICS_REQUEST_ONE_OF_TOOL_SPECIFICATION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/inverse_kinematics_request_one_of_tool_specification__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_InverseKinematicsRequestOneOfToolSpecification_tool_specification_choice
{
public:
  explicit Init_InverseKinematicsRequestOneOfToolSpecification_tool_specification_choice(::bosdyn_msgs::msg::InverseKinematicsRequestOneOfToolSpecification & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::InverseKinematicsRequestOneOfToolSpecification tool_specification_choice(::bosdyn_msgs::msg::InverseKinematicsRequestOneOfToolSpecification::_tool_specification_choice_type arg)
  {
    msg_.tool_specification_choice = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::InverseKinematicsRequestOneOfToolSpecification msg_;
};

class Init_InverseKinematicsRequestOneOfToolSpecification_body_mounted_tool
{
public:
  explicit Init_InverseKinematicsRequestOneOfToolSpecification_body_mounted_tool(::bosdyn_msgs::msg::InverseKinematicsRequestOneOfToolSpecification & msg)
  : msg_(msg)
  {}
  Init_InverseKinematicsRequestOneOfToolSpecification_tool_specification_choice body_mounted_tool(::bosdyn_msgs::msg::InverseKinematicsRequestOneOfToolSpecification::_body_mounted_tool_type arg)
  {
    msg_.body_mounted_tool = std::move(arg);
    return Init_InverseKinematicsRequestOneOfToolSpecification_tool_specification_choice(msg_);
  }

private:
  ::bosdyn_msgs::msg::InverseKinematicsRequestOneOfToolSpecification msg_;
};

class Init_InverseKinematicsRequestOneOfToolSpecification_wrist_mounted_tool
{
public:
  Init_InverseKinematicsRequestOneOfToolSpecification_wrist_mounted_tool()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_InverseKinematicsRequestOneOfToolSpecification_body_mounted_tool wrist_mounted_tool(::bosdyn_msgs::msg::InverseKinematicsRequestOneOfToolSpecification::_wrist_mounted_tool_type arg)
  {
    msg_.wrist_mounted_tool = std::move(arg);
    return Init_InverseKinematicsRequestOneOfToolSpecification_body_mounted_tool(msg_);
  }

private:
  ::bosdyn_msgs::msg::InverseKinematicsRequestOneOfToolSpecification msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::InverseKinematicsRequestOneOfToolSpecification>()
{
  return bosdyn_msgs::msg::builder::Init_InverseKinematicsRequestOneOfToolSpecification_wrist_mounted_tool();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__INVERSE_KINEMATICS_REQUEST_ONE_OF_TOOL_SPECIFICATION__BUILDER_HPP_
