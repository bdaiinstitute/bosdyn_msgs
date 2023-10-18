// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/GetLocalGridsResponse.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__GET_LOCAL_GRIDS_RESPONSE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__GET_LOCAL_GRIDS_RESPONSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/get_local_grids_response__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_GetLocalGridsResponse_num_local_grid_errors
{
public:
  explicit Init_GetLocalGridsResponse_num_local_grid_errors(::bosdyn_msgs::msg::GetLocalGridsResponse & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::GetLocalGridsResponse num_local_grid_errors(::bosdyn_msgs::msg::GetLocalGridsResponse::_num_local_grid_errors_type arg)
  {
    msg_.num_local_grid_errors = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetLocalGridsResponse msg_;
};

class Init_GetLocalGridsResponse_local_grid_responses
{
public:
  explicit Init_GetLocalGridsResponse_local_grid_responses(::bosdyn_msgs::msg::GetLocalGridsResponse & msg)
  : msg_(msg)
  {}
  Init_GetLocalGridsResponse_num_local_grid_errors local_grid_responses(::bosdyn_msgs::msg::GetLocalGridsResponse::_local_grid_responses_type arg)
  {
    msg_.local_grid_responses = std::move(arg);
    return Init_GetLocalGridsResponse_num_local_grid_errors(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetLocalGridsResponse msg_;
};

class Init_GetLocalGridsResponse_header_is_set
{
public:
  explicit Init_GetLocalGridsResponse_header_is_set(::bosdyn_msgs::msg::GetLocalGridsResponse & msg)
  : msg_(msg)
  {}
  Init_GetLocalGridsResponse_local_grid_responses header_is_set(::bosdyn_msgs::msg::GetLocalGridsResponse::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_GetLocalGridsResponse_local_grid_responses(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetLocalGridsResponse msg_;
};

class Init_GetLocalGridsResponse_header
{
public:
  Init_GetLocalGridsResponse_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetLocalGridsResponse_header_is_set header(::bosdyn_msgs::msg::GetLocalGridsResponse::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_GetLocalGridsResponse_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetLocalGridsResponse msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::GetLocalGridsResponse>()
{
  return bosdyn_msgs::msg::builder::Init_GetLocalGridsResponse_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__GET_LOCAL_GRIDS_RESPONSE__BUILDER_HPP_
