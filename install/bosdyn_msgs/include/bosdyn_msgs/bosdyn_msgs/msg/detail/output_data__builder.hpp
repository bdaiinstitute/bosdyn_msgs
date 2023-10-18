// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/OutputData.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__OUTPUT_DATA__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__OUTPUT_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/output_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_OutputData_alert_data_is_set
{
public:
  explicit Init_OutputData_alert_data_is_set(::bosdyn_msgs::msg::OutputData & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::OutputData alert_data_is_set(::bosdyn_msgs::msg::OutputData::_alert_data_is_set_type arg)
  {
    msg_.alert_data_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::OutputData msg_;
};

class Init_OutputData_alert_data
{
public:
  explicit Init_OutputData_alert_data(::bosdyn_msgs::msg::OutputData & msg)
  : msg_(msg)
  {}
  Init_OutputData_alert_data_is_set alert_data(::bosdyn_msgs::msg::OutputData::_alert_data_type arg)
  {
    msg_.alert_data = std::move(arg);
    return Init_OutputData_alert_data_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::OutputData msg_;
};

class Init_OutputData_object_in_image
{
public:
  Init_OutputData_object_in_image()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_OutputData_alert_data object_in_image(::bosdyn_msgs::msg::OutputData::_object_in_image_type arg)
  {
    msg_.object_in_image = std::move(arg);
    return Init_OutputData_alert_data(msg_);
  }

private:
  ::bosdyn_msgs::msg::OutputData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::OutputData>()
{
  return bosdyn_msgs::msg::builder::Init_OutputData_object_in_image();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__OUTPUT_DATA__BUILDER_HPP_
