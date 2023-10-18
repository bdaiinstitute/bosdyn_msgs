// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/RecordDataBlobsResponseError.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__RECORD_DATA_BLOBS_RESPONSE_ERROR__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__RECORD_DATA_BLOBS_RESPONSE_ERROR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/record_data_blobs_response_error__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_RecordDataBlobsResponseError_index
{
public:
  explicit Init_RecordDataBlobsResponseError_index(::bosdyn_msgs::msg::RecordDataBlobsResponseError & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::RecordDataBlobsResponseError index(::bosdyn_msgs::msg::RecordDataBlobsResponseError::_index_type arg)
  {
    msg_.index = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::RecordDataBlobsResponseError msg_;
};

class Init_RecordDataBlobsResponseError_message
{
public:
  explicit Init_RecordDataBlobsResponseError_message(::bosdyn_msgs::msg::RecordDataBlobsResponseError & msg)
  : msg_(msg)
  {}
  Init_RecordDataBlobsResponseError_index message(::bosdyn_msgs::msg::RecordDataBlobsResponseError::_message_type arg)
  {
    msg_.message = std::move(arg);
    return Init_RecordDataBlobsResponseError_index(msg_);
  }

private:
  ::bosdyn_msgs::msg::RecordDataBlobsResponseError msg_;
};

class Init_RecordDataBlobsResponseError_type
{
public:
  Init_RecordDataBlobsResponseError_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RecordDataBlobsResponseError_message type(::bosdyn_msgs::msg::RecordDataBlobsResponseError::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_RecordDataBlobsResponseError_message(msg_);
  }

private:
  ::bosdyn_msgs::msg::RecordDataBlobsResponseError msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::RecordDataBlobsResponseError>()
{
  return bosdyn_msgs::msg::builder::Init_RecordDataBlobsResponseError_type();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__RECORD_DATA_BLOBS_RESPONSE_ERROR__BUILDER_HPP_
