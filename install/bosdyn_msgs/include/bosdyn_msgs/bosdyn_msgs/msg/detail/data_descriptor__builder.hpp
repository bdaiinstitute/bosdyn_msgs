// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/DataDescriptor.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__DATA_DESCRIPTOR__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__DATA_DESCRIPTOR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/data_descriptor__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_DataDescriptor_additional_indexes
{
public:
  explicit Init_DataDescriptor_additional_indexes(::bosdyn_msgs::msg::DataDescriptor & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::DataDescriptor additional_indexes(::bosdyn_msgs::msg::DataDescriptor::_additional_indexes_type arg)
  {
    msg_.additional_indexes = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::DataDescriptor msg_;
};

class Init_DataDescriptor_timestamp_is_set
{
public:
  explicit Init_DataDescriptor_timestamp_is_set(::bosdyn_msgs::msg::DataDescriptor & msg)
  : msg_(msg)
  {}
  Init_DataDescriptor_additional_indexes timestamp_is_set(::bosdyn_msgs::msg::DataDescriptor::_timestamp_is_set_type arg)
  {
    msg_.timestamp_is_set = std::move(arg);
    return Init_DataDescriptor_additional_indexes(msg_);
  }

private:
  ::bosdyn_msgs::msg::DataDescriptor msg_;
};

class Init_DataDescriptor_timestamp
{
public:
  explicit Init_DataDescriptor_timestamp(::bosdyn_msgs::msg::DataDescriptor & msg)
  : msg_(msg)
  {}
  Init_DataDescriptor_timestamp_is_set timestamp(::bosdyn_msgs::msg::DataDescriptor::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_DataDescriptor_timestamp_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::DataDescriptor msg_;
};

class Init_DataDescriptor_series_index
{
public:
  Init_DataDescriptor_series_index()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DataDescriptor_timestamp series_index(::bosdyn_msgs::msg::DataDescriptor::_series_index_type arg)
  {
    msg_.series_index = std::move(arg);
    return Init_DataDescriptor_timestamp(msg_);
  }

private:
  ::bosdyn_msgs::msg::DataDescriptor msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::DataDescriptor>()
{
  return bosdyn_msgs::msg::builder::Init_DataDescriptor_series_index();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__DATA_DESCRIPTOR__BUILDER_HPP_
