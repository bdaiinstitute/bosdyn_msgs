// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/StoreMetadataRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__STORE_METADATA_REQUEST__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__STORE_METADATA_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/store_metadata_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_StoreMetadataRequest_data_id_is_set
{
public:
  explicit Init_StoreMetadataRequest_data_id_is_set(::bosdyn_msgs::msg::StoreMetadataRequest & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::StoreMetadataRequest data_id_is_set(::bosdyn_msgs::msg::StoreMetadataRequest::_data_id_is_set_type arg)
  {
    msg_.data_id_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::StoreMetadataRequest msg_;
};

class Init_StoreMetadataRequest_data_id
{
public:
  explicit Init_StoreMetadataRequest_data_id(::bosdyn_msgs::msg::StoreMetadataRequest & msg)
  : msg_(msg)
  {}
  Init_StoreMetadataRequest_data_id_is_set data_id(::bosdyn_msgs::msg::StoreMetadataRequest::_data_id_type arg)
  {
    msg_.data_id = std::move(arg);
    return Init_StoreMetadataRequest_data_id_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::StoreMetadataRequest msg_;
};

class Init_StoreMetadataRequest_metadata_is_set
{
public:
  explicit Init_StoreMetadataRequest_metadata_is_set(::bosdyn_msgs::msg::StoreMetadataRequest & msg)
  : msg_(msg)
  {}
  Init_StoreMetadataRequest_data_id metadata_is_set(::bosdyn_msgs::msg::StoreMetadataRequest::_metadata_is_set_type arg)
  {
    msg_.metadata_is_set = std::move(arg);
    return Init_StoreMetadataRequest_data_id(msg_);
  }

private:
  ::bosdyn_msgs::msg::StoreMetadataRequest msg_;
};

class Init_StoreMetadataRequest_metadata
{
public:
  explicit Init_StoreMetadataRequest_metadata(::bosdyn_msgs::msg::StoreMetadataRequest & msg)
  : msg_(msg)
  {}
  Init_StoreMetadataRequest_metadata_is_set metadata(::bosdyn_msgs::msg::StoreMetadataRequest::_metadata_type arg)
  {
    msg_.metadata = std::move(arg);
    return Init_StoreMetadataRequest_metadata_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::StoreMetadataRequest msg_;
};

class Init_StoreMetadataRequest_header_is_set
{
public:
  explicit Init_StoreMetadataRequest_header_is_set(::bosdyn_msgs::msg::StoreMetadataRequest & msg)
  : msg_(msg)
  {}
  Init_StoreMetadataRequest_metadata header_is_set(::bosdyn_msgs::msg::StoreMetadataRequest::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_StoreMetadataRequest_metadata(msg_);
  }

private:
  ::bosdyn_msgs::msg::StoreMetadataRequest msg_;
};

class Init_StoreMetadataRequest_header
{
public:
  Init_StoreMetadataRequest_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_StoreMetadataRequest_header_is_set header(::bosdyn_msgs::msg::StoreMetadataRequest::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_StoreMetadataRequest_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::StoreMetadataRequest msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::StoreMetadataRequest>()
{
  return bosdyn_msgs::msg::builder::Init_StoreMetadataRequest_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__STORE_METADATA_REQUEST__BUILDER_HPP_
