// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/CustomParamCollection.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__CUSTOM_PARAM_COLLECTION__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__CUSTOM_PARAM_COLLECTION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'specs'
#include "bosdyn_msgs/msg/detail/dict_param_spec__struct.hpp"
// Member 'values'
#include "bosdyn_msgs/msg/detail/dict_param__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__CustomParamCollection __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__CustomParamCollection __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CustomParamCollection_
{
  using Type = CustomParamCollection_<ContainerAllocator>;

  explicit CustomParamCollection_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : specs(_init),
    values(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->specs_is_set = false;
      this->values_is_set = false;
    }
  }

  explicit CustomParamCollection_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : specs(_alloc, _init),
    values(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->specs_is_set = false;
      this->values_is_set = false;
    }
  }

  // field types and members
  using _specs_type =
    bosdyn_msgs::msg::DictParamSpec_<ContainerAllocator>;
  _specs_type specs;
  using _specs_is_set_type =
    bool;
  _specs_is_set_type specs_is_set;
  using _values_type =
    bosdyn_msgs::msg::DictParam_<ContainerAllocator>;
  _values_type values;
  using _values_is_set_type =
    bool;
  _values_is_set_type values_is_set;

  // setters for named parameter idiom
  Type & set__specs(
    const bosdyn_msgs::msg::DictParamSpec_<ContainerAllocator> & _arg)
  {
    this->specs = _arg;
    return *this;
  }
  Type & set__specs_is_set(
    const bool & _arg)
  {
    this->specs_is_set = _arg;
    return *this;
  }
  Type & set__values(
    const bosdyn_msgs::msg::DictParam_<ContainerAllocator> & _arg)
  {
    this->values = _arg;
    return *this;
  }
  Type & set__values_is_set(
    const bool & _arg)
  {
    this->values_is_set = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::CustomParamCollection_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::CustomParamCollection_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::CustomParamCollection_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::CustomParamCollection_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::CustomParamCollection_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::CustomParamCollection_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::CustomParamCollection_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::CustomParamCollection_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::CustomParamCollection_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::CustomParamCollection_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__CustomParamCollection
    std::shared_ptr<bosdyn_msgs::msg::CustomParamCollection_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__CustomParamCollection
    std::shared_ptr<bosdyn_msgs::msg::CustomParamCollection_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CustomParamCollection_ & other) const
  {
    if (this->specs != other.specs) {
      return false;
    }
    if (this->specs_is_set != other.specs_is_set) {
      return false;
    }
    if (this->values != other.values) {
      return false;
    }
    if (this->values_is_set != other.values_is_set) {
      return false;
    }
    return true;
  }
  bool operator!=(const CustomParamCollection_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CustomParamCollection_

// alias to use template instance with default allocator
using CustomParamCollection =
  bosdyn_msgs::msg::CustomParamCollection_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__CUSTOM_PARAM_COLLECTION__STRUCT_HPP_
