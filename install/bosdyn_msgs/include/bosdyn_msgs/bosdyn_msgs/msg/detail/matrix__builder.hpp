// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/Matrix.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__MATRIX__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__MATRIX__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/matrix__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_Matrix_values
{
public:
  explicit Init_Matrix_values(::bosdyn_msgs::msg::Matrix & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::Matrix values(::bosdyn_msgs::msg::Matrix::_values_type arg)
  {
    msg_.values = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::Matrix msg_;
};

class Init_Matrix_cols
{
public:
  explicit Init_Matrix_cols(::bosdyn_msgs::msg::Matrix & msg)
  : msg_(msg)
  {}
  Init_Matrix_values cols(::bosdyn_msgs::msg::Matrix::_cols_type arg)
  {
    msg_.cols = std::move(arg);
    return Init_Matrix_values(msg_);
  }

private:
  ::bosdyn_msgs::msg::Matrix msg_;
};

class Init_Matrix_rows
{
public:
  Init_Matrix_rows()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Matrix_cols rows(::bosdyn_msgs::msg::Matrix::_rows_type arg)
  {
    msg_.rows = std::move(arg);
    return Init_Matrix_cols(msg_);
  }

private:
  ::bosdyn_msgs::msg::Matrix msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::Matrix>()
{
  return bosdyn_msgs::msg::builder::Init_Matrix_rows();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__MATRIX__BUILDER_HPP_
