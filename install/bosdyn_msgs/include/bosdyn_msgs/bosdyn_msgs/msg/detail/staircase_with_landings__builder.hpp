// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/StaircaseWithLandings.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__STAIRCASE_WITH_LANDINGS__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__STAIRCASE_WITH_LANDINGS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/staircase_with_landings__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_StaircaseWithLandings_top_landing_is_set
{
public:
  explicit Init_StaircaseWithLandings_top_landing_is_set(::bosdyn_msgs::msg::StaircaseWithLandings & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::StaircaseWithLandings top_landing_is_set(::bosdyn_msgs::msg::StaircaseWithLandings::_top_landing_is_set_type arg)
  {
    msg_.top_landing_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::StaircaseWithLandings msg_;
};

class Init_StaircaseWithLandings_top_landing
{
public:
  explicit Init_StaircaseWithLandings_top_landing(::bosdyn_msgs::msg::StaircaseWithLandings & msg)
  : msg_(msg)
  {}
  Init_StaircaseWithLandings_top_landing_is_set top_landing(::bosdyn_msgs::msg::StaircaseWithLandings::_top_landing_type arg)
  {
    msg_.top_landing = std::move(arg);
    return Init_StaircaseWithLandings_top_landing_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::StaircaseWithLandings msg_;
};

class Init_StaircaseWithLandings_staircase_is_set
{
public:
  explicit Init_StaircaseWithLandings_staircase_is_set(::bosdyn_msgs::msg::StaircaseWithLandings & msg)
  : msg_(msg)
  {}
  Init_StaircaseWithLandings_top_landing staircase_is_set(::bosdyn_msgs::msg::StaircaseWithLandings::_staircase_is_set_type arg)
  {
    msg_.staircase_is_set = std::move(arg);
    return Init_StaircaseWithLandings_top_landing(msg_);
  }

private:
  ::bosdyn_msgs::msg::StaircaseWithLandings msg_;
};

class Init_StaircaseWithLandings_staircase
{
public:
  explicit Init_StaircaseWithLandings_staircase(::bosdyn_msgs::msg::StaircaseWithLandings & msg)
  : msg_(msg)
  {}
  Init_StaircaseWithLandings_staircase_is_set staircase(::bosdyn_msgs::msg::StaircaseWithLandings::_staircase_type arg)
  {
    msg_.staircase = std::move(arg);
    return Init_StaircaseWithLandings_staircase_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::StaircaseWithLandings msg_;
};

class Init_StaircaseWithLandings_bottom_landing_is_set
{
public:
  explicit Init_StaircaseWithLandings_bottom_landing_is_set(::bosdyn_msgs::msg::StaircaseWithLandings & msg)
  : msg_(msg)
  {}
  Init_StaircaseWithLandings_staircase bottom_landing_is_set(::bosdyn_msgs::msg::StaircaseWithLandings::_bottom_landing_is_set_type arg)
  {
    msg_.bottom_landing_is_set = std::move(arg);
    return Init_StaircaseWithLandings_staircase(msg_);
  }

private:
  ::bosdyn_msgs::msg::StaircaseWithLandings msg_;
};

class Init_StaircaseWithLandings_bottom_landing
{
public:
  Init_StaircaseWithLandings_bottom_landing()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_StaircaseWithLandings_bottom_landing_is_set bottom_landing(::bosdyn_msgs::msg::StaircaseWithLandings::_bottom_landing_type arg)
  {
    msg_.bottom_landing = std::move(arg);
    return Init_StaircaseWithLandings_bottom_landing_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::StaircaseWithLandings msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::StaircaseWithLandings>()
{
  return bosdyn_msgs::msg::builder::Init_StaircaseWithLandings_bottom_landing();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__STAIRCASE_WITH_LANDINGS__BUILDER_HPP_
