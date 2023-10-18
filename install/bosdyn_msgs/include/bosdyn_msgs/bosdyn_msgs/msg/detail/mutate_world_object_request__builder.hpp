// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/MutateWorldObjectRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__MUTATE_WORLD_OBJECT_REQUEST__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__MUTATE_WORLD_OBJECT_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/mutate_world_object_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_MutateWorldObjectRequest_mutation_is_set
{
public:
  explicit Init_MutateWorldObjectRequest_mutation_is_set(::bosdyn_msgs::msg::MutateWorldObjectRequest & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::MutateWorldObjectRequest mutation_is_set(::bosdyn_msgs::msg::MutateWorldObjectRequest::_mutation_is_set_type arg)
  {
    msg_.mutation_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::MutateWorldObjectRequest msg_;
};

class Init_MutateWorldObjectRequest_mutation
{
public:
  explicit Init_MutateWorldObjectRequest_mutation(::bosdyn_msgs::msg::MutateWorldObjectRequest & msg)
  : msg_(msg)
  {}
  Init_MutateWorldObjectRequest_mutation_is_set mutation(::bosdyn_msgs::msg::MutateWorldObjectRequest::_mutation_type arg)
  {
    msg_.mutation = std::move(arg);
    return Init_MutateWorldObjectRequest_mutation_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::MutateWorldObjectRequest msg_;
};

class Init_MutateWorldObjectRequest_header_is_set
{
public:
  explicit Init_MutateWorldObjectRequest_header_is_set(::bosdyn_msgs::msg::MutateWorldObjectRequest & msg)
  : msg_(msg)
  {}
  Init_MutateWorldObjectRequest_mutation header_is_set(::bosdyn_msgs::msg::MutateWorldObjectRequest::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_MutateWorldObjectRequest_mutation(msg_);
  }

private:
  ::bosdyn_msgs::msg::MutateWorldObjectRequest msg_;
};

class Init_MutateWorldObjectRequest_header
{
public:
  Init_MutateWorldObjectRequest_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MutateWorldObjectRequest_header_is_set header(::bosdyn_msgs::msg::MutateWorldObjectRequest::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_MutateWorldObjectRequest_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::MutateWorldObjectRequest msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::MutateWorldObjectRequest>()
{
  return bosdyn_msgs::msg::builder::Init_MutateWorldObjectRequest_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__MUTATE_WORLD_OBJECT_REQUEST__BUILDER_HPP_
