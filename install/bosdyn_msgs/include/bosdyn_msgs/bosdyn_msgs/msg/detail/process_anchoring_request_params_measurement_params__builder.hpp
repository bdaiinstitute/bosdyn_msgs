// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/ProcessAnchoringRequestParamsMeasurementParams.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__PROCESS_ANCHORING_REQUEST_PARAMS_MEASUREMENT_PARAMS__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__PROCESS_ANCHORING_REQUEST_PARAMS_MEASUREMENT_PARAMS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/process_anchoring_request_params_measurement_params__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_ProcessAnchoringRequestParamsMeasurementParams_use_world_objects_is_set
{
public:
  explicit Init_ProcessAnchoringRequestParamsMeasurementParams_use_world_objects_is_set(::bosdyn_msgs::msg::ProcessAnchoringRequestParamsMeasurementParams & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::ProcessAnchoringRequestParamsMeasurementParams use_world_objects_is_set(::bosdyn_msgs::msg::ProcessAnchoringRequestParamsMeasurementParams::_use_world_objects_is_set_type arg)
  {
    msg_.use_world_objects_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::ProcessAnchoringRequestParamsMeasurementParams msg_;
};

class Init_ProcessAnchoringRequestParamsMeasurementParams_use_world_objects
{
public:
  explicit Init_ProcessAnchoringRequestParamsMeasurementParams_use_world_objects(::bosdyn_msgs::msg::ProcessAnchoringRequestParamsMeasurementParams & msg)
  : msg_(msg)
  {}
  Init_ProcessAnchoringRequestParamsMeasurementParams_use_world_objects_is_set use_world_objects(::bosdyn_msgs::msg::ProcessAnchoringRequestParamsMeasurementParams::_use_world_objects_type arg)
  {
    msg_.use_world_objects = std::move(arg);
    return Init_ProcessAnchoringRequestParamsMeasurementParams_use_world_objects_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ProcessAnchoringRequestParamsMeasurementParams msg_;
};

class Init_ProcessAnchoringRequestParamsMeasurementParams_use_loop_closures_is_set
{
public:
  explicit Init_ProcessAnchoringRequestParamsMeasurementParams_use_loop_closures_is_set(::bosdyn_msgs::msg::ProcessAnchoringRequestParamsMeasurementParams & msg)
  : msg_(msg)
  {}
  Init_ProcessAnchoringRequestParamsMeasurementParams_use_world_objects use_loop_closures_is_set(::bosdyn_msgs::msg::ProcessAnchoringRequestParamsMeasurementParams::_use_loop_closures_is_set_type arg)
  {
    msg_.use_loop_closures_is_set = std::move(arg);
    return Init_ProcessAnchoringRequestParamsMeasurementParams_use_world_objects(msg_);
  }

private:
  ::bosdyn_msgs::msg::ProcessAnchoringRequestParamsMeasurementParams msg_;
};

class Init_ProcessAnchoringRequestParamsMeasurementParams_use_loop_closures
{
public:
  explicit Init_ProcessAnchoringRequestParamsMeasurementParams_use_loop_closures(::bosdyn_msgs::msg::ProcessAnchoringRequestParamsMeasurementParams & msg)
  : msg_(msg)
  {}
  Init_ProcessAnchoringRequestParamsMeasurementParams_use_loop_closures_is_set use_loop_closures(::bosdyn_msgs::msg::ProcessAnchoringRequestParamsMeasurementParams::_use_loop_closures_type arg)
  {
    msg_.use_loop_closures = std::move(arg);
    return Init_ProcessAnchoringRequestParamsMeasurementParams_use_loop_closures_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ProcessAnchoringRequestParamsMeasurementParams msg_;
};

class Init_ProcessAnchoringRequestParamsMeasurementParams_use_gyroscope_measurements_is_set
{
public:
  explicit Init_ProcessAnchoringRequestParamsMeasurementParams_use_gyroscope_measurements_is_set(::bosdyn_msgs::msg::ProcessAnchoringRequestParamsMeasurementParams & msg)
  : msg_(msg)
  {}
  Init_ProcessAnchoringRequestParamsMeasurementParams_use_loop_closures use_gyroscope_measurements_is_set(::bosdyn_msgs::msg::ProcessAnchoringRequestParamsMeasurementParams::_use_gyroscope_measurements_is_set_type arg)
  {
    msg_.use_gyroscope_measurements_is_set = std::move(arg);
    return Init_ProcessAnchoringRequestParamsMeasurementParams_use_loop_closures(msg_);
  }

private:
  ::bosdyn_msgs::msg::ProcessAnchoringRequestParamsMeasurementParams msg_;
};

class Init_ProcessAnchoringRequestParamsMeasurementParams_use_gyroscope_measurements
{
public:
  explicit Init_ProcessAnchoringRequestParamsMeasurementParams_use_gyroscope_measurements(::bosdyn_msgs::msg::ProcessAnchoringRequestParamsMeasurementParams & msg)
  : msg_(msg)
  {}
  Init_ProcessAnchoringRequestParamsMeasurementParams_use_gyroscope_measurements_is_set use_gyroscope_measurements(::bosdyn_msgs::msg::ProcessAnchoringRequestParamsMeasurementParams::_use_gyroscope_measurements_type arg)
  {
    msg_.use_gyroscope_measurements = std::move(arg);
    return Init_ProcessAnchoringRequestParamsMeasurementParams_use_gyroscope_measurements_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ProcessAnchoringRequestParamsMeasurementParams msg_;
};

class Init_ProcessAnchoringRequestParamsMeasurementParams_use_visual_odometry_is_set
{
public:
  explicit Init_ProcessAnchoringRequestParamsMeasurementParams_use_visual_odometry_is_set(::bosdyn_msgs::msg::ProcessAnchoringRequestParamsMeasurementParams & msg)
  : msg_(msg)
  {}
  Init_ProcessAnchoringRequestParamsMeasurementParams_use_gyroscope_measurements use_visual_odometry_is_set(::bosdyn_msgs::msg::ProcessAnchoringRequestParamsMeasurementParams::_use_visual_odometry_is_set_type arg)
  {
    msg_.use_visual_odometry_is_set = std::move(arg);
    return Init_ProcessAnchoringRequestParamsMeasurementParams_use_gyroscope_measurements(msg_);
  }

private:
  ::bosdyn_msgs::msg::ProcessAnchoringRequestParamsMeasurementParams msg_;
};

class Init_ProcessAnchoringRequestParamsMeasurementParams_use_visual_odometry
{
public:
  explicit Init_ProcessAnchoringRequestParamsMeasurementParams_use_visual_odometry(::bosdyn_msgs::msg::ProcessAnchoringRequestParamsMeasurementParams & msg)
  : msg_(msg)
  {}
  Init_ProcessAnchoringRequestParamsMeasurementParams_use_visual_odometry_is_set use_visual_odometry(::bosdyn_msgs::msg::ProcessAnchoringRequestParamsMeasurementParams::_use_visual_odometry_type arg)
  {
    msg_.use_visual_odometry = std::move(arg);
    return Init_ProcessAnchoringRequestParamsMeasurementParams_use_visual_odometry_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ProcessAnchoringRequestParamsMeasurementParams msg_;
};

class Init_ProcessAnchoringRequestParamsMeasurementParams_use_kinematic_odometry_is_set
{
public:
  explicit Init_ProcessAnchoringRequestParamsMeasurementParams_use_kinematic_odometry_is_set(::bosdyn_msgs::msg::ProcessAnchoringRequestParamsMeasurementParams & msg)
  : msg_(msg)
  {}
  Init_ProcessAnchoringRequestParamsMeasurementParams_use_visual_odometry use_kinematic_odometry_is_set(::bosdyn_msgs::msg::ProcessAnchoringRequestParamsMeasurementParams::_use_kinematic_odometry_is_set_type arg)
  {
    msg_.use_kinematic_odometry_is_set = std::move(arg);
    return Init_ProcessAnchoringRequestParamsMeasurementParams_use_visual_odometry(msg_);
  }

private:
  ::bosdyn_msgs::msg::ProcessAnchoringRequestParamsMeasurementParams msg_;
};

class Init_ProcessAnchoringRequestParamsMeasurementParams_use_kinematic_odometry
{
public:
  Init_ProcessAnchoringRequestParamsMeasurementParams_use_kinematic_odometry()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ProcessAnchoringRequestParamsMeasurementParams_use_kinematic_odometry_is_set use_kinematic_odometry(::bosdyn_msgs::msg::ProcessAnchoringRequestParamsMeasurementParams::_use_kinematic_odometry_type arg)
  {
    msg_.use_kinematic_odometry = std::move(arg);
    return Init_ProcessAnchoringRequestParamsMeasurementParams_use_kinematic_odometry_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ProcessAnchoringRequestParamsMeasurementParams msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::ProcessAnchoringRequestParamsMeasurementParams>()
{
  return bosdyn_msgs::msg::builder::Init_ProcessAnchoringRequestParamsMeasurementParams_use_kinematic_odometry();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__PROCESS_ANCHORING_REQUEST_PARAMS_MEASUREMENT_PARAMS__BUILDER_HPP_
