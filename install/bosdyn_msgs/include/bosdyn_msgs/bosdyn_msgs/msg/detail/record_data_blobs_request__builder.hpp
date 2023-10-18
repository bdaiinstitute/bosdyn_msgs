// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/RecordDataBlobsRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__RECORD_DATA_BLOBS_REQUEST__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__RECORD_DATA_BLOBS_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/record_data_blobs_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_RecordDataBlobsRequest_sync
{
public:
  explicit Init_RecordDataBlobsRequest_sync(::bosdyn_msgs::msg::RecordDataBlobsRequest & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::RecordDataBlobsRequest sync(::bosdyn_msgs::msg::RecordDataBlobsRequest::_sync_type arg)
  {
    msg_.sync = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::RecordDataBlobsRequest msg_;
};

class Init_RecordDataBlobsRequest_blob_data
{
public:
  explicit Init_RecordDataBlobsRequest_blob_data(::bosdyn_msgs::msg::RecordDataBlobsRequest & msg)
  : msg_(msg)
  {}
  Init_RecordDataBlobsRequest_sync blob_data(::bosdyn_msgs::msg::RecordDataBlobsRequest::_blob_data_type arg)
  {
    msg_.blob_data = std::move(arg);
    return Init_RecordDataBlobsRequest_sync(msg_);
  }

private:
  ::bosdyn_msgs::msg::RecordDataBlobsRequest msg_;
};

class Init_RecordDataBlobsRequest_header_is_set
{
public:
  explicit Init_RecordDataBlobsRequest_header_is_set(::bosdyn_msgs::msg::RecordDataBlobsRequest & msg)
  : msg_(msg)
  {}
  Init_RecordDataBlobsRequest_blob_data header_is_set(::bosdyn_msgs::msg::RecordDataBlobsRequest::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_RecordDataBlobsRequest_blob_data(msg_);
  }

private:
  ::bosdyn_msgs::msg::RecordDataBlobsRequest msg_;
};

class Init_RecordDataBlobsRequest_header
{
public:
  Init_RecordDataBlobsRequest_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RecordDataBlobsRequest_header_is_set header(::bosdyn_msgs::msg::RecordDataBlobsRequest::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_RecordDataBlobsRequest_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::RecordDataBlobsRequest msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::RecordDataBlobsRequest>()
{
  return bosdyn_msgs::msg::builder::Init_RecordDataBlobsRequest_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__RECORD_DATA_BLOBS_REQUEST__BUILDER_HPP_
