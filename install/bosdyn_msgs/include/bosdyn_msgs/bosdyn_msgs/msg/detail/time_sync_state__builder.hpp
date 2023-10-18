// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/TimeSyncState.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__TIME_SYNC_STATE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__TIME_SYNC_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/time_sync_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_TimeSyncState_measurement_time_is_set
{
public:
  explicit Init_TimeSyncState_measurement_time_is_set(::bosdyn_msgs::msg::TimeSyncState & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::TimeSyncState measurement_time_is_set(::bosdyn_msgs::msg::TimeSyncState::_measurement_time_is_set_type arg)
  {
    msg_.measurement_time_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::TimeSyncState msg_;
};

class Init_TimeSyncState_measurement_time
{
public:
  explicit Init_TimeSyncState_measurement_time(::bosdyn_msgs::msg::TimeSyncState & msg)
  : msg_(msg)
  {}
  Init_TimeSyncState_measurement_time_is_set measurement_time(::bosdyn_msgs::msg::TimeSyncState::_measurement_time_type arg)
  {
    msg_.measurement_time = std::move(arg);
    return Init_TimeSyncState_measurement_time_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::TimeSyncState msg_;
};

class Init_TimeSyncState_status
{
public:
  explicit Init_TimeSyncState_status(::bosdyn_msgs::msg::TimeSyncState & msg)
  : msg_(msg)
  {}
  Init_TimeSyncState_measurement_time status(::bosdyn_msgs::msg::TimeSyncState::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_TimeSyncState_measurement_time(msg_);
  }

private:
  ::bosdyn_msgs::msg::TimeSyncState msg_;
};

class Init_TimeSyncState_best_estimate_is_set
{
public:
  explicit Init_TimeSyncState_best_estimate_is_set(::bosdyn_msgs::msg::TimeSyncState & msg)
  : msg_(msg)
  {}
  Init_TimeSyncState_status best_estimate_is_set(::bosdyn_msgs::msg::TimeSyncState::_best_estimate_is_set_type arg)
  {
    msg_.best_estimate_is_set = std::move(arg);
    return Init_TimeSyncState_status(msg_);
  }

private:
  ::bosdyn_msgs::msg::TimeSyncState msg_;
};

class Init_TimeSyncState_best_estimate
{
public:
  Init_TimeSyncState_best_estimate()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TimeSyncState_best_estimate_is_set best_estimate(::bosdyn_msgs::msg::TimeSyncState::_best_estimate_type arg)
  {
    msg_.best_estimate = std::move(arg);
    return Init_TimeSyncState_best_estimate_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::TimeSyncState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::TimeSyncState>()
{
  return bosdyn_msgs::msg::builder::Init_TimeSyncState_best_estimate();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__TIME_SYNC_STATE__BUILDER_HPP_
