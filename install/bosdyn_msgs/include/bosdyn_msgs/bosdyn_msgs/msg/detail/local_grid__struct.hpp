// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/LocalGrid.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__LOCAL_GRID__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__LOCAL_GRID__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'acquisition_time'
#include "builtin_interfaces/msg/detail/time__struct.hpp"
// Member 'transforms_snapshot'
#include "bosdyn_msgs/msg/detail/frame_tree_snapshot__struct.hpp"
// Member 'extent'
#include "bosdyn_msgs/msg/detail/local_grid_extent__struct.hpp"
// Member 'cell_format'
#include "bosdyn_msgs/msg/detail/local_grid_cell_format__struct.hpp"
// Member 'encoding'
#include "bosdyn_msgs/msg/detail/local_grid_encoding__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__LocalGrid __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__LocalGrid __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LocalGrid_
{
  using Type = LocalGrid_<ContainerAllocator>;

  explicit LocalGrid_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : acquisition_time(_init),
    transforms_snapshot(_init),
    extent(_init),
    cell_format(_init),
    encoding(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->local_grid_type_name = "";
      this->acquisition_time_is_set = false;
      this->transforms_snapshot_is_set = false;
      this->frame_name_local_grid_data = "";
      this->extent_is_set = false;
      this->cell_value_scale = 0.0;
      this->cell_value_offset = 0.0;
    }
  }

  explicit LocalGrid_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : local_grid_type_name(_alloc),
    acquisition_time(_alloc, _init),
    transforms_snapshot(_alloc, _init),
    frame_name_local_grid_data(_alloc),
    extent(_alloc, _init),
    cell_format(_alloc, _init),
    encoding(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->local_grid_type_name = "";
      this->acquisition_time_is_set = false;
      this->transforms_snapshot_is_set = false;
      this->frame_name_local_grid_data = "";
      this->extent_is_set = false;
      this->cell_value_scale = 0.0;
      this->cell_value_offset = 0.0;
    }
  }

  // field types and members
  using _local_grid_type_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _local_grid_type_name_type local_grid_type_name;
  using _acquisition_time_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _acquisition_time_type acquisition_time;
  using _acquisition_time_is_set_type =
    bool;
  _acquisition_time_is_set_type acquisition_time_is_set;
  using _transforms_snapshot_type =
    bosdyn_msgs::msg::FrameTreeSnapshot_<ContainerAllocator>;
  _transforms_snapshot_type transforms_snapshot;
  using _transforms_snapshot_is_set_type =
    bool;
  _transforms_snapshot_is_set_type transforms_snapshot_is_set;
  using _frame_name_local_grid_data_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _frame_name_local_grid_data_type frame_name_local_grid_data;
  using _extent_type =
    bosdyn_msgs::msg::LocalGridExtent_<ContainerAllocator>;
  _extent_type extent;
  using _extent_is_set_type =
    bool;
  _extent_is_set_type extent_is_set;
  using _cell_format_type =
    bosdyn_msgs::msg::LocalGridCellFormat_<ContainerAllocator>;
  _cell_format_type cell_format;
  using _encoding_type =
    bosdyn_msgs::msg::LocalGridEncoding_<ContainerAllocator>;
  _encoding_type encoding;
  using _data_type =
    std::vector<unsigned char, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<unsigned char>>;
  _data_type data;
  using _rle_counts_type =
    std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>>;
  _rle_counts_type rle_counts;
  using _cell_value_scale_type =
    double;
  _cell_value_scale_type cell_value_scale;
  using _cell_value_offset_type =
    double;
  _cell_value_offset_type cell_value_offset;

  // setters for named parameter idiom
  Type & set__local_grid_type_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->local_grid_type_name = _arg;
    return *this;
  }
  Type & set__acquisition_time(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->acquisition_time = _arg;
    return *this;
  }
  Type & set__acquisition_time_is_set(
    const bool & _arg)
  {
    this->acquisition_time_is_set = _arg;
    return *this;
  }
  Type & set__transforms_snapshot(
    const bosdyn_msgs::msg::FrameTreeSnapshot_<ContainerAllocator> & _arg)
  {
    this->transforms_snapshot = _arg;
    return *this;
  }
  Type & set__transforms_snapshot_is_set(
    const bool & _arg)
  {
    this->transforms_snapshot_is_set = _arg;
    return *this;
  }
  Type & set__frame_name_local_grid_data(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->frame_name_local_grid_data = _arg;
    return *this;
  }
  Type & set__extent(
    const bosdyn_msgs::msg::LocalGridExtent_<ContainerAllocator> & _arg)
  {
    this->extent = _arg;
    return *this;
  }
  Type & set__extent_is_set(
    const bool & _arg)
  {
    this->extent_is_set = _arg;
    return *this;
  }
  Type & set__cell_format(
    const bosdyn_msgs::msg::LocalGridCellFormat_<ContainerAllocator> & _arg)
  {
    this->cell_format = _arg;
    return *this;
  }
  Type & set__encoding(
    const bosdyn_msgs::msg::LocalGridEncoding_<ContainerAllocator> & _arg)
  {
    this->encoding = _arg;
    return *this;
  }
  Type & set__data(
    const std::vector<unsigned char, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<unsigned char>> & _arg)
  {
    this->data = _arg;
    return *this;
  }
  Type & set__rle_counts(
    const std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>> & _arg)
  {
    this->rle_counts = _arg;
    return *this;
  }
  Type & set__cell_value_scale(
    const double & _arg)
  {
    this->cell_value_scale = _arg;
    return *this;
  }
  Type & set__cell_value_offset(
    const double & _arg)
  {
    this->cell_value_offset = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::LocalGrid_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::LocalGrid_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::LocalGrid_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::LocalGrid_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::LocalGrid_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::LocalGrid_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::LocalGrid_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::LocalGrid_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::LocalGrid_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::LocalGrid_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__LocalGrid
    std::shared_ptr<bosdyn_msgs::msg::LocalGrid_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__LocalGrid
    std::shared_ptr<bosdyn_msgs::msg::LocalGrid_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LocalGrid_ & other) const
  {
    if (this->local_grid_type_name != other.local_grid_type_name) {
      return false;
    }
    if (this->acquisition_time != other.acquisition_time) {
      return false;
    }
    if (this->acquisition_time_is_set != other.acquisition_time_is_set) {
      return false;
    }
    if (this->transforms_snapshot != other.transforms_snapshot) {
      return false;
    }
    if (this->transforms_snapshot_is_set != other.transforms_snapshot_is_set) {
      return false;
    }
    if (this->frame_name_local_grid_data != other.frame_name_local_grid_data) {
      return false;
    }
    if (this->extent != other.extent) {
      return false;
    }
    if (this->extent_is_set != other.extent_is_set) {
      return false;
    }
    if (this->cell_format != other.cell_format) {
      return false;
    }
    if (this->encoding != other.encoding) {
      return false;
    }
    if (this->data != other.data) {
      return false;
    }
    if (this->rle_counts != other.rle_counts) {
      return false;
    }
    if (this->cell_value_scale != other.cell_value_scale) {
      return false;
    }
    if (this->cell_value_offset != other.cell_value_offset) {
      return false;
    }
    return true;
  }
  bool operator!=(const LocalGrid_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LocalGrid_

// alias to use template instance with default allocator
using LocalGrid =
  bosdyn_msgs::msg::LocalGrid_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__LOCAL_GRID__STRUCT_HPP_
