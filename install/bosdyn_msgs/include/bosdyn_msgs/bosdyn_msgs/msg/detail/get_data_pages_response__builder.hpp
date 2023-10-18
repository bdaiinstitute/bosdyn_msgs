// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/GetDataPagesResponse.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__GET_DATA_PAGES_RESPONSE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__GET_DATA_PAGES_RESPONSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/get_data_pages_response__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_GetDataPagesResponse_pages
{
public:
  explicit Init_GetDataPagesResponse_pages(::bosdyn_msgs::msg::GetDataPagesResponse & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::GetDataPagesResponse pages(::bosdyn_msgs::msg::GetDataPagesResponse::_pages_type arg)
  {
    msg_.pages = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetDataPagesResponse msg_;
};

class Init_GetDataPagesResponse_header_is_set
{
public:
  explicit Init_GetDataPagesResponse_header_is_set(::bosdyn_msgs::msg::GetDataPagesResponse & msg)
  : msg_(msg)
  {}
  Init_GetDataPagesResponse_pages header_is_set(::bosdyn_msgs::msg::GetDataPagesResponse::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_GetDataPagesResponse_pages(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetDataPagesResponse msg_;
};

class Init_GetDataPagesResponse_header
{
public:
  Init_GetDataPagesResponse_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetDataPagesResponse_header_is_set header(::bosdyn_msgs::msg::GetDataPagesResponse::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_GetDataPagesResponse_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetDataPagesResponse msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::GetDataPagesResponse>()
{
  return bosdyn_msgs::msg::builder::Init_GetDataPagesResponse_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__GET_DATA_PAGES_RESPONSE__BUILDER_HPP_
