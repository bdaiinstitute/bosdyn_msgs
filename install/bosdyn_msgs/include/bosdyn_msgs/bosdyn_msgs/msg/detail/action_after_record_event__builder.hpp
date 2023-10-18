// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/ActionAfterRecordEvent.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ACTION_AFTER_RECORD_EVENT__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__ACTION_AFTER_RECORD_EVENT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/action_after_record_event__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_ActionAfterRecordEvent_events
{
public:
  Init_ActionAfterRecordEvent_events()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::bosdyn_msgs::msg::ActionAfterRecordEvent events(::bosdyn_msgs::msg::ActionAfterRecordEvent::_events_type arg)
  {
    msg_.events = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::ActionAfterRecordEvent msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::ActionAfterRecordEvent>()
{
  return bosdyn_msgs::msg::builder::Init_ActionAfterRecordEvent_events();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__ACTION_AFTER_RECORD_EVENT__BUILDER_HPP_
