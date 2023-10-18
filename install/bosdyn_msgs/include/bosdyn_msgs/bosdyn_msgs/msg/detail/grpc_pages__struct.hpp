// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/GrpcPages.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__GRPC_PAGES__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__GRPC_PAGES__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'time_range'
#include "bosdyn_msgs/msg/detail/time_range__struct.hpp"
// Member 'spec'
#include "bosdyn_msgs/msg/detail/grpc_spec__struct.hpp"
// Member 'pages'
#include "bosdyn_msgs/msg/detail/page_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__GrpcPages __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__GrpcPages __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct GrpcPages_
{
  using Type = GrpcPages_<ContainerAllocator>;

  explicit GrpcPages_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : time_range(_init),
    spec(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->time_range_is_set = false;
      this->spec_is_set = false;
    }
  }

  explicit GrpcPages_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : time_range(_alloc, _init),
    spec(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->time_range_is_set = false;
      this->spec_is_set = false;
    }
  }

  // field types and members
  using _time_range_type =
    bosdyn_msgs::msg::TimeRange_<ContainerAllocator>;
  _time_range_type time_range;
  using _time_range_is_set_type =
    bool;
  _time_range_is_set_type time_range_is_set;
  using _spec_type =
    bosdyn_msgs::msg::GrpcSpec_<ContainerAllocator>;
  _spec_type spec;
  using _spec_is_set_type =
    bool;
  _spec_is_set_type spec_is_set;
  using _pages_type =
    std::vector<bosdyn_msgs::msg::PageInfo_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::PageInfo_<ContainerAllocator>>>;
  _pages_type pages;

  // setters for named parameter idiom
  Type & set__time_range(
    const bosdyn_msgs::msg::TimeRange_<ContainerAllocator> & _arg)
  {
    this->time_range = _arg;
    return *this;
  }
  Type & set__time_range_is_set(
    const bool & _arg)
  {
    this->time_range_is_set = _arg;
    return *this;
  }
  Type & set__spec(
    const bosdyn_msgs::msg::GrpcSpec_<ContainerAllocator> & _arg)
  {
    this->spec = _arg;
    return *this;
  }
  Type & set__spec_is_set(
    const bool & _arg)
  {
    this->spec_is_set = _arg;
    return *this;
  }
  Type & set__pages(
    const std::vector<bosdyn_msgs::msg::PageInfo_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::PageInfo_<ContainerAllocator>>> & _arg)
  {
    this->pages = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::GrpcPages_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::GrpcPages_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::GrpcPages_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::GrpcPages_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::GrpcPages_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::GrpcPages_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::GrpcPages_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::GrpcPages_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::GrpcPages_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::GrpcPages_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__GrpcPages
    std::shared_ptr<bosdyn_msgs::msg::GrpcPages_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__GrpcPages
    std::shared_ptr<bosdyn_msgs::msg::GrpcPages_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GrpcPages_ & other) const
  {
    if (this->time_range != other.time_range) {
      return false;
    }
    if (this->time_range_is_set != other.time_range_is_set) {
      return false;
    }
    if (this->spec != other.spec) {
      return false;
    }
    if (this->spec_is_set != other.spec_is_set) {
      return false;
    }
    if (this->pages != other.pages) {
      return false;
    }
    return true;
  }
  bool operator!=(const GrpcPages_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GrpcPages_

// alias to use template instance with default allocator
using GrpcPages =
  bosdyn_msgs::msg::GrpcPages_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__GRPC_PAGES__STRUCT_HPP_
