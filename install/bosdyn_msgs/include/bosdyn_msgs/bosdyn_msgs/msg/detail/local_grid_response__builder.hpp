// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/LocalGridResponse.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__LOCAL_GRID_RESPONSE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__LOCAL_GRID_RESPONSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/local_grid_response__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_LocalGridResponse_local_grid_is_set
{
public:
  explicit Init_LocalGridResponse_local_grid_is_set(::bosdyn_msgs::msg::LocalGridResponse & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::LocalGridResponse local_grid_is_set(::bosdyn_msgs::msg::LocalGridResponse::_local_grid_is_set_type arg)
  {
    msg_.local_grid_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::LocalGridResponse msg_;
};

class Init_LocalGridResponse_local_grid
{
public:
  explicit Init_LocalGridResponse_local_grid(::bosdyn_msgs::msg::LocalGridResponse & msg)
  : msg_(msg)
  {}
  Init_LocalGridResponse_local_grid_is_set local_grid(::bosdyn_msgs::msg::LocalGridResponse::_local_grid_type arg)
  {
    msg_.local_grid = std::move(arg);
    return Init_LocalGridResponse_local_grid_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::LocalGridResponse msg_;
};

class Init_LocalGridResponse_status
{
public:
  explicit Init_LocalGridResponse_status(::bosdyn_msgs::msg::LocalGridResponse & msg)
  : msg_(msg)
  {}
  Init_LocalGridResponse_local_grid status(::bosdyn_msgs::msg::LocalGridResponse::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_LocalGridResponse_local_grid(msg_);
  }

private:
  ::bosdyn_msgs::msg::LocalGridResponse msg_;
};

class Init_LocalGridResponse_local_grid_type_name
{
public:
  Init_LocalGridResponse_local_grid_type_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LocalGridResponse_status local_grid_type_name(::bosdyn_msgs::msg::LocalGridResponse::_local_grid_type_name_type arg)
  {
    msg_.local_grid_type_name = std::move(arg);
    return Init_LocalGridResponse_status(msg_);
  }

private:
  ::bosdyn_msgs::msg::LocalGridResponse msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::LocalGridResponse>()
{
  return bosdyn_msgs::msg::builder::Init_LocalGridResponse_local_grid_type_name();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__LOCAL_GRID_RESPONSE__BUILDER_HPP_
