// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/GlobalParameters.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__GLOBAL_PARAMETERS__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__GLOBAL_PARAMETERS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'post_mission_callbacks'
#include "bosdyn_msgs/msg/detail/action_remote_grpc__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__GlobalParameters __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__GlobalParameters __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct GlobalParameters_
{
  using Type = GlobalParameters_<ContainerAllocator>;

  explicit GlobalParameters_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->group_name = "";
      this->should_autofocus_ptz = false;
      this->self_right_attempts = 0l;
      this->skip_actions = false;
    }
  }

  explicit GlobalParameters_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : group_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->group_name = "";
      this->should_autofocus_ptz = false;
      this->self_right_attempts = 0l;
      this->skip_actions = false;
    }
  }

  // field types and members
  using _group_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _group_name_type group_name;
  using _should_autofocus_ptz_type =
    bool;
  _should_autofocus_ptz_type should_autofocus_ptz;
  using _self_right_attempts_type =
    int32_t;
  _self_right_attempts_type self_right_attempts;
  using _post_mission_callbacks_type =
    std::vector<bosdyn_msgs::msg::ActionRemoteGrpc_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::ActionRemoteGrpc_<ContainerAllocator>>>;
  _post_mission_callbacks_type post_mission_callbacks;
  using _skip_actions_type =
    bool;
  _skip_actions_type skip_actions;

  // setters for named parameter idiom
  Type & set__group_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->group_name = _arg;
    return *this;
  }
  Type & set__should_autofocus_ptz(
    const bool & _arg)
  {
    this->should_autofocus_ptz = _arg;
    return *this;
  }
  Type & set__self_right_attempts(
    const int32_t & _arg)
  {
    this->self_right_attempts = _arg;
    return *this;
  }
  Type & set__post_mission_callbacks(
    const std::vector<bosdyn_msgs::msg::ActionRemoteGrpc_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::ActionRemoteGrpc_<ContainerAllocator>>> & _arg)
  {
    this->post_mission_callbacks = _arg;
    return *this;
  }
  Type & set__skip_actions(
    const bool & _arg)
  {
    this->skip_actions = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::GlobalParameters_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::GlobalParameters_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::GlobalParameters_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::GlobalParameters_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::GlobalParameters_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::GlobalParameters_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::GlobalParameters_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::GlobalParameters_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::GlobalParameters_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::GlobalParameters_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__GlobalParameters
    std::shared_ptr<bosdyn_msgs::msg::GlobalParameters_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__GlobalParameters
    std::shared_ptr<bosdyn_msgs::msg::GlobalParameters_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GlobalParameters_ & other) const
  {
    if (this->group_name != other.group_name) {
      return false;
    }
    if (this->should_autofocus_ptz != other.should_autofocus_ptz) {
      return false;
    }
    if (this->self_right_attempts != other.self_right_attempts) {
      return false;
    }
    if (this->post_mission_callbacks != other.post_mission_callbacks) {
      return false;
    }
    if (this->skip_actions != other.skip_actions) {
      return false;
    }
    return true;
  }
  bool operator!=(const GlobalParameters_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GlobalParameters_

// alias to use template instance with default allocator
using GlobalParameters =
  bosdyn_msgs::msg::GlobalParameters_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__GLOBAL_PARAMETERS__STRUCT_HPP_
