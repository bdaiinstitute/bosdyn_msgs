// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/ICEServerAuthParams.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ICE_SERVER_AUTH_PARAMS__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__ICE_SERVER_AUTH_PARAMS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'credential'
#include "bosdyn_msgs/msg/detail/ice_server_auth_params_one_of_credential__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__ICEServerAuthParams __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__ICEServerAuthParams __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ICEServerAuthParams_
{
  using Type = ICEServerAuthParams_<ContainerAllocator>;

  explicit ICEServerAuthParams_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : credential(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->username = "";
      this->username_is_set = false;
    }
  }

  explicit ICEServerAuthParams_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : username(_alloc),
    credential(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->username = "";
      this->username_is_set = false;
    }
  }

  // field types and members
  using _username_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _username_type username;
  using _username_is_set_type =
    bool;
  _username_is_set_type username_is_set;
  using _credential_type =
    bosdyn_msgs::msg::ICEServerAuthParamsOneOfCredential_<ContainerAllocator>;
  _credential_type credential;

  // setters for named parameter idiom
  Type & set__username(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->username = _arg;
    return *this;
  }
  Type & set__username_is_set(
    const bool & _arg)
  {
    this->username_is_set = _arg;
    return *this;
  }
  Type & set__credential(
    const bosdyn_msgs::msg::ICEServerAuthParamsOneOfCredential_<ContainerAllocator> & _arg)
  {
    this->credential = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::ICEServerAuthParams_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::ICEServerAuthParams_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::ICEServerAuthParams_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::ICEServerAuthParams_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::ICEServerAuthParams_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::ICEServerAuthParams_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::ICEServerAuthParams_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::ICEServerAuthParams_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::ICEServerAuthParams_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::ICEServerAuthParams_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__ICEServerAuthParams
    std::shared_ptr<bosdyn_msgs::msg::ICEServerAuthParams_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__ICEServerAuthParams
    std::shared_ptr<bosdyn_msgs::msg::ICEServerAuthParams_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ICEServerAuthParams_ & other) const
  {
    if (this->username != other.username) {
      return false;
    }
    if (this->username_is_set != other.username_is_set) {
      return false;
    }
    if (this->credential != other.credential) {
      return false;
    }
    return true;
  }
  bool operator!=(const ICEServerAuthParams_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ICEServerAuthParams_

// alias to use template instance with default allocator
using ICEServerAuthParams =
  bosdyn_msgs::msg::ICEServerAuthParams_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__ICE_SERVER_AUTH_PARAMS__STRUCT_HPP_
