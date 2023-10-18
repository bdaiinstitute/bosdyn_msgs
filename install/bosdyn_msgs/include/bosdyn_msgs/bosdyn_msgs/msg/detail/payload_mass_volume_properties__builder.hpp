// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/PayloadMassVolumeProperties.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__PAYLOAD_MASS_VOLUME_PROPERTIES__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__PAYLOAD_MASS_VOLUME_PROPERTIES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/payload_mass_volume_properties__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_PayloadMassVolumeProperties_joint_limits
{
public:
  explicit Init_PayloadMassVolumeProperties_joint_limits(::bosdyn_msgs::msg::PayloadMassVolumeProperties & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::PayloadMassVolumeProperties joint_limits(::bosdyn_msgs::msg::PayloadMassVolumeProperties::_joint_limits_type arg)
  {
    msg_.joint_limits = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::PayloadMassVolumeProperties msg_;
};

class Init_PayloadMassVolumeProperties_bounding_box
{
public:
  explicit Init_PayloadMassVolumeProperties_bounding_box(::bosdyn_msgs::msg::PayloadMassVolumeProperties & msg)
  : msg_(msg)
  {}
  Init_PayloadMassVolumeProperties_joint_limits bounding_box(::bosdyn_msgs::msg::PayloadMassVolumeProperties::_bounding_box_type arg)
  {
    msg_.bounding_box = std::move(arg);
    return Init_PayloadMassVolumeProperties_joint_limits(msg_);
  }

private:
  ::bosdyn_msgs::msg::PayloadMassVolumeProperties msg_;
};

class Init_PayloadMassVolumeProperties_moi_tensor_is_set
{
public:
  explicit Init_PayloadMassVolumeProperties_moi_tensor_is_set(::bosdyn_msgs::msg::PayloadMassVolumeProperties & msg)
  : msg_(msg)
  {}
  Init_PayloadMassVolumeProperties_bounding_box moi_tensor_is_set(::bosdyn_msgs::msg::PayloadMassVolumeProperties::_moi_tensor_is_set_type arg)
  {
    msg_.moi_tensor_is_set = std::move(arg);
    return Init_PayloadMassVolumeProperties_bounding_box(msg_);
  }

private:
  ::bosdyn_msgs::msg::PayloadMassVolumeProperties msg_;
};

class Init_PayloadMassVolumeProperties_moi_tensor
{
public:
  explicit Init_PayloadMassVolumeProperties_moi_tensor(::bosdyn_msgs::msg::PayloadMassVolumeProperties & msg)
  : msg_(msg)
  {}
  Init_PayloadMassVolumeProperties_moi_tensor_is_set moi_tensor(::bosdyn_msgs::msg::PayloadMassVolumeProperties::_moi_tensor_type arg)
  {
    msg_.moi_tensor = std::move(arg);
    return Init_PayloadMassVolumeProperties_moi_tensor_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::PayloadMassVolumeProperties msg_;
};

class Init_PayloadMassVolumeProperties_com_pos_rt_payload_is_set
{
public:
  explicit Init_PayloadMassVolumeProperties_com_pos_rt_payload_is_set(::bosdyn_msgs::msg::PayloadMassVolumeProperties & msg)
  : msg_(msg)
  {}
  Init_PayloadMassVolumeProperties_moi_tensor com_pos_rt_payload_is_set(::bosdyn_msgs::msg::PayloadMassVolumeProperties::_com_pos_rt_payload_is_set_type arg)
  {
    msg_.com_pos_rt_payload_is_set = std::move(arg);
    return Init_PayloadMassVolumeProperties_moi_tensor(msg_);
  }

private:
  ::bosdyn_msgs::msg::PayloadMassVolumeProperties msg_;
};

class Init_PayloadMassVolumeProperties_com_pos_rt_payload
{
public:
  explicit Init_PayloadMassVolumeProperties_com_pos_rt_payload(::bosdyn_msgs::msg::PayloadMassVolumeProperties & msg)
  : msg_(msg)
  {}
  Init_PayloadMassVolumeProperties_com_pos_rt_payload_is_set com_pos_rt_payload(::bosdyn_msgs::msg::PayloadMassVolumeProperties::_com_pos_rt_payload_type arg)
  {
    msg_.com_pos_rt_payload = std::move(arg);
    return Init_PayloadMassVolumeProperties_com_pos_rt_payload_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::PayloadMassVolumeProperties msg_;
};

class Init_PayloadMassVolumeProperties_total_mass
{
public:
  Init_PayloadMassVolumeProperties_total_mass()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PayloadMassVolumeProperties_com_pos_rt_payload total_mass(::bosdyn_msgs::msg::PayloadMassVolumeProperties::_total_mass_type arg)
  {
    msg_.total_mass = std::move(arg);
    return Init_PayloadMassVolumeProperties_com_pos_rt_payload(msg_);
  }

private:
  ::bosdyn_msgs::msg::PayloadMassVolumeProperties msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::PayloadMassVolumeProperties>()
{
  return bosdyn_msgs::msg::builder::Init_PayloadMassVolumeProperties_total_mass();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__PAYLOAD_MASS_VOLUME_PROPERTIES__BUILDER_HPP_
