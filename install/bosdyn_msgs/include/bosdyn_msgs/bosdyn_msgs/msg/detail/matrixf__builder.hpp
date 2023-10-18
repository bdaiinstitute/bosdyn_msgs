// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/Matrixf.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__MATRIXF__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__MATRIXF__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/matrixf__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_Matrixf_values
{
public:
  explicit Init_Matrixf_values(::bosdyn_msgs::msg::Matrixf & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::Matrixf values(::bosdyn_msgs::msg::Matrixf::_values_type arg)
  {
    msg_.values = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::Matrixf msg_;
};

class Init_Matrixf_cols
{
public:
  explicit Init_Matrixf_cols(::bosdyn_msgs::msg::Matrixf & msg)
  : msg_(msg)
  {}
  Init_Matrixf_values cols(::bosdyn_msgs::msg::Matrixf::_cols_type arg)
  {
    msg_.cols = std::move(arg);
    return Init_Matrixf_values(msg_);
  }

private:
  ::bosdyn_msgs::msg::Matrixf msg_;
};

class Init_Matrixf_rows
{
public:
  Init_Matrixf_rows()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Matrixf_cols rows(::bosdyn_msgs::msg::Matrixf::_rows_type arg)
  {
    msg_.rows = std::move(arg);
    return Init_Matrixf_cols(msg_);
  }

private:
  ::bosdyn_msgs::msg::Matrixf msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::Matrixf>()
{
  return bosdyn_msgs::msg::builder::Init_Matrixf_rows();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__MATRIXF__BUILDER_HPP_
