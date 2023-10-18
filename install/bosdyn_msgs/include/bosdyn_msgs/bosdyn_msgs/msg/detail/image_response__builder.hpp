// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/ImageResponse.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__IMAGE_RESPONSE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__IMAGE_RESPONSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/image_response__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_ImageResponse_custom_param_error_is_set
{
public:
  explicit Init_ImageResponse_custom_param_error_is_set(::bosdyn_msgs::msg::ImageResponse & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::ImageResponse custom_param_error_is_set(::bosdyn_msgs::msg::ImageResponse::_custom_param_error_is_set_type arg)
  {
    msg_.custom_param_error_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::ImageResponse msg_;
};

class Init_ImageResponse_custom_param_error
{
public:
  explicit Init_ImageResponse_custom_param_error(::bosdyn_msgs::msg::ImageResponse & msg)
  : msg_(msg)
  {}
  Init_ImageResponse_custom_param_error_is_set custom_param_error(::bosdyn_msgs::msg::ImageResponse::_custom_param_error_type arg)
  {
    msg_.custom_param_error = std::move(arg);
    return Init_ImageResponse_custom_param_error_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ImageResponse msg_;
};

class Init_ImageResponse_status
{
public:
  explicit Init_ImageResponse_status(::bosdyn_msgs::msg::ImageResponse & msg)
  : msg_(msg)
  {}
  Init_ImageResponse_custom_param_error status(::bosdyn_msgs::msg::ImageResponse::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_ImageResponse_custom_param_error(msg_);
  }

private:
  ::bosdyn_msgs::msg::ImageResponse msg_;
};

class Init_ImageResponse_source_is_set
{
public:
  explicit Init_ImageResponse_source_is_set(::bosdyn_msgs::msg::ImageResponse & msg)
  : msg_(msg)
  {}
  Init_ImageResponse_status source_is_set(::bosdyn_msgs::msg::ImageResponse::_source_is_set_type arg)
  {
    msg_.source_is_set = std::move(arg);
    return Init_ImageResponse_status(msg_);
  }

private:
  ::bosdyn_msgs::msg::ImageResponse msg_;
};

class Init_ImageResponse_source
{
public:
  explicit Init_ImageResponse_source(::bosdyn_msgs::msg::ImageResponse & msg)
  : msg_(msg)
  {}
  Init_ImageResponse_source_is_set source(::bosdyn_msgs::msg::ImageResponse::_source_type arg)
  {
    msg_.source = std::move(arg);
    return Init_ImageResponse_source_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ImageResponse msg_;
};

class Init_ImageResponse_shot_is_set
{
public:
  explicit Init_ImageResponse_shot_is_set(::bosdyn_msgs::msg::ImageResponse & msg)
  : msg_(msg)
  {}
  Init_ImageResponse_source shot_is_set(::bosdyn_msgs::msg::ImageResponse::_shot_is_set_type arg)
  {
    msg_.shot_is_set = std::move(arg);
    return Init_ImageResponse_source(msg_);
  }

private:
  ::bosdyn_msgs::msg::ImageResponse msg_;
};

class Init_ImageResponse_shot
{
public:
  Init_ImageResponse_shot()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ImageResponse_shot_is_set shot(::bosdyn_msgs::msg::ImageResponse::_shot_type arg)
  {
    msg_.shot = std::move(arg);
    return Init_ImageResponse_shot_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ImageResponse msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::ImageResponse>()
{
  return bosdyn_msgs::msg::builder::Init_ImageResponse_shot();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__IMAGE_RESPONSE__BUILDER_HPP_
