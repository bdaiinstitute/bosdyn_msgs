// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/StoreMetadata.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__STORE_METADATA__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__STORE_METADATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/store_metadata__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_StoreMetadata_metadata_channel
{
public:
  explicit Init_StoreMetadata_metadata_channel(::bosdyn_msgs::msg::StoreMetadata & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::StoreMetadata metadata_channel(::bosdyn_msgs::msg::StoreMetadata::_metadata_channel_type arg)
  {
    msg_.metadata_channel = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::StoreMetadata msg_;
};

class Init_StoreMetadata_data
{
public:
  explicit Init_StoreMetadata_data(::bosdyn_msgs::msg::StoreMetadata & msg)
  : msg_(msg)
  {}
  Init_StoreMetadata_metadata_channel data(::bosdyn_msgs::msg::StoreMetadata::_data_type arg)
  {
    msg_.data = std::move(arg);
    return Init_StoreMetadata_metadata_channel(msg_);
  }

private:
  ::bosdyn_msgs::msg::StoreMetadata msg_;
};

class Init_StoreMetadata_acquire_data_request_name
{
public:
  explicit Init_StoreMetadata_acquire_data_request_name(::bosdyn_msgs::msg::StoreMetadata & msg)
  : msg_(msg)
  {}
  Init_StoreMetadata_data acquire_data_request_name(::bosdyn_msgs::msg::StoreMetadata::_acquire_data_request_name_type arg)
  {
    msg_.acquire_data_request_name = std::move(arg);
    return Init_StoreMetadata_data(msg_);
  }

private:
  ::bosdyn_msgs::msg::StoreMetadata msg_;
};

class Init_StoreMetadata_host
{
public:
  explicit Init_StoreMetadata_host(::bosdyn_msgs::msg::StoreMetadata & msg)
  : msg_(msg)
  {}
  Init_StoreMetadata_acquire_data_request_name host(::bosdyn_msgs::msg::StoreMetadata::_host_type arg)
  {
    msg_.host = std::move(arg);
    return Init_StoreMetadata_acquire_data_request_name(msg_);
  }

private:
  ::bosdyn_msgs::msg::StoreMetadata msg_;
};

class Init_StoreMetadata_service_name
{
public:
  Init_StoreMetadata_service_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_StoreMetadata_host service_name(::bosdyn_msgs::msg::StoreMetadata::_service_name_type arg)
  {
    msg_.service_name = std::move(arg);
    return Init_StoreMetadata_host(msg_);
  }

private:
  ::bosdyn_msgs::msg::StoreMetadata msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::StoreMetadata>()
{
  return bosdyn_msgs::msg::builder::Init_StoreMetadata_service_name();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__STORE_METADATA__BUILDER_HPP_
