// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/MatrixInt32.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__MATRIX_INT32__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__MATRIX_INT32__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/matrix_int32__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_MatrixInt32_values
{
public:
  explicit Init_MatrixInt32_values(::bosdyn_msgs::msg::MatrixInt32 & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::MatrixInt32 values(::bosdyn_msgs::msg::MatrixInt32::_values_type arg)
  {
    msg_.values = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::MatrixInt32 msg_;
};

class Init_MatrixInt32_cols
{
public:
  explicit Init_MatrixInt32_cols(::bosdyn_msgs::msg::MatrixInt32 & msg)
  : msg_(msg)
  {}
  Init_MatrixInt32_values cols(::bosdyn_msgs::msg::MatrixInt32::_cols_type arg)
  {
    msg_.cols = std::move(arg);
    return Init_MatrixInt32_values(msg_);
  }

private:
  ::bosdyn_msgs::msg::MatrixInt32 msg_;
};

class Init_MatrixInt32_rows
{
public:
  Init_MatrixInt32_rows()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MatrixInt32_cols rows(::bosdyn_msgs::msg::MatrixInt32::_rows_type arg)
  {
    msg_.rows = std::move(arg);
    return Init_MatrixInt32_cols(msg_);
  }

private:
  ::bosdyn_msgs::msg::MatrixInt32 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::MatrixInt32>()
{
  return bosdyn_msgs::msg::builder::Init_MatrixInt32_rows();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__MATRIX_INT32__BUILDER_HPP_
