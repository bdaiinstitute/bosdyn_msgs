// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/ProcessAnchoringRequestParamsOptimizerParams.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__PROCESS_ANCHORING_REQUEST_PARAMS_OPTIMIZER_PARAMS__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__PROCESS_ANCHORING_REQUEST_PARAMS_OPTIMIZER_PARAMS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/process_anchoring_request_params_optimizer_params__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_ProcessAnchoringRequestParamsOptimizerParams_max_time_seconds_is_set
{
public:
  explicit Init_ProcessAnchoringRequestParamsOptimizerParams_max_time_seconds_is_set(::bosdyn_msgs::msg::ProcessAnchoringRequestParamsOptimizerParams & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::ProcessAnchoringRequestParamsOptimizerParams max_time_seconds_is_set(::bosdyn_msgs::msg::ProcessAnchoringRequestParamsOptimizerParams::_max_time_seconds_is_set_type arg)
  {
    msg_.max_time_seconds_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::ProcessAnchoringRequestParamsOptimizerParams msg_;
};

class Init_ProcessAnchoringRequestParamsOptimizerParams_max_time_seconds
{
public:
  explicit Init_ProcessAnchoringRequestParamsOptimizerParams_max_time_seconds(::bosdyn_msgs::msg::ProcessAnchoringRequestParamsOptimizerParams & msg)
  : msg_(msg)
  {}
  Init_ProcessAnchoringRequestParamsOptimizerParams_max_time_seconds_is_set max_time_seconds(::bosdyn_msgs::msg::ProcessAnchoringRequestParamsOptimizerParams::_max_time_seconds_type arg)
  {
    msg_.max_time_seconds = std::move(arg);
    return Init_ProcessAnchoringRequestParamsOptimizerParams_max_time_seconds_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ProcessAnchoringRequestParamsOptimizerParams msg_;
};

class Init_ProcessAnchoringRequestParamsOptimizerParams_max_iters_is_set
{
public:
  explicit Init_ProcessAnchoringRequestParamsOptimizerParams_max_iters_is_set(::bosdyn_msgs::msg::ProcessAnchoringRequestParamsOptimizerParams & msg)
  : msg_(msg)
  {}
  Init_ProcessAnchoringRequestParamsOptimizerParams_max_time_seconds max_iters_is_set(::bosdyn_msgs::msg::ProcessAnchoringRequestParamsOptimizerParams::_max_iters_is_set_type arg)
  {
    msg_.max_iters_is_set = std::move(arg);
    return Init_ProcessAnchoringRequestParamsOptimizerParams_max_time_seconds(msg_);
  }

private:
  ::bosdyn_msgs::msg::ProcessAnchoringRequestParamsOptimizerParams msg_;
};

class Init_ProcessAnchoringRequestParamsOptimizerParams_max_iters
{
public:
  Init_ProcessAnchoringRequestParamsOptimizerParams_max_iters()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ProcessAnchoringRequestParamsOptimizerParams_max_iters_is_set max_iters(::bosdyn_msgs::msg::ProcessAnchoringRequestParamsOptimizerParams::_max_iters_type arg)
  {
    msg_.max_iters = std::move(arg);
    return Init_ProcessAnchoringRequestParamsOptimizerParams_max_iters_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ProcessAnchoringRequestParamsOptimizerParams msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::ProcessAnchoringRequestParamsOptimizerParams>()
{
  return bosdyn_msgs::msg::builder::Init_ProcessAnchoringRequestParamsOptimizerParams_max_iters();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__PROCESS_ANCHORING_REQUEST_PARAMS_OPTIMIZER_PARAMS__BUILDER_HPP_
