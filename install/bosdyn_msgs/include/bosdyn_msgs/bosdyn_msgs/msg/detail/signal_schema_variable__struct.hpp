// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/SignalSchemaVariable.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__SIGNAL_SCHEMA_VARIABLE__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__SIGNAL_SCHEMA_VARIABLE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'type'
#include "bosdyn_msgs/msg/detail/signal_schema_variable_type__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__SignalSchemaVariable __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__SignalSchemaVariable __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SignalSchemaVariable_
{
  using Type = SignalSchemaVariable_<ContainerAllocator>;

  explicit SignalSchemaVariable_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : type(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->is_time = false;
    }
  }

  explicit SignalSchemaVariable_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_alloc),
    type(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->is_time = false;
    }
  }

  // field types and members
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name_type name;
  using _type_type =
    bosdyn_msgs::msg::SignalSchemaVariableType_<ContainerAllocator>;
  _type_type type;
  using _is_time_type =
    bool;
  _is_time_type is_time;

  // setters for named parameter idiom
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__type(
    const bosdyn_msgs::msg::SignalSchemaVariableType_<ContainerAllocator> & _arg)
  {
    this->type = _arg;
    return *this;
  }
  Type & set__is_time(
    const bool & _arg)
  {
    this->is_time = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::SignalSchemaVariable_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::SignalSchemaVariable_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::SignalSchemaVariable_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::SignalSchemaVariable_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::SignalSchemaVariable_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::SignalSchemaVariable_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::SignalSchemaVariable_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::SignalSchemaVariable_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::SignalSchemaVariable_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::SignalSchemaVariable_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__SignalSchemaVariable
    std::shared_ptr<bosdyn_msgs::msg::SignalSchemaVariable_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__SignalSchemaVariable
    std::shared_ptr<bosdyn_msgs::msg::SignalSchemaVariable_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SignalSchemaVariable_ & other) const
  {
    if (this->name != other.name) {
      return false;
    }
    if (this->type != other.type) {
      return false;
    }
    if (this->is_time != other.is_time) {
      return false;
    }
    return true;
  }
  bool operator!=(const SignalSchemaVariable_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SignalSchemaVariable_

// alias to use template instance with default allocator
using SignalSchemaVariable =
  bosdyn_msgs::msg::SignalSchemaVariable_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__SIGNAL_SCHEMA_VARIABLE__STRUCT_HPP_
