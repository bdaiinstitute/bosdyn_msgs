// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/TimeRangeQuery.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__TIME_RANGE_QUERY__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__TIME_RANGE_QUERY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/time_range_query__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_TimeRangeQuery_to_timestamp_is_set
{
public:
  explicit Init_TimeRangeQuery_to_timestamp_is_set(::bosdyn_msgs::msg::TimeRangeQuery & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::TimeRangeQuery to_timestamp_is_set(::bosdyn_msgs::msg::TimeRangeQuery::_to_timestamp_is_set_type arg)
  {
    msg_.to_timestamp_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::TimeRangeQuery msg_;
};

class Init_TimeRangeQuery_to_timestamp
{
public:
  explicit Init_TimeRangeQuery_to_timestamp(::bosdyn_msgs::msg::TimeRangeQuery & msg)
  : msg_(msg)
  {}
  Init_TimeRangeQuery_to_timestamp_is_set to_timestamp(::bosdyn_msgs::msg::TimeRangeQuery::_to_timestamp_type arg)
  {
    msg_.to_timestamp = std::move(arg);
    return Init_TimeRangeQuery_to_timestamp_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::TimeRangeQuery msg_;
};

class Init_TimeRangeQuery_from_timestamp_is_set
{
public:
  explicit Init_TimeRangeQuery_from_timestamp_is_set(::bosdyn_msgs::msg::TimeRangeQuery & msg)
  : msg_(msg)
  {}
  Init_TimeRangeQuery_to_timestamp from_timestamp_is_set(::bosdyn_msgs::msg::TimeRangeQuery::_from_timestamp_is_set_type arg)
  {
    msg_.from_timestamp_is_set = std::move(arg);
    return Init_TimeRangeQuery_to_timestamp(msg_);
  }

private:
  ::bosdyn_msgs::msg::TimeRangeQuery msg_;
};

class Init_TimeRangeQuery_from_timestamp
{
public:
  Init_TimeRangeQuery_from_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TimeRangeQuery_from_timestamp_is_set from_timestamp(::bosdyn_msgs::msg::TimeRangeQuery::_from_timestamp_type arg)
  {
    msg_.from_timestamp = std::move(arg);
    return Init_TimeRangeQuery_from_timestamp_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::TimeRangeQuery msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::TimeRangeQuery>()
{
  return bosdyn_msgs::msg::builder::Init_TimeRangeQuery_from_timestamp();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__TIME_RANGE_QUERY__BUILDER_HPP_
