// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/LoadCellSpotCheckResultError.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__LOAD_CELL_SPOT_CHECK_RESULT_ERROR__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__LOAD_CELL_SPOT_CHECK_RESULT_ERROR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/load_cell_spot_check_result_error__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_LoadCellSpotCheckResultError_value
{
public:
  Init_LoadCellSpotCheckResultError_value()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::bosdyn_msgs::msg::LoadCellSpotCheckResultError value(::bosdyn_msgs::msg::LoadCellSpotCheckResultError::_value_type arg)
  {
    msg_.value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::LoadCellSpotCheckResultError msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::LoadCellSpotCheckResultError>()
{
  return bosdyn_msgs::msg::builder::Init_LoadCellSpotCheckResultError_value();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__LOAD_CELL_SPOT_CHECK_RESULT_ERROR__BUILDER_HPP_
