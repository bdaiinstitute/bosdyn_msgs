// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/RegionOfInterestParamSpec.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__REGION_OF_INTEREST_PARAM_SPEC__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__REGION_OF_INTEREST_PARAM_SPEC__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/region_of_interest_param_spec__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_RegionOfInterestParamSpec_allows_rectangle
{
public:
  explicit Init_RegionOfInterestParamSpec_allows_rectangle(::bosdyn_msgs::msg::RegionOfInterestParamSpec & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::RegionOfInterestParamSpec allows_rectangle(::bosdyn_msgs::msg::RegionOfInterestParamSpec::_allows_rectangle_type arg)
  {
    msg_.allows_rectangle = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::RegionOfInterestParamSpec msg_;
};

class Init_RegionOfInterestParamSpec_default_area_is_set
{
public:
  explicit Init_RegionOfInterestParamSpec_default_area_is_set(::bosdyn_msgs::msg::RegionOfInterestParamSpec & msg)
  : msg_(msg)
  {}
  Init_RegionOfInterestParamSpec_allows_rectangle default_area_is_set(::bosdyn_msgs::msg::RegionOfInterestParamSpec::_default_area_is_set_type arg)
  {
    msg_.default_area_is_set = std::move(arg);
    return Init_RegionOfInterestParamSpec_allows_rectangle(msg_);
  }

private:
  ::bosdyn_msgs::msg::RegionOfInterestParamSpec msg_;
};

class Init_RegionOfInterestParamSpec_default_area
{
public:
  explicit Init_RegionOfInterestParamSpec_default_area(::bosdyn_msgs::msg::RegionOfInterestParamSpec & msg)
  : msg_(msg)
  {}
  Init_RegionOfInterestParamSpec_default_area_is_set default_area(::bosdyn_msgs::msg::RegionOfInterestParamSpec::_default_area_type arg)
  {
    msg_.default_area = std::move(arg);
    return Init_RegionOfInterestParamSpec_default_area_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::RegionOfInterestParamSpec msg_;
};

class Init_RegionOfInterestParamSpec_service_and_source_is_set
{
public:
  explicit Init_RegionOfInterestParamSpec_service_and_source_is_set(::bosdyn_msgs::msg::RegionOfInterestParamSpec & msg)
  : msg_(msg)
  {}
  Init_RegionOfInterestParamSpec_default_area service_and_source_is_set(::bosdyn_msgs::msg::RegionOfInterestParamSpec::_service_and_source_is_set_type arg)
  {
    msg_.service_and_source_is_set = std::move(arg);
    return Init_RegionOfInterestParamSpec_default_area(msg_);
  }

private:
  ::bosdyn_msgs::msg::RegionOfInterestParamSpec msg_;
};

class Init_RegionOfInterestParamSpec_service_and_source
{
public:
  Init_RegionOfInterestParamSpec_service_and_source()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RegionOfInterestParamSpec_service_and_source_is_set service_and_source(::bosdyn_msgs::msg::RegionOfInterestParamSpec::_service_and_source_type arg)
  {
    msg_.service_and_source = std::move(arg);
    return Init_RegionOfInterestParamSpec_service_and_source_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::RegionOfInterestParamSpec msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::RegionOfInterestParamSpec>()
{
  return bosdyn_msgs::msg::builder::Init_RegionOfInterestParamSpec_service_and_source();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__REGION_OF_INTEREST_PARAM_SPEC__BUILDER_HPP_
