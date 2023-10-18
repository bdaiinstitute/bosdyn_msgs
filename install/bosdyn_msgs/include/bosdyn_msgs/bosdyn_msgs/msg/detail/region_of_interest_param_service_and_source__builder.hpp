// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/RegionOfInterestParamServiceAndSource.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__REGION_OF_INTEREST_PARAM_SERVICE_AND_SOURCE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__REGION_OF_INTEREST_PARAM_SERVICE_AND_SOURCE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/region_of_interest_param_service_and_source__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_RegionOfInterestParamServiceAndSource_source
{
public:
  explicit Init_RegionOfInterestParamServiceAndSource_source(::bosdyn_msgs::msg::RegionOfInterestParamServiceAndSource & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::RegionOfInterestParamServiceAndSource source(::bosdyn_msgs::msg::RegionOfInterestParamServiceAndSource::_source_type arg)
  {
    msg_.source = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::RegionOfInterestParamServiceAndSource msg_;
};

class Init_RegionOfInterestParamServiceAndSource_service
{
public:
  Init_RegionOfInterestParamServiceAndSource_service()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RegionOfInterestParamServiceAndSource_source service(::bosdyn_msgs::msg::RegionOfInterestParamServiceAndSource::_service_type arg)
  {
    msg_.service = std::move(arg);
    return Init_RegionOfInterestParamServiceAndSource_source(msg_);
  }

private:
  ::bosdyn_msgs::msg::RegionOfInterestParamServiceAndSource msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::RegionOfInterestParamServiceAndSource>()
{
  return bosdyn_msgs::msg::builder::Init_RegionOfInterestParamServiceAndSource_service();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__REGION_OF_INTEREST_PARAM_SERVICE_AND_SOURCE__BUILDER_HPP_
