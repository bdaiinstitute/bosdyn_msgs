// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/Logpoint.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__LOGPOINT__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__LOGPOINT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/logpoint__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_Logpoint_calibration
{
public:
  explicit Init_Logpoint_calibration(::bosdyn_msgs::msg::Logpoint & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::Logpoint calibration(::bosdyn_msgs::msg::Logpoint::_calibration_type arg)
  {
    msg_.calibration = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::Logpoint msg_;
};

class Init_Logpoint_image_params_is_set
{
public:
  explicit Init_Logpoint_image_params_is_set(::bosdyn_msgs::msg::Logpoint & msg)
  : msg_(msg)
  {}
  Init_Logpoint_calibration image_params_is_set(::bosdyn_msgs::msg::Logpoint::_image_params_is_set_type arg)
  {
    msg_.image_params_is_set = std::move(arg);
    return Init_Logpoint_calibration(msg_);
  }

private:
  ::bosdyn_msgs::msg::Logpoint msg_;
};

class Init_Logpoint_image_params
{
public:
  explicit Init_Logpoint_image_params(::bosdyn_msgs::msg::Logpoint & msg)
  : msg_(msg)
  {}
  Init_Logpoint_image_params_is_set image_params(::bosdyn_msgs::msg::Logpoint::_image_params_type arg)
  {
    msg_.image_params = std::move(arg);
    return Init_Logpoint_image_params_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::Logpoint msg_;
};

class Init_Logpoint_timestamp_is_set
{
public:
  explicit Init_Logpoint_timestamp_is_set(::bosdyn_msgs::msg::Logpoint & msg)
  : msg_(msg)
  {}
  Init_Logpoint_image_params timestamp_is_set(::bosdyn_msgs::msg::Logpoint::_timestamp_is_set_type arg)
  {
    msg_.timestamp_is_set = std::move(arg);
    return Init_Logpoint_image_params(msg_);
  }

private:
  ::bosdyn_msgs::msg::Logpoint msg_;
};

class Init_Logpoint_timestamp
{
public:
  explicit Init_Logpoint_timestamp(::bosdyn_msgs::msg::Logpoint & msg)
  : msg_(msg)
  {}
  Init_Logpoint_timestamp_is_set timestamp(::bosdyn_msgs::msg::Logpoint::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_Logpoint_timestamp_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::Logpoint msg_;
};

class Init_Logpoint_tag
{
public:
  explicit Init_Logpoint_tag(::bosdyn_msgs::msg::Logpoint & msg)
  : msg_(msg)
  {}
  Init_Logpoint_timestamp tag(::bosdyn_msgs::msg::Logpoint::_tag_type arg)
  {
    msg_.tag = std::move(arg);
    return Init_Logpoint_timestamp(msg_);
  }

private:
  ::bosdyn_msgs::msg::Logpoint msg_;
};

class Init_Logpoint_queue_status
{
public:
  explicit Init_Logpoint_queue_status(::bosdyn_msgs::msg::Logpoint & msg)
  : msg_(msg)
  {}
  Init_Logpoint_tag queue_status(::bosdyn_msgs::msg::Logpoint::_queue_status_type arg)
  {
    msg_.queue_status = std::move(arg);
    return Init_Logpoint_tag(msg_);
  }

private:
  ::bosdyn_msgs::msg::Logpoint msg_;
};

class Init_Logpoint_status
{
public:
  explicit Init_Logpoint_status(::bosdyn_msgs::msg::Logpoint & msg)
  : msg_(msg)
  {}
  Init_Logpoint_queue_status status(::bosdyn_msgs::msg::Logpoint::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_Logpoint_queue_status(msg_);
  }

private:
  ::bosdyn_msgs::msg::Logpoint msg_;
};

class Init_Logpoint_type
{
public:
  explicit Init_Logpoint_type(::bosdyn_msgs::msg::Logpoint & msg)
  : msg_(msg)
  {}
  Init_Logpoint_status type(::bosdyn_msgs::msg::Logpoint::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_Logpoint_status(msg_);
  }

private:
  ::bosdyn_msgs::msg::Logpoint msg_;
};

class Init_Logpoint_name
{
public:
  Init_Logpoint_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Logpoint_type name(::bosdyn_msgs::msg::Logpoint::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_Logpoint_type(msg_);
  }

private:
  ::bosdyn_msgs::msg::Logpoint msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::Logpoint>()
{
  return bosdyn_msgs::msg::builder::Init_Logpoint_name();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__LOGPOINT__BUILDER_HPP_
