// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/RecordDataBlobsResponse.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__RECORD_DATA_BLOBS_RESPONSE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__RECORD_DATA_BLOBS_RESPONSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/record_data_blobs_response__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_RecordDataBlobsResponse_errors
{
public:
  explicit Init_RecordDataBlobsResponse_errors(::bosdyn_msgs::msg::RecordDataBlobsResponse & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::RecordDataBlobsResponse errors(::bosdyn_msgs::msg::RecordDataBlobsResponse::_errors_type arg)
  {
    msg_.errors = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::RecordDataBlobsResponse msg_;
};

class Init_RecordDataBlobsResponse_header_is_set
{
public:
  explicit Init_RecordDataBlobsResponse_header_is_set(::bosdyn_msgs::msg::RecordDataBlobsResponse & msg)
  : msg_(msg)
  {}
  Init_RecordDataBlobsResponse_errors header_is_set(::bosdyn_msgs::msg::RecordDataBlobsResponse::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_RecordDataBlobsResponse_errors(msg_);
  }

private:
  ::bosdyn_msgs::msg::RecordDataBlobsResponse msg_;
};

class Init_RecordDataBlobsResponse_header
{
public:
  Init_RecordDataBlobsResponse_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RecordDataBlobsResponse_header_is_set header(::bosdyn_msgs::msg::RecordDataBlobsResponse::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_RecordDataBlobsResponse_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::RecordDataBlobsResponse msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::RecordDataBlobsResponse>()
{
  return bosdyn_msgs::msg::builder::Init_RecordDataBlobsResponse_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__RECORD_DATA_BLOBS_RESPONSE__BUILDER_HPP_
