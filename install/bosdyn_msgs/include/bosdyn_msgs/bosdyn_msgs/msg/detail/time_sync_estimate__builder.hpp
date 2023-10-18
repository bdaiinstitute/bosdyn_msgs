// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/TimeSyncEstimate.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__TIME_SYNC_ESTIMATE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__TIME_SYNC_ESTIMATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/time_sync_estimate__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_TimeSyncEstimate_clock_skew_is_set
{
public:
  explicit Init_TimeSyncEstimate_clock_skew_is_set(::bosdyn_msgs::msg::TimeSyncEstimate & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::TimeSyncEstimate clock_skew_is_set(::bosdyn_msgs::msg::TimeSyncEstimate::_clock_skew_is_set_type arg)
  {
    msg_.clock_skew_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::TimeSyncEstimate msg_;
};

class Init_TimeSyncEstimate_clock_skew
{
public:
  explicit Init_TimeSyncEstimate_clock_skew(::bosdyn_msgs::msg::TimeSyncEstimate & msg)
  : msg_(msg)
  {}
  Init_TimeSyncEstimate_clock_skew_is_set clock_skew(::bosdyn_msgs::msg::TimeSyncEstimate::_clock_skew_type arg)
  {
    msg_.clock_skew = std::move(arg);
    return Init_TimeSyncEstimate_clock_skew_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::TimeSyncEstimate msg_;
};

class Init_TimeSyncEstimate_round_trip_time_is_set
{
public:
  explicit Init_TimeSyncEstimate_round_trip_time_is_set(::bosdyn_msgs::msg::TimeSyncEstimate & msg)
  : msg_(msg)
  {}
  Init_TimeSyncEstimate_clock_skew round_trip_time_is_set(::bosdyn_msgs::msg::TimeSyncEstimate::_round_trip_time_is_set_type arg)
  {
    msg_.round_trip_time_is_set = std::move(arg);
    return Init_TimeSyncEstimate_clock_skew(msg_);
  }

private:
  ::bosdyn_msgs::msg::TimeSyncEstimate msg_;
};

class Init_TimeSyncEstimate_round_trip_time
{
public:
  Init_TimeSyncEstimate_round_trip_time()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TimeSyncEstimate_round_trip_time_is_set round_trip_time(::bosdyn_msgs::msg::TimeSyncEstimate::_round_trip_time_type arg)
  {
    msg_.round_trip_time = std::move(arg);
    return Init_TimeSyncEstimate_round_trip_time_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::TimeSyncEstimate msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::TimeSyncEstimate>()
{
  return bosdyn_msgs::msg::builder::Init_TimeSyncEstimate_round_trip_time();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__TIME_SYNC_ESTIMATE__BUILDER_HPP_
