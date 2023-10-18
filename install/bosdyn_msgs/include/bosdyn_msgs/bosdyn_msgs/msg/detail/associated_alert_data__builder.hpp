// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/AssociatedAlertData.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ASSOCIATED_ALERT_DATA__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__ASSOCIATED_ALERT_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/associated_alert_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_AssociatedAlertData_alert_data_is_set
{
public:
  explicit Init_AssociatedAlertData_alert_data_is_set(::bosdyn_msgs::msg::AssociatedAlertData & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::AssociatedAlertData alert_data_is_set(::bosdyn_msgs::msg::AssociatedAlertData::_alert_data_is_set_type arg)
  {
    msg_.alert_data_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::AssociatedAlertData msg_;
};

class Init_AssociatedAlertData_alert_data
{
public:
  explicit Init_AssociatedAlertData_alert_data(::bosdyn_msgs::msg::AssociatedAlertData & msg)
  : msg_(msg)
  {}
  Init_AssociatedAlertData_alert_data_is_set alert_data(::bosdyn_msgs::msg::AssociatedAlertData::_alert_data_type arg)
  {
    msg_.alert_data = std::move(arg);
    return Init_AssociatedAlertData_alert_data_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::AssociatedAlertData msg_;
};

class Init_AssociatedAlertData_reference_id_is_set
{
public:
  explicit Init_AssociatedAlertData_reference_id_is_set(::bosdyn_msgs::msg::AssociatedAlertData & msg)
  : msg_(msg)
  {}
  Init_AssociatedAlertData_alert_data reference_id_is_set(::bosdyn_msgs::msg::AssociatedAlertData::_reference_id_is_set_type arg)
  {
    msg_.reference_id_is_set = std::move(arg);
    return Init_AssociatedAlertData_alert_data(msg_);
  }

private:
  ::bosdyn_msgs::msg::AssociatedAlertData msg_;
};

class Init_AssociatedAlertData_reference_id
{
public:
  Init_AssociatedAlertData_reference_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AssociatedAlertData_reference_id_is_set reference_id(::bosdyn_msgs::msg::AssociatedAlertData::_reference_id_type arg)
  {
    msg_.reference_id = std::move(arg);
    return Init_AssociatedAlertData_reference_id_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::AssociatedAlertData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::AssociatedAlertData>()
{
  return bosdyn_msgs::msg::builder::Init_AssociatedAlertData_reference_id();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__ASSOCIATED_ALERT_DATA__BUILDER_HPP_
