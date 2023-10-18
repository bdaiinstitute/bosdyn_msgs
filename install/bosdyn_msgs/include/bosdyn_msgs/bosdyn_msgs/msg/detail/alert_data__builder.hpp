// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/AlertData.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ALERT_DATA__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__ALERT_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/alert_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_AlertData_source
{
public:
  explicit Init_AlertData_source(::bosdyn_msgs::msg::AlertData & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::AlertData source(::bosdyn_msgs::msg::AlertData::_source_type arg)
  {
    msg_.source = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::AlertData msg_;
};

class Init_AlertData_title
{
public:
  explicit Init_AlertData_title(::bosdyn_msgs::msg::AlertData & msg)
  : msg_(msg)
  {}
  Init_AlertData_source title(::bosdyn_msgs::msg::AlertData::_title_type arg)
  {
    msg_.title = std::move(arg);
    return Init_AlertData_source(msg_);
  }

private:
  ::bosdyn_msgs::msg::AlertData msg_;
};

class Init_AlertData_severity
{
public:
  Init_AlertData_severity()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AlertData_title severity(::bosdyn_msgs::msg::AlertData::_severity_type arg)
  {
    msg_.severity = std::move(arg);
    return Init_AlertData_title(msg_);
  }

private:
  ::bosdyn_msgs::msg::AlertData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::AlertData>()
{
  return bosdyn_msgs::msg::builder::Init_AlertData_severity();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__ALERT_DATA__BUILDER_HPP_
