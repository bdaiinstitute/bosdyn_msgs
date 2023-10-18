// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/State.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__STATE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_State_mission_id
{
public:
  explicit Init_State_mission_id(::bosdyn_msgs::msg::State & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::State mission_id(::bosdyn_msgs::msg::State::_mission_id_type arg)
  {
    msg_.mission_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::State msg_;
};

class Init_State_tick_counter
{
public:
  explicit Init_State_tick_counter(::bosdyn_msgs::msg::State & msg)
  : msg_(msg)
  {}
  Init_State_mission_id tick_counter(::bosdyn_msgs::msg::State::_tick_counter_type arg)
  {
    msg_.tick_counter = std::move(arg);
    return Init_State_mission_id(msg_);
  }

private:
  ::bosdyn_msgs::msg::State msg_;
};

class Init_State_error
{
public:
  explicit Init_State_error(::bosdyn_msgs::msg::State & msg)
  : msg_(msg)
  {}
  Init_State_tick_counter error(::bosdyn_msgs::msg::State::_error_type arg)
  {
    msg_.error = std::move(arg);
    return Init_State_tick_counter(msg_);
  }

private:
  ::bosdyn_msgs::msg::State msg_;
};

class Init_State_status
{
public:
  explicit Init_State_status(::bosdyn_msgs::msg::State & msg)
  : msg_(msg)
  {}
  Init_State_error status(::bosdyn_msgs::msg::State::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_State_error(msg_);
  }

private:
  ::bosdyn_msgs::msg::State msg_;
};

class Init_State_history
{
public:
  explicit Init_State_history(::bosdyn_msgs::msg::State & msg)
  : msg_(msg)
  {}
  Init_State_status history(::bosdyn_msgs::msg::State::_history_type arg)
  {
    msg_.history = std::move(arg);
    return Init_State_status(msg_);
  }

private:
  ::bosdyn_msgs::msg::State msg_;
};

class Init_State_answered_questions
{
public:
  explicit Init_State_answered_questions(::bosdyn_msgs::msg::State & msg)
  : msg_(msg)
  {}
  Init_State_history answered_questions(::bosdyn_msgs::msg::State::_answered_questions_type arg)
  {
    msg_.answered_questions = std::move(arg);
    return Init_State_history(msg_);
  }

private:
  ::bosdyn_msgs::msg::State msg_;
};

class Init_State_questions
{
public:
  Init_State_questions()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_State_answered_questions questions(::bosdyn_msgs::msg::State::_questions_type arg)
  {
    msg_.questions = std::move(arg);
    return Init_State_answered_questions(msg_);
  }

private:
  ::bosdyn_msgs::msg::State msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::State>()
{
  return bosdyn_msgs::msg::builder::Init_State_questions();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__STATE__BUILDER_HPP_
