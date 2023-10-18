// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/ListParamSpec.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__LIST_PARAM_SPEC__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__LIST_PARAM_SPEC__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'element_spec'
#include "bosdyn_msgs/msg/detail/serialized_message__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__ListParamSpec __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__ListParamSpec __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ListParamSpec_
{
  using Type = ListParamSpec_<ContainerAllocator>;

  explicit ListParamSpec_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : element_spec(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->element_spec_is_set = false;
      this->min_number_of_values = 0ll;
      this->min_number_of_values_is_set = false;
      this->max_number_of_values = 0ll;
      this->max_number_of_values_is_set = false;
    }
  }

  explicit ListParamSpec_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : element_spec(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->element_spec_is_set = false;
      this->min_number_of_values = 0ll;
      this->min_number_of_values_is_set = false;
      this->max_number_of_values = 0ll;
      this->max_number_of_values_is_set = false;
    }
  }

  // field types and members
  using _element_spec_type =
    bosdyn_msgs::msg::SerializedMessage_<ContainerAllocator>;
  _element_spec_type element_spec;
  using _element_spec_is_set_type =
    bool;
  _element_spec_is_set_type element_spec_is_set;
  using _min_number_of_values_type =
    int64_t;
  _min_number_of_values_type min_number_of_values;
  using _min_number_of_values_is_set_type =
    bool;
  _min_number_of_values_is_set_type min_number_of_values_is_set;
  using _max_number_of_values_type =
    int64_t;
  _max_number_of_values_type max_number_of_values;
  using _max_number_of_values_is_set_type =
    bool;
  _max_number_of_values_is_set_type max_number_of_values_is_set;

  // setters for named parameter idiom
  Type & set__element_spec(
    const bosdyn_msgs::msg::SerializedMessage_<ContainerAllocator> & _arg)
  {
    this->element_spec = _arg;
    return *this;
  }
  Type & set__element_spec_is_set(
    const bool & _arg)
  {
    this->element_spec_is_set = _arg;
    return *this;
  }
  Type & set__min_number_of_values(
    const int64_t & _arg)
  {
    this->min_number_of_values = _arg;
    return *this;
  }
  Type & set__min_number_of_values_is_set(
    const bool & _arg)
  {
    this->min_number_of_values_is_set = _arg;
    return *this;
  }
  Type & set__max_number_of_values(
    const int64_t & _arg)
  {
    this->max_number_of_values = _arg;
    return *this;
  }
  Type & set__max_number_of_values_is_set(
    const bool & _arg)
  {
    this->max_number_of_values_is_set = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::ListParamSpec_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::ListParamSpec_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::ListParamSpec_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::ListParamSpec_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::ListParamSpec_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::ListParamSpec_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::ListParamSpec_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::ListParamSpec_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::ListParamSpec_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::ListParamSpec_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__ListParamSpec
    std::shared_ptr<bosdyn_msgs::msg::ListParamSpec_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__ListParamSpec
    std::shared_ptr<bosdyn_msgs::msg::ListParamSpec_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ListParamSpec_ & other) const
  {
    if (this->element_spec != other.element_spec) {
      return false;
    }
    if (this->element_spec_is_set != other.element_spec_is_set) {
      return false;
    }
    if (this->min_number_of_values != other.min_number_of_values) {
      return false;
    }
    if (this->min_number_of_values_is_set != other.min_number_of_values_is_set) {
      return false;
    }
    if (this->max_number_of_values != other.max_number_of_values) {
      return false;
    }
    if (this->max_number_of_values_is_set != other.max_number_of_values_is_set) {
      return false;
    }
    return true;
  }
  bool operator!=(const ListParamSpec_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ListParamSpec_

// alias to use template instance with default allocator
using ListParamSpec =
  bosdyn_msgs::msg::ListParamSpec_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__LIST_PARAM_SPEC__STRUCT_HPP_
