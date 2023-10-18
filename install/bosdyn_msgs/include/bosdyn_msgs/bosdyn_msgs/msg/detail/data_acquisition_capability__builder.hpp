// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/DataAcquisitionCapability.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__DATA_ACQUISITION_CAPABILITY__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__DATA_ACQUISITION_CAPABILITY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/data_acquisition_capability__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_DataAcquisitionCapability_custom_params_is_set
{
public:
  explicit Init_DataAcquisitionCapability_custom_params_is_set(::bosdyn_msgs::msg::DataAcquisitionCapability & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::DataAcquisitionCapability custom_params_is_set(::bosdyn_msgs::msg::DataAcquisitionCapability::_custom_params_is_set_type arg)
  {
    msg_.custom_params_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::DataAcquisitionCapability msg_;
};

class Init_DataAcquisitionCapability_custom_params
{
public:
  explicit Init_DataAcquisitionCapability_custom_params(::bosdyn_msgs::msg::DataAcquisitionCapability & msg)
  : msg_(msg)
  {}
  Init_DataAcquisitionCapability_custom_params_is_set custom_params(::bosdyn_msgs::msg::DataAcquisitionCapability::_custom_params_type arg)
  {
    msg_.custom_params = std::move(arg);
    return Init_DataAcquisitionCapability_custom_params_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::DataAcquisitionCapability msg_;
};

class Init_DataAcquisitionCapability_service_name
{
public:
  explicit Init_DataAcquisitionCapability_service_name(::bosdyn_msgs::msg::DataAcquisitionCapability & msg)
  : msg_(msg)
  {}
  Init_DataAcquisitionCapability_custom_params service_name(::bosdyn_msgs::msg::DataAcquisitionCapability::_service_name_type arg)
  {
    msg_.service_name = std::move(arg);
    return Init_DataAcquisitionCapability_custom_params(msg_);
  }

private:
  ::bosdyn_msgs::msg::DataAcquisitionCapability msg_;
};

class Init_DataAcquisitionCapability_channel_name
{
public:
  explicit Init_DataAcquisitionCapability_channel_name(::bosdyn_msgs::msg::DataAcquisitionCapability & msg)
  : msg_(msg)
  {}
  Init_DataAcquisitionCapability_service_name channel_name(::bosdyn_msgs::msg::DataAcquisitionCapability::_channel_name_type arg)
  {
    msg_.channel_name = std::move(arg);
    return Init_DataAcquisitionCapability_service_name(msg_);
  }

private:
  ::bosdyn_msgs::msg::DataAcquisitionCapability msg_;
};

class Init_DataAcquisitionCapability_description
{
public:
  explicit Init_DataAcquisitionCapability_description(::bosdyn_msgs::msg::DataAcquisitionCapability & msg)
  : msg_(msg)
  {}
  Init_DataAcquisitionCapability_channel_name description(::bosdyn_msgs::msg::DataAcquisitionCapability::_description_type arg)
  {
    msg_.description = std::move(arg);
    return Init_DataAcquisitionCapability_channel_name(msg_);
  }

private:
  ::bosdyn_msgs::msg::DataAcquisitionCapability msg_;
};

class Init_DataAcquisitionCapability_name
{
public:
  Init_DataAcquisitionCapability_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DataAcquisitionCapability_description name(::bosdyn_msgs::msg::DataAcquisitionCapability::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_DataAcquisitionCapability_description(msg_);
  }

private:
  ::bosdyn_msgs::msg::DataAcquisitionCapability msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::DataAcquisitionCapability>()
{
  return bosdyn_msgs::msg::builder::Init_DataAcquisitionCapability_name();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__DATA_ACQUISITION_CAPABILITY__BUILDER_HPP_
