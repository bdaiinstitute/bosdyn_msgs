// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/GetDataBufferStatusRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__GET_DATA_BUFFER_STATUS_REQUEST__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__GET_DATA_BUFFER_STATUS_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/get_data_buffer_status_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_GetDataBufferStatusRequest_get_blob_specs
{
public:
  explicit Init_GetDataBufferStatusRequest_get_blob_specs(::bosdyn_msgs::msg::GetDataBufferStatusRequest & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::GetDataBufferStatusRequest get_blob_specs(::bosdyn_msgs::msg::GetDataBufferStatusRequest::_get_blob_specs_type arg)
  {
    msg_.get_blob_specs = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetDataBufferStatusRequest msg_;
};

class Init_GetDataBufferStatusRequest_header_is_set
{
public:
  explicit Init_GetDataBufferStatusRequest_header_is_set(::bosdyn_msgs::msg::GetDataBufferStatusRequest & msg)
  : msg_(msg)
  {}
  Init_GetDataBufferStatusRequest_get_blob_specs header_is_set(::bosdyn_msgs::msg::GetDataBufferStatusRequest::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_GetDataBufferStatusRequest_get_blob_specs(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetDataBufferStatusRequest msg_;
};

class Init_GetDataBufferStatusRequest_header
{
public:
  Init_GetDataBufferStatusRequest_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetDataBufferStatusRequest_header_is_set header(::bosdyn_msgs::msg::GetDataBufferStatusRequest::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_GetDataBufferStatusRequest_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetDataBufferStatusRequest msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::GetDataBufferStatusRequest>()
{
  return bosdyn_msgs::msg::builder::Init_GetDataBufferStatusRequest_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__GET_DATA_BUFFER_STATUS_REQUEST__BUILDER_HPP_
