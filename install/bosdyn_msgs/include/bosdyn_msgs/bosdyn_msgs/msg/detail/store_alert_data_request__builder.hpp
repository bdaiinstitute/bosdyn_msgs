// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/StoreAlertDataRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__STORE_ALERT_DATA_REQUEST__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__STORE_ALERT_DATA_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/store_alert_data_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_StoreAlertDataRequest_data_id_is_set
{
public:
  explicit Init_StoreAlertDataRequest_data_id_is_set(::bosdyn_msgs::msg::StoreAlertDataRequest & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::StoreAlertDataRequest data_id_is_set(::bosdyn_msgs::msg::StoreAlertDataRequest::_data_id_is_set_type arg)
  {
    msg_.data_id_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::StoreAlertDataRequest msg_;
};

class Init_StoreAlertDataRequest_data_id
{
public:
  explicit Init_StoreAlertDataRequest_data_id(::bosdyn_msgs::msg::StoreAlertDataRequest & msg)
  : msg_(msg)
  {}
  Init_StoreAlertDataRequest_data_id_is_set data_id(::bosdyn_msgs::msg::StoreAlertDataRequest::_data_id_type arg)
  {
    msg_.data_id = std::move(arg);
    return Init_StoreAlertDataRequest_data_id_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::StoreAlertDataRequest msg_;
};

class Init_StoreAlertDataRequest_alert_data_is_set
{
public:
  explicit Init_StoreAlertDataRequest_alert_data_is_set(::bosdyn_msgs::msg::StoreAlertDataRequest & msg)
  : msg_(msg)
  {}
  Init_StoreAlertDataRequest_data_id alert_data_is_set(::bosdyn_msgs::msg::StoreAlertDataRequest::_alert_data_is_set_type arg)
  {
    msg_.alert_data_is_set = std::move(arg);
    return Init_StoreAlertDataRequest_data_id(msg_);
  }

private:
  ::bosdyn_msgs::msg::StoreAlertDataRequest msg_;
};

class Init_StoreAlertDataRequest_alert_data
{
public:
  explicit Init_StoreAlertDataRequest_alert_data(::bosdyn_msgs::msg::StoreAlertDataRequest & msg)
  : msg_(msg)
  {}
  Init_StoreAlertDataRequest_alert_data_is_set alert_data(::bosdyn_msgs::msg::StoreAlertDataRequest::_alert_data_type arg)
  {
    msg_.alert_data = std::move(arg);
    return Init_StoreAlertDataRequest_alert_data_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::StoreAlertDataRequest msg_;
};

class Init_StoreAlertDataRequest_header_is_set
{
public:
  explicit Init_StoreAlertDataRequest_header_is_set(::bosdyn_msgs::msg::StoreAlertDataRequest & msg)
  : msg_(msg)
  {}
  Init_StoreAlertDataRequest_alert_data header_is_set(::bosdyn_msgs::msg::StoreAlertDataRequest::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_StoreAlertDataRequest_alert_data(msg_);
  }

private:
  ::bosdyn_msgs::msg::StoreAlertDataRequest msg_;
};

class Init_StoreAlertDataRequest_header
{
public:
  Init_StoreAlertDataRequest_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_StoreAlertDataRequest_header_is_set header(::bosdyn_msgs::msg::StoreAlertDataRequest::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_StoreAlertDataRequest_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::StoreAlertDataRequest msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::StoreAlertDataRequest>()
{
  return bosdyn_msgs::msg::builder::Init_StoreAlertDataRequest_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__STORE_ALERT_DATA_REQUEST__BUILDER_HPP_
