// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/LicenseInfo.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__LICENSE_INFO__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__LICENSE_INFO__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'status'
#include "bosdyn_msgs/msg/detail/license_info_status__struct.hpp"
// Member 'not_valid_before'
// Member 'not_valid_after'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__LicenseInfo __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__LicenseInfo __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LicenseInfo_
{
  using Type = LicenseInfo_<ContainerAllocator>;

  explicit LicenseInfo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : status(_init),
    not_valid_before(_init),
    not_valid_after(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = "";
      this->robot_serial = "";
      this->not_valid_before_is_set = false;
      this->not_valid_after_is_set = false;
    }
  }

  explicit LicenseInfo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : status(_alloc, _init),
    id(_alloc),
    robot_serial(_alloc),
    not_valid_before(_alloc, _init),
    not_valid_after(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = "";
      this->robot_serial = "";
      this->not_valid_before_is_set = false;
      this->not_valid_after_is_set = false;
    }
  }

  // field types and members
  using _status_type =
    bosdyn_msgs::msg::LicenseInfoStatus_<ContainerAllocator>;
  _status_type status;
  using _id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _id_type id;
  using _robot_serial_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _robot_serial_type robot_serial;
  using _not_valid_before_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _not_valid_before_type not_valid_before;
  using _not_valid_before_is_set_type =
    bool;
  _not_valid_before_is_set_type not_valid_before_is_set;
  using _not_valid_after_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _not_valid_after_type not_valid_after;
  using _not_valid_after_is_set_type =
    bool;
  _not_valid_after_is_set_type not_valid_after_is_set;
  using _licensed_features_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _licensed_features_type licensed_features;

  // setters for named parameter idiom
  Type & set__status(
    const bosdyn_msgs::msg::LicenseInfoStatus_<ContainerAllocator> & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__robot_serial(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->robot_serial = _arg;
    return *this;
  }
  Type & set__not_valid_before(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->not_valid_before = _arg;
    return *this;
  }
  Type & set__not_valid_before_is_set(
    const bool & _arg)
  {
    this->not_valid_before_is_set = _arg;
    return *this;
  }
  Type & set__not_valid_after(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->not_valid_after = _arg;
    return *this;
  }
  Type & set__not_valid_after_is_set(
    const bool & _arg)
  {
    this->not_valid_after_is_set = _arg;
    return *this;
  }
  Type & set__licensed_features(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->licensed_features = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::LicenseInfo_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::LicenseInfo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::LicenseInfo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::LicenseInfo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::LicenseInfo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::LicenseInfo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::LicenseInfo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::LicenseInfo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::LicenseInfo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::LicenseInfo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__LicenseInfo
    std::shared_ptr<bosdyn_msgs::msg::LicenseInfo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__LicenseInfo
    std::shared_ptr<bosdyn_msgs::msg::LicenseInfo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LicenseInfo_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->id != other.id) {
      return false;
    }
    if (this->robot_serial != other.robot_serial) {
      return false;
    }
    if (this->not_valid_before != other.not_valid_before) {
      return false;
    }
    if (this->not_valid_before_is_set != other.not_valid_before_is_set) {
      return false;
    }
    if (this->not_valid_after != other.not_valid_after) {
      return false;
    }
    if (this->not_valid_after_is_set != other.not_valid_after_is_set) {
      return false;
    }
    if (this->licensed_features != other.licensed_features) {
      return false;
    }
    return true;
  }
  bool operator!=(const LicenseInfo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LicenseInfo_

// alias to use template instance with default allocator
using LicenseInfo =
  bosdyn_msgs::msg::LicenseInfo_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__LICENSE_INFO__STRUCT_HPP_
