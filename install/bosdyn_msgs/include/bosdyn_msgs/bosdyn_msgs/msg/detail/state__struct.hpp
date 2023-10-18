// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/State.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__STATE__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'questions'
#include "bosdyn_msgs/msg/detail/question__struct.hpp"
// Member 'answered_questions'
#include "bosdyn_msgs/msg/detail/state_answered_question__struct.hpp"
// Member 'history'
#include "bosdyn_msgs/msg/detail/state_node_states_at_tick__struct.hpp"
// Member 'status'
#include "bosdyn_msgs/msg/detail/state_status__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__State __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__State __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct State_
{
  using Type = State_<ContainerAllocator>;

  explicit State_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : status(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->error = "";
      this->tick_counter = 0ll;
      this->mission_id = 0ll;
    }
  }

  explicit State_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : status(_alloc, _init),
    error(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->error = "";
      this->tick_counter = 0ll;
      this->mission_id = 0ll;
    }
  }

  // field types and members
  using _questions_type =
    std::vector<bosdyn_msgs::msg::Question_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::Question_<ContainerAllocator>>>;
  _questions_type questions;
  using _answered_questions_type =
    std::vector<bosdyn_msgs::msg::StateAnsweredQuestion_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::StateAnsweredQuestion_<ContainerAllocator>>>;
  _answered_questions_type answered_questions;
  using _history_type =
    std::vector<bosdyn_msgs::msg::StateNodeStatesAtTick_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::StateNodeStatesAtTick_<ContainerAllocator>>>;
  _history_type history;
  using _status_type =
    bosdyn_msgs::msg::StateStatus_<ContainerAllocator>;
  _status_type status;
  using _error_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _error_type error;
  using _tick_counter_type =
    int64_t;
  _tick_counter_type tick_counter;
  using _mission_id_type =
    int64_t;
  _mission_id_type mission_id;

  // setters for named parameter idiom
  Type & set__questions(
    const std::vector<bosdyn_msgs::msg::Question_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::Question_<ContainerAllocator>>> & _arg)
  {
    this->questions = _arg;
    return *this;
  }
  Type & set__answered_questions(
    const std::vector<bosdyn_msgs::msg::StateAnsweredQuestion_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::StateAnsweredQuestion_<ContainerAllocator>>> & _arg)
  {
    this->answered_questions = _arg;
    return *this;
  }
  Type & set__history(
    const std::vector<bosdyn_msgs::msg::StateNodeStatesAtTick_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::StateNodeStatesAtTick_<ContainerAllocator>>> & _arg)
  {
    this->history = _arg;
    return *this;
  }
  Type & set__status(
    const bosdyn_msgs::msg::StateStatus_<ContainerAllocator> & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__error(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->error = _arg;
    return *this;
  }
  Type & set__tick_counter(
    const int64_t & _arg)
  {
    this->tick_counter = _arg;
    return *this;
  }
  Type & set__mission_id(
    const int64_t & _arg)
  {
    this->mission_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::State_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::State_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::State_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::State_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::State_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::State_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::State_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::State_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::State_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::State_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__State
    std::shared_ptr<bosdyn_msgs::msg::State_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__State
    std::shared_ptr<bosdyn_msgs::msg::State_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const State_ & other) const
  {
    if (this->questions != other.questions) {
      return false;
    }
    if (this->answered_questions != other.answered_questions) {
      return false;
    }
    if (this->history != other.history) {
      return false;
    }
    if (this->status != other.status) {
      return false;
    }
    if (this->error != other.error) {
      return false;
    }
    if (this->tick_counter != other.tick_counter) {
      return false;
    }
    if (this->mission_id != other.mission_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const State_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct State_

// alias to use template instance with default allocator
using State =
  bosdyn_msgs::msg::State_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__STATE__STRUCT_HPP_
