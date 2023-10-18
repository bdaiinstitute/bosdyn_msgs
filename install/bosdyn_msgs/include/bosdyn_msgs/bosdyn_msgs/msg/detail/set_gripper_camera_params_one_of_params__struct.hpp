// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/SetGripperCameraParamsOneOfParams.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__SET_GRIPPER_CAMERA_PARAMS_ONE_OF_PARAMS__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__SET_GRIPPER_CAMERA_PARAMS_ONE_OF_PARAMS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'new_params'
#include "bosdyn_msgs/msg/detail/gripper_camera_params__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__SetGripperCameraParamsOneOfParams __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__SetGripperCameraParamsOneOfParams __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SetGripperCameraParamsOneOfParams_
{
  using Type = SetGripperCameraParamsOneOfParams_<ContainerAllocator>;

  explicit SetGripperCameraParamsOneOfParams_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : new_params(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->params_in_blackboard_key = "";
      this->params_choice = 0;
    }
  }

  explicit SetGripperCameraParamsOneOfParams_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : params_in_blackboard_key(_alloc),
    new_params(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->params_in_blackboard_key = "";
      this->params_choice = 0;
    }
  }

  // field types and members
  using _params_in_blackboard_key_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _params_in_blackboard_key_type params_in_blackboard_key;
  using _new_params_type =
    bosdyn_msgs::msg::GripperCameraParams_<ContainerAllocator>;
  _new_params_type new_params;
  using _params_choice_type =
    int8_t;
  _params_choice_type params_choice;

  // setters for named parameter idiom
  Type & set__params_in_blackboard_key(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->params_in_blackboard_key = _arg;
    return *this;
  }
  Type & set__new_params(
    const bosdyn_msgs::msg::GripperCameraParams_<ContainerAllocator> & _arg)
  {
    this->new_params = _arg;
    return *this;
  }
  Type & set__params_choice(
    const int8_t & _arg)
  {
    this->params_choice = _arg;
    return *this;
  }

  // constant declarations
  static constexpr int8_t PARAMS_NOT_SET =
    0;
  static constexpr int8_t PARAMS_PARAMS_IN_BLACKBOARD_KEY_SET =
    1;
  static constexpr int8_t PARAMS_NEW_PARAMS_SET =
    2;

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::SetGripperCameraParamsOneOfParams_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::SetGripperCameraParamsOneOfParams_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::SetGripperCameraParamsOneOfParams_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::SetGripperCameraParamsOneOfParams_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::SetGripperCameraParamsOneOfParams_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::SetGripperCameraParamsOneOfParams_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::SetGripperCameraParamsOneOfParams_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::SetGripperCameraParamsOneOfParams_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::SetGripperCameraParamsOneOfParams_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::SetGripperCameraParamsOneOfParams_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__SetGripperCameraParamsOneOfParams
    std::shared_ptr<bosdyn_msgs::msg::SetGripperCameraParamsOneOfParams_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__SetGripperCameraParamsOneOfParams
    std::shared_ptr<bosdyn_msgs::msg::SetGripperCameraParamsOneOfParams_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetGripperCameraParamsOneOfParams_ & other) const
  {
    if (this->params_in_blackboard_key != other.params_in_blackboard_key) {
      return false;
    }
    if (this->new_params != other.new_params) {
      return false;
    }
    if (this->params_choice != other.params_choice) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetGripperCameraParamsOneOfParams_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetGripperCameraParamsOneOfParams_

// alias to use template instance with default allocator
using SetGripperCameraParamsOneOfParams =
  bosdyn_msgs::msg::SetGripperCameraParamsOneOfParams_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t SetGripperCameraParamsOneOfParams_<ContainerAllocator>::PARAMS_NOT_SET;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t SetGripperCameraParamsOneOfParams_<ContainerAllocator>::PARAMS_PARAMS_IN_BLACKBOARD_KEY_SET;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t SetGripperCameraParamsOneOfParams_<ContainerAllocator>::PARAMS_NEW_PARAMS_SET;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__SET_GRIPPER_CAMERA_PARAMS_ONE_OF_PARAMS__STRUCT_HPP_
