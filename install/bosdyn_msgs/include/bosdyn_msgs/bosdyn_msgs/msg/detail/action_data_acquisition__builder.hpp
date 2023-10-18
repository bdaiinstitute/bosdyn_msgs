// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/ActionDataAcquisition.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ACTION_DATA_ACQUISITION__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__ACTION_DATA_ACQUISITION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/action_data_acquisition__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_ActionDataAcquisition_record_time_images
{
public:
  explicit Init_ActionDataAcquisition_record_time_images(::bosdyn_msgs::msg::ActionDataAcquisition & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::ActionDataAcquisition record_time_images(::bosdyn_msgs::msg::ActionDataAcquisition::_record_time_images_type arg)
  {
    msg_.record_time_images = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::ActionDataAcquisition msg_;
};

class Init_ActionDataAcquisition_last_known_capabilities_is_set
{
public:
  explicit Init_ActionDataAcquisition_last_known_capabilities_is_set(::bosdyn_msgs::msg::ActionDataAcquisition & msg)
  : msg_(msg)
  {}
  Init_ActionDataAcquisition_record_time_images last_known_capabilities_is_set(::bosdyn_msgs::msg::ActionDataAcquisition::_last_known_capabilities_is_set_type arg)
  {
    msg_.last_known_capabilities_is_set = std::move(arg);
    return Init_ActionDataAcquisition_record_time_images(msg_);
  }

private:
  ::bosdyn_msgs::msg::ActionDataAcquisition msg_;
};

class Init_ActionDataAcquisition_last_known_capabilities
{
public:
  explicit Init_ActionDataAcquisition_last_known_capabilities(::bosdyn_msgs::msg::ActionDataAcquisition & msg)
  : msg_(msg)
  {}
  Init_ActionDataAcquisition_last_known_capabilities_is_set last_known_capabilities(::bosdyn_msgs::msg::ActionDataAcquisition::_last_known_capabilities_type arg)
  {
    msg_.last_known_capabilities = std::move(arg);
    return Init_ActionDataAcquisition_last_known_capabilities_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ActionDataAcquisition msg_;
};

class Init_ActionDataAcquisition_completion_behavior
{
public:
  explicit Init_ActionDataAcquisition_completion_behavior(::bosdyn_msgs::msg::ActionDataAcquisition & msg)
  : msg_(msg)
  {}
  Init_ActionDataAcquisition_last_known_capabilities completion_behavior(::bosdyn_msgs::msg::ActionDataAcquisition::_completion_behavior_type arg)
  {
    msg_.completion_behavior = std::move(arg);
    return Init_ActionDataAcquisition_last_known_capabilities(msg_);
  }

private:
  ::bosdyn_msgs::msg::ActionDataAcquisition msg_;
};

class Init_ActionDataAcquisition_acquire_data_request_is_set
{
public:
  explicit Init_ActionDataAcquisition_acquire_data_request_is_set(::bosdyn_msgs::msg::ActionDataAcquisition & msg)
  : msg_(msg)
  {}
  Init_ActionDataAcquisition_completion_behavior acquire_data_request_is_set(::bosdyn_msgs::msg::ActionDataAcquisition::_acquire_data_request_is_set_type arg)
  {
    msg_.acquire_data_request_is_set = std::move(arg);
    return Init_ActionDataAcquisition_completion_behavior(msg_);
  }

private:
  ::bosdyn_msgs::msg::ActionDataAcquisition msg_;
};

class Init_ActionDataAcquisition_acquire_data_request
{
public:
  Init_ActionDataAcquisition_acquire_data_request()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ActionDataAcquisition_acquire_data_request_is_set acquire_data_request(::bosdyn_msgs::msg::ActionDataAcquisition::_acquire_data_request_type arg)
  {
    msg_.acquire_data_request = std::move(arg);
    return Init_ActionDataAcquisition_acquire_data_request_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ActionDataAcquisition msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::ActionDataAcquisition>()
{
  return bosdyn_msgs::msg::builder::Init_ActionDataAcquisition_acquire_data_request();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__ACTION_DATA_ACQUISITION__BUILDER_HPP_
