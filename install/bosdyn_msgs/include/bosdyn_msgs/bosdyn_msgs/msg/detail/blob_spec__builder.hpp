// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/BlobSpec.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__BLOB_SPEC__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__BLOB_SPEC__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/blob_spec__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_BlobSpec_channel_glob
{
public:
  explicit Init_BlobSpec_channel_glob(::bosdyn_msgs::msg::BlobSpec & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::BlobSpec channel_glob(::bosdyn_msgs::msg::BlobSpec::_channel_glob_type arg)
  {
    msg_.channel_glob = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::BlobSpec msg_;
};

class Init_BlobSpec_channel
{
public:
  explicit Init_BlobSpec_channel(::bosdyn_msgs::msg::BlobSpec & msg)
  : msg_(msg)
  {}
  Init_BlobSpec_channel_glob channel(::bosdyn_msgs::msg::BlobSpec::_channel_type arg)
  {
    msg_.channel = std::move(arg);
    return Init_BlobSpec_channel_glob(msg_);
  }

private:
  ::bosdyn_msgs::msg::BlobSpec msg_;
};

class Init_BlobSpec_message_type
{
public:
  explicit Init_BlobSpec_message_type(::bosdyn_msgs::msg::BlobSpec & msg)
  : msg_(msg)
  {}
  Init_BlobSpec_channel message_type(::bosdyn_msgs::msg::BlobSpec::_message_type_type arg)
  {
    msg_.message_type = std::move(arg);
    return Init_BlobSpec_channel(msg_);
  }

private:
  ::bosdyn_msgs::msg::BlobSpec msg_;
};

class Init_BlobSpec_source
{
public:
  Init_BlobSpec_source()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BlobSpec_message_type source(::bosdyn_msgs::msg::BlobSpec::_source_type arg)
  {
    msg_.source = std::move(arg);
    return Init_BlobSpec_message_type(msg_);
  }

private:
  ::bosdyn_msgs::msg::BlobSpec msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::BlobSpec>()
{
  return bosdyn_msgs::msg::builder::Init_BlobSpec_source();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__BLOB_SPEC__BUILDER_HPP_
