// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/PointCloudSource.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__POINT_CLOUD_SOURCE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__POINT_CLOUD_SOURCE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/point_cloud_source__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_PointCloudSource_transforms_snapshot_is_set
{
public:
  explicit Init_PointCloudSource_transforms_snapshot_is_set(::bosdyn_msgs::msg::PointCloudSource & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::PointCloudSource transforms_snapshot_is_set(::bosdyn_msgs::msg::PointCloudSource::_transforms_snapshot_is_set_type arg)
  {
    msg_.transforms_snapshot_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::PointCloudSource msg_;
};

class Init_PointCloudSource_transforms_snapshot
{
public:
  explicit Init_PointCloudSource_transforms_snapshot(::bosdyn_msgs::msg::PointCloudSource & msg)
  : msg_(msg)
  {}
  Init_PointCloudSource_transforms_snapshot_is_set transforms_snapshot(::bosdyn_msgs::msg::PointCloudSource::_transforms_snapshot_type arg)
  {
    msg_.transforms_snapshot = std::move(arg);
    return Init_PointCloudSource_transforms_snapshot_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::PointCloudSource msg_;
};

class Init_PointCloudSource_acquisition_time_is_set
{
public:
  explicit Init_PointCloudSource_acquisition_time_is_set(::bosdyn_msgs::msg::PointCloudSource & msg)
  : msg_(msg)
  {}
  Init_PointCloudSource_transforms_snapshot acquisition_time_is_set(::bosdyn_msgs::msg::PointCloudSource::_acquisition_time_is_set_type arg)
  {
    msg_.acquisition_time_is_set = std::move(arg);
    return Init_PointCloudSource_transforms_snapshot(msg_);
  }

private:
  ::bosdyn_msgs::msg::PointCloudSource msg_;
};

class Init_PointCloudSource_acquisition_time
{
public:
  explicit Init_PointCloudSource_acquisition_time(::bosdyn_msgs::msg::PointCloudSource & msg)
  : msg_(msg)
  {}
  Init_PointCloudSource_acquisition_time_is_set acquisition_time(::bosdyn_msgs::msg::PointCloudSource::_acquisition_time_type arg)
  {
    msg_.acquisition_time = std::move(arg);
    return Init_PointCloudSource_acquisition_time_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::PointCloudSource msg_;
};

class Init_PointCloudSource_frame_name_sensor
{
public:
  explicit Init_PointCloudSource_frame_name_sensor(::bosdyn_msgs::msg::PointCloudSource & msg)
  : msg_(msg)
  {}
  Init_PointCloudSource_acquisition_time frame_name_sensor(::bosdyn_msgs::msg::PointCloudSource::_frame_name_sensor_type arg)
  {
    msg_.frame_name_sensor = std::move(arg);
    return Init_PointCloudSource_acquisition_time(msg_);
  }

private:
  ::bosdyn_msgs::msg::PointCloudSource msg_;
};

class Init_PointCloudSource_name
{
public:
  Init_PointCloudSource_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PointCloudSource_frame_name_sensor name(::bosdyn_msgs::msg::PointCloudSource::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_PointCloudSource_frame_name_sensor(msg_);
  }

private:
  ::bosdyn_msgs::msg::PointCloudSource msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::PointCloudSource>()
{
  return bosdyn_msgs::msg::builder::Init_PointCloudSource_name();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__POINT_CLOUD_SOURCE__BUILDER_HPP_
