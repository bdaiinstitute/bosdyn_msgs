// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/WifiStats.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__WIFI_STATS__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__WIFI_STATS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'devices'
#include "bosdyn_msgs/msg/detail/wifi_device__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__WifiStats __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__WifiStats __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct WifiStats_
{
  using Type = WifiStats_<ContainerAllocator>;

  explicit WifiStats_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->hostname = "";
    }
  }

  explicit WifiStats_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : hostname(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->hostname = "";
    }
  }

  // field types and members
  using _hostname_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _hostname_type hostname;
  using _devices_type =
    std::vector<bosdyn_msgs::msg::WifiDevice_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::WifiDevice_<ContainerAllocator>>>;
  _devices_type devices;

  // setters for named parameter idiom
  Type & set__hostname(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->hostname = _arg;
    return *this;
  }
  Type & set__devices(
    const std::vector<bosdyn_msgs::msg::WifiDevice_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::WifiDevice_<ContainerAllocator>>> & _arg)
  {
    this->devices = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::WifiStats_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::WifiStats_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::WifiStats_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::WifiStats_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::WifiStats_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::WifiStats_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::WifiStats_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::WifiStats_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::WifiStats_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::WifiStats_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__WifiStats
    std::shared_ptr<bosdyn_msgs::msg::WifiStats_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__WifiStats
    std::shared_ptr<bosdyn_msgs::msg::WifiStats_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const WifiStats_ & other) const
  {
    if (this->hostname != other.hostname) {
      return false;
    }
    if (this->devices != other.devices) {
      return false;
    }
    return true;
  }
  bool operator!=(const WifiStats_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct WifiStats_

// alias to use template instance with default allocator
using WifiStats =
  bosdyn_msgs::msg::WifiStats_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__WIFI_STATS__STRUCT_HPP_
