// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/RobotId.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ROBOT_ID__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__ROBOT_ID__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'software_release'
#include "bosdyn_msgs/msg/detail/robot_software_release__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__RobotId __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__RobotId __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RobotId_
{
  using Type = RobotId_<ContainerAllocator>;

  explicit RobotId_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : software_release(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->serial_number = "";
      this->species = "";
      this->version = "";
      this->software_release_is_set = false;
      this->nickname = "";
      this->computer_serial_number = "";
    }
  }

  explicit RobotId_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : serial_number(_alloc),
    species(_alloc),
    version(_alloc),
    software_release(_alloc, _init),
    nickname(_alloc),
    computer_serial_number(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->serial_number = "";
      this->species = "";
      this->version = "";
      this->software_release_is_set = false;
      this->nickname = "";
      this->computer_serial_number = "";
    }
  }

  // field types and members
  using _serial_number_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _serial_number_type serial_number;
  using _species_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _species_type species;
  using _version_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _version_type version;
  using _software_release_type =
    bosdyn_msgs::msg::RobotSoftwareRelease_<ContainerAllocator>;
  _software_release_type software_release;
  using _software_release_is_set_type =
    bool;
  _software_release_is_set_type software_release_is_set;
  using _nickname_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _nickname_type nickname;
  using _computer_serial_number_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _computer_serial_number_type computer_serial_number;

  // setters for named parameter idiom
  Type & set__serial_number(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->serial_number = _arg;
    return *this;
  }
  Type & set__species(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->species = _arg;
    return *this;
  }
  Type & set__version(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->version = _arg;
    return *this;
  }
  Type & set__software_release(
    const bosdyn_msgs::msg::RobotSoftwareRelease_<ContainerAllocator> & _arg)
  {
    this->software_release = _arg;
    return *this;
  }
  Type & set__software_release_is_set(
    const bool & _arg)
  {
    this->software_release_is_set = _arg;
    return *this;
  }
  Type & set__nickname(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->nickname = _arg;
    return *this;
  }
  Type & set__computer_serial_number(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->computer_serial_number = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::RobotId_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::RobotId_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::RobotId_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::RobotId_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::RobotId_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::RobotId_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::RobotId_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::RobotId_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::RobotId_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::RobotId_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__RobotId
    std::shared_ptr<bosdyn_msgs::msg::RobotId_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__RobotId
    std::shared_ptr<bosdyn_msgs::msg::RobotId_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RobotId_ & other) const
  {
    if (this->serial_number != other.serial_number) {
      return false;
    }
    if (this->species != other.species) {
      return false;
    }
    if (this->version != other.version) {
      return false;
    }
    if (this->software_release != other.software_release) {
      return false;
    }
    if (this->software_release_is_set != other.software_release_is_set) {
      return false;
    }
    if (this->nickname != other.nickname) {
      return false;
    }
    if (this->computer_serial_number != other.computer_serial_number) {
      return false;
    }
    return true;
  }
  bool operator!=(const RobotId_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RobotId_

// alias to use template instance with default allocator
using RobotId =
  bosdyn_msgs::msg::RobotId_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__ROBOT_ID__STRUCT_HPP_
