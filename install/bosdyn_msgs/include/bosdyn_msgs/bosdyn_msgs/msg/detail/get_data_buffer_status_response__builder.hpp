// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/GetDataBufferStatusResponse.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__GET_DATA_BUFFER_STATUS_RESPONSE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__GET_DATA_BUFFER_STATUS_RESPONSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/get_data_buffer_status_response__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_GetDataBufferStatusResponse_data_buffer_status_is_set
{
public:
  explicit Init_GetDataBufferStatusResponse_data_buffer_status_is_set(::bosdyn_msgs::msg::GetDataBufferStatusResponse & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::GetDataBufferStatusResponse data_buffer_status_is_set(::bosdyn_msgs::msg::GetDataBufferStatusResponse::_data_buffer_status_is_set_type arg)
  {
    msg_.data_buffer_status_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetDataBufferStatusResponse msg_;
};

class Init_GetDataBufferStatusResponse_data_buffer_status
{
public:
  explicit Init_GetDataBufferStatusResponse_data_buffer_status(::bosdyn_msgs::msg::GetDataBufferStatusResponse & msg)
  : msg_(msg)
  {}
  Init_GetDataBufferStatusResponse_data_buffer_status_is_set data_buffer_status(::bosdyn_msgs::msg::GetDataBufferStatusResponse::_data_buffer_status_type arg)
  {
    msg_.data_buffer_status = std::move(arg);
    return Init_GetDataBufferStatusResponse_data_buffer_status_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetDataBufferStatusResponse msg_;
};

class Init_GetDataBufferStatusResponse_header_is_set
{
public:
  explicit Init_GetDataBufferStatusResponse_header_is_set(::bosdyn_msgs::msg::GetDataBufferStatusResponse & msg)
  : msg_(msg)
  {}
  Init_GetDataBufferStatusResponse_data_buffer_status header_is_set(::bosdyn_msgs::msg::GetDataBufferStatusResponse::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_GetDataBufferStatusResponse_data_buffer_status(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetDataBufferStatusResponse msg_;
};

class Init_GetDataBufferStatusResponse_header
{
public:
  Init_GetDataBufferStatusResponse_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetDataBufferStatusResponse_header_is_set header(::bosdyn_msgs::msg::GetDataBufferStatusResponse::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_GetDataBufferStatusResponse_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetDataBufferStatusResponse msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::GetDataBufferStatusResponse>()
{
  return bosdyn_msgs::msg::builder::Init_GetDataBufferStatusResponse_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__GET_DATA_BUFFER_STATUS_RESPONSE__BUILDER_HPP_
