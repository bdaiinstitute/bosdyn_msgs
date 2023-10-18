// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/ListStoredAlertDataRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__LIST_STORED_ALERT_DATA_REQUEST__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__LIST_STORED_ALERT_DATA_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/list_stored_alert_data_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_ListStoredAlertDataRequest_query_is_set
{
public:
  explicit Init_ListStoredAlertDataRequest_query_is_set(::bosdyn_msgs::msg::ListStoredAlertDataRequest & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::ListStoredAlertDataRequest query_is_set(::bosdyn_msgs::msg::ListStoredAlertDataRequest::_query_is_set_type arg)
  {
    msg_.query_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::ListStoredAlertDataRequest msg_;
};

class Init_ListStoredAlertDataRequest_query
{
public:
  explicit Init_ListStoredAlertDataRequest_query(::bosdyn_msgs::msg::ListStoredAlertDataRequest & msg)
  : msg_(msg)
  {}
  Init_ListStoredAlertDataRequest_query_is_set query(::bosdyn_msgs::msg::ListStoredAlertDataRequest::_query_type arg)
  {
    msg_.query = std::move(arg);
    return Init_ListStoredAlertDataRequest_query_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ListStoredAlertDataRequest msg_;
};

class Init_ListStoredAlertDataRequest_header_is_set
{
public:
  explicit Init_ListStoredAlertDataRequest_header_is_set(::bosdyn_msgs::msg::ListStoredAlertDataRequest & msg)
  : msg_(msg)
  {}
  Init_ListStoredAlertDataRequest_query header_is_set(::bosdyn_msgs::msg::ListStoredAlertDataRequest::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_ListStoredAlertDataRequest_query(msg_);
  }

private:
  ::bosdyn_msgs::msg::ListStoredAlertDataRequest msg_;
};

class Init_ListStoredAlertDataRequest_header
{
public:
  Init_ListStoredAlertDataRequest_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ListStoredAlertDataRequest_header_is_set header(::bosdyn_msgs::msg::ListStoredAlertDataRequest::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ListStoredAlertDataRequest_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ListStoredAlertDataRequest msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::ListStoredAlertDataRequest>()
{
  return bosdyn_msgs::msg::builder::Init_ListStoredAlertDataRequest_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__LIST_STORED_ALERT_DATA_REQUEST__BUILDER_HPP_
