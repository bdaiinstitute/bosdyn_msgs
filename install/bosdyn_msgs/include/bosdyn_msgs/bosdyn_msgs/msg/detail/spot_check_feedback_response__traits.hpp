// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/SpotCheckFeedbackResponse.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__SPOT_CHECK_FEEDBACK_RESPONSE__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__SPOT_CHECK_FEEDBACK_RESPONSE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/spot_check_feedback_response__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "bosdyn_msgs/msg/detail/response_header__traits.hpp"
// Member 'state'
#include "bosdyn_msgs/msg/detail/spot_check_feedback_response_state__traits.hpp"
// Member 'last_command'
#include "bosdyn_msgs/msg/detail/spot_check_command_request_command__traits.hpp"
// Member 'error'
#include "bosdyn_msgs/msg/detail/spot_check_feedback_response_error__traits.hpp"
// Member 'camera_results'
#include "bosdyn_msgs/msg/detail/key_string_value_bosdyn_msgs_depth_plane_spot_check_result__traits.hpp"
// Member 'load_cell_results'
#include "bosdyn_msgs/msg/detail/key_string_value_bosdyn_msgs_load_cell_spot_check_result__traits.hpp"
// Member 'kinematic_cal_results'
#include "bosdyn_msgs/msg/detail/key_string_value_bosdyn_msgs_joint_kinematic_check_result__traits.hpp"
// Member 'payload_result'
#include "bosdyn_msgs/msg/detail/payload_check_result__traits.hpp"
// Member 'hip_range_of_motion_results'
#include "bosdyn_msgs/msg/detail/key_string_value_bosdyn_msgs_hip_range_of_motion_result__traits.hpp"
// Member 'last_cal_timestamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const SpotCheckFeedbackResponse & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: header_is_set
  {
    out << "header_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.header_is_set, out);
    out << ", ";
  }

  // member: state
  {
    out << "state: ";
    to_flow_style_yaml(msg.state, out);
    out << ", ";
  }

  // member: last_command
  {
    out << "last_command: ";
    to_flow_style_yaml(msg.last_command, out);
    out << ", ";
  }

  // member: error
  {
    out << "error: ";
    to_flow_style_yaml(msg.error, out);
    out << ", ";
  }

  // member: camera_results
  {
    if (msg.camera_results.size() == 0) {
      out << "camera_results: []";
    } else {
      out << "camera_results: [";
      size_t pending_items = msg.camera_results.size();
      for (auto item : msg.camera_results) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: load_cell_results
  {
    if (msg.load_cell_results.size() == 0) {
      out << "load_cell_results: []";
    } else {
      out << "load_cell_results: [";
      size_t pending_items = msg.load_cell_results.size();
      for (auto item : msg.load_cell_results) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: kinematic_cal_results
  {
    if (msg.kinematic_cal_results.size() == 0) {
      out << "kinematic_cal_results: []";
    } else {
      out << "kinematic_cal_results: [";
      size_t pending_items = msg.kinematic_cal_results.size();
      for (auto item : msg.kinematic_cal_results) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: payload_result
  {
    out << "payload_result: ";
    to_flow_style_yaml(msg.payload_result, out);
    out << ", ";
  }

  // member: payload_result_is_set
  {
    out << "payload_result_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.payload_result_is_set, out);
    out << ", ";
  }

  // member: hip_range_of_motion_results
  {
    if (msg.hip_range_of_motion_results.size() == 0) {
      out << "hip_range_of_motion_results: []";
    } else {
      out << "hip_range_of_motion_results: [";
      size_t pending_items = msg.hip_range_of_motion_results.size();
      for (auto item : msg.hip_range_of_motion_results) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: progress
  {
    out << "progress: ";
    rosidl_generator_traits::value_to_yaml(msg.progress, out);
    out << ", ";
  }

  // member: last_cal_timestamp
  {
    out << "last_cal_timestamp: ";
    to_flow_style_yaml(msg.last_cal_timestamp, out);
    out << ", ";
  }

  // member: last_cal_timestamp_is_set
  {
    out << "last_cal_timestamp_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.last_cal_timestamp_is_set, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SpotCheckFeedbackResponse & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: header_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.header_is_set, out);
    out << "\n";
  }

  // member: state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "state:\n";
    to_block_style_yaml(msg.state, out, indentation + 2);
  }

  // member: last_command
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "last_command:\n";
    to_block_style_yaml(msg.last_command, out, indentation + 2);
  }

  // member: error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "error:\n";
    to_block_style_yaml(msg.error, out, indentation + 2);
  }

  // member: camera_results
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.camera_results.size() == 0) {
      out << "camera_results: []\n";
    } else {
      out << "camera_results:\n";
      for (auto item : msg.camera_results) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: load_cell_results
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.load_cell_results.size() == 0) {
      out << "load_cell_results: []\n";
    } else {
      out << "load_cell_results:\n";
      for (auto item : msg.load_cell_results) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: kinematic_cal_results
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.kinematic_cal_results.size() == 0) {
      out << "kinematic_cal_results: []\n";
    } else {
      out << "kinematic_cal_results:\n";
      for (auto item : msg.kinematic_cal_results) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: payload_result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "payload_result:\n";
    to_block_style_yaml(msg.payload_result, out, indentation + 2);
  }

  // member: payload_result_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "payload_result_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.payload_result_is_set, out);
    out << "\n";
  }

  // member: hip_range_of_motion_results
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.hip_range_of_motion_results.size() == 0) {
      out << "hip_range_of_motion_results: []\n";
    } else {
      out << "hip_range_of_motion_results:\n";
      for (auto item : msg.hip_range_of_motion_results) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: progress
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "progress: ";
    rosidl_generator_traits::value_to_yaml(msg.progress, out);
    out << "\n";
  }

  // member: last_cal_timestamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "last_cal_timestamp:\n";
    to_block_style_yaml(msg.last_cal_timestamp, out, indentation + 2);
  }

  // member: last_cal_timestamp_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "last_cal_timestamp_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.last_cal_timestamp_is_set, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SpotCheckFeedbackResponse & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::SpotCheckFeedbackResponse & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::SpotCheckFeedbackResponse & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::SpotCheckFeedbackResponse>()
{
  return "bosdyn_msgs::msg::SpotCheckFeedbackResponse";
}

template<>
inline const char * name<bosdyn_msgs::msg::SpotCheckFeedbackResponse>()
{
  return "bosdyn_msgs/msg/SpotCheckFeedbackResponse";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::SpotCheckFeedbackResponse>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::SpotCheckFeedbackResponse>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<bosdyn_msgs::msg::SpotCheckFeedbackResponse>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__SPOT_CHECK_FEEDBACK_RESPONSE__TRAITS_HPP_
