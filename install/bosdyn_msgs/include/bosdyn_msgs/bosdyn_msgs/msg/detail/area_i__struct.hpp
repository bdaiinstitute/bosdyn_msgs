// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/AreaI.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__AREA_I__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__AREA_I__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'geometry'
#include "bosdyn_msgs/msg/detail/area_i_one_of_geometry__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__AreaI __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__AreaI __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct AreaI_
{
  using Type = AreaI_<ContainerAllocator>;

  explicit AreaI_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : geometry(_init)
  {
    (void)_init;
  }

  explicit AreaI_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : geometry(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _geometry_type =
    bosdyn_msgs::msg::AreaIOneOfGeometry_<ContainerAllocator>;
  _geometry_type geometry;

  // setters for named parameter idiom
  Type & set__geometry(
    const bosdyn_msgs::msg::AreaIOneOfGeometry_<ContainerAllocator> & _arg)
  {
    this->geometry = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::AreaI_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::AreaI_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::AreaI_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::AreaI_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::AreaI_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::AreaI_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::AreaI_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::AreaI_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::AreaI_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::AreaI_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__AreaI
    std::shared_ptr<bosdyn_msgs::msg::AreaI_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__AreaI
    std::shared_ptr<bosdyn_msgs::msg::AreaI_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AreaI_ & other) const
  {
    if (this->geometry != other.geometry) {
      return false;
    }
    return true;
  }
  bool operator!=(const AreaI_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AreaI_

// alias to use template instance with default allocator
using AreaI =
  bosdyn_msgs::msg::AreaI_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__AREA_I__STRUCT_HPP_
