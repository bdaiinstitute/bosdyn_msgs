// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/LoadCellSpotCheckResult.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__LOAD_CELL_SPOT_CHECK_RESULT__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__LOAD_CELL_SPOT_CHECK_RESULT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/load_cell_spot_check_result__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_LoadCellSpotCheckResult_old_zero
{
public:
  explicit Init_LoadCellSpotCheckResult_old_zero(::bosdyn_msgs::msg::LoadCellSpotCheckResult & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::LoadCellSpotCheckResult old_zero(::bosdyn_msgs::msg::LoadCellSpotCheckResult::_old_zero_type arg)
  {
    msg_.old_zero = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::LoadCellSpotCheckResult msg_;
};

class Init_LoadCellSpotCheckResult_zero
{
public:
  explicit Init_LoadCellSpotCheckResult_zero(::bosdyn_msgs::msg::LoadCellSpotCheckResult & msg)
  : msg_(msg)
  {}
  Init_LoadCellSpotCheckResult_old_zero zero(::bosdyn_msgs::msg::LoadCellSpotCheckResult::_zero_type arg)
  {
    msg_.zero = std::move(arg);
    return Init_LoadCellSpotCheckResult_old_zero(msg_);
  }

private:
  ::bosdyn_msgs::msg::LoadCellSpotCheckResult msg_;
};

class Init_LoadCellSpotCheckResult_error
{
public:
  Init_LoadCellSpotCheckResult_error()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LoadCellSpotCheckResult_zero error(::bosdyn_msgs::msg::LoadCellSpotCheckResult::_error_type arg)
  {
    msg_.error = std::move(arg);
    return Init_LoadCellSpotCheckResult_zero(msg_);
  }

private:
  ::bosdyn_msgs::msg::LoadCellSpotCheckResult msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::LoadCellSpotCheckResult>()
{
  return bosdyn_msgs::msg::builder::Init_LoadCellSpotCheckResult_error();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__LOAD_CELL_SPOT_CHECK_RESULT__BUILDER_HPP_
