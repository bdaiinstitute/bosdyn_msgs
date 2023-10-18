// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/ListWorldObjectResponse.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__LIST_WORLD_OBJECT_RESPONSE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__LIST_WORLD_OBJECT_RESPONSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/list_world_object_response__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_ListWorldObjectResponse_world_objects
{
public:
  explicit Init_ListWorldObjectResponse_world_objects(::bosdyn_msgs::msg::ListWorldObjectResponse & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::ListWorldObjectResponse world_objects(::bosdyn_msgs::msg::ListWorldObjectResponse::_world_objects_type arg)
  {
    msg_.world_objects = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::ListWorldObjectResponse msg_;
};

class Init_ListWorldObjectResponse_header_is_set
{
public:
  explicit Init_ListWorldObjectResponse_header_is_set(::bosdyn_msgs::msg::ListWorldObjectResponse & msg)
  : msg_(msg)
  {}
  Init_ListWorldObjectResponse_world_objects header_is_set(::bosdyn_msgs::msg::ListWorldObjectResponse::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_ListWorldObjectResponse_world_objects(msg_);
  }

private:
  ::bosdyn_msgs::msg::ListWorldObjectResponse msg_;
};

class Init_ListWorldObjectResponse_header
{
public:
  Init_ListWorldObjectResponse_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ListWorldObjectResponse_header_is_set header(::bosdyn_msgs::msg::ListWorldObjectResponse::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ListWorldObjectResponse_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ListWorldObjectResponse msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::ListWorldObjectResponse>()
{
  return bosdyn_msgs::msg::builder::Init_ListWorldObjectResponse_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__LIST_WORLD_OBJECT_RESPONSE__BUILDER_HPP_
