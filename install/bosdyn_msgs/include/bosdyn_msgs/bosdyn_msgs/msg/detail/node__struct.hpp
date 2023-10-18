// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/Node.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__NODE__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__NODE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'user_data'
#include "bosdyn_msgs/msg/detail/user_data__struct.hpp"
// Member 'type'
#include "bosdyn_msgs/msg/detail/node_one_of_type__struct.hpp"
// Member 'parameter_values'
// Member 'overrides'
#include "bosdyn_msgs/msg/detail/key_value__struct.hpp"
// Member 'parameters'
#include "bosdyn_msgs/msg/detail/variable_declaration__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__Node __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__Node __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Node_
{
  using Type = Node_<ContainerAllocator>;

  explicit Node_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : user_data(_init),
    type(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->user_data_is_set = false;
      this->reference_id = "";
    }
  }

  explicit Node_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_alloc),
    user_data(_alloc, _init),
    reference_id(_alloc),
    type(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->user_data_is_set = false;
      this->reference_id = "";
    }
  }

  // field types and members
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name_type name;
  using _user_data_type =
    bosdyn_msgs::msg::UserData_<ContainerAllocator>;
  _user_data_type user_data;
  using _user_data_is_set_type =
    bool;
  _user_data_is_set_type user_data_is_set;
  using _reference_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _reference_id_type reference_id;
  using _type_type =
    bosdyn_msgs::msg::NodeOneOfType_<ContainerAllocator>;
  _type_type type;
  using _parameter_values_type =
    std::vector<bosdyn_msgs::msg::KeyValue_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::KeyValue_<ContainerAllocator>>>;
  _parameter_values_type parameter_values;
  using _overrides_type =
    std::vector<bosdyn_msgs::msg::KeyValue_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::KeyValue_<ContainerAllocator>>>;
  _overrides_type overrides;
  using _parameters_type =
    std::vector<bosdyn_msgs::msg::VariableDeclaration_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::VariableDeclaration_<ContainerAllocator>>>;
  _parameters_type parameters;

  // setters for named parameter idiom
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__user_data(
    const bosdyn_msgs::msg::UserData_<ContainerAllocator> & _arg)
  {
    this->user_data = _arg;
    return *this;
  }
  Type & set__user_data_is_set(
    const bool & _arg)
  {
    this->user_data_is_set = _arg;
    return *this;
  }
  Type & set__reference_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->reference_id = _arg;
    return *this;
  }
  Type & set__type(
    const bosdyn_msgs::msg::NodeOneOfType_<ContainerAllocator> & _arg)
  {
    this->type = _arg;
    return *this;
  }
  Type & set__parameter_values(
    const std::vector<bosdyn_msgs::msg::KeyValue_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::KeyValue_<ContainerAllocator>>> & _arg)
  {
    this->parameter_values = _arg;
    return *this;
  }
  Type & set__overrides(
    const std::vector<bosdyn_msgs::msg::KeyValue_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::KeyValue_<ContainerAllocator>>> & _arg)
  {
    this->overrides = _arg;
    return *this;
  }
  Type & set__parameters(
    const std::vector<bosdyn_msgs::msg::VariableDeclaration_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::VariableDeclaration_<ContainerAllocator>>> & _arg)
  {
    this->parameters = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::Node_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::Node_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::Node_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::Node_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::Node_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::Node_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::Node_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::Node_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::Node_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::Node_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__Node
    std::shared_ptr<bosdyn_msgs::msg::Node_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__Node
    std::shared_ptr<bosdyn_msgs::msg::Node_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Node_ & other) const
  {
    if (this->name != other.name) {
      return false;
    }
    if (this->user_data != other.user_data) {
      return false;
    }
    if (this->user_data_is_set != other.user_data_is_set) {
      return false;
    }
    if (this->reference_id != other.reference_id) {
      return false;
    }
    if (this->type != other.type) {
      return false;
    }
    if (this->parameter_values != other.parameter_values) {
      return false;
    }
    if (this->overrides != other.overrides) {
      return false;
    }
    if (this->parameters != other.parameters) {
      return false;
    }
    return true;
  }
  bool operator!=(const Node_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Node_

// alias to use template instance with default allocator
using Node =
  bosdyn_msgs::msg::Node_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__NODE__STRUCT_HPP_
