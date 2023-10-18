// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/StreamParams.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__STREAM_PARAMS__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__STREAM_PARAMS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/stream_params__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_StreamParams_exposure
{
public:
  explicit Init_StreamParams_exposure(::bosdyn_msgs::msg::StreamParams & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::StreamParams exposure(::bosdyn_msgs::msg::StreamParams::_exposure_type arg)
  {
    msg_.exposure = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::StreamParams msg_;
};

class Init_StreamParams_awb_is_set
{
public:
  explicit Init_StreamParams_awb_is_set(::bosdyn_msgs::msg::StreamParams & msg)
  : msg_(msg)
  {}
  Init_StreamParams_exposure awb_is_set(::bosdyn_msgs::msg::StreamParams::_awb_is_set_type arg)
  {
    msg_.awb_is_set = std::move(arg);
    return Init_StreamParams_exposure(msg_);
  }

private:
  ::bosdyn_msgs::msg::StreamParams msg_;
};

class Init_StreamParams_awb
{
public:
  explicit Init_StreamParams_awb(::bosdyn_msgs::msg::StreamParams & msg)
  : msg_(msg)
  {}
  Init_StreamParams_awb_is_set awb(::bosdyn_msgs::msg::StreamParams::_awb_type arg)
  {
    msg_.awb = std::move(arg);
    return Init_StreamParams_awb_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::StreamParams msg_;
};

class Init_StreamParams_idrinterval_is_set
{
public:
  explicit Init_StreamParams_idrinterval_is_set(::bosdyn_msgs::msg::StreamParams & msg)
  : msg_(msg)
  {}
  Init_StreamParams_awb idrinterval_is_set(::bosdyn_msgs::msg::StreamParams::_idrinterval_is_set_type arg)
  {
    msg_.idrinterval_is_set = std::move(arg);
    return Init_StreamParams_awb(msg_);
  }

private:
  ::bosdyn_msgs::msg::StreamParams msg_;
};

class Init_StreamParams_idrinterval
{
public:
  explicit Init_StreamParams_idrinterval(::bosdyn_msgs::msg::StreamParams & msg)
  : msg_(msg)
  {}
  Init_StreamParams_idrinterval_is_set idrinterval(::bosdyn_msgs::msg::StreamParams::_idrinterval_type arg)
  {
    msg_.idrinterval = std::move(arg);
    return Init_StreamParams_idrinterval_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::StreamParams msg_;
};

class Init_StreamParams_refreshinterval_is_set
{
public:
  explicit Init_StreamParams_refreshinterval_is_set(::bosdyn_msgs::msg::StreamParams & msg)
  : msg_(msg)
  {}
  Init_StreamParams_idrinterval refreshinterval_is_set(::bosdyn_msgs::msg::StreamParams::_refreshinterval_is_set_type arg)
  {
    msg_.refreshinterval_is_set = std::move(arg);
    return Init_StreamParams_idrinterval(msg_);
  }

private:
  ::bosdyn_msgs::msg::StreamParams msg_;
};

class Init_StreamParams_refreshinterval
{
public:
  explicit Init_StreamParams_refreshinterval(::bosdyn_msgs::msg::StreamParams & msg)
  : msg_(msg)
  {}
  Init_StreamParams_refreshinterval_is_set refreshinterval(::bosdyn_msgs::msg::StreamParams::_refreshinterval_type arg)
  {
    msg_.refreshinterval = std::move(arg);
    return Init_StreamParams_refreshinterval_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::StreamParams msg_;
};

class Init_StreamParams_targetbitrate_is_set
{
public:
  explicit Init_StreamParams_targetbitrate_is_set(::bosdyn_msgs::msg::StreamParams & msg)
  : msg_(msg)
  {}
  Init_StreamParams_refreshinterval targetbitrate_is_set(::bosdyn_msgs::msg::StreamParams::_targetbitrate_is_set_type arg)
  {
    msg_.targetbitrate_is_set = std::move(arg);
    return Init_StreamParams_refreshinterval(msg_);
  }

private:
  ::bosdyn_msgs::msg::StreamParams msg_;
};

class Init_StreamParams_targetbitrate
{
public:
  Init_StreamParams_targetbitrate()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_StreamParams_targetbitrate_is_set targetbitrate(::bosdyn_msgs::msg::StreamParams::_targetbitrate_type arg)
  {
    msg_.targetbitrate = std::move(arg);
    return Init_StreamParams_targetbitrate_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::StreamParams msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::StreamParams>()
{
  return bosdyn_msgs::msg::builder::Init_StreamParams_targetbitrate();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__STREAM_PARAMS__BUILDER_HPP_
