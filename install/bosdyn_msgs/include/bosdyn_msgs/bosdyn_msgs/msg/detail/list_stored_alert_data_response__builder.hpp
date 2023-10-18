// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/ListStoredAlertDataResponse.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__LIST_STORED_ALERT_DATA_RESPONSE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__LIST_STORED_ALERT_DATA_RESPONSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/list_stored_alert_data_response__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_ListStoredAlertDataResponse_data_ids
{
public:
  explicit Init_ListStoredAlertDataResponse_data_ids(::bosdyn_msgs::msg::ListStoredAlertDataResponse & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::ListStoredAlertDataResponse data_ids(::bosdyn_msgs::msg::ListStoredAlertDataResponse::_data_ids_type arg)
  {
    msg_.data_ids = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::ListStoredAlertDataResponse msg_;
};

class Init_ListStoredAlertDataResponse_header_is_set
{
public:
  explicit Init_ListStoredAlertDataResponse_header_is_set(::bosdyn_msgs::msg::ListStoredAlertDataResponse & msg)
  : msg_(msg)
  {}
  Init_ListStoredAlertDataResponse_data_ids header_is_set(::bosdyn_msgs::msg::ListStoredAlertDataResponse::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_ListStoredAlertDataResponse_data_ids(msg_);
  }

private:
  ::bosdyn_msgs::msg::ListStoredAlertDataResponse msg_;
};

class Init_ListStoredAlertDataResponse_header
{
public:
  Init_ListStoredAlertDataResponse_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ListStoredAlertDataResponse_header_is_set header(::bosdyn_msgs::msg::ListStoredAlertDataResponse::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ListStoredAlertDataResponse_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ListStoredAlertDataResponse msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::ListStoredAlertDataResponse>()
{
  return bosdyn_msgs::msg::builder::Init_ListStoredAlertDataResponse_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__LIST_STORED_ALERT_DATA_RESPONSE__BUILDER_HPP_
