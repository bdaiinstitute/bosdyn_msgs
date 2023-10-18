// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/BlobPage.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__BLOB_PAGE__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__BLOB_PAGE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'spec'
#include "bosdyn_msgs/msg/detail/blob_spec__struct.hpp"
// Member 'page'
#include "bosdyn_msgs/msg/detail/page_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__BlobPage __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__BlobPage __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct BlobPage_
{
  using Type = BlobPage_<ContainerAllocator>;

  explicit BlobPage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : spec(_init),
    page(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->spec_is_set = false;
      this->page_is_set = false;
    }
  }

  explicit BlobPage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : spec(_alloc, _init),
    page(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->spec_is_set = false;
      this->page_is_set = false;
    }
  }

  // field types and members
  using _spec_type =
    bosdyn_msgs::msg::BlobSpec_<ContainerAllocator>;
  _spec_type spec;
  using _spec_is_set_type =
    bool;
  _spec_is_set_type spec_is_set;
  using _page_type =
    bosdyn_msgs::msg::PageInfo_<ContainerAllocator>;
  _page_type page;
  using _page_is_set_type =
    bool;
  _page_is_set_type page_is_set;

  // setters for named parameter idiom
  Type & set__spec(
    const bosdyn_msgs::msg::BlobSpec_<ContainerAllocator> & _arg)
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
  Type & set__page(
    const bosdyn_msgs::msg::PageInfo_<ContainerAllocator> & _arg)
  {
    this->page = _arg;
    return *this;
  }
  Type & set__page_is_set(
    const bool & _arg)
  {
    this->page_is_set = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::BlobPage_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::BlobPage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::BlobPage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::BlobPage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::BlobPage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::BlobPage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::BlobPage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::BlobPage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::BlobPage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::BlobPage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__BlobPage
    std::shared_ptr<bosdyn_msgs::msg::BlobPage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__BlobPage
    std::shared_ptr<bosdyn_msgs::msg::BlobPage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BlobPage_ & other) const
  {
    if (this->spec != other.spec) {
      return false;
    }
    if (this->spec_is_set != other.spec_is_set) {
      return false;
    }
    if (this->page != other.page) {
      return false;
    }
    if (this->page_is_set != other.page_is_set) {
      return false;
    }
    return true;
  }
  bool operator!=(const BlobPage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BlobPage_

// alias to use template instance with default allocator
using BlobPage =
  bosdyn_msgs::msg::BlobPage_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__BLOB_PAGE__STRUCT_HPP_
