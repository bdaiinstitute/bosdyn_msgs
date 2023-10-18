// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/StateAnsweredQuestion.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__STATE_ANSWERED_QUESTION__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__STATE_ANSWERED_QUESTION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'question'
#include "bosdyn_msgs/msg/detail/question__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__StateAnsweredQuestion __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__StateAnsweredQuestion __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct StateAnsweredQuestion_
{
  using Type = StateAnsweredQuestion_<ContainerAllocator>;

  explicit StateAnsweredQuestion_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : question(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->question_is_set = false;
      this->accepted_answer_code = 0ll;
    }
  }

  explicit StateAnsweredQuestion_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : question(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->question_is_set = false;
      this->accepted_answer_code = 0ll;
    }
  }

  // field types and members
  using _question_type =
    bosdyn_msgs::msg::Question_<ContainerAllocator>;
  _question_type question;
  using _question_is_set_type =
    bool;
  _question_is_set_type question_is_set;
  using _accepted_answer_code_type =
    int64_t;
  _accepted_answer_code_type accepted_answer_code;

  // setters for named parameter idiom
  Type & set__question(
    const bosdyn_msgs::msg::Question_<ContainerAllocator> & _arg)
  {
    this->question = _arg;
    return *this;
  }
  Type & set__question_is_set(
    const bool & _arg)
  {
    this->question_is_set = _arg;
    return *this;
  }
  Type & set__accepted_answer_code(
    const int64_t & _arg)
  {
    this->accepted_answer_code = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::StateAnsweredQuestion_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::StateAnsweredQuestion_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::StateAnsweredQuestion_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::StateAnsweredQuestion_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::StateAnsweredQuestion_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::StateAnsweredQuestion_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::StateAnsweredQuestion_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::StateAnsweredQuestion_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::StateAnsweredQuestion_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::StateAnsweredQuestion_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__StateAnsweredQuestion
    std::shared_ptr<bosdyn_msgs::msg::StateAnsweredQuestion_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__StateAnsweredQuestion
    std::shared_ptr<bosdyn_msgs::msg::StateAnsweredQuestion_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const StateAnsweredQuestion_ & other) const
  {
    if (this->question != other.question) {
      return false;
    }
    if (this->question_is_set != other.question_is_set) {
      return false;
    }
    if (this->accepted_answer_code != other.accepted_answer_code) {
      return false;
    }
    return true;
  }
  bool operator!=(const StateAnsweredQuestion_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct StateAnsweredQuestion_

// alias to use template instance with default allocator
using StateAnsweredQuestion =
  bosdyn_msgs::msg::StateAnsweredQuestion_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__STATE_ANSWERED_QUESTION__STRUCT_HPP_
