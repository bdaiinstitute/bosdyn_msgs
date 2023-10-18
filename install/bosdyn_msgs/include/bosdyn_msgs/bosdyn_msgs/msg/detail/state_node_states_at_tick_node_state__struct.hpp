// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/StateNodeStatesAtTickNodeState.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__STATE_NODE_STATES_AT_TICK_NODE_STATE__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__STATE_NODE_STATES_AT_TICK_NODE_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'result'
#include "bosdyn_msgs/msg/detail/result__struct.hpp"
// Member 'blackboard'
#include "bosdyn_msgs/msg/detail/state_node_states_at_tick_node_state_blackboard_state__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__StateNodeStatesAtTickNodeState __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__StateNodeStatesAtTickNodeState __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct StateNodeStatesAtTickNodeState_
{
  using Type = StateNodeStatesAtTickNodeState_<ContainerAllocator>;

  explicit StateNodeStatesAtTickNodeState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init),
    blackboard(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->error = "";
      this->id = 0ll;
      this->blackboard_is_set = false;
    }
  }

  explicit StateNodeStatesAtTickNodeState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_alloc, _init),
    error(_alloc),
    blackboard(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->error = "";
      this->id = 0ll;
      this->blackboard_is_set = false;
    }
  }

  // field types and members
  using _result_type =
    bosdyn_msgs::msg::Result_<ContainerAllocator>;
  _result_type result;
  using _error_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _error_type error;
  using _id_type =
    int64_t;
  _id_type id;
  using _blackboard_type =
    bosdyn_msgs::msg::StateNodeStatesAtTickNodeStateBlackboardState_<ContainerAllocator>;
  _blackboard_type blackboard;
  using _blackboard_is_set_type =
    bool;
  _blackboard_is_set_type blackboard_is_set;

  // setters for named parameter idiom
  Type & set__result(
    const bosdyn_msgs::msg::Result_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }
  Type & set__error(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->error = _arg;
    return *this;
  }
  Type & set__id(
    const int64_t & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__blackboard(
    const bosdyn_msgs::msg::StateNodeStatesAtTickNodeStateBlackboardState_<ContainerAllocator> & _arg)
  {
    this->blackboard = _arg;
    return *this;
  }
  Type & set__blackboard_is_set(
    const bool & _arg)
  {
    this->blackboard_is_set = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::StateNodeStatesAtTickNodeState_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::StateNodeStatesAtTickNodeState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::StateNodeStatesAtTickNodeState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::StateNodeStatesAtTickNodeState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::StateNodeStatesAtTickNodeState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::StateNodeStatesAtTickNodeState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::StateNodeStatesAtTickNodeState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::StateNodeStatesAtTickNodeState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::StateNodeStatesAtTickNodeState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::StateNodeStatesAtTickNodeState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__StateNodeStatesAtTickNodeState
    std::shared_ptr<bosdyn_msgs::msg::StateNodeStatesAtTickNodeState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__StateNodeStatesAtTickNodeState
    std::shared_ptr<bosdyn_msgs::msg::StateNodeStatesAtTickNodeState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const StateNodeStatesAtTickNodeState_ & other) const
  {
    if (this->result != other.result) {
      return false;
    }
    if (this->error != other.error) {
      return false;
    }
    if (this->id != other.id) {
      return false;
    }
    if (this->blackboard != other.blackboard) {
      return false;
    }
    if (this->blackboard_is_set != other.blackboard_is_set) {
      return false;
    }
    return true;
  }
  bool operator!=(const StateNodeStatesAtTickNodeState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct StateNodeStatesAtTickNodeState_

// alias to use template instance with default allocator
using StateNodeStatesAtTickNodeState =
  bosdyn_msgs::msg::StateNodeStatesAtTickNodeState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__STATE_NODE_STATES_AT_TICK_NODE_STATE__STRUCT_HPP_
