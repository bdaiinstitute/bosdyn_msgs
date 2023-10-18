// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/LocalGridRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__LOCAL_GRID_REQUEST__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__LOCAL_GRID_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/local_grid_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_LocalGridRequest_local_grid_type_name
{
public:
  Init_LocalGridRequest_local_grid_type_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::bosdyn_msgs::msg::LocalGridRequest local_grid_type_name(::bosdyn_msgs::msg::LocalGridRequest::_local_grid_type_name_type arg)
  {
    msg_.local_grid_type_name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::LocalGridRequest msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::LocalGridRequest>()
{
  return bosdyn_msgs::msg::builder::Init_LocalGridRequest_local_grid_type_name();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__LOCAL_GRID_REQUEST__BUILDER_HPP_
