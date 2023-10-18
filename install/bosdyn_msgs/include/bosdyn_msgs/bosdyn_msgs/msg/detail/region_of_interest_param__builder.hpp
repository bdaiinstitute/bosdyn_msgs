// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/RegionOfInterestParam.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__REGION_OF_INTEREST_PARAM__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__REGION_OF_INTEREST_PARAM__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/region_of_interest_param__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_RegionOfInterestParam_image_rows
{
public:
  explicit Init_RegionOfInterestParam_image_rows(::bosdyn_msgs::msg::RegionOfInterestParam & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::RegionOfInterestParam image_rows(::bosdyn_msgs::msg::RegionOfInterestParam::_image_rows_type arg)
  {
    msg_.image_rows = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::RegionOfInterestParam msg_;
};

class Init_RegionOfInterestParam_image_cols
{
public:
  explicit Init_RegionOfInterestParam_image_cols(::bosdyn_msgs::msg::RegionOfInterestParam & msg)
  : msg_(msg)
  {}
  Init_RegionOfInterestParam_image_rows image_cols(::bosdyn_msgs::msg::RegionOfInterestParam::_image_cols_type arg)
  {
    msg_.image_cols = std::move(arg);
    return Init_RegionOfInterestParam_image_rows(msg_);
  }

private:
  ::bosdyn_msgs::msg::RegionOfInterestParam msg_;
};

class Init_RegionOfInterestParam_service_and_source_is_set
{
public:
  explicit Init_RegionOfInterestParam_service_and_source_is_set(::bosdyn_msgs::msg::RegionOfInterestParam & msg)
  : msg_(msg)
  {}
  Init_RegionOfInterestParam_image_cols service_and_source_is_set(::bosdyn_msgs::msg::RegionOfInterestParam::_service_and_source_is_set_type arg)
  {
    msg_.service_and_source_is_set = std::move(arg);
    return Init_RegionOfInterestParam_image_cols(msg_);
  }

private:
  ::bosdyn_msgs::msg::RegionOfInterestParam msg_;
};

class Init_RegionOfInterestParam_service_and_source
{
public:
  explicit Init_RegionOfInterestParam_service_and_source(::bosdyn_msgs::msg::RegionOfInterestParam & msg)
  : msg_(msg)
  {}
  Init_RegionOfInterestParam_service_and_source_is_set service_and_source(::bosdyn_msgs::msg::RegionOfInterestParam::_service_and_source_type arg)
  {
    msg_.service_and_source = std::move(arg);
    return Init_RegionOfInterestParam_service_and_source_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::RegionOfInterestParam msg_;
};

class Init_RegionOfInterestParam_area_is_set
{
public:
  explicit Init_RegionOfInterestParam_area_is_set(::bosdyn_msgs::msg::RegionOfInterestParam & msg)
  : msg_(msg)
  {}
  Init_RegionOfInterestParam_service_and_source area_is_set(::bosdyn_msgs::msg::RegionOfInterestParam::_area_is_set_type arg)
  {
    msg_.area_is_set = std::move(arg);
    return Init_RegionOfInterestParam_service_and_source(msg_);
  }

private:
  ::bosdyn_msgs::msg::RegionOfInterestParam msg_;
};

class Init_RegionOfInterestParam_area
{
public:
  Init_RegionOfInterestParam_area()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RegionOfInterestParam_area_is_set area(::bosdyn_msgs::msg::RegionOfInterestParam::_area_type arg)
  {
    msg_.area = std::move(arg);
    return Init_RegionOfInterestParam_area_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::RegionOfInterestParam msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::RegionOfInterestParam>()
{
  return bosdyn_msgs::msg::builder::Init_RegionOfInterestParam_area();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__REGION_OF_INTEREST_PARAM__BUILDER_HPP_
