// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/IrMeterOverlay.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__IR_METER_OVERLAY__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__IR_METER_OVERLAY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'meter'
#include "bosdyn_msgs/msg/detail/ir_meter_overlay_normalized_coordinates__struct.hpp"
// Member 'unit'
#include "bosdyn_msgs/msg/detail/ir_meter_overlay_temp_unit__struct.hpp"
// Member 'delta'
#include "bosdyn_msgs/msg/detail/ir_meter_overlay_delta_pair__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__IrMeterOverlay __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__IrMeterOverlay __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct IrMeterOverlay_
{
  using Type = IrMeterOverlay_<ContainerAllocator>;

  explicit IrMeterOverlay_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : unit(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->enable = false;
      this->unit_is_set = false;
    }
  }

  explicit IrMeterOverlay_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : unit(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->enable = false;
      this->unit_is_set = false;
    }
  }

  // field types and members
  using _enable_type =
    bool;
  _enable_type enable;
  using _meter_type =
    std::vector<bosdyn_msgs::msg::IrMeterOverlayNormalizedCoordinates_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::IrMeterOverlayNormalizedCoordinates_<ContainerAllocator>>>;
  _meter_type meter;
  using _unit_type =
    bosdyn_msgs::msg::IrMeterOverlayTempUnit_<ContainerAllocator>;
  _unit_type unit;
  using _unit_is_set_type =
    bool;
  _unit_is_set_type unit_is_set;
  using _delta_type =
    std::vector<bosdyn_msgs::msg::IrMeterOverlayDeltaPair_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::IrMeterOverlayDeltaPair_<ContainerAllocator>>>;
  _delta_type delta;

  // setters for named parameter idiom
  Type & set__enable(
    const bool & _arg)
  {
    this->enable = _arg;
    return *this;
  }
  Type & set__meter(
    const std::vector<bosdyn_msgs::msg::IrMeterOverlayNormalizedCoordinates_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::IrMeterOverlayNormalizedCoordinates_<ContainerAllocator>>> & _arg)
  {
    this->meter = _arg;
    return *this;
  }
  Type & set__unit(
    const bosdyn_msgs::msg::IrMeterOverlayTempUnit_<ContainerAllocator> & _arg)
  {
    this->unit = _arg;
    return *this;
  }
  Type & set__unit_is_set(
    const bool & _arg)
  {
    this->unit_is_set = _arg;
    return *this;
  }
  Type & set__delta(
    const std::vector<bosdyn_msgs::msg::IrMeterOverlayDeltaPair_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::IrMeterOverlayDeltaPair_<ContainerAllocator>>> & _arg)
  {
    this->delta = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::IrMeterOverlay_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::IrMeterOverlay_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::IrMeterOverlay_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::IrMeterOverlay_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::IrMeterOverlay_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::IrMeterOverlay_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::IrMeterOverlay_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::IrMeterOverlay_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::IrMeterOverlay_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::IrMeterOverlay_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__IrMeterOverlay
    std::shared_ptr<bosdyn_msgs::msg::IrMeterOverlay_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__IrMeterOverlay
    std::shared_ptr<bosdyn_msgs::msg::IrMeterOverlay_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const IrMeterOverlay_ & other) const
  {
    if (this->enable != other.enable) {
      return false;
    }
    if (this->meter != other.meter) {
      return false;
    }
    if (this->unit != other.unit) {
      return false;
    }
    if (this->unit_is_set != other.unit_is_set) {
      return false;
    }
    if (this->delta != other.delta) {
      return false;
    }
    return true;
  }
  bool operator!=(const IrMeterOverlay_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct IrMeterOverlay_

// alias to use template instance with default allocator
using IrMeterOverlay =
  bosdyn_msgs::msg::IrMeterOverlay_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__IR_METER_OVERLAY__STRUCT_HPP_
