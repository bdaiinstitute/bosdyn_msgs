// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/State.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__STATE__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'questions'
#include "bosdyn_msgs/msg/detail/question__traits.hpp"
// Member 'answered_questions'
#include "bosdyn_msgs/msg/detail/state_answered_question__traits.hpp"
// Member 'history'
#include "bosdyn_msgs/msg/detail/state_node_states_at_tick__traits.hpp"
// Member 'status'
#include "bosdyn_msgs/msg/detail/state_status__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const State & msg,
  std::ostream & out)
{
  out << "{";
  // member: questions
  {
    if (msg.questions.size() == 0) {
      out << "questions: []";
    } else {
      out << "questions: [";
      size_t pending_items = msg.questions.size();
      for (auto item : msg.questions) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: answered_questions
  {
    if (msg.answered_questions.size() == 0) {
      out << "answered_questions: []";
    } else {
      out << "answered_questions: [";
      size_t pending_items = msg.answered_questions.size();
      for (auto item : msg.answered_questions) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: history
  {
    if (msg.history.size() == 0) {
      out << "history: []";
    } else {
      out << "history: [";
      size_t pending_items = msg.history.size();
      for (auto item : msg.history) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: status
  {
    out << "status: ";
    to_flow_style_yaml(msg.status, out);
    out << ", ";
  }

  // member: error
  {
    out << "error: ";
    rosidl_generator_traits::value_to_yaml(msg.error, out);
    out << ", ";
  }

  // member: tick_counter
  {
    out << "tick_counter: ";
    rosidl_generator_traits::value_to_yaml(msg.tick_counter, out);
    out << ", ";
  }

  // member: mission_id
  {
    out << "mission_id: ";
    rosidl_generator_traits::value_to_yaml(msg.mission_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const State & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: questions
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.questions.size() == 0) {
      out << "questions: []\n";
    } else {
      out << "questions:\n";
      for (auto item : msg.questions) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: answered_questions
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.answered_questions.size() == 0) {
      out << "answered_questions: []\n";
    } else {
      out << "answered_questions:\n";
      for (auto item : msg.answered_questions) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: history
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.history.size() == 0) {
      out << "history: []\n";
    } else {
      out << "history:\n";
      for (auto item : msg.history) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status:\n";
    to_block_style_yaml(msg.status, out, indentation + 2);
  }

  // member: error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "error: ";
    rosidl_generator_traits::value_to_yaml(msg.error, out);
    out << "\n";
  }

  // member: tick_counter
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tick_counter: ";
    rosidl_generator_traits::value_to_yaml(msg.tick_counter, out);
    out << "\n";
  }

  // member: mission_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mission_id: ";
    rosidl_generator_traits::value_to_yaml(msg.mission_id, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const State & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::State & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::State & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::State>()
{
  return "bosdyn_msgs::msg::State";
}

template<>
inline const char * name<bosdyn_msgs::msg::State>()
{
  return "bosdyn_msgs/msg/State";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::State>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::State>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<bosdyn_msgs::msg::State>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__STATE__TRAITS_HPP_
