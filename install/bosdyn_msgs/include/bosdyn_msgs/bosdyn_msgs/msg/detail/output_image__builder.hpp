// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/OutputImage.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__OUTPUT_IMAGE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__OUTPUT_IMAGE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/output_image__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_OutputImage_alert_data_is_set
{
public:
  explicit Init_OutputImage_alert_data_is_set(::bosdyn_msgs::msg::OutputImage & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::OutputImage alert_data_is_set(::bosdyn_msgs::msg::OutputImage::_alert_data_is_set_type arg)
  {
    msg_.alert_data_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::OutputImage msg_;
};

class Init_OutputImage_alert_data
{
public:
  explicit Init_OutputImage_alert_data(::bosdyn_msgs::msg::OutputImage & msg)
  : msg_(msg)
  {}
  Init_OutputImage_alert_data_is_set alert_data(::bosdyn_msgs::msg::OutputImage::_alert_data_type arg)
  {
    msg_.alert_data = std::move(arg);
    return Init_OutputImage_alert_data_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::OutputImage msg_;
};

class Init_OutputImage_object_in_image
{
public:
  explicit Init_OutputImage_object_in_image(::bosdyn_msgs::msg::OutputImage & msg)
  : msg_(msg)
  {}
  Init_OutputImage_alert_data object_in_image(::bosdyn_msgs::msg::OutputImage::_object_in_image_type arg)
  {
    msg_.object_in_image = std::move(arg);
    return Init_OutputImage_alert_data(msg_);
  }

private:
  ::bosdyn_msgs::msg::OutputImage msg_;
};

class Init_OutputImage_image_response_is_set
{
public:
  explicit Init_OutputImage_image_response_is_set(::bosdyn_msgs::msg::OutputImage & msg)
  : msg_(msg)
  {}
  Init_OutputImage_object_in_image image_response_is_set(::bosdyn_msgs::msg::OutputImage::_image_response_is_set_type arg)
  {
    msg_.image_response_is_set = std::move(arg);
    return Init_OutputImage_object_in_image(msg_);
  }

private:
  ::bosdyn_msgs::msg::OutputImage msg_;
};

class Init_OutputImage_image_response
{
public:
  Init_OutputImage_image_response()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_OutputImage_image_response_is_set image_response(::bosdyn_msgs::msg::OutputImage::_image_response_type arg)
  {
    msg_.image_response = std::move(arg);
    return Init_OutputImage_image_response_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::OutputImage msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::OutputImage>()
{
  return bosdyn_msgs::msg::builder::Init_OutputImage_image_response();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__OUTPUT_IMAGE__BUILDER_HPP_
