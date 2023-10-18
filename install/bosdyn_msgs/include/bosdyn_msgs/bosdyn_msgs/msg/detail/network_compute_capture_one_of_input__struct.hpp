// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/NetworkComputeCaptureOneOfInput.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__NETWORK_COMPUTE_CAPTURE_ONE_OF_INPUT__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__NETWORK_COMPUTE_CAPTURE_ONE_OF_INPUT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'input_data_bridge'
#include "bosdyn_msgs/msg/detail/network_compute_input_data_bridge__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__NetworkComputeCaptureOneOfInput __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__NetworkComputeCaptureOneOfInput __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct NetworkComputeCaptureOneOfInput_
{
  using Type = NetworkComputeCaptureOneOfInput_<ContainerAllocator>;

  explicit NetworkComputeCaptureOneOfInput_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : input_data_bridge(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->input_choice = 0;
    }
  }

  explicit NetworkComputeCaptureOneOfInput_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : input_data_bridge(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->input_choice = 0;
    }
  }

  // field types and members
  using _input_data_bridge_type =
    bosdyn_msgs::msg::NetworkComputeInputDataBridge_<ContainerAllocator>;
  _input_data_bridge_type input_data_bridge;
  using _input_choice_type =
    int8_t;
  _input_choice_type input_choice;

  // setters for named parameter idiom
  Type & set__input_data_bridge(
    const bosdyn_msgs::msg::NetworkComputeInputDataBridge_<ContainerAllocator> & _arg)
  {
    this->input_data_bridge = _arg;
    return *this;
  }
  Type & set__input_choice(
    const int8_t & _arg)
  {
    this->input_choice = _arg;
    return *this;
  }

  // constant declarations
  static constexpr int8_t INPUT_NOT_SET =
    0;
  static constexpr int8_t INPUT_INPUT_DATA_BRIDGE_SET =
    1;

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::NetworkComputeCaptureOneOfInput_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::NetworkComputeCaptureOneOfInput_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::NetworkComputeCaptureOneOfInput_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::NetworkComputeCaptureOneOfInput_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::NetworkComputeCaptureOneOfInput_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::NetworkComputeCaptureOneOfInput_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::NetworkComputeCaptureOneOfInput_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::NetworkComputeCaptureOneOfInput_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::NetworkComputeCaptureOneOfInput_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::NetworkComputeCaptureOneOfInput_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__NetworkComputeCaptureOneOfInput
    std::shared_ptr<bosdyn_msgs::msg::NetworkComputeCaptureOneOfInput_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__NetworkComputeCaptureOneOfInput
    std::shared_ptr<bosdyn_msgs::msg::NetworkComputeCaptureOneOfInput_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NetworkComputeCaptureOneOfInput_ & other) const
  {
    if (this->input_data_bridge != other.input_data_bridge) {
      return false;
    }
    if (this->input_choice != other.input_choice) {
      return false;
    }
    return true;
  }
  bool operator!=(const NetworkComputeCaptureOneOfInput_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NetworkComputeCaptureOneOfInput_

// alias to use template instance with default allocator
using NetworkComputeCaptureOneOfInput =
  bosdyn_msgs::msg::NetworkComputeCaptureOneOfInput_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t NetworkComputeCaptureOneOfInput_<ContainerAllocator>::INPUT_NOT_SET;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t NetworkComputeCaptureOneOfInput_<ContainerAllocator>::INPUT_INPUT_DATA_BRIDGE_SET;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__NETWORK_COMPUTE_CAPTURE_ONE_OF_INPUT__STRUCT_HPP_
