// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/DataAcquisition.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__DATA_ACQUISITION__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__DATA_ACQUISITION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/data_acquisition__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_DataAcquisition_disable_cancel_on_pause_or_stop
{
public:
  explicit Init_DataAcquisition_disable_cancel_on_pause_or_stop(::bosdyn_msgs::msg::DataAcquisition & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::DataAcquisition disable_cancel_on_pause_or_stop(::bosdyn_msgs::msg::DataAcquisition::_disable_cancel_on_pause_or_stop_type arg)
  {
    msg_.disable_cancel_on_pause_or_stop = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::DataAcquisition msg_;
};

class Init_DataAcquisition_action_name_format
{
public:
  explicit Init_DataAcquisition_action_name_format(::bosdyn_msgs::msg::DataAcquisition & msg)
  : msg_(msg)
  {}
  Init_DataAcquisition_disable_cancel_on_pause_or_stop action_name_format(::bosdyn_msgs::msg::DataAcquisition::_action_name_format_type arg)
  {
    msg_.action_name_format = std::move(arg);
    return Init_DataAcquisition_disable_cancel_on_pause_or_stop(msg_);
  }

private:
  ::bosdyn_msgs::msg::DataAcquisition msg_;
};

class Init_DataAcquisition_metadata_name_in_blackboard
{
public:
  explicit Init_DataAcquisition_metadata_name_in_blackboard(::bosdyn_msgs::msg::DataAcquisition & msg)
  : msg_(msg)
  {}
  Init_DataAcquisition_action_name_format metadata_name_in_blackboard(::bosdyn_msgs::msg::DataAcquisition::_metadata_name_in_blackboard_type arg)
  {
    msg_.metadata_name_in_blackboard = std::move(arg);
    return Init_DataAcquisition_action_name_format(msg_);
  }

private:
  ::bosdyn_msgs::msg::DataAcquisition msg_;
};

class Init_DataAcquisition_request_name_in_blackboard
{
public:
  explicit Init_DataAcquisition_request_name_in_blackboard(::bosdyn_msgs::msg::DataAcquisition & msg)
  : msg_(msg)
  {}
  Init_DataAcquisition_metadata_name_in_blackboard request_name_in_blackboard(::bosdyn_msgs::msg::DataAcquisition::_request_name_in_blackboard_type arg)
  {
    msg_.request_name_in_blackboard = std::move(arg);
    return Init_DataAcquisition_metadata_name_in_blackboard(msg_);
  }

private:
  ::bosdyn_msgs::msg::DataAcquisition msg_;
};

class Init_DataAcquisition_group_name_format
{
public:
  explicit Init_DataAcquisition_group_name_format(::bosdyn_msgs::msg::DataAcquisition & msg)
  : msg_(msg)
  {}
  Init_DataAcquisition_request_name_in_blackboard group_name_format(::bosdyn_msgs::msg::DataAcquisition::_group_name_format_type arg)
  {
    msg_.group_name_format = std::move(arg);
    return Init_DataAcquisition_request_name_in_blackboard(msg_);
  }

private:
  ::bosdyn_msgs::msg::DataAcquisition msg_;
};

class Init_DataAcquisition_completion_behavior
{
public:
  explicit Init_DataAcquisition_completion_behavior(::bosdyn_msgs::msg::DataAcquisition & msg)
  : msg_(msg)
  {}
  Init_DataAcquisition_group_name_format completion_behavior(::bosdyn_msgs::msg::DataAcquisition::_completion_behavior_type arg)
  {
    msg_.completion_behavior = std::move(arg);
    return Init_DataAcquisition_group_name_format(msg_);
  }

private:
  ::bosdyn_msgs::msg::DataAcquisition msg_;
};

class Init_DataAcquisition_request_is_set
{
public:
  explicit Init_DataAcquisition_request_is_set(::bosdyn_msgs::msg::DataAcquisition & msg)
  : msg_(msg)
  {}
  Init_DataAcquisition_completion_behavior request_is_set(::bosdyn_msgs::msg::DataAcquisition::_request_is_set_type arg)
  {
    msg_.request_is_set = std::move(arg);
    return Init_DataAcquisition_completion_behavior(msg_);
  }

private:
  ::bosdyn_msgs::msg::DataAcquisition msg_;
};

class Init_DataAcquisition_request
{
public:
  explicit Init_DataAcquisition_request(::bosdyn_msgs::msg::DataAcquisition & msg)
  : msg_(msg)
  {}
  Init_DataAcquisition_request_is_set request(::bosdyn_msgs::msg::DataAcquisition::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_DataAcquisition_request_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::DataAcquisition msg_;
};

class Init_DataAcquisition_host
{
public:
  explicit Init_DataAcquisition_host(::bosdyn_msgs::msg::DataAcquisition & msg)
  : msg_(msg)
  {}
  Init_DataAcquisition_request host(::bosdyn_msgs::msg::DataAcquisition::_host_type arg)
  {
    msg_.host = std::move(arg);
    return Init_DataAcquisition_request(msg_);
  }

private:
  ::bosdyn_msgs::msg::DataAcquisition msg_;
};

class Init_DataAcquisition_service_name
{
public:
  Init_DataAcquisition_service_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DataAcquisition_host service_name(::bosdyn_msgs::msg::DataAcquisition::_service_name_type arg)
  {
    msg_.service_name = std::move(arg);
    return Init_DataAcquisition_host(msg_);
  }

private:
  ::bosdyn_msgs::msg::DataAcquisition msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::DataAcquisition>()
{
  return bosdyn_msgs::msg::builder::Init_DataAcquisition_service_name();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__DATA_ACQUISITION__BUILDER_HPP_
