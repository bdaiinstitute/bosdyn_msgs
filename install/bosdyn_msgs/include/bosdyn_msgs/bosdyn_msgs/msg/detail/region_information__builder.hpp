// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/RegionInformation.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__REGION_INFORMATION__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__REGION_INFORMATION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/region_information__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_RegionInformation_route_is_set
{
public:
  explicit Init_RegionInformation_route_is_set(::bosdyn_msgs::msg::RegionInformation & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::RegionInformation route_is_set(::bosdyn_msgs::msg::RegionInformation::_route_is_set_type arg)
  {
    msg_.route_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::RegionInformation msg_;
};

class Init_RegionInformation_route
{
public:
  explicit Init_RegionInformation_route(::bosdyn_msgs::msg::RegionInformation & msg)
  : msg_(msg)
  {}
  Init_RegionInformation_route_is_set route(::bosdyn_msgs::msg::RegionInformation::_route_type arg)
  {
    msg_.route = std::move(arg);
    return Init_RegionInformation_route_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::RegionInformation msg_;
};

class Init_RegionInformation_description
{
public:
  explicit Init_RegionInformation_description(::bosdyn_msgs::msg::RegionInformation & msg)
  : msg_(msg)
  {}
  Init_RegionInformation_route description(::bosdyn_msgs::msg::RegionInformation::_description_type arg)
  {
    msg_.description = std::move(arg);
    return Init_RegionInformation_route(msg_);
  }

private:
  ::bosdyn_msgs::msg::RegionInformation msg_;
};

class Init_RegionInformation_region_id
{
public:
  Init_RegionInformation_region_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RegionInformation_description region_id(::bosdyn_msgs::msg::RegionInformation::_region_id_type arg)
  {
    msg_.region_id = std::move(arg);
    return Init_RegionInformation_description(msg_);
  }

private:
  ::bosdyn_msgs::msg::RegionInformation msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::RegionInformation>()
{
  return bosdyn_msgs::msg::builder::Init_RegionInformation_region_id();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__REGION_INFORMATION__BUILDER_HPP_
