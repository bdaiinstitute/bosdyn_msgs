// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/DictParamChildSpec.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__DICT_PARAM_CHILD_SPEC__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__DICT_PARAM_CHILD_SPEC__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'spec'
#include "bosdyn_msgs/msg/detail/custom_param_spec__struct.hpp"
// Member 'ui_info'
#include "bosdyn_msgs/msg/detail/user_interface_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__DictParamChildSpec __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__DictParamChildSpec __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DictParamChildSpec_
{
  using Type = DictParamChildSpec_<ContainerAllocator>;

  explicit DictParamChildSpec_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : spec(_init),
    ui_info(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->spec_is_set = false;
      this->ui_info_is_set = false;
    }
  }

  explicit DictParamChildSpec_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : spec(_alloc, _init),
    ui_info(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->spec_is_set = false;
      this->ui_info_is_set = false;
    }
  }

  // field types and members
  using _spec_type =
    bosdyn_msgs::msg::CustomParamSpec_<ContainerAllocator>;
  _spec_type spec;
  using _spec_is_set_type =
    bool;
  _spec_is_set_type spec_is_set;
  using _ui_info_type =
    bosdyn_msgs::msg::UserInterfaceInfo_<ContainerAllocator>;
  _ui_info_type ui_info;
  using _ui_info_is_set_type =
    bool;
  _ui_info_is_set_type ui_info_is_set;

  // setters for named parameter idiom
  Type & set__spec(
    const bosdyn_msgs::msg::CustomParamSpec_<ContainerAllocator> & _arg)
  {
    this->spec = _arg;
    return *this;
  }
  Type & set__spec_is_set(
    const bool & _arg)
  {
    this->spec_is_set = _arg;
    return *this;
  }
  Type & set__ui_info(
    const bosdyn_msgs::msg::UserInterfaceInfo_<ContainerAllocator> & _arg)
  {
    this->ui_info = _arg;
    return *this;
  }
  Type & set__ui_info_is_set(
    const bool & _arg)
  {
    this->ui_info_is_set = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::DictParamChildSpec_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::DictParamChildSpec_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::DictParamChildSpec_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::DictParamChildSpec_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::DictParamChildSpec_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::DictParamChildSpec_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::DictParamChildSpec_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::DictParamChildSpec_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::DictParamChildSpec_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::DictParamChildSpec_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__DictParamChildSpec
    std::shared_ptr<bosdyn_msgs::msg::DictParamChildSpec_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__DictParamChildSpec
    std::shared_ptr<bosdyn_msgs::msg::DictParamChildSpec_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DictParamChildSpec_ & other) const
  {
    if (this->spec != other.spec) {
      return false;
    }
    if (this->spec_is_set != other.spec_is_set) {
      return false;
    }
    if (this->ui_info != other.ui_info) {
      return false;
    }
    if (this->ui_info_is_set != other.ui_info_is_set) {
      return false;
    }
    return true;
  }
  bool operator!=(const DictParamChildSpec_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DictParamChildSpec_

// alias to use template instance with default allocator
using DictParamChildSpec =
  bosdyn_msgs::msg::DictParamChildSpec_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__DICT_PARAM_CHILD_SPEC__STRUCT_HPP_
