// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/AreaCallbackRegion.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__AREA_CALLBACK_REGION__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__AREA_CALLBACK_REGION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/area_callback_region__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_AreaCallbackRegion_recorded_data_is_set
{
public:
  explicit Init_AreaCallbackRegion_recorded_data_is_set(::bosdyn_msgs::msg::AreaCallbackRegion & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::AreaCallbackRegion recorded_data_is_set(::bosdyn_msgs::msg::AreaCallbackRegion::_recorded_data_is_set_type arg)
  {
    msg_.recorded_data_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::AreaCallbackRegion msg_;
};

class Init_AreaCallbackRegion_recorded_data
{
public:
  explicit Init_AreaCallbackRegion_recorded_data(::bosdyn_msgs::msg::AreaCallbackRegion & msg)
  : msg_(msg)
  {}
  Init_AreaCallbackRegion_recorded_data_is_set recorded_data(::bosdyn_msgs::msg::AreaCallbackRegion::_recorded_data_type arg)
  {
    msg_.recorded_data = std::move(arg);
    return Init_AreaCallbackRegion_recorded_data_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::AreaCallbackRegion msg_;
};

class Init_AreaCallbackRegion_description
{
public:
  explicit Init_AreaCallbackRegion_description(::bosdyn_msgs::msg::AreaCallbackRegion & msg)
  : msg_(msg)
  {}
  Init_AreaCallbackRegion_recorded_data description(::bosdyn_msgs::msg::AreaCallbackRegion::_description_type arg)
  {
    msg_.description = std::move(arg);
    return Init_AreaCallbackRegion_recorded_data(msg_);
  }

private:
  ::bosdyn_msgs::msg::AreaCallbackRegion msg_;
};

class Init_AreaCallbackRegion_service_name
{
public:
  Init_AreaCallbackRegion_service_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AreaCallbackRegion_description service_name(::bosdyn_msgs::msg::AreaCallbackRegion::_service_name_type arg)
  {
    msg_.service_name = std::move(arg);
    return Init_AreaCallbackRegion_description(msg_);
  }

private:
  ::bosdyn_msgs::msg::AreaCallbackRegion msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::AreaCallbackRegion>()
{
  return bosdyn_msgs::msg::builder::Init_AreaCallbackRegion_service_name();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__AREA_CALLBACK_REGION__BUILDER_HPP_
