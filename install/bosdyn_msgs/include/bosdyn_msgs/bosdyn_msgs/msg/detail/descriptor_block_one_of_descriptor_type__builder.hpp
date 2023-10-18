// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/DescriptorBlockOneOfDescriptorType.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__DESCRIPTOR_BLOCK_ONE_OF_DESCRIPTOR_TYPE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__DESCRIPTOR_BLOCK_ONE_OF_DESCRIPTOR_TYPE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/descriptor_block_one_of_descriptor_type__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_DescriptorBlockOneOfDescriptorType_descriptor_type_choice
{
public:
  explicit Init_DescriptorBlockOneOfDescriptorType_descriptor_type_choice(::bosdyn_msgs::msg::DescriptorBlockOneOfDescriptorType & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::DescriptorBlockOneOfDescriptorType descriptor_type_choice(::bosdyn_msgs::msg::DescriptorBlockOneOfDescriptorType::_descriptor_type_choice_type arg)
  {
    msg_.descriptor_type_choice = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::DescriptorBlockOneOfDescriptorType msg_;
};

class Init_DescriptorBlockOneOfDescriptorType_file_index
{
public:
  explicit Init_DescriptorBlockOneOfDescriptorType_file_index(::bosdyn_msgs::msg::DescriptorBlockOneOfDescriptorType & msg)
  : msg_(msg)
  {}
  Init_DescriptorBlockOneOfDescriptorType_descriptor_type_choice file_index(::bosdyn_msgs::msg::DescriptorBlockOneOfDescriptorType::_file_index_type arg)
  {
    msg_.file_index = std::move(arg);
    return Init_DescriptorBlockOneOfDescriptorType_descriptor_type_choice(msg_);
  }

private:
  ::bosdyn_msgs::msg::DescriptorBlockOneOfDescriptorType msg_;
};

class Init_DescriptorBlockOneOfDescriptorType_series_block_index
{
public:
  explicit Init_DescriptorBlockOneOfDescriptorType_series_block_index(::bosdyn_msgs::msg::DescriptorBlockOneOfDescriptorType & msg)
  : msg_(msg)
  {}
  Init_DescriptorBlockOneOfDescriptorType_file_index series_block_index(::bosdyn_msgs::msg::DescriptorBlockOneOfDescriptorType::_series_block_index_type arg)
  {
    msg_.series_block_index = std::move(arg);
    return Init_DescriptorBlockOneOfDescriptorType_file_index(msg_);
  }

private:
  ::bosdyn_msgs::msg::DescriptorBlockOneOfDescriptorType msg_;
};

class Init_DescriptorBlockOneOfDescriptorType_series_descriptor
{
public:
  explicit Init_DescriptorBlockOneOfDescriptorType_series_descriptor(::bosdyn_msgs::msg::DescriptorBlockOneOfDescriptorType & msg)
  : msg_(msg)
  {}
  Init_DescriptorBlockOneOfDescriptorType_series_block_index series_descriptor(::bosdyn_msgs::msg::DescriptorBlockOneOfDescriptorType::_series_descriptor_type arg)
  {
    msg_.series_descriptor = std::move(arg);
    return Init_DescriptorBlockOneOfDescriptorType_series_block_index(msg_);
  }

private:
  ::bosdyn_msgs::msg::DescriptorBlockOneOfDescriptorType msg_;
};

class Init_DescriptorBlockOneOfDescriptorType_file_descriptor
{
public:
  Init_DescriptorBlockOneOfDescriptorType_file_descriptor()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DescriptorBlockOneOfDescriptorType_series_descriptor file_descriptor(::bosdyn_msgs::msg::DescriptorBlockOneOfDescriptorType::_file_descriptor_type arg)
  {
    msg_.file_descriptor = std::move(arg);
    return Init_DescriptorBlockOneOfDescriptorType_series_descriptor(msg_);
  }

private:
  ::bosdyn_msgs::msg::DescriptorBlockOneOfDescriptorType msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::DescriptorBlockOneOfDescriptorType>()
{
  return bosdyn_msgs::msg::builder::Init_DescriptorBlockOneOfDescriptorType_file_descriptor();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__DESCRIPTOR_BLOCK_ONE_OF_DESCRIPTOR_TYPE__BUILDER_HPP_
