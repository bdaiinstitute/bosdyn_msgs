// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/StoreAlertDataResponse.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__STORE_ALERT_DATA_RESPONSE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__STORE_ALERT_DATA_RESPONSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/store_alert_data_response__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_StoreAlertDataResponse_id
{
public:
  explicit Init_StoreAlertDataResponse_id(::bosdyn_msgs::msg::StoreAlertDataResponse & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::StoreAlertDataResponse id(::bosdyn_msgs::msg::StoreAlertDataResponse::_id_type arg)
  {
    msg_.id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::StoreAlertDataResponse msg_;
};

class Init_StoreAlertDataResponse_header_is_set
{
public:
  explicit Init_StoreAlertDataResponse_header_is_set(::bosdyn_msgs::msg::StoreAlertDataResponse & msg)
  : msg_(msg)
  {}
  Init_StoreAlertDataResponse_id header_is_set(::bosdyn_msgs::msg::StoreAlertDataResponse::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_StoreAlertDataResponse_id(msg_);
  }

private:
  ::bosdyn_msgs::msg::StoreAlertDataResponse msg_;
};

class Init_StoreAlertDataResponse_header
{
public:
  Init_StoreAlertDataResponse_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_StoreAlertDataResponse_header_is_set header(::bosdyn_msgs::msg::StoreAlertDataResponse::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_StoreAlertDataResponse_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::StoreAlertDataResponse msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::StoreAlertDataResponse>()
{
  return bosdyn_msgs::msg::builder::Init_StoreAlertDataResponse_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__STORE_ALERT_DATA_RESPONSE__BUILDER_HPP_
