// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/LogAnnotationLogBlob.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__LOG_ANNOTATION_LOG_BLOB__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__LOG_ANNOTATION_LOG_BLOB__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/log_annotation_log_blob__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_LogAnnotationLogBlob_timestamp_client_is_set
{
public:
  explicit Init_LogAnnotationLogBlob_timestamp_client_is_set(::bosdyn_msgs::msg::LogAnnotationLogBlob & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::LogAnnotationLogBlob timestamp_client_is_set(::bosdyn_msgs::msg::LogAnnotationLogBlob::_timestamp_client_is_set_type arg)
  {
    msg_.timestamp_client_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::LogAnnotationLogBlob msg_;
};

class Init_LogAnnotationLogBlob_timestamp_client
{
public:
  explicit Init_LogAnnotationLogBlob_timestamp_client(::bosdyn_msgs::msg::LogAnnotationLogBlob & msg)
  : msg_(msg)
  {}
  Init_LogAnnotationLogBlob_timestamp_client_is_set timestamp_client(::bosdyn_msgs::msg::LogAnnotationLogBlob::_timestamp_client_type arg)
  {
    msg_.timestamp_client = std::move(arg);
    return Init_LogAnnotationLogBlob_timestamp_client_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::LogAnnotationLogBlob msg_;
};

class Init_LogAnnotationLogBlob_data
{
public:
  explicit Init_LogAnnotationLogBlob_data(::bosdyn_msgs::msg::LogAnnotationLogBlob & msg)
  : msg_(msg)
  {}
  Init_LogAnnotationLogBlob_timestamp_client data(::bosdyn_msgs::msg::LogAnnotationLogBlob::_data_type arg)
  {
    msg_.data = std::move(arg);
    return Init_LogAnnotationLogBlob_timestamp_client(msg_);
  }

private:
  ::bosdyn_msgs::msg::LogAnnotationLogBlob msg_;
};

class Init_LogAnnotationLogBlob_type_id
{
public:
  explicit Init_LogAnnotationLogBlob_type_id(::bosdyn_msgs::msg::LogAnnotationLogBlob & msg)
  : msg_(msg)
  {}
  Init_LogAnnotationLogBlob_data type_id(::bosdyn_msgs::msg::LogAnnotationLogBlob::_type_id_type arg)
  {
    msg_.type_id = std::move(arg);
    return Init_LogAnnotationLogBlob_data(msg_);
  }

private:
  ::bosdyn_msgs::msg::LogAnnotationLogBlob msg_;
};

class Init_LogAnnotationLogBlob_channel
{
public:
  explicit Init_LogAnnotationLogBlob_channel(::bosdyn_msgs::msg::LogAnnotationLogBlob & msg)
  : msg_(msg)
  {}
  Init_LogAnnotationLogBlob_type_id channel(::bosdyn_msgs::msg::LogAnnotationLogBlob::_channel_type arg)
  {
    msg_.channel = std::move(arg);
    return Init_LogAnnotationLogBlob_type_id(msg_);
  }

private:
  ::bosdyn_msgs::msg::LogAnnotationLogBlob msg_;
};

class Init_LogAnnotationLogBlob_timestamp_is_set
{
public:
  explicit Init_LogAnnotationLogBlob_timestamp_is_set(::bosdyn_msgs::msg::LogAnnotationLogBlob & msg)
  : msg_(msg)
  {}
  Init_LogAnnotationLogBlob_channel timestamp_is_set(::bosdyn_msgs::msg::LogAnnotationLogBlob::_timestamp_is_set_type arg)
  {
    msg_.timestamp_is_set = std::move(arg);
    return Init_LogAnnotationLogBlob_channel(msg_);
  }

private:
  ::bosdyn_msgs::msg::LogAnnotationLogBlob msg_;
};

class Init_LogAnnotationLogBlob_timestamp
{
public:
  Init_LogAnnotationLogBlob_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LogAnnotationLogBlob_timestamp_is_set timestamp(::bosdyn_msgs::msg::LogAnnotationLogBlob::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_LogAnnotationLogBlob_timestamp_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::LogAnnotationLogBlob msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::LogAnnotationLogBlob>()
{
  return bosdyn_msgs::msg::builder::Init_LogAnnotationLogBlob_timestamp();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__LOG_ANNOTATION_LOG_BLOB__BUILDER_HPP_
