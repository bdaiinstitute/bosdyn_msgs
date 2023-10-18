// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/SpotCamStoreMedia.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__SPOT_CAM_STORE_MEDIA__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__SPOT_CAM_STORE_MEDIA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/spot_cam_store_media__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_SpotCamStoreMedia_tag
{
public:
  explicit Init_SpotCamStoreMedia_tag(::bosdyn_msgs::msg::SpotCamStoreMedia & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::SpotCamStoreMedia tag(::bosdyn_msgs::msg::SpotCamStoreMedia::_tag_type arg)
  {
    msg_.tag = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::SpotCamStoreMedia msg_;
};

class Init_SpotCamStoreMedia_type
{
public:
  explicit Init_SpotCamStoreMedia_type(::bosdyn_msgs::msg::SpotCamStoreMedia & msg)
  : msg_(msg)
  {}
  Init_SpotCamStoreMedia_tag type(::bosdyn_msgs::msg::SpotCamStoreMedia::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_SpotCamStoreMedia_tag(msg_);
  }

private:
  ::bosdyn_msgs::msg::SpotCamStoreMedia msg_;
};

class Init_SpotCamStoreMedia_camera_is_set
{
public:
  explicit Init_SpotCamStoreMedia_camera_is_set(::bosdyn_msgs::msg::SpotCamStoreMedia & msg)
  : msg_(msg)
  {}
  Init_SpotCamStoreMedia_type camera_is_set(::bosdyn_msgs::msg::SpotCamStoreMedia::_camera_is_set_type arg)
  {
    msg_.camera_is_set = std::move(arg);
    return Init_SpotCamStoreMedia_type(msg_);
  }

private:
  ::bosdyn_msgs::msg::SpotCamStoreMedia msg_;
};

class Init_SpotCamStoreMedia_camera
{
public:
  explicit Init_SpotCamStoreMedia_camera(::bosdyn_msgs::msg::SpotCamStoreMedia & msg)
  : msg_(msg)
  {}
  Init_SpotCamStoreMedia_camera_is_set camera(::bosdyn_msgs::msg::SpotCamStoreMedia::_camera_type arg)
  {
    msg_.camera = std::move(arg);
    return Init_SpotCamStoreMedia_camera_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::SpotCamStoreMedia msg_;
};

class Init_SpotCamStoreMedia_host
{
public:
  explicit Init_SpotCamStoreMedia_host(::bosdyn_msgs::msg::SpotCamStoreMedia & msg)
  : msg_(msg)
  {}
  Init_SpotCamStoreMedia_camera host(::bosdyn_msgs::msg::SpotCamStoreMedia::_host_type arg)
  {
    msg_.host = std::move(arg);
    return Init_SpotCamStoreMedia_camera(msg_);
  }

private:
  ::bosdyn_msgs::msg::SpotCamStoreMedia msg_;
};

class Init_SpotCamStoreMedia_service_name
{
public:
  Init_SpotCamStoreMedia_service_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SpotCamStoreMedia_host service_name(::bosdyn_msgs::msg::SpotCamStoreMedia::_service_name_type arg)
  {
    msg_.service_name = std::move(arg);
    return Init_SpotCamStoreMedia_host(msg_);
  }

private:
  ::bosdyn_msgs::msg::SpotCamStoreMedia msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::SpotCamStoreMedia>()
{
  return bosdyn_msgs::msg::builder::Init_SpotCamStoreMedia_service_name();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__SPOT_CAM_STORE_MEDIA__BUILDER_HPP_
