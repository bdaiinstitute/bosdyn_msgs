// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/IrColorMap.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__IR_COLOR_MAP__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__IR_COLOR_MAP__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'colormap'
#include "bosdyn_msgs/msg/detail/ir_color_map_color_map__struct.hpp"
// Member 'scale'
#include "bosdyn_msgs/msg/detail/ir_color_map_scaling_pair__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__IrColorMap __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__IrColorMap __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct IrColorMap_
{
  using Type = IrColorMap_<ContainerAllocator>;

  explicit IrColorMap_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : colormap(_init),
    scale(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->scale_is_set = false;
      this->auto_scale = false;
      this->auto_scale_is_set = false;
    }
  }

  explicit IrColorMap_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : colormap(_alloc, _init),
    scale(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->scale_is_set = false;
      this->auto_scale = false;
      this->auto_scale_is_set = false;
    }
  }

  // field types and members
  using _colormap_type =
    bosdyn_msgs::msg::IrColorMapColorMap_<ContainerAllocator>;
  _colormap_type colormap;
  using _scale_type =
    bosdyn_msgs::msg::IrColorMapScalingPair_<ContainerAllocator>;
  _scale_type scale;
  using _scale_is_set_type =
    bool;
  _scale_is_set_type scale_is_set;
  using _auto_scale_type =
    bool;
  _auto_scale_type auto_scale;
  using _auto_scale_is_set_type =
    bool;
  _auto_scale_is_set_type auto_scale_is_set;

  // setters for named parameter idiom
  Type & set__colormap(
    const bosdyn_msgs::msg::IrColorMapColorMap_<ContainerAllocator> & _arg)
  {
    this->colormap = _arg;
    return *this;
  }
  Type & set__scale(
    const bosdyn_msgs::msg::IrColorMapScalingPair_<ContainerAllocator> & _arg)
  {
    this->scale = _arg;
    return *this;
  }
  Type & set__scale_is_set(
    const bool & _arg)
  {
    this->scale_is_set = _arg;
    return *this;
  }
  Type & set__auto_scale(
    const bool & _arg)
  {
    this->auto_scale = _arg;
    return *this;
  }
  Type & set__auto_scale_is_set(
    const bool & _arg)
  {
    this->auto_scale_is_set = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::IrColorMap_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::IrColorMap_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::IrColorMap_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::IrColorMap_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::IrColorMap_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::IrColorMap_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::IrColorMap_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::IrColorMap_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::IrColorMap_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::IrColorMap_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__IrColorMap
    std::shared_ptr<bosdyn_msgs::msg::IrColorMap_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__IrColorMap
    std::shared_ptr<bosdyn_msgs::msg::IrColorMap_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const IrColorMap_ & other) const
  {
    if (this->colormap != other.colormap) {
      return false;
    }
    if (this->scale != other.scale) {
      return false;
    }
    if (this->scale_is_set != other.scale_is_set) {
      return false;
    }
    if (this->auto_scale != other.auto_scale) {
      return false;
    }
    if (this->auto_scale_is_set != other.auto_scale_is_set) {
      return false;
    }
    return true;
  }
  bool operator!=(const IrColorMap_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct IrColorMap_

// alias to use template instance with default allocator
using IrColorMap =
  bosdyn_msgs::msg::IrColorMap_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__IR_COLOR_MAP__STRUCT_HPP_
