// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/GetLocalGridTypesResponse.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__GET_LOCAL_GRID_TYPES_RESPONSE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__GET_LOCAL_GRID_TYPES_RESPONSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/get_local_grid_types_response__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_GetLocalGridTypesResponse_local_grid_type
{
public:
  explicit Init_GetLocalGridTypesResponse_local_grid_type(::bosdyn_msgs::msg::GetLocalGridTypesResponse & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::GetLocalGridTypesResponse local_grid_type(::bosdyn_msgs::msg::GetLocalGridTypesResponse::_local_grid_type_type arg)
  {
    msg_.local_grid_type = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetLocalGridTypesResponse msg_;
};

class Init_GetLocalGridTypesResponse_header_is_set
{
public:
  explicit Init_GetLocalGridTypesResponse_header_is_set(::bosdyn_msgs::msg::GetLocalGridTypesResponse & msg)
  : msg_(msg)
  {}
  Init_GetLocalGridTypesResponse_local_grid_type header_is_set(::bosdyn_msgs::msg::GetLocalGridTypesResponse::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_GetLocalGridTypesResponse_local_grid_type(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetLocalGridTypesResponse msg_;
};

class Init_GetLocalGridTypesResponse_header
{
public:
  Init_GetLocalGridTypesResponse_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetLocalGridTypesResponse_header_is_set header(::bosdyn_msgs::msg::GetLocalGridTypesResponse::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_GetLocalGridTypesResponse_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetLocalGridTypesResponse msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::GetLocalGridTypesResponse>()
{
  return bosdyn_msgs::msg::builder::Init_GetLocalGridTypesResponse_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__GET_LOCAL_GRID_TYPES_RESPONSE__BUILDER_HPP_
