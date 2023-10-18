// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/StateAnsweredQuestion.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__STATE_ANSWERED_QUESTION__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__STATE_ANSWERED_QUESTION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/state_answered_question__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'question'
#include "bosdyn_msgs/msg/detail/question__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const StateAnsweredQuestion & msg,
  std::ostream & out)
{
  out << "{";
  // member: question
  {
    out << "question: ";
    to_flow_style_yaml(msg.question, out);
    out << ", ";
  }

  // member: question_is_set
  {
    out << "question_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.question_is_set, out);
    out << ", ";
  }

  // member: accepted_answer_code
  {
    out << "accepted_answer_code: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted_answer_code, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const StateAnsweredQuestion & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: question
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "question:\n";
    to_block_style_yaml(msg.question, out, indentation + 2);
  }

  // member: question_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "question_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.question_is_set, out);
    out << "\n";
  }

  // member: accepted_answer_code
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accepted_answer_code: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted_answer_code, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const StateAnsweredQuestion & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace bosdyn_msgs

namespace rosidl_generator_traits
{

[[deprecated("use bosdyn_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const bosdyn_msgs::msg::StateAnsweredQuestion & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::StateAnsweredQuestion & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::StateAnsweredQuestion>()
{
  return "bosdyn_msgs::msg::StateAnsweredQuestion";
}

template<>
inline const char * name<bosdyn_msgs::msg::StateAnsweredQuestion>()
{
  return "bosdyn_msgs/msg/StateAnsweredQuestion";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::StateAnsweredQuestion>
  : std::integral_constant<bool, has_fixed_size<bosdyn_msgs::msg::Question>::value> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::StateAnsweredQuestion>
  : std::integral_constant<bool, has_bounded_size<bosdyn_msgs::msg::Question>::value> {};

template<>
struct is_message<bosdyn_msgs::msg::StateAnsweredQuestion>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__STATE_ANSWERED_QUESTION__TRAITS_HPP_
