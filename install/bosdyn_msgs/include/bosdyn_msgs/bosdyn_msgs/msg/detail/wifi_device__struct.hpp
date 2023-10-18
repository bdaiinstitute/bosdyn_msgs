// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/WifiDevice.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__WIFI_DEVICE__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__WIFI_DEVICE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'type'
#include "bosdyn_msgs/msg/detail/wifi_device_type__struct.hpp"
// Member 'associations'
#include "bosdyn_msgs/msg/detail/association__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__WifiDevice __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__WifiDevice __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct WifiDevice_
{
  using Type = WifiDevice_<ContainerAllocator>;

  explicit WifiDevice_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : type(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->mac_address = "";
      this->ssid = "";
      this->tx_power_dbm = 0l;
    }
  }

  explicit WifiDevice_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : type(_alloc, _init),
    name(_alloc),
    mac_address(_alloc),
    ssid(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->mac_address = "";
      this->ssid = "";
      this->tx_power_dbm = 0l;
    }
  }

  // field types and members
  using _type_type =
    bosdyn_msgs::msg::WifiDeviceType_<ContainerAllocator>;
  _type_type type;
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name_type name;
  using _mac_address_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _mac_address_type mac_address;
  using _ssid_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _ssid_type ssid;
  using _tx_power_dbm_type =
    int32_t;
  _tx_power_dbm_type tx_power_dbm;
  using _associations_type =
    std::vector<bosdyn_msgs::msg::Association_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::Association_<ContainerAllocator>>>;
  _associations_type associations;

  // setters for named parameter idiom
  Type & set__type(
    const bosdyn_msgs::msg::WifiDeviceType_<ContainerAllocator> & _arg)
  {
    this->type = _arg;
    return *this;
  }
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__mac_address(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->mac_address = _arg;
    return *this;
  }
  Type & set__ssid(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->ssid = _arg;
    return *this;
  }
  Type & set__tx_power_dbm(
    const int32_t & _arg)
  {
    this->tx_power_dbm = _arg;
    return *this;
  }
  Type & set__associations(
    const std::vector<bosdyn_msgs::msg::Association_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::Association_<ContainerAllocator>>> & _arg)
  {
    this->associations = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::WifiDevice_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::WifiDevice_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::WifiDevice_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::WifiDevice_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::WifiDevice_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::WifiDevice_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::WifiDevice_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::WifiDevice_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::WifiDevice_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::WifiDevice_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__WifiDevice
    std::shared_ptr<bosdyn_msgs::msg::WifiDevice_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__WifiDevice
    std::shared_ptr<bosdyn_msgs::msg::WifiDevice_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const WifiDevice_ & other) const
  {
    if (this->type != other.type) {
      return false;
    }
    if (this->name != other.name) {
      return false;
    }
    if (this->mac_address != other.mac_address) {
      return false;
    }
    if (this->ssid != other.ssid) {
      return false;
    }
    if (this->tx_power_dbm != other.tx_power_dbm) {
      return false;
    }
    if (this->associations != other.associations) {
      return false;
    }
    return true;
  }
  bool operator!=(const WifiDevice_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct WifiDevice_

// alias to use template instance with default allocator
using WifiDevice =
  bosdyn_msgs::msg::WifiDevice_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__WIFI_DEVICE__STRUCT_HPP_
