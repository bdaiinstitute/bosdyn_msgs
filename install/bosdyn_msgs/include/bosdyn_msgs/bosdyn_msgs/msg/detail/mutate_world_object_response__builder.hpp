// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/MutateWorldObjectResponse.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__MUTATE_WORLD_OBJECT_RESPONSE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__MUTATE_WORLD_OBJECT_RESPONSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/mutate_world_object_response__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_MutateWorldObjectResponse_mutated_object_id
{
public:
  explicit Init_MutateWorldObjectResponse_mutated_object_id(::bosdyn_msgs::msg::MutateWorldObjectResponse & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::MutateWorldObjectResponse mutated_object_id(::bosdyn_msgs::msg::MutateWorldObjectResponse::_mutated_object_id_type arg)
  {
    msg_.mutated_object_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::MutateWorldObjectResponse msg_;
};

class Init_MutateWorldObjectResponse_status
{
public:
  explicit Init_MutateWorldObjectResponse_status(::bosdyn_msgs::msg::MutateWorldObjectResponse & msg)
  : msg_(msg)
  {}
  Init_MutateWorldObjectResponse_mutated_object_id status(::bosdyn_msgs::msg::MutateWorldObjectResponse::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_MutateWorldObjectResponse_mutated_object_id(msg_);
  }

private:
  ::bosdyn_msgs::msg::MutateWorldObjectResponse msg_;
};

class Init_MutateWorldObjectResponse_header_is_set
{
public:
  explicit Init_MutateWorldObjectResponse_header_is_set(::bosdyn_msgs::msg::MutateWorldObjectResponse & msg)
  : msg_(msg)
  {}
  Init_MutateWorldObjectResponse_status header_is_set(::bosdyn_msgs::msg::MutateWorldObjectResponse::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_MutateWorldObjectResponse_status(msg_);
  }

private:
  ::bosdyn_msgs::msg::MutateWorldObjectResponse msg_;
};

class Init_MutateWorldObjectResponse_header
{
public:
  Init_MutateWorldObjectResponse_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MutateWorldObjectResponse_header_is_set header(::bosdyn_msgs::msg::MutateWorldObjectResponse::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_MutateWorldObjectResponse_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::MutateWorldObjectResponse msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::MutateWorldObjectResponse>()
{
  return bosdyn_msgs::msg::builder::Init_MutateWorldObjectResponse_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__MUTATE_WORLD_OBJECT_RESPONSE__BUILDER_HPP_
