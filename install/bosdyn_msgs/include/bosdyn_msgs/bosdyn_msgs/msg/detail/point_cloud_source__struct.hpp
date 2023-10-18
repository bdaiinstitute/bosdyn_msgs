// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/PointCloudSource.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__POINT_CLOUD_SOURCE__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__POINT_CLOUD_SOURCE__STRUCT_HPP_

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

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__PointCloudSource __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__PointCloudSource __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PointCloudSource_
{
  using Type = PointCloudSource_<ContainerAllocator>;

  explicit PointCloudSource_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : acquisition_time(_init),
    transforms_snapshot(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->frame_name_sensor = "";
      this->acquisition_time_is_set = false;
      this->transforms_snapshot_is_set = false;
    }
  }

  explicit PointCloudSource_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_alloc),
    frame_name_sensor(_alloc),
    acquisition_time(_alloc, _init),
    transforms_snapshot(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->frame_name_sensor = "";
      this->acquisition_time_is_set = false;
      this->transforms_snapshot_is_set = false;
    }
  }

  // field types and members
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name_type name;
  using _frame_name_sensor_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _frame_name_sensor_type frame_name_sensor;
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

  // setters for named parameter idiom
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__frame_name_sensor(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->frame_name_sensor = _arg;
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

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::PointCloudSource_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::PointCloudSource_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::PointCloudSource_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::PointCloudSource_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::PointCloudSource_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::PointCloudSource_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::PointCloudSource_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::PointCloudSource_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::PointCloudSource_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::PointCloudSource_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__PointCloudSource
    std::shared_ptr<bosdyn_msgs::msg::PointCloudSource_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__PointCloudSource
    std::shared_ptr<bosdyn_msgs::msg::PointCloudSource_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PointCloudSource_ & other) const
  {
    if (this->name != other.name) {
      return false;
    }
    if (this->frame_name_sensor != other.frame_name_sensor) {
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
    return true;
  }
  bool operator!=(const PointCloudSource_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PointCloudSource_

// alias to use template instance with default allocator
using PointCloudSource =
  bosdyn_msgs::msg::PointCloudSource_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__POINT_CLOUD_SOURCE__STRUCT_HPP_
