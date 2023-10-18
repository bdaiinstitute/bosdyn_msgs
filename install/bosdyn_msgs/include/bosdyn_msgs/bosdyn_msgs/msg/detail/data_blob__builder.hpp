// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/DataBlob.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__DATA_BLOB__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__DATA_BLOB__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/data_blob__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_DataBlob_data
{
public:
  explicit Init_DataBlob_data(::bosdyn_msgs::msg::DataBlob & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::DataBlob data(::bosdyn_msgs::msg::DataBlob::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::DataBlob msg_;
};

class Init_DataBlob_type_id
{
public:
  explicit Init_DataBlob_type_id(::bosdyn_msgs::msg::DataBlob & msg)
  : msg_(msg)
  {}
  Init_DataBlob_data type_id(::bosdyn_msgs::msg::DataBlob::_type_id_type arg)
  {
    msg_.type_id = std::move(arg);
    return Init_DataBlob_data(msg_);
  }

private:
  ::bosdyn_msgs::msg::DataBlob msg_;
};

class Init_DataBlob_channel
{
public:
  explicit Init_DataBlob_channel(::bosdyn_msgs::msg::DataBlob & msg)
  : msg_(msg)
  {}
  Init_DataBlob_type_id channel(::bosdyn_msgs::msg::DataBlob::_channel_type arg)
  {
    msg_.channel = std::move(arg);
    return Init_DataBlob_type_id(msg_);
  }

private:
  ::bosdyn_msgs::msg::DataBlob msg_;
};

class Init_DataBlob_timestamp_is_set
{
public:
  explicit Init_DataBlob_timestamp_is_set(::bosdyn_msgs::msg::DataBlob & msg)
  : msg_(msg)
  {}
  Init_DataBlob_channel timestamp_is_set(::bosdyn_msgs::msg::DataBlob::_timestamp_is_set_type arg)
  {
    msg_.timestamp_is_set = std::move(arg);
    return Init_DataBlob_channel(msg_);
  }

private:
  ::bosdyn_msgs::msg::DataBlob msg_;
};

class Init_DataBlob_timestamp
{
public:
  Init_DataBlob_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DataBlob_timestamp_is_set timestamp(::bosdyn_msgs::msg::DataBlob::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_DataBlob_timestamp_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::DataBlob msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::DataBlob>()
{
  return bosdyn_msgs::msg::builder::Init_DataBlob_timestamp();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__DATA_BLOB__BUILDER_HPP_
