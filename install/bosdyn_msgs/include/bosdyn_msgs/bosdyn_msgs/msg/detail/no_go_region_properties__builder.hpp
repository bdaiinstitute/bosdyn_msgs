// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/NoGoRegionProperties.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__NO_GO_REGION_PROPERTIES__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__NO_GO_REGION_PROPERTIES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/no_go_region_properties__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_NoGoRegionProperties_disable_foot_obstacle_inflation
{
public:
  explicit Init_NoGoRegionProperties_disable_foot_obstacle_inflation(::bosdyn_msgs::msg::NoGoRegionProperties & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::NoGoRegionProperties disable_foot_obstacle_inflation(::bosdyn_msgs::msg::NoGoRegionProperties::_disable_foot_obstacle_inflation_type arg)
  {
    msg_.disable_foot_obstacle_inflation = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::NoGoRegionProperties msg_;
};

class Init_NoGoRegionProperties_disable_body_obstacle_generation
{
public:
  explicit Init_NoGoRegionProperties_disable_body_obstacle_generation(::bosdyn_msgs::msg::NoGoRegionProperties & msg)
  : msg_(msg)
  {}
  Init_NoGoRegionProperties_disable_foot_obstacle_inflation disable_body_obstacle_generation(::bosdyn_msgs::msg::NoGoRegionProperties::_disable_body_obstacle_generation_type arg)
  {
    msg_.disable_body_obstacle_generation = std::move(arg);
    return Init_NoGoRegionProperties_disable_foot_obstacle_inflation(msg_);
  }

private:
  ::bosdyn_msgs::msg::NoGoRegionProperties msg_;
};

class Init_NoGoRegionProperties_disable_foot_obstacle_generation
{
public:
  explicit Init_NoGoRegionProperties_disable_foot_obstacle_generation(::bosdyn_msgs::msg::NoGoRegionProperties & msg)
  : msg_(msg)
  {}
  Init_NoGoRegionProperties_disable_body_obstacle_generation disable_foot_obstacle_generation(::bosdyn_msgs::msg::NoGoRegionProperties::_disable_foot_obstacle_generation_type arg)
  {
    msg_.disable_foot_obstacle_generation = std::move(arg);
    return Init_NoGoRegionProperties_disable_body_obstacle_generation(msg_);
  }

private:
  ::bosdyn_msgs::msg::NoGoRegionProperties msg_;
};

class Init_NoGoRegionProperties_region
{
public:
  Init_NoGoRegionProperties_region()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NoGoRegionProperties_disable_foot_obstacle_generation region(::bosdyn_msgs::msg::NoGoRegionProperties::_region_type arg)
  {
    msg_.region = std::move(arg);
    return Init_NoGoRegionProperties_disable_foot_obstacle_generation(msg_);
  }

private:
  ::bosdyn_msgs::msg::NoGoRegionProperties msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::NoGoRegionProperties>()
{
  return bosdyn_msgs::msg::builder::Init_NoGoRegionProperties_region();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__NO_GO_REGION_PROPERTIES__BUILDER_HPP_
