// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/PagesAndTimestamp.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__PAGES_AND_TIMESTAMP__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__PAGES_AND_TIMESTAMP__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/pages_and_timestamp__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_PagesAndTimestamp_pages
{
public:
  explicit Init_PagesAndTimestamp_pages(::bosdyn_msgs::msg::PagesAndTimestamp & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::PagesAndTimestamp pages(::bosdyn_msgs::msg::PagesAndTimestamp::_pages_type arg)
  {
    msg_.pages = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::PagesAndTimestamp msg_;
};

class Init_PagesAndTimestamp_time_range_is_set
{
public:
  explicit Init_PagesAndTimestamp_time_range_is_set(::bosdyn_msgs::msg::PagesAndTimestamp & msg)
  : msg_(msg)
  {}
  Init_PagesAndTimestamp_pages time_range_is_set(::bosdyn_msgs::msg::PagesAndTimestamp::_time_range_is_set_type arg)
  {
    msg_.time_range_is_set = std::move(arg);
    return Init_PagesAndTimestamp_pages(msg_);
  }

private:
  ::bosdyn_msgs::msg::PagesAndTimestamp msg_;
};

class Init_PagesAndTimestamp_time_range
{
public:
  Init_PagesAndTimestamp_time_range()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PagesAndTimestamp_time_range_is_set time_range(::bosdyn_msgs::msg::PagesAndTimestamp::_time_range_type arg)
  {
    msg_.time_range = std::move(arg);
    return Init_PagesAndTimestamp_time_range_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::PagesAndTimestamp msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::PagesAndTimestamp>()
{
  return bosdyn_msgs::msg::builder::Init_PagesAndTimestamp_time_range();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__PAGES_AND_TIMESTAMP__BUILDER_HPP_
