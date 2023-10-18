// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/NetworkComputeResponse.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__NETWORK_COMPUTE_RESPONSE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__NETWORK_COMPUTE_RESPONSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/network_compute_response__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_NetworkComputeResponse_output_images
{
public:
  explicit Init_NetworkComputeResponse_output_images(::bosdyn_msgs::msg::NetworkComputeResponse & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::NetworkComputeResponse output_images(::bosdyn_msgs::msg::NetworkComputeResponse::_output_images_type arg)
  {
    msg_.output_images = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::NetworkComputeResponse msg_;
};

class Init_NetworkComputeResponse_custom_param_error_is_set
{
public:
  explicit Init_NetworkComputeResponse_custom_param_error_is_set(::bosdyn_msgs::msg::NetworkComputeResponse & msg)
  : msg_(msg)
  {}
  Init_NetworkComputeResponse_output_images custom_param_error_is_set(::bosdyn_msgs::msg::NetworkComputeResponse::_custom_param_error_is_set_type arg)
  {
    msg_.custom_param_error_is_set = std::move(arg);
    return Init_NetworkComputeResponse_output_images(msg_);
  }

private:
  ::bosdyn_msgs::msg::NetworkComputeResponse msg_;
};

class Init_NetworkComputeResponse_custom_param_error
{
public:
  explicit Init_NetworkComputeResponse_custom_param_error(::bosdyn_msgs::msg::NetworkComputeResponse & msg)
  : msg_(msg)
  {}
  Init_NetworkComputeResponse_custom_param_error_is_set custom_param_error(::bosdyn_msgs::msg::NetworkComputeResponse::_custom_param_error_type arg)
  {
    msg_.custom_param_error = std::move(arg);
    return Init_NetworkComputeResponse_custom_param_error_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::NetworkComputeResponse msg_;
};

class Init_NetworkComputeResponse_status
{
public:
  explicit Init_NetworkComputeResponse_status(::bosdyn_msgs::msg::NetworkComputeResponse & msg)
  : msg_(msg)
  {}
  Init_NetworkComputeResponse_custom_param_error status(::bosdyn_msgs::msg::NetworkComputeResponse::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_NetworkComputeResponse_custom_param_error(msg_);
  }

private:
  ::bosdyn_msgs::msg::NetworkComputeResponse msg_;
};

class Init_NetworkComputeResponse_image_responses
{
public:
  explicit Init_NetworkComputeResponse_image_responses(::bosdyn_msgs::msg::NetworkComputeResponse & msg)
  : msg_(msg)
  {}
  Init_NetworkComputeResponse_status image_responses(::bosdyn_msgs::msg::NetworkComputeResponse::_image_responses_type arg)
  {
    msg_.image_responses = std::move(arg);
    return Init_NetworkComputeResponse_status(msg_);
  }

private:
  ::bosdyn_msgs::msg::NetworkComputeResponse msg_;
};

class Init_NetworkComputeResponse_object_in_image
{
public:
  explicit Init_NetworkComputeResponse_object_in_image(::bosdyn_msgs::msg::NetworkComputeResponse & msg)
  : msg_(msg)
  {}
  Init_NetworkComputeResponse_image_responses object_in_image(::bosdyn_msgs::msg::NetworkComputeResponse::_object_in_image_type arg)
  {
    msg_.object_in_image = std::move(arg);
    return Init_NetworkComputeResponse_image_responses(msg_);
  }

private:
  ::bosdyn_msgs::msg::NetworkComputeResponse msg_;
};

class Init_NetworkComputeResponse_header_is_set
{
public:
  explicit Init_NetworkComputeResponse_header_is_set(::bosdyn_msgs::msg::NetworkComputeResponse & msg)
  : msg_(msg)
  {}
  Init_NetworkComputeResponse_object_in_image header_is_set(::bosdyn_msgs::msg::NetworkComputeResponse::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_NetworkComputeResponse_object_in_image(msg_);
  }

private:
  ::bosdyn_msgs::msg::NetworkComputeResponse msg_;
};

class Init_NetworkComputeResponse_header
{
public:
  Init_NetworkComputeResponse_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NetworkComputeResponse_header_is_set header(::bosdyn_msgs::msg::NetworkComputeResponse::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_NetworkComputeResponse_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::NetworkComputeResponse msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::NetworkComputeResponse>()
{
  return bosdyn_msgs::msg::builder::Init_NetworkComputeResponse_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__NETWORK_COMPUTE_RESPONSE__BUILDER_HPP_
