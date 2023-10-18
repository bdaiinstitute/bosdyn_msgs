// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/EstopEndpoint.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ESTOP_ENDPOINT__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__ESTOP_ENDPOINT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/estop_endpoint__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_EstopEndpoint_cut_power_timeout_is_set
{
public:
  explicit Init_EstopEndpoint_cut_power_timeout_is_set(::bosdyn_msgs::msg::EstopEndpoint & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::EstopEndpoint cut_power_timeout_is_set(::bosdyn_msgs::msg::EstopEndpoint::_cut_power_timeout_is_set_type arg)
  {
    msg_.cut_power_timeout_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::EstopEndpoint msg_;
};

class Init_EstopEndpoint_cut_power_timeout
{
public:
  explicit Init_EstopEndpoint_cut_power_timeout(::bosdyn_msgs::msg::EstopEndpoint & msg)
  : msg_(msg)
  {}
  Init_EstopEndpoint_cut_power_timeout_is_set cut_power_timeout(::bosdyn_msgs::msg::EstopEndpoint::_cut_power_timeout_type arg)
  {
    msg_.cut_power_timeout = std::move(arg);
    return Init_EstopEndpoint_cut_power_timeout_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::EstopEndpoint msg_;
};

class Init_EstopEndpoint_timeout_is_set
{
public:
  explicit Init_EstopEndpoint_timeout_is_set(::bosdyn_msgs::msg::EstopEndpoint & msg)
  : msg_(msg)
  {}
  Init_EstopEndpoint_cut_power_timeout timeout_is_set(::bosdyn_msgs::msg::EstopEndpoint::_timeout_is_set_type arg)
  {
    msg_.timeout_is_set = std::move(arg);
    return Init_EstopEndpoint_cut_power_timeout(msg_);
  }

private:
  ::bosdyn_msgs::msg::EstopEndpoint msg_;
};

class Init_EstopEndpoint_timeout
{
public:
  explicit Init_EstopEndpoint_timeout(::bosdyn_msgs::msg::EstopEndpoint & msg)
  : msg_(msg)
  {}
  Init_EstopEndpoint_timeout_is_set timeout(::bosdyn_msgs::msg::EstopEndpoint::_timeout_type arg)
  {
    msg_.timeout = std::move(arg);
    return Init_EstopEndpoint_timeout_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::EstopEndpoint msg_;
};

class Init_EstopEndpoint_unique_id
{
public:
  explicit Init_EstopEndpoint_unique_id(::bosdyn_msgs::msg::EstopEndpoint & msg)
  : msg_(msg)
  {}
  Init_EstopEndpoint_timeout unique_id(::bosdyn_msgs::msg::EstopEndpoint::_unique_id_type arg)
  {
    msg_.unique_id = std::move(arg);
    return Init_EstopEndpoint_timeout(msg_);
  }

private:
  ::bosdyn_msgs::msg::EstopEndpoint msg_;
};

class Init_EstopEndpoint_name
{
public:
  explicit Init_EstopEndpoint_name(::bosdyn_msgs::msg::EstopEndpoint & msg)
  : msg_(msg)
  {}
  Init_EstopEndpoint_unique_id name(::bosdyn_msgs::msg::EstopEndpoint::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_EstopEndpoint_unique_id(msg_);
  }

private:
  ::bosdyn_msgs::msg::EstopEndpoint msg_;
};

class Init_EstopEndpoint_role
{
public:
  Init_EstopEndpoint_role()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EstopEndpoint_name role(::bosdyn_msgs::msg::EstopEndpoint::_role_type arg)
  {
    msg_.role = std::move(arg);
    return Init_EstopEndpoint_name(msg_);
  }

private:
  ::bosdyn_msgs::msg::EstopEndpoint msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::EstopEndpoint>()
{
  return bosdyn_msgs::msg::builder::Init_EstopEndpoint_role();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__ESTOP_ENDPOINT__BUILDER_HPP_
