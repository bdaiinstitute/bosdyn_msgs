// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/ProcessAnchoringRequestParams.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__PROCESS_ANCHORING_REQUEST_PARAMS__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__PROCESS_ANCHORING_REQUEST_PARAMS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/process_anchoring_request_params__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_ProcessAnchoringRequestParams_gravity_ewrt_seed_is_set
{
public:
  explicit Init_ProcessAnchoringRequestParams_gravity_ewrt_seed_is_set(::bosdyn_msgs::msg::ProcessAnchoringRequestParams & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::ProcessAnchoringRequestParams gravity_ewrt_seed_is_set(::bosdyn_msgs::msg::ProcessAnchoringRequestParams::_gravity_ewrt_seed_is_set_type arg)
  {
    msg_.gravity_ewrt_seed_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::ProcessAnchoringRequestParams msg_;
};

class Init_ProcessAnchoringRequestParams_gravity_ewrt_seed
{
public:
  explicit Init_ProcessAnchoringRequestParams_gravity_ewrt_seed(::bosdyn_msgs::msg::ProcessAnchoringRequestParams & msg)
  : msg_(msg)
  {}
  Init_ProcessAnchoringRequestParams_gravity_ewrt_seed_is_set gravity_ewrt_seed(::bosdyn_msgs::msg::ProcessAnchoringRequestParams::_gravity_ewrt_seed_type arg)
  {
    msg_.gravity_ewrt_seed = std::move(arg);
    return Init_ProcessAnchoringRequestParams_gravity_ewrt_seed_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ProcessAnchoringRequestParams msg_;
};

class Init_ProcessAnchoringRequestParams_optimize_existing_anchoring_is_set
{
public:
  explicit Init_ProcessAnchoringRequestParams_optimize_existing_anchoring_is_set(::bosdyn_msgs::msg::ProcessAnchoringRequestParams & msg)
  : msg_(msg)
  {}
  Init_ProcessAnchoringRequestParams_gravity_ewrt_seed optimize_existing_anchoring_is_set(::bosdyn_msgs::msg::ProcessAnchoringRequestParams::_optimize_existing_anchoring_is_set_type arg)
  {
    msg_.optimize_existing_anchoring_is_set = std::move(arg);
    return Init_ProcessAnchoringRequestParams_gravity_ewrt_seed(msg_);
  }

private:
  ::bosdyn_msgs::msg::ProcessAnchoringRequestParams msg_;
};

class Init_ProcessAnchoringRequestParams_optimize_existing_anchoring
{
public:
  explicit Init_ProcessAnchoringRequestParams_optimize_existing_anchoring(::bosdyn_msgs::msg::ProcessAnchoringRequestParams & msg)
  : msg_(msg)
  {}
  Init_ProcessAnchoringRequestParams_optimize_existing_anchoring_is_set optimize_existing_anchoring(::bosdyn_msgs::msg::ProcessAnchoringRequestParams::_optimize_existing_anchoring_type arg)
  {
    msg_.optimize_existing_anchoring = std::move(arg);
    return Init_ProcessAnchoringRequestParams_optimize_existing_anchoring_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ProcessAnchoringRequestParams msg_;
};

class Init_ProcessAnchoringRequestParams_weights_is_set
{
public:
  explicit Init_ProcessAnchoringRequestParams_weights_is_set(::bosdyn_msgs::msg::ProcessAnchoringRequestParams & msg)
  : msg_(msg)
  {}
  Init_ProcessAnchoringRequestParams_optimize_existing_anchoring weights_is_set(::bosdyn_msgs::msg::ProcessAnchoringRequestParams::_weights_is_set_type arg)
  {
    msg_.weights_is_set = std::move(arg);
    return Init_ProcessAnchoringRequestParams_optimize_existing_anchoring(msg_);
  }

private:
  ::bosdyn_msgs::msg::ProcessAnchoringRequestParams msg_;
};

class Init_ProcessAnchoringRequestParams_weights
{
public:
  explicit Init_ProcessAnchoringRequestParams_weights(::bosdyn_msgs::msg::ProcessAnchoringRequestParams & msg)
  : msg_(msg)
  {}
  Init_ProcessAnchoringRequestParams_weights_is_set weights(::bosdyn_msgs::msg::ProcessAnchoringRequestParams::_weights_type arg)
  {
    msg_.weights = std::move(arg);
    return Init_ProcessAnchoringRequestParams_weights_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ProcessAnchoringRequestParams msg_;
};

class Init_ProcessAnchoringRequestParams_measurement_params_is_set
{
public:
  explicit Init_ProcessAnchoringRequestParams_measurement_params_is_set(::bosdyn_msgs::msg::ProcessAnchoringRequestParams & msg)
  : msg_(msg)
  {}
  Init_ProcessAnchoringRequestParams_weights measurement_params_is_set(::bosdyn_msgs::msg::ProcessAnchoringRequestParams::_measurement_params_is_set_type arg)
  {
    msg_.measurement_params_is_set = std::move(arg);
    return Init_ProcessAnchoringRequestParams_weights(msg_);
  }

private:
  ::bosdyn_msgs::msg::ProcessAnchoringRequestParams msg_;
};

class Init_ProcessAnchoringRequestParams_measurement_params
{
public:
  explicit Init_ProcessAnchoringRequestParams_measurement_params(::bosdyn_msgs::msg::ProcessAnchoringRequestParams & msg)
  : msg_(msg)
  {}
  Init_ProcessAnchoringRequestParams_measurement_params_is_set measurement_params(::bosdyn_msgs::msg::ProcessAnchoringRequestParams::_measurement_params_type arg)
  {
    msg_.measurement_params = std::move(arg);
    return Init_ProcessAnchoringRequestParams_measurement_params_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ProcessAnchoringRequestParams msg_;
};

class Init_ProcessAnchoringRequestParams_optimizer_params_is_set
{
public:
  explicit Init_ProcessAnchoringRequestParams_optimizer_params_is_set(::bosdyn_msgs::msg::ProcessAnchoringRequestParams & msg)
  : msg_(msg)
  {}
  Init_ProcessAnchoringRequestParams_measurement_params optimizer_params_is_set(::bosdyn_msgs::msg::ProcessAnchoringRequestParams::_optimizer_params_is_set_type arg)
  {
    msg_.optimizer_params_is_set = std::move(arg);
    return Init_ProcessAnchoringRequestParams_measurement_params(msg_);
  }

private:
  ::bosdyn_msgs::msg::ProcessAnchoringRequestParams msg_;
};

class Init_ProcessAnchoringRequestParams_optimizer_params
{
public:
  Init_ProcessAnchoringRequestParams_optimizer_params()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ProcessAnchoringRequestParams_optimizer_params_is_set optimizer_params(::bosdyn_msgs::msg::ProcessAnchoringRequestParams::_optimizer_params_type arg)
  {
    msg_.optimizer_params = std::move(arg);
    return Init_ProcessAnchoringRequestParams_optimizer_params_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ProcessAnchoringRequestParams msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::ProcessAnchoringRequestParams>()
{
  return bosdyn_msgs::msg::builder::Init_ProcessAnchoringRequestParams_optimizer_params();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__PROCESS_ANCHORING_REQUEST_PARAMS__BUILDER_HPP_
