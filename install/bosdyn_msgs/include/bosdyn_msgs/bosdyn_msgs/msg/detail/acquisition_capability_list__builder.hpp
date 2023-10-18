// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/AcquisitionCapabilityList.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ACQUISITION_CAPABILITY_LIST__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__ACQUISITION_CAPABILITY_LIST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/acquisition_capability_list__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_AcquisitionCapabilityList_network_compute_sources
{
public:
  explicit Init_AcquisitionCapabilityList_network_compute_sources(::bosdyn_msgs::msg::AcquisitionCapabilityList & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::AcquisitionCapabilityList network_compute_sources(::bosdyn_msgs::msg::AcquisitionCapabilityList::_network_compute_sources_type arg)
  {
    msg_.network_compute_sources = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::AcquisitionCapabilityList msg_;
};

class Init_AcquisitionCapabilityList_image_sources
{
public:
  explicit Init_AcquisitionCapabilityList_image_sources(::bosdyn_msgs::msg::AcquisitionCapabilityList & msg)
  : msg_(msg)
  {}
  Init_AcquisitionCapabilityList_network_compute_sources image_sources(::bosdyn_msgs::msg::AcquisitionCapabilityList::_image_sources_type arg)
  {
    msg_.image_sources = std::move(arg);
    return Init_AcquisitionCapabilityList_network_compute_sources(msg_);
  }

private:
  ::bosdyn_msgs::msg::AcquisitionCapabilityList msg_;
};

class Init_AcquisitionCapabilityList_data_sources
{
public:
  Init_AcquisitionCapabilityList_data_sources()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AcquisitionCapabilityList_image_sources data_sources(::bosdyn_msgs::msg::AcquisitionCapabilityList::_data_sources_type arg)
  {
    msg_.data_sources = std::move(arg);
    return Init_AcquisitionCapabilityList_image_sources(msg_);
  }

private:
  ::bosdyn_msgs::msg::AcquisitionCapabilityList msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::AcquisitionCapabilityList>()
{
  return bosdyn_msgs::msg::builder::Init_AcquisitionCapabilityList_data_sources();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__ACQUISITION_CAPABILITY_LIST__BUILDER_HPP_
