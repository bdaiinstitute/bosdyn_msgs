// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/SkeletonLinkObjModel.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__SKELETON_LINK_OBJ_MODEL__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__SKELETON_LINK_OBJ_MODEL__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__SkeletonLinkObjModel __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__SkeletonLinkObjModel __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SkeletonLinkObjModel_
{
  using Type = SkeletonLinkObjModel_<ContainerAllocator>;

  explicit SkeletonLinkObjModel_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->file_name = "";
      this->file_contents = "";
    }
  }

  explicit SkeletonLinkObjModel_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : file_name(_alloc),
    file_contents(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->file_name = "";
      this->file_contents = "";
    }
  }

  // field types and members
  using _file_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _file_name_type file_name;
  using _file_contents_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _file_contents_type file_contents;

  // setters for named parameter idiom
  Type & set__file_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->file_name = _arg;
    return *this;
  }
  Type & set__file_contents(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->file_contents = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::SkeletonLinkObjModel_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::SkeletonLinkObjModel_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::SkeletonLinkObjModel_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::SkeletonLinkObjModel_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::SkeletonLinkObjModel_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::SkeletonLinkObjModel_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::SkeletonLinkObjModel_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::SkeletonLinkObjModel_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::SkeletonLinkObjModel_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::SkeletonLinkObjModel_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__SkeletonLinkObjModel
    std::shared_ptr<bosdyn_msgs::msg::SkeletonLinkObjModel_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__SkeletonLinkObjModel
    std::shared_ptr<bosdyn_msgs::msg::SkeletonLinkObjModel_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SkeletonLinkObjModel_ & other) const
  {
    if (this->file_name != other.file_name) {
      return false;
    }
    if (this->file_contents != other.file_contents) {
      return false;
    }
    return true;
  }
  bool operator!=(const SkeletonLinkObjModel_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SkeletonLinkObjModel_

// alias to use template instance with default allocator
using SkeletonLinkObjModel =
  bosdyn_msgs::msg::SkeletonLinkObjModel_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__SKELETON_LINK_OBJ_MODEL__STRUCT_HPP_
