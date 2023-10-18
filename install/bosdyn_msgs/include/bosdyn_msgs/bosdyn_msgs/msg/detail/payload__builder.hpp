// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/Payload.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__PAYLOAD__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__PAYLOAD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/payload__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_Payload_preset_configurations
{
public:
  explicit Init_Payload_preset_configurations(::bosdyn_msgs::msg::Payload & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::Payload preset_configurations(::bosdyn_msgs::msg::Payload::_preset_configurations_type arg)
  {
    msg_.preset_configurations = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::Payload msg_;
};

class Init_Payload_mass_volume_properties_is_set
{
public:
  explicit Init_Payload_mass_volume_properties_is_set(::bosdyn_msgs::msg::Payload & msg)
  : msg_(msg)
  {}
  Init_Payload_preset_configurations mass_volume_properties_is_set(::bosdyn_msgs::msg::Payload::_mass_volume_properties_is_set_type arg)
  {
    msg_.mass_volume_properties_is_set = std::move(arg);
    return Init_Payload_preset_configurations(msg_);
  }

private:
  ::bosdyn_msgs::msg::Payload msg_;
};

class Init_Payload_mass_volume_properties
{
public:
  explicit Init_Payload_mass_volume_properties(::bosdyn_msgs::msg::Payload & msg)
  : msg_(msg)
  {}
  Init_Payload_mass_volume_properties_is_set mass_volume_properties(::bosdyn_msgs::msg::Payload::_mass_volume_properties_type arg)
  {
    msg_.mass_volume_properties = std::move(arg);
    return Init_Payload_mass_volume_properties_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::Payload msg_;
};

class Init_Payload_link_speed
{
public:
  explicit Init_Payload_link_speed(::bosdyn_msgs::msg::Payload & msg)
  : msg_(msg)
  {}
  Init_Payload_mass_volume_properties link_speed(::bosdyn_msgs::msg::Payload::_link_speed_type arg)
  {
    msg_.link_speed = std::move(arg);
    return Init_Payload_mass_volume_properties(msg_);
  }

private:
  ::bosdyn_msgs::msg::Payload msg_;
};

class Init_Payload_ipv4_address
{
public:
  explicit Init_Payload_ipv4_address(::bosdyn_msgs::msg::Payload & msg)
  : msg_(msg)
  {}
  Init_Payload_link_speed ipv4_address(::bosdyn_msgs::msg::Payload::_ipv4_address_type arg)
  {
    msg_.ipv4_address = std::move(arg);
    return Init_Payload_link_speed(msg_);
  }

private:
  ::bosdyn_msgs::msg::Payload msg_;
};

class Init_Payload_liveness_timeout_secs
{
public:
  explicit Init_Payload_liveness_timeout_secs(::bosdyn_msgs::msg::Payload & msg)
  : msg_(msg)
  {}
  Init_Payload_ipv4_address liveness_timeout_secs(::bosdyn_msgs::msg::Payload::_liveness_timeout_secs_type arg)
  {
    msg_.liveness_timeout_secs = std::move(arg);
    return Init_Payload_ipv4_address(msg_);
  }

private:
  ::bosdyn_msgs::msg::Payload msg_;
};

class Init_Payload_mount_frame_name
{
public:
  explicit Init_Payload_mount_frame_name(::bosdyn_msgs::msg::Payload & msg)
  : msg_(msg)
  {}
  Init_Payload_liveness_timeout_secs mount_frame_name(::bosdyn_msgs::msg::Payload::_mount_frame_name_type arg)
  {
    msg_.mount_frame_name = std::move(arg);
    return Init_Payload_liveness_timeout_secs(msg_);
  }

private:
  ::bosdyn_msgs::msg::Payload msg_;
};

class Init_Payload_mount_tform_payload_is_set
{
public:
  explicit Init_Payload_mount_tform_payload_is_set(::bosdyn_msgs::msg::Payload & msg)
  : msg_(msg)
  {}
  Init_Payload_mount_frame_name mount_tform_payload_is_set(::bosdyn_msgs::msg::Payload::_mount_tform_payload_is_set_type arg)
  {
    msg_.mount_tform_payload_is_set = std::move(arg);
    return Init_Payload_mount_frame_name(msg_);
  }

private:
  ::bosdyn_msgs::msg::Payload msg_;
};

class Init_Payload_mount_tform_payload
{
public:
  explicit Init_Payload_mount_tform_payload(::bosdyn_msgs::msg::Payload & msg)
  : msg_(msg)
  {}
  Init_Payload_mount_tform_payload_is_set mount_tform_payload(::bosdyn_msgs::msg::Payload::_mount_tform_payload_type arg)
  {
    msg_.mount_tform_payload = std::move(arg);
    return Init_Payload_mount_tform_payload_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::Payload msg_;
};

class Init_Payload_body_tform_payload_is_set
{
public:
  explicit Init_Payload_body_tform_payload_is_set(::bosdyn_msgs::msg::Payload & msg)
  : msg_(msg)
  {}
  Init_Payload_mount_tform_payload body_tform_payload_is_set(::bosdyn_msgs::msg::Payload::_body_tform_payload_is_set_type arg)
  {
    msg_.body_tform_payload_is_set = std::move(arg);
    return Init_Payload_mount_tform_payload(msg_);
  }

private:
  ::bosdyn_msgs::msg::Payload msg_;
};

class Init_Payload_body_tform_payload
{
public:
  explicit Init_Payload_body_tform_payload(::bosdyn_msgs::msg::Payload & msg)
  : msg_(msg)
  {}
  Init_Payload_body_tform_payload_is_set body_tform_payload(::bosdyn_msgs::msg::Payload::_body_tform_payload_type arg)
  {
    msg_.body_tform_payload = std::move(arg);
    return Init_Payload_body_tform_payload_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::Payload msg_;
};

class Init_Payload_version_is_set
{
public:
  explicit Init_Payload_version_is_set(::bosdyn_msgs::msg::Payload & msg)
  : msg_(msg)
  {}
  Init_Payload_body_tform_payload version_is_set(::bosdyn_msgs::msg::Payload::_version_is_set_type arg)
  {
    msg_.version_is_set = std::move(arg);
    return Init_Payload_body_tform_payload(msg_);
  }

private:
  ::bosdyn_msgs::msg::Payload msg_;
};

class Init_Payload_version
{
public:
  explicit Init_Payload_version(::bosdyn_msgs::msg::Payload & msg)
  : msg_(msg)
  {}
  Init_Payload_version_is_set version(::bosdyn_msgs::msg::Payload::_version_type arg)
  {
    msg_.version = std::move(arg);
    return Init_Payload_version_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::Payload msg_;
};

class Init_Payload_is_noncompute_payload
{
public:
  explicit Init_Payload_is_noncompute_payload(::bosdyn_msgs::msg::Payload & msg)
  : msg_(msg)
  {}
  Init_Payload_version is_noncompute_payload(::bosdyn_msgs::msg::Payload::_is_noncompute_payload_type arg)
  {
    msg_.is_noncompute_payload = std::move(arg);
    return Init_Payload_version(msg_);
  }

private:
  ::bosdyn_msgs::msg::Payload msg_;
};

class Init_Payload_is_enabled
{
public:
  explicit Init_Payload_is_enabled(::bosdyn_msgs::msg::Payload & msg)
  : msg_(msg)
  {}
  Init_Payload_is_noncompute_payload is_enabled(::bosdyn_msgs::msg::Payload::_is_enabled_type arg)
  {
    msg_.is_enabled = std::move(arg);
    return Init_Payload_is_noncompute_payload(msg_);
  }

private:
  ::bosdyn_msgs::msg::Payload msg_;
};

class Init_Payload_is_authorized
{
public:
  explicit Init_Payload_is_authorized(::bosdyn_msgs::msg::Payload & msg)
  : msg_(msg)
  {}
  Init_Payload_is_enabled is_authorized(::bosdyn_msgs::msg::Payload::_is_authorized_type arg)
  {
    msg_.is_authorized = std::move(arg);
    return Init_Payload_is_enabled(msg_);
  }

private:
  ::bosdyn_msgs::msg::Payload msg_;
};

class Init_Payload_label_prefix
{
public:
  explicit Init_Payload_label_prefix(::bosdyn_msgs::msg::Payload & msg)
  : msg_(msg)
  {}
  Init_Payload_is_authorized label_prefix(::bosdyn_msgs::msg::Payload::_label_prefix_type arg)
  {
    msg_.label_prefix = std::move(arg);
    return Init_Payload_is_authorized(msg_);
  }

private:
  ::bosdyn_msgs::msg::Payload msg_;
};

class Init_Payload_description
{
public:
  explicit Init_Payload_description(::bosdyn_msgs::msg::Payload & msg)
  : msg_(msg)
  {}
  Init_Payload_label_prefix description(::bosdyn_msgs::msg::Payload::_description_type arg)
  {
    msg_.description = std::move(arg);
    return Init_Payload_label_prefix(msg_);
  }

private:
  ::bosdyn_msgs::msg::Payload msg_;
};

class Init_Payload_name
{
public:
  explicit Init_Payload_name(::bosdyn_msgs::msg::Payload & msg)
  : msg_(msg)
  {}
  Init_Payload_description name(::bosdyn_msgs::msg::Payload::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_Payload_description(msg_);
  }

private:
  ::bosdyn_msgs::msg::Payload msg_;
};

class Init_Payload_guid
{
public:
  Init_Payload_guid()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Payload_name guid(::bosdyn_msgs::msg::Payload::_guid_type arg)
  {
    msg_.guid = std::move(arg);
    return Init_Payload_name(msg_);
  }

private:
  ::bosdyn_msgs::msg::Payload msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::Payload>()
{
  return bosdyn_msgs::msg::builder::Init_Payload_guid();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__PAYLOAD__BUILDER_HPP_
