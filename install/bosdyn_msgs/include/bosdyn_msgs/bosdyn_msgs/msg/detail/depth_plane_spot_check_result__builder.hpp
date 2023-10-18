// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/DepthPlaneSpotCheckResult.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__DEPTH_PLANE_SPOT_CHECK_RESULT__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__DEPTH_PLANE_SPOT_CHECK_RESULT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/depth_plane_spot_check_result__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_DepthPlaneSpotCheckResult_severity_score
{
public:
  explicit Init_DepthPlaneSpotCheckResult_severity_score(::bosdyn_msgs::msg::DepthPlaneSpotCheckResult & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::DepthPlaneSpotCheckResult severity_score(::bosdyn_msgs::msg::DepthPlaneSpotCheckResult::_severity_score_type arg)
  {
    msg_.severity_score = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::DepthPlaneSpotCheckResult msg_;
};

class Init_DepthPlaneSpotCheckResult_status
{
public:
  Init_DepthPlaneSpotCheckResult_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DepthPlaneSpotCheckResult_severity_score status(::bosdyn_msgs::msg::DepthPlaneSpotCheckResult::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_DepthPlaneSpotCheckResult_severity_score(msg_);
  }

private:
  ::bosdyn_msgs::msg::DepthPlaneSpotCheckResult msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::DepthPlaneSpotCheckResult>()
{
  return bosdyn_msgs::msg::builder::Init_DepthPlaneSpotCheckResult_status();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__DEPTH_PLANE_SPOT_CHECK_RESULT__BUILDER_HPP_
