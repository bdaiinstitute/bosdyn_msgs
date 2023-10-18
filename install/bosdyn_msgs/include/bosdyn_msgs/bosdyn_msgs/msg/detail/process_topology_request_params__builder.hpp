// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/ProcessTopologyRequestParams.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__PROCESS_TOPOLOGY_REQUEST_PARAMS__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__PROCESS_TOPOLOGY_REQUEST_PARAMS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/process_topology_request_params__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_ProcessTopologyRequestParams_timeout_seconds
{
public:
  explicit Init_ProcessTopologyRequestParams_timeout_seconds(::bosdyn_msgs::msg::ProcessTopologyRequestParams & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::ProcessTopologyRequestParams timeout_seconds(::bosdyn_msgs::msg::ProcessTopologyRequestParams::_timeout_seconds_type arg)
  {
    msg_.timeout_seconds = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::ProcessTopologyRequestParams msg_;
};

class Init_ProcessTopologyRequestParams_collision_check_params_is_set
{
public:
  explicit Init_ProcessTopologyRequestParams_collision_check_params_is_set(::bosdyn_msgs::msg::ProcessTopologyRequestParams & msg)
  : msg_(msg)
  {}
  Init_ProcessTopologyRequestParams_timeout_seconds collision_check_params_is_set(::bosdyn_msgs::msg::ProcessTopologyRequestParams::_collision_check_params_is_set_type arg)
  {
    msg_.collision_check_params_is_set = std::move(arg);
    return Init_ProcessTopologyRequestParams_timeout_seconds(msg_);
  }

private:
  ::bosdyn_msgs::msg::ProcessTopologyRequestParams msg_;
};

class Init_ProcessTopologyRequestParams_collision_check_params
{
public:
  explicit Init_ProcessTopologyRequestParams_collision_check_params(::bosdyn_msgs::msg::ProcessTopologyRequestParams & msg)
  : msg_(msg)
  {}
  Init_ProcessTopologyRequestParams_collision_check_params_is_set collision_check_params(::bosdyn_msgs::msg::ProcessTopologyRequestParams::_collision_check_params_type arg)
  {
    msg_.collision_check_params = std::move(arg);
    return Init_ProcessTopologyRequestParams_collision_check_params_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ProcessTopologyRequestParams msg_;
};

class Init_ProcessTopologyRequestParams_fiducial_loop_closure_params_is_set
{
public:
  explicit Init_ProcessTopologyRequestParams_fiducial_loop_closure_params_is_set(::bosdyn_msgs::msg::ProcessTopologyRequestParams & msg)
  : msg_(msg)
  {}
  Init_ProcessTopologyRequestParams_collision_check_params fiducial_loop_closure_params_is_set(::bosdyn_msgs::msg::ProcessTopologyRequestParams::_fiducial_loop_closure_params_is_set_type arg)
  {
    msg_.fiducial_loop_closure_params_is_set = std::move(arg);
    return Init_ProcessTopologyRequestParams_collision_check_params(msg_);
  }

private:
  ::bosdyn_msgs::msg::ProcessTopologyRequestParams msg_;
};

class Init_ProcessTopologyRequestParams_fiducial_loop_closure_params
{
public:
  explicit Init_ProcessTopologyRequestParams_fiducial_loop_closure_params(::bosdyn_msgs::msg::ProcessTopologyRequestParams & msg)
  : msg_(msg)
  {}
  Init_ProcessTopologyRequestParams_fiducial_loop_closure_params_is_set fiducial_loop_closure_params(::bosdyn_msgs::msg::ProcessTopologyRequestParams::_fiducial_loop_closure_params_type arg)
  {
    msg_.fiducial_loop_closure_params = std::move(arg);
    return Init_ProcessTopologyRequestParams_fiducial_loop_closure_params_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ProcessTopologyRequestParams msg_;
};

class Init_ProcessTopologyRequestParams_do_fiducial_loop_closure_is_set
{
public:
  explicit Init_ProcessTopologyRequestParams_do_fiducial_loop_closure_is_set(::bosdyn_msgs::msg::ProcessTopologyRequestParams & msg)
  : msg_(msg)
  {}
  Init_ProcessTopologyRequestParams_fiducial_loop_closure_params do_fiducial_loop_closure_is_set(::bosdyn_msgs::msg::ProcessTopologyRequestParams::_do_fiducial_loop_closure_is_set_type arg)
  {
    msg_.do_fiducial_loop_closure_is_set = std::move(arg);
    return Init_ProcessTopologyRequestParams_fiducial_loop_closure_params(msg_);
  }

private:
  ::bosdyn_msgs::msg::ProcessTopologyRequestParams msg_;
};

class Init_ProcessTopologyRequestParams_do_fiducial_loop_closure
{
public:
  explicit Init_ProcessTopologyRequestParams_do_fiducial_loop_closure(::bosdyn_msgs::msg::ProcessTopologyRequestParams & msg)
  : msg_(msg)
  {}
  Init_ProcessTopologyRequestParams_do_fiducial_loop_closure_is_set do_fiducial_loop_closure(::bosdyn_msgs::msg::ProcessTopologyRequestParams::_do_fiducial_loop_closure_type arg)
  {
    msg_.do_fiducial_loop_closure = std::move(arg);
    return Init_ProcessTopologyRequestParams_do_fiducial_loop_closure_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ProcessTopologyRequestParams msg_;
};

class Init_ProcessTopologyRequestParams_icp_params_is_set
{
public:
  explicit Init_ProcessTopologyRequestParams_icp_params_is_set(::bosdyn_msgs::msg::ProcessTopologyRequestParams & msg)
  : msg_(msg)
  {}
  Init_ProcessTopologyRequestParams_do_fiducial_loop_closure icp_params_is_set(::bosdyn_msgs::msg::ProcessTopologyRequestParams::_icp_params_is_set_type arg)
  {
    msg_.icp_params_is_set = std::move(arg);
    return Init_ProcessTopologyRequestParams_do_fiducial_loop_closure(msg_);
  }

private:
  ::bosdyn_msgs::msg::ProcessTopologyRequestParams msg_;
};

class Init_ProcessTopologyRequestParams_icp_params
{
public:
  explicit Init_ProcessTopologyRequestParams_icp_params(::bosdyn_msgs::msg::ProcessTopologyRequestParams & msg)
  : msg_(msg)
  {}
  Init_ProcessTopologyRequestParams_icp_params_is_set icp_params(::bosdyn_msgs::msg::ProcessTopologyRequestParams::_icp_params_type arg)
  {
    msg_.icp_params = std::move(arg);
    return Init_ProcessTopologyRequestParams_icp_params_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ProcessTopologyRequestParams msg_;
};

class Init_ProcessTopologyRequestParams_odometry_loop_closure_params_is_set
{
public:
  explicit Init_ProcessTopologyRequestParams_odometry_loop_closure_params_is_set(::bosdyn_msgs::msg::ProcessTopologyRequestParams & msg)
  : msg_(msg)
  {}
  Init_ProcessTopologyRequestParams_icp_params odometry_loop_closure_params_is_set(::bosdyn_msgs::msg::ProcessTopologyRequestParams::_odometry_loop_closure_params_is_set_type arg)
  {
    msg_.odometry_loop_closure_params_is_set = std::move(arg);
    return Init_ProcessTopologyRequestParams_icp_params(msg_);
  }

private:
  ::bosdyn_msgs::msg::ProcessTopologyRequestParams msg_;
};

class Init_ProcessTopologyRequestParams_odometry_loop_closure_params
{
public:
  explicit Init_ProcessTopologyRequestParams_odometry_loop_closure_params(::bosdyn_msgs::msg::ProcessTopologyRequestParams & msg)
  : msg_(msg)
  {}
  Init_ProcessTopologyRequestParams_odometry_loop_closure_params_is_set odometry_loop_closure_params(::bosdyn_msgs::msg::ProcessTopologyRequestParams::_odometry_loop_closure_params_type arg)
  {
    msg_.odometry_loop_closure_params = std::move(arg);
    return Init_ProcessTopologyRequestParams_odometry_loop_closure_params_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ProcessTopologyRequestParams msg_;
};

class Init_ProcessTopologyRequestParams_do_odometry_loop_closure_is_set
{
public:
  explicit Init_ProcessTopologyRequestParams_do_odometry_loop_closure_is_set(::bosdyn_msgs::msg::ProcessTopologyRequestParams & msg)
  : msg_(msg)
  {}
  Init_ProcessTopologyRequestParams_odometry_loop_closure_params do_odometry_loop_closure_is_set(::bosdyn_msgs::msg::ProcessTopologyRequestParams::_do_odometry_loop_closure_is_set_type arg)
  {
    msg_.do_odometry_loop_closure_is_set = std::move(arg);
    return Init_ProcessTopologyRequestParams_odometry_loop_closure_params(msg_);
  }

private:
  ::bosdyn_msgs::msg::ProcessTopologyRequestParams msg_;
};

class Init_ProcessTopologyRequestParams_do_odometry_loop_closure
{
public:
  Init_ProcessTopologyRequestParams_do_odometry_loop_closure()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ProcessTopologyRequestParams_do_odometry_loop_closure_is_set do_odometry_loop_closure(::bosdyn_msgs::msg::ProcessTopologyRequestParams::_do_odometry_loop_closure_type arg)
  {
    msg_.do_odometry_loop_closure = std::move(arg);
    return Init_ProcessTopologyRequestParams_do_odometry_loop_closure_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ProcessTopologyRequestParams msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::ProcessTopologyRequestParams>()
{
  return bosdyn_msgs::msg::builder::Init_ProcessTopologyRequestParams_do_odometry_loop_closure();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__PROCESS_TOPOLOGY_REQUEST_PARAMS__BUILDER_HPP_
