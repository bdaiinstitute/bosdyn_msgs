// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/ICEServerAuthParamsOneOfCredential.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ICE_SERVER_AUTH_PARAMS_ONE_OF_CREDENTIAL__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__ICE_SERVER_AUTH_PARAMS_ONE_OF_CREDENTIAL__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'oauth'
#include "bosdyn_msgs/msg/detail/ice_server_auth_params_oauth_pair__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__ICEServerAuthParamsOneOfCredential __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__ICEServerAuthParamsOneOfCredential __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ICEServerAuthParamsOneOfCredential_
{
  using Type = ICEServerAuthParamsOneOfCredential_<ContainerAllocator>;

  explicit ICEServerAuthParamsOneOfCredential_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : oauth(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->password = "";
      this->credential_choice = 0;
    }
  }

  explicit ICEServerAuthParamsOneOfCredential_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : oauth(_alloc, _init),
    password(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->password = "";
      this->credential_choice = 0;
    }
  }

  // field types and members
  using _oauth_type =
    bosdyn_msgs::msg::ICEServerAuthParamsOauthPair_<ContainerAllocator>;
  _oauth_type oauth;
  using _password_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _password_type password;
  using _credential_choice_type =
    int8_t;
  _credential_choice_type credential_choice;

  // setters for named parameter idiom
  Type & set__oauth(
    const bosdyn_msgs::msg::ICEServerAuthParamsOauthPair_<ContainerAllocator> & _arg)
  {
    this->oauth = _arg;
    return *this;
  }
  Type & set__password(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->password = _arg;
    return *this;
  }
  Type & set__credential_choice(
    const int8_t & _arg)
  {
    this->credential_choice = _arg;
    return *this;
  }

  // constant declarations
  static constexpr int8_t CREDENTIAL_NOT_SET =
    0;
  static constexpr int8_t CREDENTIAL_OAUTH_SET =
    1;
  static constexpr int8_t CREDENTIAL_PASSWORD_SET =
    2;

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::ICEServerAuthParamsOneOfCredential_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::ICEServerAuthParamsOneOfCredential_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::ICEServerAuthParamsOneOfCredential_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::ICEServerAuthParamsOneOfCredential_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::ICEServerAuthParamsOneOfCredential_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::ICEServerAuthParamsOneOfCredential_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::ICEServerAuthParamsOneOfCredential_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::ICEServerAuthParamsOneOfCredential_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::ICEServerAuthParamsOneOfCredential_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::ICEServerAuthParamsOneOfCredential_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__ICEServerAuthParamsOneOfCredential
    std::shared_ptr<bosdyn_msgs::msg::ICEServerAuthParamsOneOfCredential_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__ICEServerAuthParamsOneOfCredential
    std::shared_ptr<bosdyn_msgs::msg::ICEServerAuthParamsOneOfCredential_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ICEServerAuthParamsOneOfCredential_ & other) const
  {
    if (this->oauth != other.oauth) {
      return false;
    }
    if (this->password != other.password) {
      return false;
    }
    if (this->credential_choice != other.credential_choice) {
      return false;
    }
    return true;
  }
  bool operator!=(const ICEServerAuthParamsOneOfCredential_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ICEServerAuthParamsOneOfCredential_

// alias to use template instance with default allocator
using ICEServerAuthParamsOneOfCredential =
  bosdyn_msgs::msg::ICEServerAuthParamsOneOfCredential_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t ICEServerAuthParamsOneOfCredential_<ContainerAllocator>::CREDENTIAL_NOT_SET;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t ICEServerAuthParamsOneOfCredential_<ContainerAllocator>::CREDENTIAL_OAUTH_SET;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t ICEServerAuthParamsOneOfCredential_<ContainerAllocator>::CREDENTIAL_PASSWORD_SET;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__ICE_SERVER_AUTH_PARAMS_ONE_OF_CREDENTIAL__STRUCT_HPP_
