// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/ProcessAnchoringRequestParamsWeights.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__PROCESS_ANCHORING_REQUEST_PARAMS_WEIGHTS__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__PROCESS_ANCHORING_REQUEST_PARAMS_WEIGHTS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/process_anchoring_request_params_weights__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_ProcessAnchoringRequestParamsWeights_loop_closure_weight
{
public:
  explicit Init_ProcessAnchoringRequestParamsWeights_loop_closure_weight(::bosdyn_msgs::msg::ProcessAnchoringRequestParamsWeights & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::ProcessAnchoringRequestParamsWeights loop_closure_weight(::bosdyn_msgs::msg::ProcessAnchoringRequestParamsWeights::_loop_closure_weight_type arg)
  {
    msg_.loop_closure_weight = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::ProcessAnchoringRequestParamsWeights msg_;
};

class Init_ProcessAnchoringRequestParamsWeights_gyroscope_weight
{
public:
  explicit Init_ProcessAnchoringRequestParamsWeights_gyroscope_weight(::bosdyn_msgs::msg::ProcessAnchoringRequestParamsWeights & msg)
  : msg_(msg)
  {}
  Init_ProcessAnchoringRequestParamsWeights_loop_closure_weight gyroscope_weight(::bosdyn_msgs::msg::ProcessAnchoringRequestParamsWeights::_gyroscope_weight_type arg)
  {
    msg_.gyroscope_weight = std::move(arg);
    return Init_ProcessAnchoringRequestParamsWeights_loop_closure_weight(msg_);
  }

private:
  ::bosdyn_msgs::msg::ProcessAnchoringRequestParamsWeights msg_;
};

class Init_ProcessAnchoringRequestParamsWeights_hint_weight
{
public:
  explicit Init_ProcessAnchoringRequestParamsWeights_hint_weight(::bosdyn_msgs::msg::ProcessAnchoringRequestParamsWeights & msg)
  : msg_(msg)
  {}
  Init_ProcessAnchoringRequestParamsWeights_gyroscope_weight hint_weight(::bosdyn_msgs::msg::ProcessAnchoringRequestParamsWeights::_hint_weight_type arg)
  {
    msg_.hint_weight = std::move(arg);
    return Init_ProcessAnchoringRequestParamsWeights_gyroscope_weight(msg_);
  }

private:
  ::bosdyn_msgs::msg::ProcessAnchoringRequestParamsWeights msg_;
};

class Init_ProcessAnchoringRequestParamsWeights_world_object_weight
{
public:
  explicit Init_ProcessAnchoringRequestParamsWeights_world_object_weight(::bosdyn_msgs::msg::ProcessAnchoringRequestParamsWeights & msg)
  : msg_(msg)
  {}
  Init_ProcessAnchoringRequestParamsWeights_hint_weight world_object_weight(::bosdyn_msgs::msg::ProcessAnchoringRequestParamsWeights::_world_object_weight_type arg)
  {
    msg_.world_object_weight = std::move(arg);
    return Init_ProcessAnchoringRequestParamsWeights_hint_weight(msg_);
  }

private:
  ::bosdyn_msgs::msg::ProcessAnchoringRequestParamsWeights msg_;
};

class Init_ProcessAnchoringRequestParamsWeights_visual_odometry_weight
{
public:
  explicit Init_ProcessAnchoringRequestParamsWeights_visual_odometry_weight(::bosdyn_msgs::msg::ProcessAnchoringRequestParamsWeights & msg)
  : msg_(msg)
  {}
  Init_ProcessAnchoringRequestParamsWeights_world_object_weight visual_odometry_weight(::bosdyn_msgs::msg::ProcessAnchoringRequestParamsWeights::_visual_odometry_weight_type arg)
  {
    msg_.visual_odometry_weight = std::move(arg);
    return Init_ProcessAnchoringRequestParamsWeights_world_object_weight(msg_);
  }

private:
  ::bosdyn_msgs::msg::ProcessAnchoringRequestParamsWeights msg_;
};

class Init_ProcessAnchoringRequestParamsWeights_kinematic_odometry_weight
{
public:
  Init_ProcessAnchoringRequestParamsWeights_kinematic_odometry_weight()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ProcessAnchoringRequestParamsWeights_visual_odometry_weight kinematic_odometry_weight(::bosdyn_msgs::msg::ProcessAnchoringRequestParamsWeights::_kinematic_odometry_weight_type arg)
  {
    msg_.kinematic_odometry_weight = std::move(arg);
    return Init_ProcessAnchoringRequestParamsWeights_visual_odometry_weight(msg_);
  }

private:
  ::bosdyn_msgs::msg::ProcessAnchoringRequestParamsWeights msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::ProcessAnchoringRequestParamsWeights>()
{
  return bosdyn_msgs::msg::builder::Init_ProcessAnchoringRequestParamsWeights_kinematic_odometry_weight();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__PROCESS_ANCHORING_REQUEST_PARAMS_WEIGHTS__BUILDER_HPP_
