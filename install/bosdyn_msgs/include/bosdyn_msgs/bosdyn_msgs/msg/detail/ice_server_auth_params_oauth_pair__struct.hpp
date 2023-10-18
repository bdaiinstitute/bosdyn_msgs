// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/ICEServerAuthParamsOauthPair.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ICE_SERVER_AUTH_PARAMS_OAUTH_PAIR__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__ICE_SERVER_AUTH_PARAMS_OAUTH_PAIR__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__ICEServerAuthParamsOauthPair __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__ICEServerAuthParamsOauthPair __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ICEServerAuthParamsOauthPair_
{
  using Type = ICEServerAuthParamsOauthPair_<ContainerAllocator>;

  explicit ICEServerAuthParamsOauthPair_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mac_key = "";
      this->access_token = "";
    }
  }

  explicit ICEServerAuthParamsOauthPair_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : mac_key(_alloc),
    access_token(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mac_key = "";
      this->access_token = "";
    }
  }

  // field types and members
  using _mac_key_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _mac_key_type mac_key;
  using _access_token_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _access_token_type access_token;

  // setters for named parameter idiom
  Type & set__mac_key(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->mac_key = _arg;
    return *this;
  }
  Type & set__access_token(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->access_token = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::ICEServerAuthParamsOauthPair_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::ICEServerAuthParamsOauthPair_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::ICEServerAuthParamsOauthPair_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::ICEServerAuthParamsOauthPair_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::ICEServerAuthParamsOauthPair_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::ICEServerAuthParamsOauthPair_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::ICEServerAuthParamsOauthPair_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::ICEServerAuthParamsOauthPair_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::ICEServerAuthParamsOauthPair_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::ICEServerAuthParamsOauthPair_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__ICEServerAuthParamsOauthPair
    std::shared_ptr<bosdyn_msgs::msg::ICEServerAuthParamsOauthPair_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__ICEServerAuthParamsOauthPair
    std::shared_ptr<bosdyn_msgs::msg::ICEServerAuthParamsOauthPair_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ICEServerAuthParamsOauthPair_ & other) const
  {
    if (this->mac_key != other.mac_key) {
      return false;
    }
    if (this->access_token != other.access_token) {
      return false;
    }
    return true;
  }
  bool operator!=(const ICEServerAuthParamsOauthPair_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ICEServerAuthParamsOauthPair_

// alias to use template instance with default allocator
using ICEServerAuthParamsOauthPair =
  bosdyn_msgs::msg::ICEServerAuthParamsOauthPair_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__ICE_SERVER_AUTH_PARAMS_OAUTH_PAIR__STRUCT_HPP_
