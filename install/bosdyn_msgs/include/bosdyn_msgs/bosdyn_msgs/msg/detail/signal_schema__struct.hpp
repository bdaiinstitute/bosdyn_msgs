// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/SignalSchema.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__SIGNAL_SCHEMA__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__SIGNAL_SCHEMA__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'vars'
#include "bosdyn_msgs/msg/detail/signal_schema_variable__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__SignalSchema __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__SignalSchema __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SignalSchema_
{
  using Type = SignalSchema_<ContainerAllocator>;

  explicit SignalSchema_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->schema_name = "";
    }
  }

  explicit SignalSchema_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : schema_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->schema_name = "";
    }
  }

  // field types and members
  using _vars_type =
    std::vector<bosdyn_msgs::msg::SignalSchemaVariable_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::SignalSchemaVariable_<ContainerAllocator>>>;
  _vars_type vars;
  using _schema_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _schema_name_type schema_name;

  // setters for named parameter idiom
  Type & set__vars(
    const std::vector<bosdyn_msgs::msg::SignalSchemaVariable_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::SignalSchemaVariable_<ContainerAllocator>>> & _arg)
  {
    this->vars = _arg;
    return *this;
  }
  Type & set__schema_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->schema_name = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::SignalSchema_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::SignalSchema_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::SignalSchema_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::SignalSchema_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::SignalSchema_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::SignalSchema_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::SignalSchema_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::SignalSchema_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::SignalSchema_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::SignalSchema_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__SignalSchema
    std::shared_ptr<bosdyn_msgs::msg::SignalSchema_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__SignalSchema
    std::shared_ptr<bosdyn_msgs::msg::SignalSchema_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SignalSchema_ & other) const
  {
    if (this->vars != other.vars) {
      return false;
    }
    if (this->schema_name != other.schema_name) {
      return false;
    }
    return true;
  }
  bool operator!=(const SignalSchema_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SignalSchema_

// alias to use template instance with default allocator
using SignalSchema =
  bosdyn_msgs::msg::SignalSchema_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__SIGNAL_SCHEMA__STRUCT_HPP_
