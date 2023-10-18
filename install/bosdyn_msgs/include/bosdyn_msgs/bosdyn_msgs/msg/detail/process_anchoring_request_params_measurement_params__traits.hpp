// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/ProcessAnchoringRequestParamsMeasurementParams.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__PROCESS_ANCHORING_REQUEST_PARAMS_MEASUREMENT_PARAMS__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__PROCESS_ANCHORING_REQUEST_PARAMS_MEASUREMENT_PARAMS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/process_anchoring_request_params_measurement_params__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ProcessAnchoringRequestParamsMeasurementParams & msg,
  std::ostream & out)
{
  out << "{";
  // member: use_kinematic_odometry
  {
    out << "use_kinematic_odometry: ";
    rosidl_generator_traits::value_to_yaml(msg.use_kinematic_odometry, out);
    out << ", ";
  }

  // member: use_kinematic_odometry_is_set
  {
    out << "use_kinematic_odometry_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.use_kinematic_odometry_is_set, out);
    out << ", ";
  }

  // member: use_visual_odometry
  {
    out << "use_visual_odometry: ";
    rosidl_generator_traits::value_to_yaml(msg.use_visual_odometry, out);
    out << ", ";
  }

  // member: use_visual_odometry_is_set
  {
    out << "use_visual_odometry_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.use_visual_odometry_is_set, out);
    out << ", ";
  }

  // member: use_gyroscope_measurements
  {
    out << "use_gyroscope_measurements: ";
    rosidl_generator_traits::value_to_yaml(msg.use_gyroscope_measurements, out);
    out << ", ";
  }

  // member: use_gyroscope_measurements_is_set
  {
    out << "use_gyroscope_measurements_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.use_gyroscope_measurements_is_set, out);
    out << ", ";
  }

  // member: use_loop_closures
  {
    out << "use_loop_closures: ";
    rosidl_generator_traits::value_to_yaml(msg.use_loop_closures, out);
    out << ", ";
  }

  // member: use_loop_closures_is_set
  {
    out << "use_loop_closures_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.use_loop_closures_is_set, out);
    out << ", ";
  }

  // member: use_world_objects
  {
    out << "use_world_objects: ";
    rosidl_generator_traits::value_to_yaml(msg.use_world_objects, out);
    out << ", ";
  }

  // member: use_world_objects_is_set
  {
    out << "use_world_objects_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.use_world_objects_is_set, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ProcessAnchoringRequestParamsMeasurementParams & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: use_kinematic_odometry
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "use_kinematic_odometry: ";
    rosidl_generator_traits::value_to_yaml(msg.use_kinematic_odometry, out);
    out << "\n";
  }

  // member: use_kinematic_odometry_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "use_kinematic_odometry_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.use_kinematic_odometry_is_set, out);
    out << "\n";
  }

  // member: use_visual_odometry
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "use_visual_odometry: ";
    rosidl_generator_traits::value_to_yaml(msg.use_visual_odometry, out);
    out << "\n";
  }

  // member: use_visual_odometry_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "use_visual_odometry_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.use_visual_odometry_is_set, out);
    out << "\n";
  }

  // member: use_gyroscope_measurements
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "use_gyroscope_measurements: ";
    rosidl_generator_traits::value_to_yaml(msg.use_gyroscope_measurements, out);
    out << "\n";
  }

  // member: use_gyroscope_measurements_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "use_gyroscope_measurements_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.use_gyroscope_measurements_is_set, out);
    out << "\n";
  }

  // member: use_loop_closures
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "use_loop_closures: ";
    rosidl_generator_traits::value_to_yaml(msg.use_loop_closures, out);
    out << "\n";
  }

  // member: use_loop_closures_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "use_loop_closures_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.use_loop_closures_is_set, out);
    out << "\n";
  }

  // member: use_world_objects
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "use_world_objects: ";
    rosidl_generator_traits::value_to_yaml(msg.use_world_objects, out);
    out << "\n";
  }

  // member: use_world_objects_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "use_world_objects_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.use_world_objects_is_set, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ProcessAnchoringRequestParamsMeasurementParams & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::ProcessAnchoringRequestParamsMeasurementParams & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::ProcessAnchoringRequestParamsMeasurementParams & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::ProcessAnchoringRequestParamsMeasurementParams>()
{
  return "bosdyn_msgs::msg::ProcessAnchoringRequestParamsMeasurementParams";
}

template<>
inline const char * name<bosdyn_msgs::msg::ProcessAnchoringRequestParamsMeasurementParams>()
{
  return "bosdyn_msgs/msg/ProcessAnchoringRequestParamsMeasurementParams";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::ProcessAnchoringRequestParamsMeasurementParams>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::ProcessAnchoringRequestParamsMeasurementParams>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<bosdyn_msgs::msg::ProcessAnchoringRequestParamsMeasurementParams>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__PROCESS_ANCHORING_REQUEST_PARAMS_MEASUREMENT_PARAMS__TRAITS_HPP_
