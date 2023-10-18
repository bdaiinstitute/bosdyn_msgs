// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/InverseKinematicsResponse.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__INVERSE_KINEMATICS_RESPONSE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__INVERSE_KINEMATICS_RESPONSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/inverse_kinematics_response__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_InverseKinematicsResponse_robot_configuration_is_set
{
public:
  explicit Init_InverseKinematicsResponse_robot_configuration_is_set(::bosdyn_msgs::msg::InverseKinematicsResponse & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::InverseKinematicsResponse robot_configuration_is_set(::bosdyn_msgs::msg::InverseKinematicsResponse::_robot_configuration_is_set_type arg)
  {
    msg_.robot_configuration_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::InverseKinematicsResponse msg_;
};

class Init_InverseKinematicsResponse_robot_configuration
{
public:
  explicit Init_InverseKinematicsResponse_robot_configuration(::bosdyn_msgs::msg::InverseKinematicsResponse & msg)
  : msg_(msg)
  {}
  Init_InverseKinematicsResponse_robot_configuration_is_set robot_configuration(::bosdyn_msgs::msg::InverseKinematicsResponse::_robot_configuration_type arg)
  {
    msg_.robot_configuration = std::move(arg);
    return Init_InverseKinematicsResponse_robot_configuration_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::InverseKinematicsResponse msg_;
};

class Init_InverseKinematicsResponse_status
{
public:
  explicit Init_InverseKinematicsResponse_status(::bosdyn_msgs::msg::InverseKinematicsResponse & msg)
  : msg_(msg)
  {}
  Init_InverseKinematicsResponse_robot_configuration status(::bosdyn_msgs::msg::InverseKinematicsResponse::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_InverseKinematicsResponse_robot_configuration(msg_);
  }

private:
  ::bosdyn_msgs::msg::InverseKinematicsResponse msg_;
};

class Init_InverseKinematicsResponse_header_is_set
{
public:
  explicit Init_InverseKinematicsResponse_header_is_set(::bosdyn_msgs::msg::InverseKinematicsResponse & msg)
  : msg_(msg)
  {}
  Init_InverseKinematicsResponse_status header_is_set(::bosdyn_msgs::msg::InverseKinematicsResponse::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_InverseKinematicsResponse_status(msg_);
  }

private:
  ::bosdyn_msgs::msg::InverseKinematicsResponse msg_;
};

class Init_InverseKinematicsResponse_header
{
public:
  Init_InverseKinematicsResponse_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_InverseKinematicsResponse_header_is_set header(::bosdyn_msgs::msg::InverseKinematicsResponse::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_InverseKinematicsResponse_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::InverseKinematicsResponse msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::InverseKinematicsResponse>()
{
  return bosdyn_msgs::msg::builder::Init_InverseKinematicsResponse_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__INVERSE_KINEMATICS_RESPONSE__BUILDER_HPP_
