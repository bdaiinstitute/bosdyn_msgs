// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bosdyn_msgs:msg/LocalGrid.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__LOCAL_GRID__TRAITS_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__LOCAL_GRID__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bosdyn_msgs/msg/detail/local_grid__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'acquisition_time'
#include "builtin_interfaces/msg/detail/time__traits.hpp"
// Member 'transforms_snapshot'
#include "bosdyn_msgs/msg/detail/frame_tree_snapshot__traits.hpp"
// Member 'extent'
#include "bosdyn_msgs/msg/detail/local_grid_extent__traits.hpp"
// Member 'cell_format'
#include "bosdyn_msgs/msg/detail/local_grid_cell_format__traits.hpp"
// Member 'encoding'
#include "bosdyn_msgs/msg/detail/local_grid_encoding__traits.hpp"

namespace bosdyn_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const LocalGrid & msg,
  std::ostream & out)
{
  out << "{";
  // member: local_grid_type_name
  {
    out << "local_grid_type_name: ";
    rosidl_generator_traits::value_to_yaml(msg.local_grid_type_name, out);
    out << ", ";
  }

  // member: acquisition_time
  {
    out << "acquisition_time: ";
    to_flow_style_yaml(msg.acquisition_time, out);
    out << ", ";
  }

  // member: acquisition_time_is_set
  {
    out << "acquisition_time_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.acquisition_time_is_set, out);
    out << ", ";
  }

  // member: transforms_snapshot
  {
    out << "transforms_snapshot: ";
    to_flow_style_yaml(msg.transforms_snapshot, out);
    out << ", ";
  }

  // member: transforms_snapshot_is_set
  {
    out << "transforms_snapshot_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.transforms_snapshot_is_set, out);
    out << ", ";
  }

  // member: frame_name_local_grid_data
  {
    out << "frame_name_local_grid_data: ";
    rosidl_generator_traits::value_to_yaml(msg.frame_name_local_grid_data, out);
    out << ", ";
  }

  // member: extent
  {
    out << "extent: ";
    to_flow_style_yaml(msg.extent, out);
    out << ", ";
  }

  // member: extent_is_set
  {
    out << "extent_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.extent_is_set, out);
    out << ", ";
  }

  // member: cell_format
  {
    out << "cell_format: ";
    to_flow_style_yaml(msg.cell_format, out);
    out << ", ";
  }

  // member: encoding
  {
    out << "encoding: ";
    to_flow_style_yaml(msg.encoding, out);
    out << ", ";
  }

  // member: data
  {
    if (msg.data.size() == 0) {
      out << "data: []";
    } else {
      out << "data: [";
      size_t pending_items = msg.data.size();
      for (auto item : msg.data) {
        rosidl_generator_traits::character_value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: rle_counts
  {
    if (msg.rle_counts.size() == 0) {
      out << "rle_counts: []";
    } else {
      out << "rle_counts: [";
      size_t pending_items = msg.rle_counts.size();
      for (auto item : msg.rle_counts) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: cell_value_scale
  {
    out << "cell_value_scale: ";
    rosidl_generator_traits::value_to_yaml(msg.cell_value_scale, out);
    out << ", ";
  }

  // member: cell_value_offset
  {
    out << "cell_value_offset: ";
    rosidl_generator_traits::value_to_yaml(msg.cell_value_offset, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const LocalGrid & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: local_grid_type_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "local_grid_type_name: ";
    rosidl_generator_traits::value_to_yaml(msg.local_grid_type_name, out);
    out << "\n";
  }

  // member: acquisition_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "acquisition_time:\n";
    to_block_style_yaml(msg.acquisition_time, out, indentation + 2);
  }

  // member: acquisition_time_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "acquisition_time_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.acquisition_time_is_set, out);
    out << "\n";
  }

  // member: transforms_snapshot
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "transforms_snapshot:\n";
    to_block_style_yaml(msg.transforms_snapshot, out, indentation + 2);
  }

  // member: transforms_snapshot_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "transforms_snapshot_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.transforms_snapshot_is_set, out);
    out << "\n";
  }

  // member: frame_name_local_grid_data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "frame_name_local_grid_data: ";
    rosidl_generator_traits::value_to_yaml(msg.frame_name_local_grid_data, out);
    out << "\n";
  }

  // member: extent
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "extent:\n";
    to_block_style_yaml(msg.extent, out, indentation + 2);
  }

  // member: extent_is_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "extent_is_set: ";
    rosidl_generator_traits::value_to_yaml(msg.extent_is_set, out);
    out << "\n";
  }

  // member: cell_format
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cell_format:\n";
    to_block_style_yaml(msg.cell_format, out, indentation + 2);
  }

  // member: encoding
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "encoding:\n";
    to_block_style_yaml(msg.encoding, out, indentation + 2);
  }

  // member: data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.data.size() == 0) {
      out << "data: []\n";
    } else {
      out << "data:\n";
      for (auto item : msg.data) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::character_value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: rle_counts
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.rle_counts.size() == 0) {
      out << "rle_counts: []\n";
    } else {
      out << "rle_counts:\n";
      for (auto item : msg.rle_counts) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: cell_value_scale
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cell_value_scale: ";
    rosidl_generator_traits::value_to_yaml(msg.cell_value_scale, out);
    out << "\n";
  }

  // member: cell_value_offset
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cell_value_offset: ";
    rosidl_generator_traits::value_to_yaml(msg.cell_value_offset, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LocalGrid & msg, bool use_flow_style = false)
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
  const bosdyn_msgs::msg::LocalGrid & msg,
  std::ostream & out, size_t indentation = 0)
{
  bosdyn_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bosdyn_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const bosdyn_msgs::msg::LocalGrid & msg)
{
  return bosdyn_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bosdyn_msgs::msg::LocalGrid>()
{
  return "bosdyn_msgs::msg::LocalGrid";
}

template<>
inline const char * name<bosdyn_msgs::msg::LocalGrid>()
{
  return "bosdyn_msgs/msg/LocalGrid";
}

template<>
struct has_fixed_size<bosdyn_msgs::msg::LocalGrid>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<bosdyn_msgs::msg::LocalGrid>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<bosdyn_msgs::msg::LocalGrid>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BOSDYN_MSGS__MSG__DETAIL__LOCAL_GRID__TRAITS_HPP_
