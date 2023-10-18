// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/ImageSourceAndService.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__IMAGE_SOURCE_AND_SERVICE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__IMAGE_SOURCE_AND_SERVICE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/image_source_and_service__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_ImageSourceAndService_image_service
{
public:
  explicit Init_ImageSourceAndService_image_service(::bosdyn_msgs::msg::ImageSourceAndService & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::ImageSourceAndService image_service(::bosdyn_msgs::msg::ImageSourceAndService::_image_service_type arg)
  {
    msg_.image_service = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::ImageSourceAndService msg_;
};

class Init_ImageSourceAndService_request_data
{
public:
  Init_ImageSourceAndService_request_data()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ImageSourceAndService_image_service request_data(::bosdyn_msgs::msg::ImageSourceAndService::_request_data_type arg)
  {
    msg_.request_data = std::move(arg);
    return Init_ImageSourceAndService_image_service(msg_);
  }

private:
  ::bosdyn_msgs::msg::ImageSourceAndService msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::ImageSourceAndService>()
{
  return bosdyn_msgs::msg::builder::Init_ImageSourceAndService_request_data();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__IMAGE_SOURCE_AND_SERVICE__BUILDER_HPP_
