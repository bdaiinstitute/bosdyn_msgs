// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/PayloadPreset.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__PAYLOAD_PRESET__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__PAYLOAD_PRESET__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/payload_preset__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_PayloadPreset_label_prefix
{
public:
  explicit Init_PayloadPreset_label_prefix(::bosdyn_msgs::msg::PayloadPreset & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::PayloadPreset label_prefix(::bosdyn_msgs::msg::PayloadPreset::_label_prefix_type arg)
  {
    msg_.label_prefix = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::PayloadPreset msg_;
};

class Init_PayloadPreset_mass_volume_properties_is_set
{
public:
  explicit Init_PayloadPreset_mass_volume_properties_is_set(::bosdyn_msgs::msg::PayloadPreset & msg)
  : msg_(msg)
  {}
  Init_PayloadPreset_label_prefix mass_volume_properties_is_set(::bosdyn_msgs::msg::PayloadPreset::_mass_volume_properties_is_set_type arg)
  {
    msg_.mass_volume_properties_is_set = std::move(arg);
    return Init_PayloadPreset_label_prefix(msg_);
  }

private:
  ::bosdyn_msgs::msg::PayloadPreset msg_;
};

class Init_PayloadPreset_mass_volume_properties
{
public:
  explicit Init_PayloadPreset_mass_volume_properties(::bosdyn_msgs::msg::PayloadPreset & msg)
  : msg_(msg)
  {}
  Init_PayloadPreset_mass_volume_properties_is_set mass_volume_properties(::bosdyn_msgs::msg::PayloadPreset::_mass_volume_properties_type arg)
  {
    msg_.mass_volume_properties = std::move(arg);
    return Init_PayloadPreset_mass_volume_properties_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::PayloadPreset msg_;
};

class Init_PayloadPreset_mount_frame_name
{
public:
  explicit Init_PayloadPreset_mount_frame_name(::bosdyn_msgs::msg::PayloadPreset & msg)
  : msg_(msg)
  {}
  Init_PayloadPreset_mass_volume_properties mount_frame_name(::bosdyn_msgs::msg::PayloadPreset::_mount_frame_name_type arg)
  {
    msg_.mount_frame_name = std::move(arg);
    return Init_PayloadPreset_mass_volume_properties(msg_);
  }

private:
  ::bosdyn_msgs::msg::PayloadPreset msg_;
};

class Init_PayloadPreset_mount_tform_payload_is_set
{
public:
  explicit Init_PayloadPreset_mount_tform_payload_is_set(::bosdyn_msgs::msg::PayloadPreset & msg)
  : msg_(msg)
  {}
  Init_PayloadPreset_mount_frame_name mount_tform_payload_is_set(::bosdyn_msgs::msg::PayloadPreset::_mount_tform_payload_is_set_type arg)
  {
    msg_.mount_tform_payload_is_set = std::move(arg);
    return Init_PayloadPreset_mount_frame_name(msg_);
  }

private:
  ::bosdyn_msgs::msg::PayloadPreset msg_;
};

class Init_PayloadPreset_mount_tform_payload
{
public:
  explicit Init_PayloadPreset_mount_tform_payload(::bosdyn_msgs::msg::PayloadPreset & msg)
  : msg_(msg)
  {}
  Init_PayloadPreset_mount_tform_payload_is_set mount_tform_payload(::bosdyn_msgs::msg::PayloadPreset::_mount_tform_payload_type arg)
  {
    msg_.mount_tform_payload = std::move(arg);
    return Init_PayloadPreset_mount_tform_payload_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::PayloadPreset msg_;
};

class Init_PayloadPreset_description
{
public:
  explicit Init_PayloadPreset_description(::bosdyn_msgs::msg::PayloadPreset & msg)
  : msg_(msg)
  {}
  Init_PayloadPreset_mount_tform_payload description(::bosdyn_msgs::msg::PayloadPreset::_description_type arg)
  {
    msg_.description = std::move(arg);
    return Init_PayloadPreset_mount_tform_payload(msg_);
  }

private:
  ::bosdyn_msgs::msg::PayloadPreset msg_;
};

class Init_PayloadPreset_preset_name
{
public:
  Init_PayloadPreset_preset_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PayloadPreset_description preset_name(::bosdyn_msgs::msg::PayloadPreset::_preset_name_type arg)
  {
    msg_.preset_name = std::move(arg);
    return Init_PayloadPreset_description(msg_);
  }

private:
  ::bosdyn_msgs::msg::PayloadPreset msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::PayloadPreset>()
{
  return bosdyn_msgs::msg::builder::Init_PayloadPreset_preset_name();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__PAYLOAD_PRESET__BUILDER_HPP_
