// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/GetLocalizationStateRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__GET_LOCALIZATION_STATE_REQUEST__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__GET_LOCALIZATION_STATE_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/get_localization_state_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_GetLocalizationStateRequest_compress_live_point_cloud
{
public:
  explicit Init_GetLocalizationStateRequest_compress_live_point_cloud(::bosdyn_msgs::msg::GetLocalizationStateRequest & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::GetLocalizationStateRequest compress_live_point_cloud(::bosdyn_msgs::msg::GetLocalizationStateRequest::_compress_live_point_cloud_type arg)
  {
    msg_.compress_live_point_cloud = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetLocalizationStateRequest msg_;
};

class Init_GetLocalizationStateRequest_request_live_robot_state
{
public:
  explicit Init_GetLocalizationStateRequest_request_live_robot_state(::bosdyn_msgs::msg::GetLocalizationStateRequest & msg)
  : msg_(msg)
  {}
  Init_GetLocalizationStateRequest_compress_live_point_cloud request_live_robot_state(::bosdyn_msgs::msg::GetLocalizationStateRequest::_request_live_robot_state_type arg)
  {
    msg_.request_live_robot_state = std::move(arg);
    return Init_GetLocalizationStateRequest_compress_live_point_cloud(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetLocalizationStateRequest msg_;
};

class Init_GetLocalizationStateRequest_request_live_world_objects
{
public:
  explicit Init_GetLocalizationStateRequest_request_live_world_objects(::bosdyn_msgs::msg::GetLocalizationStateRequest & msg)
  : msg_(msg)
  {}
  Init_GetLocalizationStateRequest_request_live_robot_state request_live_world_objects(::bosdyn_msgs::msg::GetLocalizationStateRequest::_request_live_world_objects_type arg)
  {
    msg_.request_live_world_objects = std::move(arg);
    return Init_GetLocalizationStateRequest_request_live_robot_state(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetLocalizationStateRequest msg_;
};

class Init_GetLocalizationStateRequest_request_live_terrain_maps
{
public:
  explicit Init_GetLocalizationStateRequest_request_live_terrain_maps(::bosdyn_msgs::msg::GetLocalizationStateRequest & msg)
  : msg_(msg)
  {}
  Init_GetLocalizationStateRequest_request_live_world_objects request_live_terrain_maps(::bosdyn_msgs::msg::GetLocalizationStateRequest::_request_live_terrain_maps_type arg)
  {
    msg_.request_live_terrain_maps = std::move(arg);
    return Init_GetLocalizationStateRequest_request_live_world_objects(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetLocalizationStateRequest msg_;
};

class Init_GetLocalizationStateRequest_request_live_images
{
public:
  explicit Init_GetLocalizationStateRequest_request_live_images(::bosdyn_msgs::msg::GetLocalizationStateRequest & msg)
  : msg_(msg)
  {}
  Init_GetLocalizationStateRequest_request_live_terrain_maps request_live_images(::bosdyn_msgs::msg::GetLocalizationStateRequest::_request_live_images_type arg)
  {
    msg_.request_live_images = std::move(arg);
    return Init_GetLocalizationStateRequest_request_live_terrain_maps(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetLocalizationStateRequest msg_;
};

class Init_GetLocalizationStateRequest_request_live_point_cloud
{
public:
  explicit Init_GetLocalizationStateRequest_request_live_point_cloud(::bosdyn_msgs::msg::GetLocalizationStateRequest & msg)
  : msg_(msg)
  {}
  Init_GetLocalizationStateRequest_request_live_images request_live_point_cloud(::bosdyn_msgs::msg::GetLocalizationStateRequest::_request_live_point_cloud_type arg)
  {
    msg_.request_live_point_cloud = std::move(arg);
    return Init_GetLocalizationStateRequest_request_live_images(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetLocalizationStateRequest msg_;
};

class Init_GetLocalizationStateRequest_waypoint_id
{
public:
  explicit Init_GetLocalizationStateRequest_waypoint_id(::bosdyn_msgs::msg::GetLocalizationStateRequest & msg)
  : msg_(msg)
  {}
  Init_GetLocalizationStateRequest_request_live_point_cloud waypoint_id(::bosdyn_msgs::msg::GetLocalizationStateRequest::_waypoint_id_type arg)
  {
    msg_.waypoint_id = std::move(arg);
    return Init_GetLocalizationStateRequest_request_live_point_cloud(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetLocalizationStateRequest msg_;
};

class Init_GetLocalizationStateRequest_header_is_set
{
public:
  explicit Init_GetLocalizationStateRequest_header_is_set(::bosdyn_msgs::msg::GetLocalizationStateRequest & msg)
  : msg_(msg)
  {}
  Init_GetLocalizationStateRequest_waypoint_id header_is_set(::bosdyn_msgs::msg::GetLocalizationStateRequest::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_GetLocalizationStateRequest_waypoint_id(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetLocalizationStateRequest msg_;
};

class Init_GetLocalizationStateRequest_header
{
public:
  Init_GetLocalizationStateRequest_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetLocalizationStateRequest_header_is_set header(::bosdyn_msgs::msg::GetLocalizationStateRequest::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_GetLocalizationStateRequest_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetLocalizationStateRequest msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::GetLocalizationStateRequest>()
{
  return bosdyn_msgs::msg::builder::Init_GetLocalizationStateRequest_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__GET_LOCALIZATION_STATE_REQUEST__BUILDER_HPP_
