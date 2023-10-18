// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/Question.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__QUESTION__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__QUESTION__STRUCT_HPP_

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
// Member 'severity'
#include "bosdyn_msgs/msg/detail/alert_data_severity_level__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__Question __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__Question __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Question_
{
  using Type = Question_<ContainerAllocator>;

  explicit Question_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : severity(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0ll;
      this->source = "";
      this->text = "";
      this->for_autonomous_processing = false;
    }
  }

  explicit Question_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : source(_alloc),
    text(_alloc),
    severity(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0ll;
      this->source = "";
      this->text = "";
      this->for_autonomous_processing = false;
    }
  }

  // field types and members
  using _id_type =
    int64_t;
  _id_type id;
  using _source_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _source_type source;
  using _text_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _text_type text;
  using _options_type =
    std::vector<bosdyn_msgs::msg::PromptOption_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::PromptOption_<ContainerAllocator>>>;
  _options_type options;
  using _for_autonomous_processing_type =
    bool;
  _for_autonomous_processing_type for_autonomous_processing;
  using _severity_type =
    bosdyn_msgs::msg::AlertDataSeverityLevel_<ContainerAllocator>;
  _severity_type severity;

  // setters for named parameter idiom
  Type & set__id(
    const int64_t & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__source(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->source = _arg;
    return *this;
  }
  Type & set__text(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->text = _arg;
    return *this;
  }
  Type & set__options(
    const std::vector<bosdyn_msgs::msg::PromptOption_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::PromptOption_<ContainerAllocator>>> & _arg)
  {
    this->options = _arg;
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

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::Question_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::Question_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::Question_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::Question_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::Question_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::Question_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::Question_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::Question_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::Question_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::Question_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__Question
    std::shared_ptr<bosdyn_msgs::msg::Question_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__Question
    std::shared_ptr<bosdyn_msgs::msg::Question_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Question_ & other) const
  {
    if (this->id != other.id) {
      return false;
    }
    if (this->source != other.source) {
      return false;
    }
    if (this->text != other.text) {
      return false;
    }
    if (this->options != other.options) {
      return false;
    }
    if (this->for_autonomous_processing != other.for_autonomous_processing) {
      return false;
    }
    if (this->severity != other.severity) {
      return false;
    }
    return true;
  }
  bool operator!=(const Question_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Question_

// alias to use template instance with default allocator
using Question =
  bosdyn_msgs::msg::Question_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__QUESTION__STRUCT_HPP_
