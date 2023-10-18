// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/ServiceFaultState.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__SERVICE_FAULT_STATE__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__SERVICE_FAULT_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'faults'
// Member 'historical_faults'
#include "bosdyn_msgs/msg/detail/service_fault__struct.hpp"
// Member 'aggregated'
#include "bosdyn_msgs/msg/detail/key_string_value_bosdyn_msgs_service_fault_severity__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__ServiceFaultState __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__ServiceFaultState __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ServiceFaultState_
{
  using Type = ServiceFaultState_<ContainerAllocator>;

  explicit ServiceFaultState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit ServiceFaultState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _faults_type =
    std::vector<bosdyn_msgs::msg::ServiceFault_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::ServiceFault_<ContainerAllocator>>>;
  _faults_type faults;
  using _historical_faults_type =
    std::vector<bosdyn_msgs::msg::ServiceFault_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::ServiceFault_<ContainerAllocator>>>;
  _historical_faults_type historical_faults;
  using _aggregated_type =
    std::vector<bosdyn_msgs::msg::KeyStringValueBosdynMsgsServiceFaultSeverity_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::KeyStringValueBosdynMsgsServiceFaultSeverity_<ContainerAllocator>>>;
  _aggregated_type aggregated;

  // setters for named parameter idiom
  Type & set__faults(
    const std::vector<bosdyn_msgs::msg::ServiceFault_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::ServiceFault_<ContainerAllocator>>> & _arg)
  {
    this->faults = _arg;
    return *this;
  }
  Type & set__historical_faults(
    const std::vector<bosdyn_msgs::msg::ServiceFault_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::ServiceFault_<ContainerAllocator>>> & _arg)
  {
    this->historical_faults = _arg;
    return *this;
  }
  Type & set__aggregated(
    const std::vector<bosdyn_msgs::msg::KeyStringValueBosdynMsgsServiceFaultSeverity_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::KeyStringValueBosdynMsgsServiceFaultSeverity_<ContainerAllocator>>> & _arg)
  {
    this->aggregated = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::ServiceFaultState_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::ServiceFaultState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::ServiceFaultState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::ServiceFaultState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::ServiceFaultState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::ServiceFaultState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::ServiceFaultState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::ServiceFaultState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::ServiceFaultState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::ServiceFaultState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__ServiceFaultState
    std::shared_ptr<bosdyn_msgs::msg::ServiceFaultState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__ServiceFaultState
    std::shared_ptr<bosdyn_msgs::msg::ServiceFaultState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ServiceFaultState_ & other) const
  {
    if (this->faults != other.faults) {
      return false;
    }
    if (this->historical_faults != other.historical_faults) {
      return false;
    }
    if (this->aggregated != other.aggregated) {
      return false;
    }
    return true;
  }
  bool operator!=(const ServiceFaultState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ServiceFaultState_

// alias to use template instance with default allocator
using ServiceFaultState =
  bosdyn_msgs::msg::ServiceFaultState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__SERVICE_FAULT_STATE__STRUCT_HPP_
