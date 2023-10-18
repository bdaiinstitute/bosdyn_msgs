// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/SeriesDescriptorOneOfDataType.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__SERIES_DESCRIPTOR_ONE_OF_DATA_TYPE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__SERIES_DESCRIPTOR_ONE_OF_DATA_TYPE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/series_descriptor_one_of_data_type__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_SeriesDescriptorOneOfDataType_data_type_choice
{
public:
  explicit Init_SeriesDescriptorOneOfDataType_data_type_choice(::bosdyn_msgs::msg::SeriesDescriptorOneOfDataType & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::SeriesDescriptorOneOfDataType data_type_choice(::bosdyn_msgs::msg::SeriesDescriptorOneOfDataType::_data_type_choice_type arg)
  {
    msg_.data_type_choice = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::SeriesDescriptorOneOfDataType msg_;
};

class Init_SeriesDescriptorOneOfDataType_struct_type
{
public:
  explicit Init_SeriesDescriptorOneOfDataType_struct_type(::bosdyn_msgs::msg::SeriesDescriptorOneOfDataType & msg)
  : msg_(msg)
  {}
  Init_SeriesDescriptorOneOfDataType_data_type_choice struct_type(::bosdyn_msgs::msg::SeriesDescriptorOneOfDataType::_struct_type_type arg)
  {
    msg_.struct_type = std::move(arg);
    return Init_SeriesDescriptorOneOfDataType_data_type_choice(msg_);
  }

private:
  ::bosdyn_msgs::msg::SeriesDescriptorOneOfDataType msg_;
};

class Init_SeriesDescriptorOneOfDataType_pod_type
{
public:
  explicit Init_SeriesDescriptorOneOfDataType_pod_type(::bosdyn_msgs::msg::SeriesDescriptorOneOfDataType & msg)
  : msg_(msg)
  {}
  Init_SeriesDescriptorOneOfDataType_struct_type pod_type(::bosdyn_msgs::msg::SeriesDescriptorOneOfDataType::_pod_type_type arg)
  {
    msg_.pod_type = std::move(arg);
    return Init_SeriesDescriptorOneOfDataType_struct_type(msg_);
  }

private:
  ::bosdyn_msgs::msg::SeriesDescriptorOneOfDataType msg_;
};

class Init_SeriesDescriptorOneOfDataType_message_type
{
public:
  Init_SeriesDescriptorOneOfDataType_message_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SeriesDescriptorOneOfDataType_pod_type message_type(::bosdyn_msgs::msg::SeriesDescriptorOneOfDataType::_message_type_type arg)
  {
    msg_.message_type = std::move(arg);
    return Init_SeriesDescriptorOneOfDataType_pod_type(msg_);
  }

private:
  ::bosdyn_msgs::msg::SeriesDescriptorOneOfDataType msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::SeriesDescriptorOneOfDataType>()
{
  return bosdyn_msgs::msg::builder::Init_SeriesDescriptorOneOfDataType_message_type();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__SERIES_DESCRIPTOR_ONE_OF_DATA_TYPE__BUILDER_HPP_
