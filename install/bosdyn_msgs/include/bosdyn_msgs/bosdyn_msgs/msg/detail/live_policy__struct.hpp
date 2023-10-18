// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/LivePolicy.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__LIVE_POLICY__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__LIVE_POLICY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'policy'
#include "bosdyn_msgs/msg/detail/policy__struct.hpp"
// Member 'last_checkin'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__LivePolicy __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__LivePolicy __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LivePolicy_
{
  using Type = LivePolicy_<ContainerAllocator>;

  explicit LivePolicy_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : policy(_init),
    last_checkin(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->policy_id = 0ull;
      this->policy_is_set = false;
      this->last_checkin_is_set = false;
      this->client_name = "";
    }
  }

  explicit LivePolicy_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : policy(_alloc, _init),
    last_checkin(_alloc, _init),
    client_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->policy_id = 0ull;
      this->policy_is_set = false;
      this->last_checkin_is_set = false;
      this->client_name = "";
    }
  }

  // field types and members
  using _policy_id_type =
    uint64_t;
  _policy_id_type policy_id;
  using _policy_type =
    bosdyn_msgs::msg::Policy_<ContainerAllocator>;
  _policy_type policy;
  using _policy_is_set_type =
    bool;
  _policy_is_set_type policy_is_set;
  using _last_checkin_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _last_checkin_type last_checkin;
  using _last_checkin_is_set_type =
    bool;
  _last_checkin_is_set_type last_checkin_is_set;
  using _client_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _client_name_type client_name;

  // setters for named parameter idiom
  Type & set__policy_id(
    const uint64_t & _arg)
  {
    this->policy_id = _arg;
    return *this;
  }
  Type & set__policy(
    const bosdyn_msgs::msg::Policy_<ContainerAllocator> & _arg)
  {
    this->policy = _arg;
    return *this;
  }
  Type & set__policy_is_set(
    const bool & _arg)
  {
    this->policy_is_set = _arg;
    return *this;
  }
  Type & set__last_checkin(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->last_checkin = _arg;
    return *this;
  }
  Type & set__last_checkin_is_set(
    const bool & _arg)
  {
    this->last_checkin_is_set = _arg;
    return *this;
  }
  Type & set__client_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->client_name = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::LivePolicy_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::LivePolicy_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::LivePolicy_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::LivePolicy_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::LivePolicy_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::LivePolicy_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::LivePolicy_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::LivePolicy_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::LivePolicy_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::LivePolicy_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__LivePolicy
    std::shared_ptr<bosdyn_msgs::msg::LivePolicy_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__LivePolicy
    std::shared_ptr<bosdyn_msgs::msg::LivePolicy_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LivePolicy_ & other) const
  {
    if (this->policy_id != other.policy_id) {
      return false;
    }
    if (this->policy != other.policy) {
      return false;
    }
    if (this->policy_is_set != other.policy_is_set) {
      return false;
    }
    if (this->last_checkin != other.last_checkin) {
      return false;
    }
    if (this->last_checkin_is_set != other.last_checkin_is_set) {
      return false;
    }
    if (this->client_name != other.client_name) {
      return false;
    }
    return true;
  }
  bool operator!=(const LivePolicy_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LivePolicy_

// alias to use template instance with default allocator
using LivePolicy =
  bosdyn_msgs::msg::LivePolicy_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__LIVE_POLICY__STRUCT_HPP_
