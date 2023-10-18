// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/RegionInformation.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__REGION_INFORMATION__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__REGION_INFORMATION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'route'
#include "bosdyn_msgs/msg/detail/route__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__RegionInformation __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__RegionInformation __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RegionInformation_
{
  using Type = RegionInformation_<ContainerAllocator>;

  explicit RegionInformation_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : route(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->region_id = "";
      this->description = "";
      this->route_is_set = false;
    }
  }

  explicit RegionInformation_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : region_id(_alloc),
    description(_alloc),
    route(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->region_id = "";
      this->description = "";
      this->route_is_set = false;
    }
  }

  // field types and members
  using _region_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _region_id_type region_id;
  using _description_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _description_type description;
  using _route_type =
    bosdyn_msgs::msg::Route_<ContainerAllocator>;
  _route_type route;
  using _route_is_set_type =
    bool;
  _route_is_set_type route_is_set;

  // setters for named parameter idiom
  Type & set__region_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->region_id = _arg;
    return *this;
  }
  Type & set__description(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->description = _arg;
    return *this;
  }
  Type & set__route(
    const bosdyn_msgs::msg::Route_<ContainerAllocator> & _arg)
  {
    this->route = _arg;
    return *this;
  }
  Type & set__route_is_set(
    const bool & _arg)
  {
    this->route_is_set = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::RegionInformation_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::RegionInformation_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::RegionInformation_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::RegionInformation_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::RegionInformation_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::RegionInformation_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::RegionInformation_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::RegionInformation_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::RegionInformation_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::RegionInformation_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__RegionInformation
    std::shared_ptr<bosdyn_msgs::msg::RegionInformation_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__RegionInformation
    std::shared_ptr<bosdyn_msgs::msg::RegionInformation_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RegionInformation_ & other) const
  {
    if (this->region_id != other.region_id) {
      return false;
    }
    if (this->description != other.description) {
      return false;
    }
    if (this->route != other.route) {
      return false;
    }
    if (this->route_is_set != other.route_is_set) {
      return false;
    }
    return true;
  }
  bool operator!=(const RegionInformation_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RegionInformation_

// alias to use template instance with default allocator
using RegionInformation =
  bosdyn_msgs::msg::RegionInformation_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__REGION_INFORMATION__STRUCT_HPP_
