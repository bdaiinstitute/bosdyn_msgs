// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/AddLogAnnotationRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ADD_LOG_ANNOTATION_REQUEST__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__ADD_LOG_ANNOTATION_REQUEST__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "bosdyn_msgs/msg/detail/request_header__struct.hpp"
// Member 'annotations'
#include "bosdyn_msgs/msg/detail/log_annotations__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__AddLogAnnotationRequest __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__AddLogAnnotationRequest __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct AddLogAnnotationRequest_
{
  using Type = AddLogAnnotationRequest_<ContainerAllocator>;

  explicit AddLogAnnotationRequest_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    annotations(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->header_is_set = false;
      this->annotations_is_set = false;
    }
  }

  explicit AddLogAnnotationRequest_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    annotations(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->header_is_set = false;
      this->annotations_is_set = false;
    }
  }

  // field types and members
  using _header_type =
    bosdyn_msgs::msg::RequestHeader_<ContainerAllocator>;
  _header_type header;
  using _header_is_set_type =
    bool;
  _header_is_set_type header_is_set;
  using _annotations_type =
    bosdyn_msgs::msg::LogAnnotations_<ContainerAllocator>;
  _annotations_type annotations;
  using _annotations_is_set_type =
    bool;
  _annotations_is_set_type annotations_is_set;

  // setters for named parameter idiom
  Type & set__header(
    const bosdyn_msgs::msg::RequestHeader_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__header_is_set(
    const bool & _arg)
  {
    this->header_is_set = _arg;
    return *this;
  }
  Type & set__annotations(
    const bosdyn_msgs::msg::LogAnnotations_<ContainerAllocator> & _arg)
  {
    this->annotations = _arg;
    return *this;
  }
  Type & set__annotations_is_set(
    const bool & _arg)
  {
    this->annotations_is_set = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::AddLogAnnotationRequest_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::AddLogAnnotationRequest_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::AddLogAnnotationRequest_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::AddLogAnnotationRequest_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::AddLogAnnotationRequest_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::AddLogAnnotationRequest_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::AddLogAnnotationRequest_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::AddLogAnnotationRequest_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::AddLogAnnotationRequest_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::AddLogAnnotationRequest_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__AddLogAnnotationRequest
    std::shared_ptr<bosdyn_msgs::msg::AddLogAnnotationRequest_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__AddLogAnnotationRequest
    std::shared_ptr<bosdyn_msgs::msg::AddLogAnnotationRequest_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AddLogAnnotationRequest_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->header_is_set != other.header_is_set) {
      return false;
    }
    if (this->annotations != other.annotations) {
      return false;
    }
    if (this->annotations_is_set != other.annotations_is_set) {
      return false;
    }
    return true;
  }
  bool operator!=(const AddLogAnnotationRequest_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AddLogAnnotationRequest_

// alias to use template instance with default allocator
using AddLogAnnotationRequest =
  bosdyn_msgs::msg::AddLogAnnotationRequest_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__ADD_LOG_ANNOTATION_REQUEST__STRUCT_HPP_
