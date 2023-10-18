// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/DockProperties.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__DOCK_PROPERTIES__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__DOCK_PROPERTIES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/dock_properties__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_DockProperties_from_prior
{
public:
  explicit Init_DockProperties_from_prior(::bosdyn_msgs::msg::DockProperties & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::DockProperties from_prior(::bosdyn_msgs::msg::DockProperties::_from_prior_type arg)
  {
    msg_.from_prior = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::DockProperties msg_;
};

class Init_DockProperties_unavailable
{
public:
  explicit Init_DockProperties_unavailable(::bosdyn_msgs::msg::DockProperties & msg)
  : msg_(msg)
  {}
  Init_DockProperties_from_prior unavailable(::bosdyn_msgs::msg::DockProperties::_unavailable_type arg)
  {
    msg_.unavailable = std::move(arg);
    return Init_DockProperties_from_prior(msg_);
  }

private:
  ::bosdyn_msgs::msg::DockProperties msg_;
};

class Init_DockProperties_frame_name_dock
{
public:
  explicit Init_DockProperties_frame_name_dock(::bosdyn_msgs::msg::DockProperties & msg)
  : msg_(msg)
  {}
  Init_DockProperties_unavailable frame_name_dock(::bosdyn_msgs::msg::DockProperties::_frame_name_dock_type arg)
  {
    msg_.frame_name_dock = std::move(arg);
    return Init_DockProperties_unavailable(msg_);
  }

private:
  ::bosdyn_msgs::msg::DockProperties msg_;
};

class Init_DockProperties_type
{
public:
  explicit Init_DockProperties_type(::bosdyn_msgs::msg::DockProperties & msg)
  : msg_(msg)
  {}
  Init_DockProperties_frame_name_dock type(::bosdyn_msgs::msg::DockProperties::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_DockProperties_frame_name_dock(msg_);
  }

private:
  ::bosdyn_msgs::msg::DockProperties msg_;
};

class Init_DockProperties_dock_id
{
public:
  Init_DockProperties_dock_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DockProperties_type dock_id(::bosdyn_msgs::msg::DockProperties::_dock_id_type arg)
  {
    msg_.dock_id = std::move(arg);
    return Init_DockProperties_type(msg_);
  }

private:
  ::bosdyn_msgs::msg::DockProperties msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::DockProperties>()
{
  return bosdyn_msgs::msg::builder::Init_DockProperties_dock_id();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__DOCK_PROPERTIES__BUILDER_HPP_
