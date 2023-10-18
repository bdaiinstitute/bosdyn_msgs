// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/BosdynRecordEvent.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__BOSDYN_RECORD_EVENT__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__BOSDYN_RECORD_EVENT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/bosdyn_record_event__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_BosdynRecordEvent_additional_parameters
{
public:
  explicit Init_BosdynRecordEvent_additional_parameters(::bosdyn_msgs::msg::BosdynRecordEvent & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::BosdynRecordEvent additional_parameters(::bosdyn_msgs::msg::BosdynRecordEvent::_additional_parameters_type arg)
  {
    msg_.additional_parameters = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::BosdynRecordEvent msg_;
};

class Init_BosdynRecordEvent_succeed_early
{
public:
  explicit Init_BosdynRecordEvent_succeed_early(::bosdyn_msgs::msg::BosdynRecordEvent & msg)
  : msg_(msg)
  {}
  Init_BosdynRecordEvent_additional_parameters succeed_early(::bosdyn_msgs::msg::BosdynRecordEvent::_succeed_early_type arg)
  {
    msg_.succeed_early = std::move(arg);
    return Init_BosdynRecordEvent_additional_parameters(msg_);
  }

private:
  ::bosdyn_msgs::msg::BosdynRecordEvent msg_;
};

class Init_BosdynRecordEvent_event_is_set
{
public:
  explicit Init_BosdynRecordEvent_event_is_set(::bosdyn_msgs::msg::BosdynRecordEvent & msg)
  : msg_(msg)
  {}
  Init_BosdynRecordEvent_succeed_early event_is_set(::bosdyn_msgs::msg::BosdynRecordEvent::_event_is_set_type arg)
  {
    msg_.event_is_set = std::move(arg);
    return Init_BosdynRecordEvent_succeed_early(msg_);
  }

private:
  ::bosdyn_msgs::msg::BosdynRecordEvent msg_;
};

class Init_BosdynRecordEvent_event
{
public:
  explicit Init_BosdynRecordEvent_event(::bosdyn_msgs::msg::BosdynRecordEvent & msg)
  : msg_(msg)
  {}
  Init_BosdynRecordEvent_event_is_set event(::bosdyn_msgs::msg::BosdynRecordEvent::_event_type arg)
  {
    msg_.event = std::move(arg);
    return Init_BosdynRecordEvent_event_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::BosdynRecordEvent msg_;
};

class Init_BosdynRecordEvent_host
{
public:
  explicit Init_BosdynRecordEvent_host(::bosdyn_msgs::msg::BosdynRecordEvent & msg)
  : msg_(msg)
  {}
  Init_BosdynRecordEvent_event host(::bosdyn_msgs::msg::BosdynRecordEvent::_host_type arg)
  {
    msg_.host = std::move(arg);
    return Init_BosdynRecordEvent_event(msg_);
  }

private:
  ::bosdyn_msgs::msg::BosdynRecordEvent msg_;
};

class Init_BosdynRecordEvent_service_name
{
public:
  Init_BosdynRecordEvent_service_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BosdynRecordEvent_host service_name(::bosdyn_msgs::msg::BosdynRecordEvent::_service_name_type arg)
  {
    msg_.service_name = std::move(arg);
    return Init_BosdynRecordEvent_host(msg_);
  }

private:
  ::bosdyn_msgs::msg::BosdynRecordEvent msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::BosdynRecordEvent>()
{
  return bosdyn_msgs::msg::builder::Init_BosdynRecordEvent_service_name();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__BOSDYN_RECORD_EVENT__BUILDER_HPP_
