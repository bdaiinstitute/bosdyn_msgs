// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/AcquirePluginDataRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ACQUIRE_PLUGIN_DATA_REQUEST__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__ACQUIRE_PLUGIN_DATA_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/acquire_plugin_data_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_AcquirePluginDataRequest_acquisition_requests_is_set
{
public:
  explicit Init_AcquirePluginDataRequest_acquisition_requests_is_set(::bosdyn_msgs::msg::AcquirePluginDataRequest & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::AcquirePluginDataRequest acquisition_requests_is_set(::bosdyn_msgs::msg::AcquirePluginDataRequest::_acquisition_requests_is_set_type arg)
  {
    msg_.acquisition_requests_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::AcquirePluginDataRequest msg_;
};

class Init_AcquirePluginDataRequest_acquisition_requests
{
public:
  explicit Init_AcquirePluginDataRequest_acquisition_requests(::bosdyn_msgs::msg::AcquirePluginDataRequest & msg)
  : msg_(msg)
  {}
  Init_AcquirePluginDataRequest_acquisition_requests_is_set acquisition_requests(::bosdyn_msgs::msg::AcquirePluginDataRequest::_acquisition_requests_type arg)
  {
    msg_.acquisition_requests = std::move(arg);
    return Init_AcquirePluginDataRequest_acquisition_requests_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::AcquirePluginDataRequest msg_;
};

class Init_AcquirePluginDataRequest_action_id_is_set
{
public:
  explicit Init_AcquirePluginDataRequest_action_id_is_set(::bosdyn_msgs::msg::AcquirePluginDataRequest & msg)
  : msg_(msg)
  {}
  Init_AcquirePluginDataRequest_acquisition_requests action_id_is_set(::bosdyn_msgs::msg::AcquirePluginDataRequest::_action_id_is_set_type arg)
  {
    msg_.action_id_is_set = std::move(arg);
    return Init_AcquirePluginDataRequest_acquisition_requests(msg_);
  }

private:
  ::bosdyn_msgs::msg::AcquirePluginDataRequest msg_;
};

class Init_AcquirePluginDataRequest_action_id
{
public:
  explicit Init_AcquirePluginDataRequest_action_id(::bosdyn_msgs::msg::AcquirePluginDataRequest & msg)
  : msg_(msg)
  {}
  Init_AcquirePluginDataRequest_action_id_is_set action_id(::bosdyn_msgs::msg::AcquirePluginDataRequest::_action_id_type arg)
  {
    msg_.action_id = std::move(arg);
    return Init_AcquirePluginDataRequest_action_id_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::AcquirePluginDataRequest msg_;
};

class Init_AcquirePluginDataRequest_metadata_is_set
{
public:
  explicit Init_AcquirePluginDataRequest_metadata_is_set(::bosdyn_msgs::msg::AcquirePluginDataRequest & msg)
  : msg_(msg)
  {}
  Init_AcquirePluginDataRequest_action_id metadata_is_set(::bosdyn_msgs::msg::AcquirePluginDataRequest::_metadata_is_set_type arg)
  {
    msg_.metadata_is_set = std::move(arg);
    return Init_AcquirePluginDataRequest_action_id(msg_);
  }

private:
  ::bosdyn_msgs::msg::AcquirePluginDataRequest msg_;
};

class Init_AcquirePluginDataRequest_metadata
{
public:
  explicit Init_AcquirePluginDataRequest_metadata(::bosdyn_msgs::msg::AcquirePluginDataRequest & msg)
  : msg_(msg)
  {}
  Init_AcquirePluginDataRequest_metadata_is_set metadata(::bosdyn_msgs::msg::AcquirePluginDataRequest::_metadata_type arg)
  {
    msg_.metadata = std::move(arg);
    return Init_AcquirePluginDataRequest_metadata_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::AcquirePluginDataRequest msg_;
};

class Init_AcquirePluginDataRequest_data_id
{
public:
  explicit Init_AcquirePluginDataRequest_data_id(::bosdyn_msgs::msg::AcquirePluginDataRequest & msg)
  : msg_(msg)
  {}
  Init_AcquirePluginDataRequest_metadata data_id(::bosdyn_msgs::msg::AcquirePluginDataRequest::_data_id_type arg)
  {
    msg_.data_id = std::move(arg);
    return Init_AcquirePluginDataRequest_metadata(msg_);
  }

private:
  ::bosdyn_msgs::msg::AcquirePluginDataRequest msg_;
};

class Init_AcquirePluginDataRequest_header_is_set
{
public:
  explicit Init_AcquirePluginDataRequest_header_is_set(::bosdyn_msgs::msg::AcquirePluginDataRequest & msg)
  : msg_(msg)
  {}
  Init_AcquirePluginDataRequest_data_id header_is_set(::bosdyn_msgs::msg::AcquirePluginDataRequest::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_AcquirePluginDataRequest_data_id(msg_);
  }

private:
  ::bosdyn_msgs::msg::AcquirePluginDataRequest msg_;
};

class Init_AcquirePluginDataRequest_header
{
public:
  Init_AcquirePluginDataRequest_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AcquirePluginDataRequest_header_is_set header(::bosdyn_msgs::msg::AcquirePluginDataRequest::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_AcquirePluginDataRequest_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::AcquirePluginDataRequest msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::AcquirePluginDataRequest>()
{
  return bosdyn_msgs::msg::builder::Init_AcquirePluginDataRequest_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__ACQUIRE_PLUGIN_DATA_REQUEST__BUILDER_HPP_
