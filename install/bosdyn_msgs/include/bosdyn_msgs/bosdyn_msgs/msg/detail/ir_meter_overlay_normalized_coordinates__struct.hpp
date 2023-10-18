// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/IrMeterOverlayNormalizedCoordinates.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__IR_METER_OVERLAY_NORMALIZED_COORDINATES__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__IR_METER_OVERLAY_NORMALIZED_COORDINATES__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__IrMeterOverlayNormalizedCoordinates __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__IrMeterOverlayNormalizedCoordinates __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct IrMeterOverlayNormalizedCoordinates_
{
  using Type = IrMeterOverlayNormalizedCoordinates_<ContainerAllocator>;

  explicit IrMeterOverlayNormalizedCoordinates_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0;
      this->y = 0.0;
    }
  }

  explicit IrMeterOverlayNormalizedCoordinates_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0;
      this->y = 0.0;
    }
  }

  // field types and members
  using _x_type =
    double;
  _x_type x;
  using _y_type =
    double;
  _y_type y;

  // setters for named parameter idiom
  Type & set__x(
    const double & _arg)
  {
    this->x = _arg;
    return *this;
  }
  Type & set__y(
    const double & _arg)
  {
    this->y = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::IrMeterOverlayNormalizedCoordinates_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::IrMeterOverlayNormalizedCoordinates_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::IrMeterOverlayNormalizedCoordinates_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::IrMeterOverlayNormalizedCoordinates_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::IrMeterOverlayNormalizedCoordinates_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::IrMeterOverlayNormalizedCoordinates_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::IrMeterOverlayNormalizedCoordinates_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::IrMeterOverlayNormalizedCoordinates_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::IrMeterOverlayNormalizedCoordinates_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::IrMeterOverlayNormalizedCoordinates_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__IrMeterOverlayNormalizedCoordinates
    std::shared_ptr<bosdyn_msgs::msg::IrMeterOverlayNormalizedCoordinates_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__IrMeterOverlayNormalizedCoordinates
    std::shared_ptr<bosdyn_msgs::msg::IrMeterOverlayNormalizedCoordinates_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const IrMeterOverlayNormalizedCoordinates_ & other) const
  {
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
      return false;
    }
    return true;
  }
  bool operator!=(const IrMeterOverlayNormalizedCoordinates_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct IrMeterOverlayNormalizedCoordinates_

// alias to use template instance with default allocator
using IrMeterOverlayNormalizedCoordinates =
  bosdyn_msgs::msg::IrMeterOverlayNormalizedCoordinates_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__IR_METER_OVERLAY_NORMALIZED_COORDINATES__STRUCT_HPP_
