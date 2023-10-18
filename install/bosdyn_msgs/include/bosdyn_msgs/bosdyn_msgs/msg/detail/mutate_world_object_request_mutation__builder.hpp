// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/MutateWorldObjectRequestMutation.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__MUTATE_WORLD_OBJECT_REQUEST_MUTATION__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__MUTATE_WORLD_OBJECT_REQUEST_MUTATION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/mutate_world_object_request_mutation__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_MutateWorldObjectRequestMutation_object_is_set
{
public:
  explicit Init_MutateWorldObjectRequestMutation_object_is_set(::bosdyn_msgs::msg::MutateWorldObjectRequestMutation & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::MutateWorldObjectRequestMutation object_is_set(::bosdyn_msgs::msg::MutateWorldObjectRequestMutation::_object_is_set_type arg)
  {
    msg_.object_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::MutateWorldObjectRequestMutation msg_;
};

class Init_MutateWorldObjectRequestMutation_object
{
public:
  explicit Init_MutateWorldObjectRequestMutation_object(::bosdyn_msgs::msg::MutateWorldObjectRequestMutation & msg)
  : msg_(msg)
  {}
  Init_MutateWorldObjectRequestMutation_object_is_set object(::bosdyn_msgs::msg::MutateWorldObjectRequestMutation::_object_type arg)
  {
    msg_.object = std::move(arg);
    return Init_MutateWorldObjectRequestMutation_object_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::MutateWorldObjectRequestMutation msg_;
};

class Init_MutateWorldObjectRequestMutation_action
{
public:
  Init_MutateWorldObjectRequestMutation_action()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MutateWorldObjectRequestMutation_object action(::bosdyn_msgs::msg::MutateWorldObjectRequestMutation::_action_type arg)
  {
    msg_.action = std::move(arg);
    return Init_MutateWorldObjectRequestMutation_object(msg_);
  }

private:
  ::bosdyn_msgs::msg::MutateWorldObjectRequestMutation msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::MutateWorldObjectRequestMutation>()
{
  return bosdyn_msgs::msg::builder::Init_MutateWorldObjectRequestMutation_action();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__MUTATE_WORLD_OBJECT_REQUEST_MUTATION__BUILDER_HPP_
