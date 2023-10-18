// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/NetworkComputeInputDataBridge.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__NETWORK_COMPUTE_INPUT_DATA_BRIDGE__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__NETWORK_COMPUTE_INPUT_DATA_BRIDGE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'image_sources_and_services'
#include "bosdyn_msgs/msg/detail/image_source_and_service__struct.hpp"
// Member 'parameters'
#include "bosdyn_msgs/msg/detail/compute_parameters__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__NetworkComputeInputDataBridge __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__NetworkComputeInputDataBridge __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct NetworkComputeInputDataBridge_
{
  using Type = NetworkComputeInputDataBridge_<ContainerAllocator>;

  explicit NetworkComputeInputDataBridge_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : parameters(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->parameters_is_set = false;
    }
  }

  explicit NetworkComputeInputDataBridge_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : parameters(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->parameters_is_set = false;
    }
  }

  // field types and members
  using _image_sources_and_services_type =
    std::vector<bosdyn_msgs::msg::ImageSourceAndService_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::ImageSourceAndService_<ContainerAllocator>>>;
  _image_sources_and_services_type image_sources_and_services;
  using _parameters_type =
    bosdyn_msgs::msg::ComputeParameters_<ContainerAllocator>;
  _parameters_type parameters;
  using _parameters_is_set_type =
    bool;
  _parameters_is_set_type parameters_is_set;

  // setters for named parameter idiom
  Type & set__image_sources_and_services(
    const std::vector<bosdyn_msgs::msg::ImageSourceAndService_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::ImageSourceAndService_<ContainerAllocator>>> & _arg)
  {
    this->image_sources_and_services = _arg;
    return *this;
  }
  Type & set__parameters(
    const bosdyn_msgs::msg::ComputeParameters_<ContainerAllocator> & _arg)
  {
    this->parameters = _arg;
    return *this;
  }
  Type & set__parameters_is_set(
    const bool & _arg)
  {
    this->parameters_is_set = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::NetworkComputeInputDataBridge_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::NetworkComputeInputDataBridge_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::NetworkComputeInputDataBridge_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::NetworkComputeInputDataBridge_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::NetworkComputeInputDataBridge_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::NetworkComputeInputDataBridge_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::NetworkComputeInputDataBridge_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::NetworkComputeInputDataBridge_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::NetworkComputeInputDataBridge_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::NetworkComputeInputDataBridge_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__NetworkComputeInputDataBridge
    std::shared_ptr<bosdyn_msgs::msg::NetworkComputeInputDataBridge_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__NetworkComputeInputDataBridge
    std::shared_ptr<bosdyn_msgs::msg::NetworkComputeInputDataBridge_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NetworkComputeInputDataBridge_ & other) const
  {
    if (this->image_sources_and_services != other.image_sources_and_services) {
      return false;
    }
    if (this->parameters != other.parameters) {
      return false;
    }
    if (this->parameters_is_set != other.parameters_is_set) {
      return false;
    }
    return true;
  }
  bool operator!=(const NetworkComputeInputDataBridge_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NetworkComputeInputDataBridge_

// alias to use template instance with default allocator
using NetworkComputeInputDataBridge =
  bosdyn_msgs::msg::NetworkComputeInputDataBridge_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__NETWORK_COMPUTE_INPUT_DATA_BRIDGE__STRUCT_HPP_
