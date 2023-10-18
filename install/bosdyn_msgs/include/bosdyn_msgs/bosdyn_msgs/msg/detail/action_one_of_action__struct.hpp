// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/ActionOneOfAction.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ACTION_ONE_OF_ACTION__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__ACTION_ONE_OF_ACTION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'sleep'
#include "bosdyn_msgs/msg/detail/action_sleep__struct.hpp"
// Member 'data_acquisition'
#include "bosdyn_msgs/msg/detail/action_data_acquisition__struct.hpp"
// Member 'remote_grpc'
#include "bosdyn_msgs/msg/detail/action_remote_grpc__struct.hpp"
// Member 'node'
#include "bosdyn_msgs/msg/detail/node__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__ActionOneOfAction __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__ActionOneOfAction __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ActionOneOfAction_
{
  using Type = ActionOneOfAction_<ContainerAllocator>;

  explicit ActionOneOfAction_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : sleep(_init),
    data_acquisition(_init),
    remote_grpc(_init),
    node(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->action_choice = 0;
    }
  }

  explicit ActionOneOfAction_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : sleep(_alloc, _init),
    data_acquisition(_alloc, _init),
    remote_grpc(_alloc, _init),
    node(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->action_choice = 0;
    }
  }

  // field types and members
  using _sleep_type =
    bosdyn_msgs::msg::ActionSleep_<ContainerAllocator>;
  _sleep_type sleep;
  using _data_acquisition_type =
    bosdyn_msgs::msg::ActionDataAcquisition_<ContainerAllocator>;
  _data_acquisition_type data_acquisition;
  using _remote_grpc_type =
    bosdyn_msgs::msg::ActionRemoteGrpc_<ContainerAllocator>;
  _remote_grpc_type remote_grpc;
  using _node_type =
    bosdyn_msgs::msg::Node_<ContainerAllocator>;
  _node_type node;
  using _action_choice_type =
    int8_t;
  _action_choice_type action_choice;

  // setters for named parameter idiom
  Type & set__sleep(
    const bosdyn_msgs::msg::ActionSleep_<ContainerAllocator> & _arg)
  {
    this->sleep = _arg;
    return *this;
  }
  Type & set__data_acquisition(
    const bosdyn_msgs::msg::ActionDataAcquisition_<ContainerAllocator> & _arg)
  {
    this->data_acquisition = _arg;
    return *this;
  }
  Type & set__remote_grpc(
    const bosdyn_msgs::msg::ActionRemoteGrpc_<ContainerAllocator> & _arg)
  {
    this->remote_grpc = _arg;
    return *this;
  }
  Type & set__node(
    const bosdyn_msgs::msg::Node_<ContainerAllocator> & _arg)
  {
    this->node = _arg;
    return *this;
  }
  Type & set__action_choice(
    const int8_t & _arg)
  {
    this->action_choice = _arg;
    return *this;
  }

  // constant declarations
  static constexpr int8_t ACTION_NOT_SET =
    0;
  static constexpr int8_t ACTION_SLEEP_SET =
    1;
  static constexpr int8_t ACTION_DATA_ACQUISITION_SET =
    2;
  static constexpr int8_t ACTION_REMOTE_GRPC_SET =
    3;
  static constexpr int8_t ACTION_NODE_SET =
    4;

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::ActionOneOfAction_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::ActionOneOfAction_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::ActionOneOfAction_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::ActionOneOfAction_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::ActionOneOfAction_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::ActionOneOfAction_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::ActionOneOfAction_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::ActionOneOfAction_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::ActionOneOfAction_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::ActionOneOfAction_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__ActionOneOfAction
    std::shared_ptr<bosdyn_msgs::msg::ActionOneOfAction_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__ActionOneOfAction
    std::shared_ptr<bosdyn_msgs::msg::ActionOneOfAction_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ActionOneOfAction_ & other) const
  {
    if (this->sleep != other.sleep) {
      return false;
    }
    if (this->data_acquisition != other.data_acquisition) {
      return false;
    }
    if (this->remote_grpc != other.remote_grpc) {
      return false;
    }
    if (this->node != other.node) {
      return false;
    }
    if (this->action_choice != other.action_choice) {
      return false;
    }
    return true;
  }
  bool operator!=(const ActionOneOfAction_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ActionOneOfAction_

// alias to use template instance with default allocator
using ActionOneOfAction =
  bosdyn_msgs::msg::ActionOneOfAction_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t ActionOneOfAction_<ContainerAllocator>::ACTION_NOT_SET;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t ActionOneOfAction_<ContainerAllocator>::ACTION_SLEEP_SET;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t ActionOneOfAction_<ContainerAllocator>::ACTION_DATA_ACQUISITION_SET;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t ActionOneOfAction_<ContainerAllocator>::ACTION_REMOTE_GRPC_SET;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t ActionOneOfAction_<ContainerAllocator>::ACTION_NODE_SET;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__ACTION_ONE_OF_ACTION__STRUCT_HPP_
