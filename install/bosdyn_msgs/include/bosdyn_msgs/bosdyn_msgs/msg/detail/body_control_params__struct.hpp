// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/BodyControlParams.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__BODY_CONTROL_PARAMS__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__BODY_CONTROL_PARAMS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'param'
#include "bosdyn_msgs/msg/detail/body_control_params_one_of_param__struct.hpp"
// Member 'rotation_setting'
#include "bosdyn_msgs/msg/detail/body_control_params_rotation_setting__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__BodyControlParams __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__BodyControlParams __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct BodyControlParams_
{
  using Type = BodyControlParams_<ContainerAllocator>;

  explicit BodyControlParams_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : param(_init),
    rotation_setting(_init)
  {
    (void)_init;
  }

  explicit BodyControlParams_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : param(_alloc, _init),
    rotation_setting(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _param_type =
    bosdyn_msgs::msg::BodyControlParamsOneOfParam_<ContainerAllocator>;
  _param_type param;
  using _rotation_setting_type =
    bosdyn_msgs::msg::BodyControlParamsRotationSetting_<ContainerAllocator>;
  _rotation_setting_type rotation_setting;

  // setters for named parameter idiom
  Type & set__param(
    const bosdyn_msgs::msg::BodyControlParamsOneOfParam_<ContainerAllocator> & _arg)
  {
    this->param = _arg;
    return *this;
  }
  Type & set__rotation_setting(
    const bosdyn_msgs::msg::BodyControlParamsRotationSetting_<ContainerAllocator> & _arg)
  {
    this->rotation_setting = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::BodyControlParams_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::BodyControlParams_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::BodyControlParams_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::BodyControlParams_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::BodyControlParams_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::BodyControlParams_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::BodyControlParams_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::BodyControlParams_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::BodyControlParams_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::BodyControlParams_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__BodyControlParams
    std::shared_ptr<bosdyn_msgs::msg::BodyControlParams_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__BodyControlParams
    std::shared_ptr<bosdyn_msgs::msg::BodyControlParams_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BodyControlParams_ & other) const
  {
    if (this->param != other.param) {
      return false;
    }
    if (this->rotation_setting != other.rotation_setting) {
      return false;
    }
    return true;
  }
  bool operator!=(const BodyControlParams_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BodyControlParams_

// alias to use template instance with default allocator
using BodyControlParams =
  bosdyn_msgs::msg::BodyControlParams_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__BODY_CONTROL_PARAMS__STRUCT_HPP_
