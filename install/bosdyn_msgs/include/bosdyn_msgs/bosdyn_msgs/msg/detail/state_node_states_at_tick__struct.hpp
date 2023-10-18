// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/StateNodeStatesAtTick.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__STATE_NODE_STATES_AT_TICK__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__STATE_NODE_STATES_AT_TICK__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'tick_start_timestamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"
// Member 'node_states'
#include "bosdyn_msgs/msg/detail/state_node_states_at_tick_node_state__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__StateNodeStatesAtTick __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__StateNodeStatesAtTick __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct StateNodeStatesAtTick_
{
  using Type = StateNodeStatesAtTick_<ContainerAllocator>;

  explicit StateNodeStatesAtTick_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : tick_start_timestamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->tick_counter = 0ll;
      this->tick_start_timestamp_is_set = false;
    }
  }

  explicit StateNodeStatesAtTick_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : tick_start_timestamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->tick_counter = 0ll;
      this->tick_start_timestamp_is_set = false;
    }
  }

  // field types and members
  using _tick_counter_type =
    int64_t;
  _tick_counter_type tick_counter;
  using _tick_start_timestamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _tick_start_timestamp_type tick_start_timestamp;
  using _tick_start_timestamp_is_set_type =
    bool;
  _tick_start_timestamp_is_set_type tick_start_timestamp_is_set;
  using _node_states_type =
    std::vector<bosdyn_msgs::msg::StateNodeStatesAtTickNodeState_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::StateNodeStatesAtTickNodeState_<ContainerAllocator>>>;
  _node_states_type node_states;

  // setters for named parameter idiom
  Type & set__tick_counter(
    const int64_t & _arg)
  {
    this->tick_counter = _arg;
    return *this;
  }
  Type & set__tick_start_timestamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->tick_start_timestamp = _arg;
    return *this;
  }
  Type & set__tick_start_timestamp_is_set(
    const bool & _arg)
  {
    this->tick_start_timestamp_is_set = _arg;
    return *this;
  }
  Type & set__node_states(
    const std::vector<bosdyn_msgs::msg::StateNodeStatesAtTickNodeState_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::StateNodeStatesAtTickNodeState_<ContainerAllocator>>> & _arg)
  {
    this->node_states = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::StateNodeStatesAtTick_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::StateNodeStatesAtTick_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::StateNodeStatesAtTick_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::StateNodeStatesAtTick_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::StateNodeStatesAtTick_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::StateNodeStatesAtTick_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::StateNodeStatesAtTick_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::StateNodeStatesAtTick_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::StateNodeStatesAtTick_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::StateNodeStatesAtTick_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__StateNodeStatesAtTick
    std::shared_ptr<bosdyn_msgs::msg::StateNodeStatesAtTick_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__StateNodeStatesAtTick
    std::shared_ptr<bosdyn_msgs::msg::StateNodeStatesAtTick_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const StateNodeStatesAtTick_ & other) const
  {
    if (this->tick_counter != other.tick_counter) {
      return false;
    }
    if (this->tick_start_timestamp != other.tick_start_timestamp) {
      return false;
    }
    if (this->tick_start_timestamp_is_set != other.tick_start_timestamp_is_set) {
      return false;
    }
    if (this->node_states != other.node_states) {
      return false;
    }
    return true;
  }
  bool operator!=(const StateNodeStatesAtTick_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct StateNodeStatesAtTick_

// alias to use template instance with default allocator
using StateNodeStatesAtTick =
  bosdyn_msgs::msg::StateNodeStatesAtTick_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__STATE_NODE_STATES_AT_TICK__STRUCT_HPP_
