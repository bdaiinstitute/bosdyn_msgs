// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/IrMeterOverlayDeltaPair.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__IR_METER_OVERLAY_DELTA_PAIR__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__IR_METER_OVERLAY_DELTA_PAIR__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__IrMeterOverlayDeltaPair __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__IrMeterOverlayDeltaPair __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct IrMeterOverlayDeltaPair_
{
  using Type = IrMeterOverlayDeltaPair_<ContainerAllocator>;

  explicit IrMeterOverlayDeltaPair_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->a = 0l;
      this->b = 0l;
    }
  }

  explicit IrMeterOverlayDeltaPair_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->a = 0l;
      this->b = 0l;
    }
  }

  // field types and members
  using _a_type =
    int32_t;
  _a_type a;
  using _b_type =
    int32_t;
  _b_type b;

  // setters for named parameter idiom
  Type & set__a(
    const int32_t & _arg)
  {
    this->a = _arg;
    return *this;
  }
  Type & set__b(
    const int32_t & _arg)
  {
    this->b = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::IrMeterOverlayDeltaPair_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::IrMeterOverlayDeltaPair_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::IrMeterOverlayDeltaPair_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::IrMeterOverlayDeltaPair_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::IrMeterOverlayDeltaPair_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::IrMeterOverlayDeltaPair_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::IrMeterOverlayDeltaPair_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::IrMeterOverlayDeltaPair_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::IrMeterOverlayDeltaPair_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::IrMeterOverlayDeltaPair_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__IrMeterOverlayDeltaPair
    std::shared_ptr<bosdyn_msgs::msg::IrMeterOverlayDeltaPair_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__IrMeterOverlayDeltaPair
    std::shared_ptr<bosdyn_msgs::msg::IrMeterOverlayDeltaPair_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const IrMeterOverlayDeltaPair_ & other) const
  {
    if (this->a != other.a) {
      return false;
    }
    if (this->b != other.b) {
      return false;
    }
    return true;
  }
  bool operator!=(const IrMeterOverlayDeltaPair_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct IrMeterOverlayDeltaPair_

// alias to use template instance with default allocator
using IrMeterOverlayDeltaPair =
  bosdyn_msgs::msg::IrMeterOverlayDeltaPair_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__IR_METER_OVERLAY_DELTA_PAIR__STRUCT_HPP_
