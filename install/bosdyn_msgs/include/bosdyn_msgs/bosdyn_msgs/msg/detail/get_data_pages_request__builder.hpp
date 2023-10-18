// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/GetDataPagesRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__GET_DATA_PAGES_REQUEST__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__GET_DATA_PAGES_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/get_data_pages_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_GetDataPagesRequest_time_range_is_set
{
public:
  explicit Init_GetDataPagesRequest_time_range_is_set(::bosdyn_msgs::msg::GetDataPagesRequest & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::GetDataPagesRequest time_range_is_set(::bosdyn_msgs::msg::GetDataPagesRequest::_time_range_is_set_type arg)
  {
    msg_.time_range_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetDataPagesRequest msg_;
};

class Init_GetDataPagesRequest_time_range
{
public:
  explicit Init_GetDataPagesRequest_time_range(::bosdyn_msgs::msg::GetDataPagesRequest & msg)
  : msg_(msg)
  {}
  Init_GetDataPagesRequest_time_range_is_set time_range(::bosdyn_msgs::msg::GetDataPagesRequest::_time_range_type arg)
  {
    msg_.time_range = std::move(arg);
    return Init_GetDataPagesRequest_time_range_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetDataPagesRequest msg_;
};

class Init_GetDataPagesRequest_header_is_set
{
public:
  explicit Init_GetDataPagesRequest_header_is_set(::bosdyn_msgs::msg::GetDataPagesRequest & msg)
  : msg_(msg)
  {}
  Init_GetDataPagesRequest_time_range header_is_set(::bosdyn_msgs::msg::GetDataPagesRequest::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_GetDataPagesRequest_time_range(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetDataPagesRequest msg_;
};

class Init_GetDataPagesRequest_header
{
public:
  Init_GetDataPagesRequest_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetDataPagesRequest_header_is_set header(::bosdyn_msgs::msg::GetDataPagesRequest::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_GetDataPagesRequest_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetDataPagesRequest msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::GetDataPagesRequest>()
{
  return bosdyn_msgs::msg::builder::Init_GetDataPagesRequest_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__GET_DATA_PAGES_REQUEST__BUILDER_HPP_
