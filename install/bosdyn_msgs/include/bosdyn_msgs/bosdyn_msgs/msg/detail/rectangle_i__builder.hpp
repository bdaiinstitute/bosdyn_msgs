// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/RectangleI.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__RECTANGLE_I__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__RECTANGLE_I__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/rectangle_i__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_RectangleI_rows
{
public:
  explicit Init_RectangleI_rows(::bosdyn_msgs::msg::RectangleI & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::RectangleI rows(::bosdyn_msgs::msg::RectangleI::_rows_type arg)
  {
    msg_.rows = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::RectangleI msg_;
};

class Init_RectangleI_cols
{
public:
  explicit Init_RectangleI_cols(::bosdyn_msgs::msg::RectangleI & msg)
  : msg_(msg)
  {}
  Init_RectangleI_rows cols(::bosdyn_msgs::msg::RectangleI::_cols_type arg)
  {
    msg_.cols = std::move(arg);
    return Init_RectangleI_rows(msg_);
  }

private:
  ::bosdyn_msgs::msg::RectangleI msg_;
};

class Init_RectangleI_y
{
public:
  explicit Init_RectangleI_y(::bosdyn_msgs::msg::RectangleI & msg)
  : msg_(msg)
  {}
  Init_RectangleI_cols y(::bosdyn_msgs::msg::RectangleI::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_RectangleI_cols(msg_);
  }

private:
  ::bosdyn_msgs::msg::RectangleI msg_;
};

class Init_RectangleI_x
{
public:
  Init_RectangleI_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RectangleI_y x(::bosdyn_msgs::msg::RectangleI::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_RectangleI_y(msg_);
  }

private:
  ::bosdyn_msgs::msg::RectangleI msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::RectangleI>()
{
  return bosdyn_msgs::msg::builder::Init_RectangleI_x();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__RECTANGLE_I__BUILDER_HPP_
