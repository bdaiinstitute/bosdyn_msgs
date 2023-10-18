// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/WaypointSnapshot.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__WAYPOINT_SNAPSHOT__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__WAYPOINT_SNAPSHOT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/waypoint_snapshot__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_WaypointSnapshot_recording_started_on_is_set
{
public:
  explicit Init_WaypointSnapshot_recording_started_on_is_set(::bosdyn_msgs::msg::WaypointSnapshot & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::WaypointSnapshot recording_started_on_is_set(::bosdyn_msgs::msg::WaypointSnapshot::_recording_started_on_is_set_type arg)
  {
    msg_.recording_started_on_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::WaypointSnapshot msg_;
};

class Init_WaypointSnapshot_recording_started_on
{
public:
  explicit Init_WaypointSnapshot_recording_started_on(::bosdyn_msgs::msg::WaypointSnapshot & msg)
  : msg_(msg)
  {}
  Init_WaypointSnapshot_recording_started_on_is_set recording_started_on(::bosdyn_msgs::msg::WaypointSnapshot::_recording_started_on_type arg)
  {
    msg_.recording_started_on = std::move(arg);
    return Init_WaypointSnapshot_recording_started_on_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::WaypointSnapshot msg_;
};

class Init_WaypointSnapshot_robot_id_is_set
{
public:
  explicit Init_WaypointSnapshot_robot_id_is_set(::bosdyn_msgs::msg::WaypointSnapshot & msg)
  : msg_(msg)
  {}
  Init_WaypointSnapshot_recording_started_on robot_id_is_set(::bosdyn_msgs::msg::WaypointSnapshot::_robot_id_is_set_type arg)
  {
    msg_.robot_id_is_set = std::move(arg);
    return Init_WaypointSnapshot_recording_started_on(msg_);
  }

private:
  ::bosdyn_msgs::msg::WaypointSnapshot msg_;
};

class Init_WaypointSnapshot_robot_id
{
public:
  explicit Init_WaypointSnapshot_robot_id(::bosdyn_msgs::msg::WaypointSnapshot & msg)
  : msg_(msg)
  {}
  Init_WaypointSnapshot_robot_id_is_set robot_id(::bosdyn_msgs::msg::WaypointSnapshot::_robot_id_type arg)
  {
    msg_.robot_id = std::move(arg);
    return Init_WaypointSnapshot_robot_id_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::WaypointSnapshot msg_;
};

class Init_WaypointSnapshot_payloads
{
public:
  explicit Init_WaypointSnapshot_payloads(::bosdyn_msgs::msg::WaypointSnapshot & msg)
  : msg_(msg)
  {}
  Init_WaypointSnapshot_robot_id payloads(::bosdyn_msgs::msg::WaypointSnapshot::_payloads_type arg)
  {
    msg_.payloads = std::move(arg);
    return Init_WaypointSnapshot_robot_id(msg_);
  }

private:
  ::bosdyn_msgs::msg::WaypointSnapshot msg_;
};

class Init_WaypointSnapshot_body_tform_remote_point_cloud_sensor_is_set
{
public:
  explicit Init_WaypointSnapshot_body_tform_remote_point_cloud_sensor_is_set(::bosdyn_msgs::msg::WaypointSnapshot & msg)
  : msg_(msg)
  {}
  Init_WaypointSnapshot_payloads body_tform_remote_point_cloud_sensor_is_set(::bosdyn_msgs::msg::WaypointSnapshot::_body_tform_remote_point_cloud_sensor_is_set_type arg)
  {
    msg_.body_tform_remote_point_cloud_sensor_is_set = std::move(arg);
    return Init_WaypointSnapshot_payloads(msg_);
  }

private:
  ::bosdyn_msgs::msg::WaypointSnapshot msg_;
};

class Init_WaypointSnapshot_body_tform_remote_point_cloud_sensor
{
public:
  explicit Init_WaypointSnapshot_body_tform_remote_point_cloud_sensor(::bosdyn_msgs::msg::WaypointSnapshot & msg)
  : msg_(msg)
  {}
  Init_WaypointSnapshot_body_tform_remote_point_cloud_sensor_is_set body_tform_remote_point_cloud_sensor(::bosdyn_msgs::msg::WaypointSnapshot::_body_tform_remote_point_cloud_sensor_type arg)
  {
    msg_.body_tform_remote_point_cloud_sensor = std::move(arg);
    return Init_WaypointSnapshot_body_tform_remote_point_cloud_sensor_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::WaypointSnapshot msg_;
};

class Init_WaypointSnapshot_has_remote_point_cloud_sensor
{
public:
  explicit Init_WaypointSnapshot_has_remote_point_cloud_sensor(::bosdyn_msgs::msg::WaypointSnapshot & msg)
  : msg_(msg)
  {}
  Init_WaypointSnapshot_body_tform_remote_point_cloud_sensor has_remote_point_cloud_sensor(::bosdyn_msgs::msg::WaypointSnapshot::_has_remote_point_cloud_sensor_type arg)
  {
    msg_.has_remote_point_cloud_sensor = std::move(arg);
    return Init_WaypointSnapshot_body_tform_remote_point_cloud_sensor(msg_);
  }

private:
  ::bosdyn_msgs::msg::WaypointSnapshot msg_;
};

class Init_WaypointSnapshot_version_id
{
public:
  explicit Init_WaypointSnapshot_version_id(::bosdyn_msgs::msg::WaypointSnapshot & msg)
  : msg_(msg)
  {}
  Init_WaypointSnapshot_has_remote_point_cloud_sensor version_id(::bosdyn_msgs::msg::WaypointSnapshot::_version_id_type arg)
  {
    msg_.version_id = std::move(arg);
    return Init_WaypointSnapshot_has_remote_point_cloud_sensor(msg_);
  }

private:
  ::bosdyn_msgs::msg::WaypointSnapshot msg_;
};

class Init_WaypointSnapshot_is_point_cloud_processed
{
public:
  explicit Init_WaypointSnapshot_is_point_cloud_processed(::bosdyn_msgs::msg::WaypointSnapshot & msg)
  : msg_(msg)
  {}
  Init_WaypointSnapshot_version_id is_point_cloud_processed(::bosdyn_msgs::msg::WaypointSnapshot::_is_point_cloud_processed_type arg)
  {
    msg_.is_point_cloud_processed = std::move(arg);
    return Init_WaypointSnapshot_version_id(msg_);
  }

private:
  ::bosdyn_msgs::msg::WaypointSnapshot msg_;
};

class Init_WaypointSnapshot_robot_local_grids
{
public:
  explicit Init_WaypointSnapshot_robot_local_grids(::bosdyn_msgs::msg::WaypointSnapshot & msg)
  : msg_(msg)
  {}
  Init_WaypointSnapshot_is_point_cloud_processed robot_local_grids(::bosdyn_msgs::msg::WaypointSnapshot::_robot_local_grids_type arg)
  {
    msg_.robot_local_grids = std::move(arg);
    return Init_WaypointSnapshot_is_point_cloud_processed(msg_);
  }

private:
  ::bosdyn_msgs::msg::WaypointSnapshot msg_;
};

class Init_WaypointSnapshot_robot_state_is_set
{
public:
  explicit Init_WaypointSnapshot_robot_state_is_set(::bosdyn_msgs::msg::WaypointSnapshot & msg)
  : msg_(msg)
  {}
  Init_WaypointSnapshot_robot_local_grids robot_state_is_set(::bosdyn_msgs::msg::WaypointSnapshot::_robot_state_is_set_type arg)
  {
    msg_.robot_state_is_set = std::move(arg);
    return Init_WaypointSnapshot_robot_local_grids(msg_);
  }

private:
  ::bosdyn_msgs::msg::WaypointSnapshot msg_;
};

class Init_WaypointSnapshot_robot_state
{
public:
  explicit Init_WaypointSnapshot_robot_state(::bosdyn_msgs::msg::WaypointSnapshot & msg)
  : msg_(msg)
  {}
  Init_WaypointSnapshot_robot_state_is_set robot_state(::bosdyn_msgs::msg::WaypointSnapshot::_robot_state_type arg)
  {
    msg_.robot_state = std::move(arg);
    return Init_WaypointSnapshot_robot_state_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::WaypointSnapshot msg_;
};

class Init_WaypointSnapshot_objects
{
public:
  explicit Init_WaypointSnapshot_objects(::bosdyn_msgs::msg::WaypointSnapshot & msg)
  : msg_(msg)
  {}
  Init_WaypointSnapshot_robot_state objects(::bosdyn_msgs::msg::WaypointSnapshot::_objects_type arg)
  {
    msg_.objects = std::move(arg);
    return Init_WaypointSnapshot_robot_state(msg_);
  }

private:
  ::bosdyn_msgs::msg::WaypointSnapshot msg_;
};

class Init_WaypointSnapshot_point_cloud_is_set
{
public:
  explicit Init_WaypointSnapshot_point_cloud_is_set(::bosdyn_msgs::msg::WaypointSnapshot & msg)
  : msg_(msg)
  {}
  Init_WaypointSnapshot_objects point_cloud_is_set(::bosdyn_msgs::msg::WaypointSnapshot::_point_cloud_is_set_type arg)
  {
    msg_.point_cloud_is_set = std::move(arg);
    return Init_WaypointSnapshot_objects(msg_);
  }

private:
  ::bosdyn_msgs::msg::WaypointSnapshot msg_;
};

class Init_WaypointSnapshot_point_cloud
{
public:
  explicit Init_WaypointSnapshot_point_cloud(::bosdyn_msgs::msg::WaypointSnapshot & msg)
  : msg_(msg)
  {}
  Init_WaypointSnapshot_point_cloud_is_set point_cloud(::bosdyn_msgs::msg::WaypointSnapshot::_point_cloud_type arg)
  {
    msg_.point_cloud = std::move(arg);
    return Init_WaypointSnapshot_point_cloud_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::WaypointSnapshot msg_;
};

class Init_WaypointSnapshot_images
{
public:
  explicit Init_WaypointSnapshot_images(::bosdyn_msgs::msg::WaypointSnapshot & msg)
  : msg_(msg)
  {}
  Init_WaypointSnapshot_point_cloud images(::bosdyn_msgs::msg::WaypointSnapshot::_images_type arg)
  {
    msg_.images = std::move(arg);
    return Init_WaypointSnapshot_point_cloud(msg_);
  }

private:
  ::bosdyn_msgs::msg::WaypointSnapshot msg_;
};

class Init_WaypointSnapshot_id
{
public:
  Init_WaypointSnapshot_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_WaypointSnapshot_images id(::bosdyn_msgs::msg::WaypointSnapshot::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_WaypointSnapshot_images(msg_);
  }

private:
  ::bosdyn_msgs::msg::WaypointSnapshot msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::WaypointSnapshot>()
{
  return bosdyn_msgs::msg::builder::Init_WaypointSnapshot_id();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__WAYPOINT_SNAPSHOT__BUILDER_HPP_
