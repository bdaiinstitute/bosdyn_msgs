// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/RobotSoftwareRelease.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ROBOT_SOFTWARE_RELEASE__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__ROBOT_SOFTWARE_RELEASE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'version'
#include "bosdyn_msgs/msg/detail/software_version__struct.hpp"
// Member 'changeset_date'
// Member 'install_date'
#include "builtin_interfaces/msg/detail/time__struct.hpp"
// Member 'parameters'
#include "bosdyn_msgs/msg/detail/parameter__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__RobotSoftwareRelease __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__RobotSoftwareRelease __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RobotSoftwareRelease_
{
  using Type = RobotSoftwareRelease_<ContainerAllocator>;

  explicit RobotSoftwareRelease_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : version(_init),
    changeset_date(_init),
    install_date(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->version_is_set = false;
      this->name = "";
      this->type = "";
      this->changeset_date_is_set = false;
      this->changeset = "";
      this->api_version = "";
      this->build_information = "";
      this->install_date_is_set = false;
    }
  }

  explicit RobotSoftwareRelease_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : version(_alloc, _init),
    name(_alloc),
    type(_alloc),
    changeset_date(_alloc, _init),
    changeset(_alloc),
    api_version(_alloc),
    build_information(_alloc),
    install_date(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->version_is_set = false;
      this->name = "";
      this->type = "";
      this->changeset_date_is_set = false;
      this->changeset = "";
      this->api_version = "";
      this->build_information = "";
      this->install_date_is_set = false;
    }
  }

  // field types and members
  using _version_type =
    bosdyn_msgs::msg::SoftwareVersion_<ContainerAllocator>;
  _version_type version;
  using _version_is_set_type =
    bool;
  _version_is_set_type version_is_set;
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name_type name;
  using _type_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _type_type type;
  using _changeset_date_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _changeset_date_type changeset_date;
  using _changeset_date_is_set_type =
    bool;
  _changeset_date_is_set_type changeset_date_is_set;
  using _changeset_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _changeset_type changeset;
  using _api_version_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _api_version_type api_version;
  using _build_information_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _build_information_type build_information;
  using _install_date_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _install_date_type install_date;
  using _install_date_is_set_type =
    bool;
  _install_date_is_set_type install_date_is_set;
  using _parameters_type =
    std::vector<bosdyn_msgs::msg::Parameter_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::Parameter_<ContainerAllocator>>>;
  _parameters_type parameters;

  // setters for named parameter idiom
  Type & set__version(
    const bosdyn_msgs::msg::SoftwareVersion_<ContainerAllocator> & _arg)
  {
    this->version = _arg;
    return *this;
  }
  Type & set__version_is_set(
    const bool & _arg)
  {
    this->version_is_set = _arg;
    return *this;
  }
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__type(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->type = _arg;
    return *this;
  }
  Type & set__changeset_date(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->changeset_date = _arg;
    return *this;
  }
  Type & set__changeset_date_is_set(
    const bool & _arg)
  {
    this->changeset_date_is_set = _arg;
    return *this;
  }
  Type & set__changeset(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->changeset = _arg;
    return *this;
  }
  Type & set__api_version(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->api_version = _arg;
    return *this;
  }
  Type & set__build_information(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->build_information = _arg;
    return *this;
  }
  Type & set__install_date(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->install_date = _arg;
    return *this;
  }
  Type & set__install_date_is_set(
    const bool & _arg)
  {
    this->install_date_is_set = _arg;
    return *this;
  }
  Type & set__parameters(
    const std::vector<bosdyn_msgs::msg::Parameter_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::Parameter_<ContainerAllocator>>> & _arg)
  {
    this->parameters = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::RobotSoftwareRelease_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::RobotSoftwareRelease_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::RobotSoftwareRelease_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::RobotSoftwareRelease_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::RobotSoftwareRelease_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::RobotSoftwareRelease_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::RobotSoftwareRelease_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::RobotSoftwareRelease_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::RobotSoftwareRelease_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::RobotSoftwareRelease_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__RobotSoftwareRelease
    std::shared_ptr<bosdyn_msgs::msg::RobotSoftwareRelease_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__RobotSoftwareRelease
    std::shared_ptr<bosdyn_msgs::msg::RobotSoftwareRelease_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RobotSoftwareRelease_ & other) const
  {
    if (this->version != other.version) {
      return false;
    }
    if (this->version_is_set != other.version_is_set) {
      return false;
    }
    if (this->name != other.name) {
      return false;
    }
    if (this->type != other.type) {
      return false;
    }
    if (this->changeset_date != other.changeset_date) {
      return false;
    }
    if (this->changeset_date_is_set != other.changeset_date_is_set) {
      return false;
    }
    if (this->changeset != other.changeset) {
      return false;
    }
    if (this->api_version != other.api_version) {
      return false;
    }
    if (this->build_information != other.build_information) {
      return false;
    }
    if (this->install_date != other.install_date) {
      return false;
    }
    if (this->install_date_is_set != other.install_date_is_set) {
      return false;
    }
    if (this->parameters != other.parameters) {
      return false;
    }
    return true;
  }
  bool operator!=(const RobotSoftwareRelease_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RobotSoftwareRelease_

// alias to use template instance with default allocator
using RobotSoftwareRelease =
  bosdyn_msgs::msg::RobotSoftwareRelease_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__ROBOT_SOFTWARE_RELEASE__STRUCT_HPP_
