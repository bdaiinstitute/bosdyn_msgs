// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/LostDetectorState.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__LOST_DETECTOR_STATE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__LOST_DETECTOR_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/lost_detector_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_LostDetectorState_is_lost
{
public:
  Init_LostDetectorState_is_lost()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::bosdyn_msgs::msg::LostDetectorState is_lost(::bosdyn_msgs::msg::LostDetectorState::_is_lost_type arg)
  {
    msg_.is_lost = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::LostDetectorState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::LostDetectorState>()
{
  return bosdyn_msgs::msg::builder::Init_LostDetectorState_is_lost();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__LOST_DETECTOR_STATE__BUILDER_HPP_
