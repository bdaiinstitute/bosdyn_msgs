// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/WaypointAnnotations.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__WAYPOINT_ANNOTATIONS__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__WAYPOINT_ANNOTATIONS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/waypoint_annotations__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_WaypointAnnotations_loop_closure_settings_is_set
{
public:
  explicit Init_WaypointAnnotations_loop_closure_settings_is_set(::bosdyn_msgs::msg::WaypointAnnotations & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::WaypointAnnotations loop_closure_settings_is_set(::bosdyn_msgs::msg::WaypointAnnotations::_loop_closure_settings_is_set_type arg)
  {
    msg_.loop_closure_settings_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::WaypointAnnotations msg_;
};

class Init_WaypointAnnotations_loop_closure_settings
{
public:
  explicit Init_WaypointAnnotations_loop_closure_settings(::bosdyn_msgs::msg::WaypointAnnotations & msg)
  : msg_(msg)
  {}
  Init_WaypointAnnotations_loop_closure_settings_is_set loop_closure_settings(::bosdyn_msgs::msg::WaypointAnnotations::_loop_closure_settings_type arg)
  {
    msg_.loop_closure_settings = std::move(arg);
    return Init_WaypointAnnotations_loop_closure_settings_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::WaypointAnnotations msg_;
};

class Init_WaypointAnnotations_client_metadata_is_set
{
public:
  explicit Init_WaypointAnnotations_client_metadata_is_set(::bosdyn_msgs::msg::WaypointAnnotations & msg)
  : msg_(msg)
  {}
  Init_WaypointAnnotations_loop_closure_settings client_metadata_is_set(::bosdyn_msgs::msg::WaypointAnnotations::_client_metadata_is_set_type arg)
  {
    msg_.client_metadata_is_set = std::move(arg);
    return Init_WaypointAnnotations_loop_closure_settings(msg_);
  }

private:
  ::bosdyn_msgs::msg::WaypointAnnotations msg_;
};

class Init_WaypointAnnotations_client_metadata
{
public:
  explicit Init_WaypointAnnotations_client_metadata(::bosdyn_msgs::msg::WaypointAnnotations & msg)
  : msg_(msg)
  {}
  Init_WaypointAnnotations_client_metadata_is_set client_metadata(::bosdyn_msgs::msg::WaypointAnnotations::_client_metadata_type arg)
  {
    msg_.client_metadata = std::move(arg);
    return Init_WaypointAnnotations_client_metadata_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::WaypointAnnotations msg_;
};

class Init_WaypointAnnotations_waypoint_source
{
public:
  explicit Init_WaypointAnnotations_waypoint_source(::bosdyn_msgs::msg::WaypointAnnotations & msg)
  : msg_(msg)
  {}
  Init_WaypointAnnotations_client_metadata waypoint_source(::bosdyn_msgs::msg::WaypointAnnotations::_waypoint_source_type arg)
  {
    msg_.waypoint_source = std::move(arg);
    return Init_WaypointAnnotations_client_metadata(msg_);
  }

private:
  ::bosdyn_msgs::msg::WaypointAnnotations msg_;
};

class Init_WaypointAnnotations_scan_match_region_is_set
{
public:
  explicit Init_WaypointAnnotations_scan_match_region_is_set(::bosdyn_msgs::msg::WaypointAnnotations & msg)
  : msg_(msg)
  {}
  Init_WaypointAnnotations_waypoint_source scan_match_region_is_set(::bosdyn_msgs::msg::WaypointAnnotations::_scan_match_region_is_set_type arg)
  {
    msg_.scan_match_region_is_set = std::move(arg);
    return Init_WaypointAnnotations_waypoint_source(msg_);
  }

private:
  ::bosdyn_msgs::msg::WaypointAnnotations msg_;
};

class Init_WaypointAnnotations_scan_match_region
{
public:
  explicit Init_WaypointAnnotations_scan_match_region(::bosdyn_msgs::msg::WaypointAnnotations & msg)
  : msg_(msg)
  {}
  Init_WaypointAnnotations_scan_match_region_is_set scan_match_region(::bosdyn_msgs::msg::WaypointAnnotations::_scan_match_region_type arg)
  {
    msg_.scan_match_region = std::move(arg);
    return Init_WaypointAnnotations_scan_match_region_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::WaypointAnnotations msg_;
};

class Init_WaypointAnnotations_icp_variance_is_set
{
public:
  explicit Init_WaypointAnnotations_icp_variance_is_set(::bosdyn_msgs::msg::WaypointAnnotations & msg)
  : msg_(msg)
  {}
  Init_WaypointAnnotations_scan_match_region icp_variance_is_set(::bosdyn_msgs::msg::WaypointAnnotations::_icp_variance_is_set_type arg)
  {
    msg_.icp_variance_is_set = std::move(arg);
    return Init_WaypointAnnotations_scan_match_region(msg_);
  }

private:
  ::bosdyn_msgs::msg::WaypointAnnotations msg_;
};

class Init_WaypointAnnotations_icp_variance
{
public:
  explicit Init_WaypointAnnotations_icp_variance(::bosdyn_msgs::msg::WaypointAnnotations & msg)
  : msg_(msg)
  {}
  Init_WaypointAnnotations_icp_variance_is_set icp_variance(::bosdyn_msgs::msg::WaypointAnnotations::_icp_variance_type arg)
  {
    msg_.icp_variance = std::move(arg);
    return Init_WaypointAnnotations_icp_variance_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::WaypointAnnotations msg_;
};

class Init_WaypointAnnotations_creation_time_is_set
{
public:
  explicit Init_WaypointAnnotations_creation_time_is_set(::bosdyn_msgs::msg::WaypointAnnotations & msg)
  : msg_(msg)
  {}
  Init_WaypointAnnotations_icp_variance creation_time_is_set(::bosdyn_msgs::msg::WaypointAnnotations::_creation_time_is_set_type arg)
  {
    msg_.creation_time_is_set = std::move(arg);
    return Init_WaypointAnnotations_icp_variance(msg_);
  }

private:
  ::bosdyn_msgs::msg::WaypointAnnotations msg_;
};

class Init_WaypointAnnotations_creation_time
{
public:
  explicit Init_WaypointAnnotations_creation_time(::bosdyn_msgs::msg::WaypointAnnotations & msg)
  : msg_(msg)
  {}
  Init_WaypointAnnotations_creation_time_is_set creation_time(::bosdyn_msgs::msg::WaypointAnnotations::_creation_time_type arg)
  {
    msg_.creation_time = std::move(arg);
    return Init_WaypointAnnotations_creation_time_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::WaypointAnnotations msg_;
};

class Init_WaypointAnnotations_name
{
public:
  Init_WaypointAnnotations_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_WaypointAnnotations_creation_time name(::bosdyn_msgs::msg::WaypointAnnotations::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_WaypointAnnotations_creation_time(msg_);
  }

private:
  ::bosdyn_msgs::msg::WaypointAnnotations msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::WaypointAnnotations>()
{
  return bosdyn_msgs::msg::builder::Init_WaypointAnnotations_name();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__WAYPOINT_ANNOTATIONS__BUILDER_HPP_
