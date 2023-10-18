// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/Localization.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__LOCALIZATION__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__LOCALIZATION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/localization__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_Localization_timestamp_is_set
{
public:
  explicit Init_Localization_timestamp_is_set(::bosdyn_msgs::msg::Localization & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::Localization timestamp_is_set(::bosdyn_msgs::msg::Localization::_timestamp_is_set_type arg)
  {
    msg_.timestamp_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::Localization msg_;
};

class Init_Localization_timestamp
{
public:
  explicit Init_Localization_timestamp(::bosdyn_msgs::msg::Localization & msg)
  : msg_(msg)
  {}
  Init_Localization_timestamp_is_set timestamp(::bosdyn_msgs::msg::Localization::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_Localization_timestamp_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::Localization msg_;
};

class Init_Localization_seed_tform_body_is_set
{
public:
  explicit Init_Localization_seed_tform_body_is_set(::bosdyn_msgs::msg::Localization & msg)
  : msg_(msg)
  {}
  Init_Localization_timestamp seed_tform_body_is_set(::bosdyn_msgs::msg::Localization::_seed_tform_body_is_set_type arg)
  {
    msg_.seed_tform_body_is_set = std::move(arg);
    return Init_Localization_timestamp(msg_);
  }

private:
  ::bosdyn_msgs::msg::Localization msg_;
};

class Init_Localization_seed_tform_body
{
public:
  explicit Init_Localization_seed_tform_body(::bosdyn_msgs::msg::Localization & msg)
  : msg_(msg)
  {}
  Init_Localization_seed_tform_body_is_set seed_tform_body(::bosdyn_msgs::msg::Localization::_seed_tform_body_type arg)
  {
    msg_.seed_tform_body = std::move(arg);
    return Init_Localization_seed_tform_body_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::Localization msg_;
};

class Init_Localization_waypoint_tform_body_is_set
{
public:
  explicit Init_Localization_waypoint_tform_body_is_set(::bosdyn_msgs::msg::Localization & msg)
  : msg_(msg)
  {}
  Init_Localization_seed_tform_body waypoint_tform_body_is_set(::bosdyn_msgs::msg::Localization::_waypoint_tform_body_is_set_type arg)
  {
    msg_.waypoint_tform_body_is_set = std::move(arg);
    return Init_Localization_seed_tform_body(msg_);
  }

private:
  ::bosdyn_msgs::msg::Localization msg_;
};

class Init_Localization_waypoint_tform_body
{
public:
  explicit Init_Localization_waypoint_tform_body(::bosdyn_msgs::msg::Localization & msg)
  : msg_(msg)
  {}
  Init_Localization_waypoint_tform_body_is_set waypoint_tform_body(::bosdyn_msgs::msg::Localization::_waypoint_tform_body_type arg)
  {
    msg_.waypoint_tform_body = std::move(arg);
    return Init_Localization_waypoint_tform_body_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::Localization msg_;
};

class Init_Localization_waypoint_id
{
public:
  Init_Localization_waypoint_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Localization_waypoint_tform_body waypoint_id(::bosdyn_msgs::msg::Localization::_waypoint_id_type arg)
  {
    msg_.waypoint_id = std::move(arg);
    return Init_Localization_waypoint_tform_body(msg_);
  }

private:
  ::bosdyn_msgs::msg::Localization msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::Localization>()
{
  return bosdyn_msgs::msg::builder::Init_Localization_waypoint_id();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__LOCALIZATION__BUILDER_HPP_
