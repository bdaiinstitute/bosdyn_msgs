// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/AcquireDataRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ACQUIRE_DATA_REQUEST__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__ACQUIRE_DATA_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/acquire_data_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_AcquireDataRequest_min_timeout_is_set
{
public:
  explicit Init_AcquireDataRequest_min_timeout_is_set(::bosdyn_msgs::msg::AcquireDataRequest & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::AcquireDataRequest min_timeout_is_set(::bosdyn_msgs::msg::AcquireDataRequest::_min_timeout_is_set_type arg)
  {
    msg_.min_timeout_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::AcquireDataRequest msg_;
};

class Init_AcquireDataRequest_min_timeout
{
public:
  explicit Init_AcquireDataRequest_min_timeout(::bosdyn_msgs::msg::AcquireDataRequest & msg)
  : msg_(msg)
  {}
  Init_AcquireDataRequest_min_timeout_is_set min_timeout(::bosdyn_msgs::msg::AcquireDataRequest::_min_timeout_type arg)
  {
    msg_.min_timeout = std::move(arg);
    return Init_AcquireDataRequest_min_timeout_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::AcquireDataRequest msg_;
};

class Init_AcquireDataRequest_acquisition_requests_is_set
{
public:
  explicit Init_AcquireDataRequest_acquisition_requests_is_set(::bosdyn_msgs::msg::AcquireDataRequest & msg)
  : msg_(msg)
  {}
  Init_AcquireDataRequest_min_timeout acquisition_requests_is_set(::bosdyn_msgs::msg::AcquireDataRequest::_acquisition_requests_is_set_type arg)
  {
    msg_.acquisition_requests_is_set = std::move(arg);
    return Init_AcquireDataRequest_min_timeout(msg_);
  }

private:
  ::bosdyn_msgs::msg::AcquireDataRequest msg_;
};

class Init_AcquireDataRequest_acquisition_requests
{
public:
  explicit Init_AcquireDataRequest_acquisition_requests(::bosdyn_msgs::msg::AcquireDataRequest & msg)
  : msg_(msg)
  {}
  Init_AcquireDataRequest_acquisition_requests_is_set acquisition_requests(::bosdyn_msgs::msg::AcquireDataRequest::_acquisition_requests_type arg)
  {
    msg_.acquisition_requests = std::move(arg);
    return Init_AcquireDataRequest_acquisition_requests_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::AcquireDataRequest msg_;
};

class Init_AcquireDataRequest_metadata_is_set
{
public:
  explicit Init_AcquireDataRequest_metadata_is_set(::bosdyn_msgs::msg::AcquireDataRequest & msg)
  : msg_(msg)
  {}
  Init_AcquireDataRequest_acquisition_requests metadata_is_set(::bosdyn_msgs::msg::AcquireDataRequest::_metadata_is_set_type arg)
  {
    msg_.metadata_is_set = std::move(arg);
    return Init_AcquireDataRequest_acquisition_requests(msg_);
  }

private:
  ::bosdyn_msgs::msg::AcquireDataRequest msg_;
};

class Init_AcquireDataRequest_metadata
{
public:
  explicit Init_AcquireDataRequest_metadata(::bosdyn_msgs::msg::AcquireDataRequest & msg)
  : msg_(msg)
  {}
  Init_AcquireDataRequest_metadata_is_set metadata(::bosdyn_msgs::msg::AcquireDataRequest::_metadata_type arg)
  {
    msg_.metadata = std::move(arg);
    return Init_AcquireDataRequest_metadata_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::AcquireDataRequest msg_;
};

class Init_AcquireDataRequest_action_id_is_set
{
public:
  explicit Init_AcquireDataRequest_action_id_is_set(::bosdyn_msgs::msg::AcquireDataRequest & msg)
  : msg_(msg)
  {}
  Init_AcquireDataRequest_metadata action_id_is_set(::bosdyn_msgs::msg::AcquireDataRequest::_action_id_is_set_type arg)
  {
    msg_.action_id_is_set = std::move(arg);
    return Init_AcquireDataRequest_metadata(msg_);
  }

private:
  ::bosdyn_msgs::msg::AcquireDataRequest msg_;
};

class Init_AcquireDataRequest_action_id
{
public:
  explicit Init_AcquireDataRequest_action_id(::bosdyn_msgs::msg::AcquireDataRequest & msg)
  : msg_(msg)
  {}
  Init_AcquireDataRequest_action_id_is_set action_id(::bosdyn_msgs::msg::AcquireDataRequest::_action_id_type arg)
  {
    msg_.action_id = std::move(arg);
    return Init_AcquireDataRequest_action_id_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::AcquireDataRequest msg_;
};

class Init_AcquireDataRequest_header_is_set
{
public:
  explicit Init_AcquireDataRequest_header_is_set(::bosdyn_msgs::msg::AcquireDataRequest & msg)
  : msg_(msg)
  {}
  Init_AcquireDataRequest_action_id header_is_set(::bosdyn_msgs::msg::AcquireDataRequest::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_AcquireDataRequest_action_id(msg_);
  }

private:
  ::bosdyn_msgs::msg::AcquireDataRequest msg_;
};

class Init_AcquireDataRequest_header
{
public:
  Init_AcquireDataRequest_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AcquireDataRequest_header_is_set header(::bosdyn_msgs::msg::AcquireDataRequest::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_AcquireDataRequest_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::AcquireDataRequest msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::AcquireDataRequest>()
{
  return bosdyn_msgs::msg::builder::Init_AcquireDataRequest_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__ACQUIRE_DATA_REQUEST__BUILDER_HPP_
