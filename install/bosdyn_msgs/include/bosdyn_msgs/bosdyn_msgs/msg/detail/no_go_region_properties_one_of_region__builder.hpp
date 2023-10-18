// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/NoGoRegionPropertiesOneOfRegion.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__NO_GO_REGION_PROPERTIES_ONE_OF_REGION__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__NO_GO_REGION_PROPERTIES_ONE_OF_REGION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/no_go_region_properties_one_of_region__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_NoGoRegionPropertiesOneOfRegion_region_choice
{
public:
  explicit Init_NoGoRegionPropertiesOneOfRegion_region_choice(::bosdyn_msgs::msg::NoGoRegionPropertiesOneOfRegion & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::NoGoRegionPropertiesOneOfRegion region_choice(::bosdyn_msgs::msg::NoGoRegionPropertiesOneOfRegion::_region_choice_type arg)
  {
    msg_.region_choice = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::NoGoRegionPropertiesOneOfRegion msg_;
};

class Init_NoGoRegionPropertiesOneOfRegion_box
{
public:
  Init_NoGoRegionPropertiesOneOfRegion_box()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NoGoRegionPropertiesOneOfRegion_region_choice box(::bosdyn_msgs::msg::NoGoRegionPropertiesOneOfRegion::_box_type arg)
  {
    msg_.box = std::move(arg);
    return Init_NoGoRegionPropertiesOneOfRegion_region_choice(msg_);
  }

private:
  ::bosdyn_msgs::msg::NoGoRegionPropertiesOneOfRegion msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::NoGoRegionPropertiesOneOfRegion>()
{
  return bosdyn_msgs::msg::builder::Init_NoGoRegionPropertiesOneOfRegion_box();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__NO_GO_REGION_PROPERTIES_ONE_OF_REGION__BUILDER_HPP_
