// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/SeriesIdentifier.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__SERIES_IDENTIFIER__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__SERIES_IDENTIFIER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/series_identifier__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_SeriesIdentifier_spec
{
public:
  explicit Init_SeriesIdentifier_spec(::bosdyn_msgs::msg::SeriesIdentifier & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::SeriesIdentifier spec(::bosdyn_msgs::msg::SeriesIdentifier::_spec_type arg)
  {
    msg_.spec = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::SeriesIdentifier msg_;
};

class Init_SeriesIdentifier_series_type
{
public:
  Init_SeriesIdentifier_series_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SeriesIdentifier_spec series_type(::bosdyn_msgs::msg::SeriesIdentifier::_series_type_type arg)
  {
    msg_.series_type = std::move(arg);
    return Init_SeriesIdentifier_spec(msg_);
  }

private:
  ::bosdyn_msgs::msg::SeriesIdentifier msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::SeriesIdentifier>()
{
  return bosdyn_msgs::msg::builder::Init_SeriesIdentifier_series_type();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__SERIES_IDENTIFIER__BUILDER_HPP_
