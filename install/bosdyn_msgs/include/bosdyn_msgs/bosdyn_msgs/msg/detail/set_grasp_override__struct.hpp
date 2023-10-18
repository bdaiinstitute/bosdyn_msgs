// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/SetGraspOverride.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__SET_GRASP_OVERRIDE__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__SET_GRASP_OVERRIDE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'grasp_override_request'
#include "bosdyn_msgs/msg/detail/api_grasp_override_request__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__SetGraspOverride __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__SetGraspOverride __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SetGraspOverride_
{
  using Type = SetGraspOverride_<ContainerAllocator>;

  explicit SetGraspOverride_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : grasp_override_request(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->service_name = "";
      this->host = "";
      this->grasp_override_request_is_set = false;
    }
  }

  explicit SetGraspOverride_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : service_name(_alloc),
    host(_alloc),
    grasp_override_request(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->service_name = "";
      this->host = "";
      this->grasp_override_request_is_set = false;
    }
  }

  // field types and members
  using _service_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _service_name_type service_name;
  using _host_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _host_type host;
  using _grasp_override_request_type =
    bosdyn_msgs::msg::ApiGraspOverrideRequest_<ContainerAllocator>;
  _grasp_override_request_type grasp_override_request;
  using _grasp_override_request_is_set_type =
    bool;
  _grasp_override_request_is_set_type grasp_override_request_is_set;

  // setters for named parameter idiom
  Type & set__service_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->service_name = _arg;
    return *this;
  }
  Type & set__host(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->host = _arg;
    return *this;
  }
  Type & set__grasp_override_request(
    const bosdyn_msgs::msg::ApiGraspOverrideRequest_<ContainerAllocator> & _arg)
  {
    this->grasp_override_request = _arg;
    return *this;
  }
  Type & set__grasp_override_request_is_set(
    const bool & _arg)
  {
    this->grasp_override_request_is_set = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::SetGraspOverride_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::SetGraspOverride_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::SetGraspOverride_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::SetGraspOverride_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::SetGraspOverride_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::SetGraspOverride_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::SetGraspOverride_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::SetGraspOverride_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::SetGraspOverride_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::SetGraspOverride_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__SetGraspOverride
    std::shared_ptr<bosdyn_msgs::msg::SetGraspOverride_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__SetGraspOverride
    std::shared_ptr<bosdyn_msgs::msg::SetGraspOverride_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetGraspOverride_ & other) const
  {
    if (this->service_name != other.service_name) {
      return false;
    }
    if (this->host != other.host) {
      return false;
    }
    if (this->grasp_override_request != other.grasp_override_request) {
      return false;
    }
    if (this->grasp_override_request_is_set != other.grasp_override_request_is_set) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetGraspOverride_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetGraspOverride_

// alias to use template instance with default allocator
using SetGraspOverride =
  bosdyn_msgs::msg::SetGraspOverride_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__SET_GRASP_OVERRIDE__STRUCT_HPP_
