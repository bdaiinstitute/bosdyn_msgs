// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/PayloadEstimationCommandFeedback.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__PAYLOAD_ESTIMATION_COMMAND_FEEDBACK__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__PAYLOAD_ESTIMATION_COMMAND_FEEDBACK__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/payload_estimation_command_feedback__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_PayloadEstimationCommandFeedback_estimated_payload_is_set
{
public:
  explicit Init_PayloadEstimationCommandFeedback_estimated_payload_is_set(::bosdyn_msgs::msg::PayloadEstimationCommandFeedback & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::PayloadEstimationCommandFeedback estimated_payload_is_set(::bosdyn_msgs::msg::PayloadEstimationCommandFeedback::_estimated_payload_is_set_type arg)
  {
    msg_.estimated_payload_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::PayloadEstimationCommandFeedback msg_;
};

class Init_PayloadEstimationCommandFeedback_estimated_payload
{
public:
  explicit Init_PayloadEstimationCommandFeedback_estimated_payload(::bosdyn_msgs::msg::PayloadEstimationCommandFeedback & msg)
  : msg_(msg)
  {}
  Init_PayloadEstimationCommandFeedback_estimated_payload_is_set estimated_payload(::bosdyn_msgs::msg::PayloadEstimationCommandFeedback::_estimated_payload_type arg)
  {
    msg_.estimated_payload = std::move(arg);
    return Init_PayloadEstimationCommandFeedback_estimated_payload_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::PayloadEstimationCommandFeedback msg_;
};

class Init_PayloadEstimationCommandFeedback_error
{
public:
  explicit Init_PayloadEstimationCommandFeedback_error(::bosdyn_msgs::msg::PayloadEstimationCommandFeedback & msg)
  : msg_(msg)
  {}
  Init_PayloadEstimationCommandFeedback_estimated_payload error(::bosdyn_msgs::msg::PayloadEstimationCommandFeedback::_error_type arg)
  {
    msg_.error = std::move(arg);
    return Init_PayloadEstimationCommandFeedback_estimated_payload(msg_);
  }

private:
  ::bosdyn_msgs::msg::PayloadEstimationCommandFeedback msg_;
};

class Init_PayloadEstimationCommandFeedback_progress
{
public:
  explicit Init_PayloadEstimationCommandFeedback_progress(::bosdyn_msgs::msg::PayloadEstimationCommandFeedback & msg)
  : msg_(msg)
  {}
  Init_PayloadEstimationCommandFeedback_error progress(::bosdyn_msgs::msg::PayloadEstimationCommandFeedback::_progress_type arg)
  {
    msg_.progress = std::move(arg);
    return Init_PayloadEstimationCommandFeedback_error(msg_);
  }

private:
  ::bosdyn_msgs::msg::PayloadEstimationCommandFeedback msg_;
};

class Init_PayloadEstimationCommandFeedback_status
{
public:
  Init_PayloadEstimationCommandFeedback_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PayloadEstimationCommandFeedback_progress status(::bosdyn_msgs::msg::PayloadEstimationCommandFeedback::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_PayloadEstimationCommandFeedback_progress(msg_);
  }

private:
  ::bosdyn_msgs::msg::PayloadEstimationCommandFeedback msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::PayloadEstimationCommandFeedback>()
{
  return bosdyn_msgs::msg::builder::Init_PayloadEstimationCommandFeedback_status();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__PAYLOAD_ESTIMATION_COMMAND_FEEDBACK__BUILDER_HPP_
