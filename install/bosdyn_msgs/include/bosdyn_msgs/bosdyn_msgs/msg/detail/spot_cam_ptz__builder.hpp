// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/SpotCamPtz.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__SPOT_CAM_PTZ__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__SPOT_CAM_PTZ__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/spot_cam_ptz__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_SpotCamPtz_adjust_parameters_is_set
{
public:
  explicit Init_SpotCamPtz_adjust_parameters_is_set(::bosdyn_msgs::msg::SpotCamPtz & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::SpotCamPtz adjust_parameters_is_set(::bosdyn_msgs::msg::SpotCamPtz::_adjust_parameters_is_set_type arg)
  {
    msg_.adjust_parameters_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::SpotCamPtz msg_;
};

class Init_SpotCamPtz_adjust_parameters
{
public:
  explicit Init_SpotCamPtz_adjust_parameters(::bosdyn_msgs::msg::SpotCamPtz & msg)
  : msg_(msg)
  {}
  Init_SpotCamPtz_adjust_parameters_is_set adjust_parameters(::bosdyn_msgs::msg::SpotCamPtz::_adjust_parameters_type arg)
  {
    msg_.adjust_parameters = std::move(arg);
    return Init_SpotCamPtz_adjust_parameters_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::SpotCamPtz msg_;
};

class Init_SpotCamPtz_ptz_position_is_set
{
public:
  explicit Init_SpotCamPtz_ptz_position_is_set(::bosdyn_msgs::msg::SpotCamPtz & msg)
  : msg_(msg)
  {}
  Init_SpotCamPtz_adjust_parameters ptz_position_is_set(::bosdyn_msgs::msg::SpotCamPtz::_ptz_position_is_set_type arg)
  {
    msg_.ptz_position_is_set = std::move(arg);
    return Init_SpotCamPtz_adjust_parameters(msg_);
  }

private:
  ::bosdyn_msgs::msg::SpotCamPtz msg_;
};

class Init_SpotCamPtz_ptz_position
{
public:
  explicit Init_SpotCamPtz_ptz_position(::bosdyn_msgs::msg::SpotCamPtz & msg)
  : msg_(msg)
  {}
  Init_SpotCamPtz_ptz_position_is_set ptz_position(::bosdyn_msgs::msg::SpotCamPtz::_ptz_position_type arg)
  {
    msg_.ptz_position = std::move(arg);
    return Init_SpotCamPtz_ptz_position_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::SpotCamPtz msg_;
};

class Init_SpotCamPtz_host
{
public:
  explicit Init_SpotCamPtz_host(::bosdyn_msgs::msg::SpotCamPtz & msg)
  : msg_(msg)
  {}
  Init_SpotCamPtz_ptz_position host(::bosdyn_msgs::msg::SpotCamPtz::_host_type arg)
  {
    msg_.host = std::move(arg);
    return Init_SpotCamPtz_ptz_position(msg_);
  }

private:
  ::bosdyn_msgs::msg::SpotCamPtz msg_;
};

class Init_SpotCamPtz_service_name
{
public:
  Init_SpotCamPtz_service_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SpotCamPtz_host service_name(::bosdyn_msgs::msg::SpotCamPtz::_service_name_type arg)
  {
    msg_.service_name = std::move(arg);
    return Init_SpotCamPtz_host(msg_);
  }

private:
  ::bosdyn_msgs::msg::SpotCamPtz msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::SpotCamPtz>()
{
  return bosdyn_msgs::msg::builder::Init_SpotCamPtz_service_name();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__SPOT_CAM_PTZ__BUILDER_HPP_
