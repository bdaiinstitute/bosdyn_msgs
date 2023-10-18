// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/InverseKinematicsRequestOneOfStanceSpecification.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__INVERSE_KINEMATICS_REQUEST_ONE_OF_STANCE_SPECIFICATION__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__INVERSE_KINEMATICS_REQUEST_ONE_OF_STANCE_SPECIFICATION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/inverse_kinematics_request_one_of_stance_specification__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_InverseKinematicsRequestOneOfStanceSpecification_stance_specification_choice
{
public:
  explicit Init_InverseKinematicsRequestOneOfStanceSpecification_stance_specification_choice(::bosdyn_msgs::msg::InverseKinematicsRequestOneOfStanceSpecification & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::InverseKinematicsRequestOneOfStanceSpecification stance_specification_choice(::bosdyn_msgs::msg::InverseKinematicsRequestOneOfStanceSpecification::_stance_specification_choice_type arg)
  {
    msg_.stance_specification_choice = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::InverseKinematicsRequestOneOfStanceSpecification msg_;
};

class Init_InverseKinematicsRequestOneOfStanceSpecification_on_ground_plane_stance
{
public:
  explicit Init_InverseKinematicsRequestOneOfStanceSpecification_on_ground_plane_stance(::bosdyn_msgs::msg::InverseKinematicsRequestOneOfStanceSpecification & msg)
  : msg_(msg)
  {}
  Init_InverseKinematicsRequestOneOfStanceSpecification_stance_specification_choice on_ground_plane_stance(::bosdyn_msgs::msg::InverseKinematicsRequestOneOfStanceSpecification::_on_ground_plane_stance_type arg)
  {
    msg_.on_ground_plane_stance = std::move(arg);
    return Init_InverseKinematicsRequestOneOfStanceSpecification_stance_specification_choice(msg_);
  }

private:
  ::bosdyn_msgs::msg::InverseKinematicsRequestOneOfStanceSpecification msg_;
};

class Init_InverseKinematicsRequestOneOfStanceSpecification_fixed_stance
{
public:
  Init_InverseKinematicsRequestOneOfStanceSpecification_fixed_stance()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_InverseKinematicsRequestOneOfStanceSpecification_on_ground_plane_stance fixed_stance(::bosdyn_msgs::msg::InverseKinematicsRequestOneOfStanceSpecification::_fixed_stance_type arg)
  {
    msg_.fixed_stance = std::move(arg);
    return Init_InverseKinematicsRequestOneOfStanceSpecification_on_ground_plane_stance(msg_);
  }

private:
  ::bosdyn_msgs::msg::InverseKinematicsRequestOneOfStanceSpecification msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::InverseKinematicsRequestOneOfStanceSpecification>()
{
  return bosdyn_msgs::msg::builder::Init_InverseKinematicsRequestOneOfStanceSpecification_fixed_stance();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__INVERSE_KINEMATICS_REQUEST_ONE_OF_STANCE_SPECIFICATION__BUILDER_HPP_
