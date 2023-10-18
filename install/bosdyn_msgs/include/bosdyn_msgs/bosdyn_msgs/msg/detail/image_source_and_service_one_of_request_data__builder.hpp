// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/ImageSourceAndServiceOneOfRequestData.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__IMAGE_SOURCE_AND_SERVICE_ONE_OF_REQUEST_DATA__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__IMAGE_SOURCE_AND_SERVICE_ONE_OF_REQUEST_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/image_source_and_service_one_of_request_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_ImageSourceAndServiceOneOfRequestData_request_data_choice
{
public:
  explicit Init_ImageSourceAndServiceOneOfRequestData_request_data_choice(::bosdyn_msgs::msg::ImageSourceAndServiceOneOfRequestData & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::ImageSourceAndServiceOneOfRequestData request_data_choice(::bosdyn_msgs::msg::ImageSourceAndServiceOneOfRequestData::_request_data_choice_type arg)
  {
    msg_.request_data_choice = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::ImageSourceAndServiceOneOfRequestData msg_;
};

class Init_ImageSourceAndServiceOneOfRequestData_image_request
{
public:
  explicit Init_ImageSourceAndServiceOneOfRequestData_image_request(::bosdyn_msgs::msg::ImageSourceAndServiceOneOfRequestData & msg)
  : msg_(msg)
  {}
  Init_ImageSourceAndServiceOneOfRequestData_request_data_choice image_request(::bosdyn_msgs::msg::ImageSourceAndServiceOneOfRequestData::_image_request_type arg)
  {
    msg_.image_request = std::move(arg);
    return Init_ImageSourceAndServiceOneOfRequestData_request_data_choice(msg_);
  }

private:
  ::bosdyn_msgs::msg::ImageSourceAndServiceOneOfRequestData msg_;
};

class Init_ImageSourceAndServiceOneOfRequestData_image_source
{
public:
  Init_ImageSourceAndServiceOneOfRequestData_image_source()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ImageSourceAndServiceOneOfRequestData_image_request image_source(::bosdyn_msgs::msg::ImageSourceAndServiceOneOfRequestData::_image_source_type arg)
  {
    msg_.image_source = std::move(arg);
    return Init_ImageSourceAndServiceOneOfRequestData_image_request(msg_);
  }

private:
  ::bosdyn_msgs::msg::ImageSourceAndServiceOneOfRequestData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::ImageSourceAndServiceOneOfRequestData>()
{
  return bosdyn_msgs::msg::builder::Init_ImageSourceAndServiceOneOfRequestData_image_source();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__IMAGE_SOURCE_AND_SERVICE_ONE_OF_REQUEST_DATA__BUILDER_HPP_
