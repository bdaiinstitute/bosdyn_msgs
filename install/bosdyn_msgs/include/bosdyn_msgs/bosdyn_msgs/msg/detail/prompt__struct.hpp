// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/Prompt.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__PROMPT__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__PROMPT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'options'
#include "bosdyn_msgs/msg/detail/prompt_option__struct.hpp"
// Member 'child'
#include "bosdyn_msgs/msg/detail/node__struct.hpp"
// Member 'severity'
#include "bosdyn_msgs/msg/detail/alert_data_severity_level__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__Prompt __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__Prompt __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Prompt_
{
  using Type = Prompt_<ContainerAllocator>;

  explicit Prompt_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : child(_init),
    severity(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->always_reprompt = false;
      this->text = "";
      this->source = "";
      this->child_is_set = false;
      this->for_autonomous_processing = false;
      this->question_name_in_blackboard = "";
    }
  }

  explicit Prompt_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : text(_alloc),
    source(_alloc),
    child(_alloc, _init),
    severity(_alloc, _init),
    question_name_in_blackboard(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->always_reprompt = false;
      this->text = "";
      this->source = "";
      this->child_is_set = false;
      this->for_autonomous_processing = false;
      this->question_name_in_blackboard = "";
    }
  }

  // field types and members
  using _always_reprompt_type =
    bool;
  _always_reprompt_type always_reprompt;
  using _text_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _text_type text;
  using _source_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _source_type source;
  using _options_type =
    std::vector<bosdyn_msgs::msg::PromptOption_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::PromptOption_<ContainerAllocator>>>;
  _options_type options;
  using _child_type =
    bosdyn_msgs::msg::Node_<ContainerAllocator>;
  _child_type child;
  using _child_is_set_type =
    bool;
  _child_is_set_type child_is_set;
  using _for_autonomous_processing_type =
    bool;
  _for_autonomous_processing_type for_autonomous_processing;
  using _severity_type =
    bosdyn_msgs::msg::AlertDataSeverityLevel_<ContainerAllocator>;
  _severity_type severity;
  using _question_name_in_blackboard_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _question_name_in_blackboard_type question_name_in_blackboard;

  // setters for named parameter idiom
  Type & set__always_reprompt(
    const bool & _arg)
  {
    this->always_reprompt = _arg;
    return *this;
  }
  Type & set__text(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->text = _arg;
    return *this;
  }
  Type & set__source(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->source = _arg;
    return *this;
  }
  Type & set__options(
    const std::vector<bosdyn_msgs::msg::PromptOption_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::PromptOption_<ContainerAllocator>>> & _arg)
  {
    this->options = _arg;
    return *this;
  }
  Type & set__child(
    const bosdyn_msgs::msg::Node_<ContainerAllocator> & _arg)
  {
    this->child = _arg;
    return *this;
  }
  Type & set__child_is_set(
    const bool & _arg)
  {
    this->child_is_set = _arg;
    return *this;
  }
  Type & set__for_autonomous_processing(
    const bool & _arg)
  {
    this->for_autonomous_processing = _arg;
    return *this;
  }
  Type & set__severity(
    const bosdyn_msgs::msg::AlertDataSeverityLevel_<ContainerAllocator> & _arg)
  {
    this->severity = _arg;
    return *this;
  }
  Type & set__question_name_in_blackboard(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->question_name_in_blackboard = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::Prompt_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::Prompt_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::Prompt_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::Prompt_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::Prompt_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::Prompt_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::Prompt_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::Prompt_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::Prompt_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::Prompt_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__Prompt
    std::shared_ptr<bosdyn_msgs::msg::Prompt_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__Prompt
    std::shared_ptr<bosdyn_msgs::msg::Prompt_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Prompt_ & other) const
  {
    if (this->always_reprompt != other.always_reprompt) {
      return false;
    }
    if (this->text != other.text) {
      return false;
    }
    if (this->source != other.source) {
      return false;
    }
    if (this->options != other.options) {
      return false;
    }
    if (this->child != other.child) {
      return false;
    }
    if (this->child_is_set != other.child_is_set) {
      return false;
    }
    if (this->for_autonomous_processing != other.for_autonomous_processing) {
      return false;
    }
    if (this->severity != other.severity) {
      return false;
    }
    if (this->question_name_in_blackboard != other.question_name_in_blackboard) {
      return false;
    }
    return true;
  }
  bool operator!=(const Prompt_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Prompt_

// alias to use template instance with default allocator
using Prompt =
  bosdyn_msgs::msg::Prompt_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__PROMPT__STRUCT_HPP_
