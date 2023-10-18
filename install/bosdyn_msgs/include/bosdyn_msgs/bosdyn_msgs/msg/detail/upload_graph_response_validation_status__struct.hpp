// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/UploadGraphResponseValidationStatus.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__UPLOAD_GRAPH_RESPONSE_VALIDATION_STATUS__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__UPLOAD_GRAPH_RESPONSE_VALIDATION_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'edge_ids_invalid_transform'
// Member 'duplicate_edge_ids'
#include "bosdyn_msgs/msg/detail/edge_id__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__UploadGraphResponseValidationStatus __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__UploadGraphResponseValidationStatus __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct UploadGraphResponseValidationStatus_
{
  using Type = UploadGraphResponseValidationStatus_<ContainerAllocator>;

  explicit UploadGraphResponseValidationStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->has_empty_waypoint_ids = false;
      this->has_empty_edge_ids = false;
      this->has_empty_waypoint_anchor_ids = false;
      this->has_empty_object_anchor_ids = false;
    }
  }

  explicit UploadGraphResponseValidationStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->has_empty_waypoint_ids = false;
      this->has_empty_edge_ids = false;
      this->has_empty_waypoint_anchor_ids = false;
      this->has_empty_object_anchor_ids = false;
    }
  }

  // field types and members
  using _missing_waypoint_ids_in_edges_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _missing_waypoint_ids_in_edges_type missing_waypoint_ids_in_edges;
  using _missing_waypoint_ids_in_anchors_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _missing_waypoint_ids_in_anchors_type missing_waypoint_ids_in_anchors;
  using _edge_ids_invalid_transform_type =
    std::vector<bosdyn_msgs::msg::EdgeId_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::EdgeId_<ContainerAllocator>>>;
  _edge_ids_invalid_transform_type edge_ids_invalid_transform;
  using _waypoint_anchors_invalid_transform_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _waypoint_anchors_invalid_transform_type waypoint_anchors_invalid_transform;
  using _object_anchors_invalid_transform_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _object_anchors_invalid_transform_type object_anchors_invalid_transform;
  using _duplicate_waypoint_ids_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _duplicate_waypoint_ids_type duplicate_waypoint_ids;
  using _duplicate_waypoint_anchor_ids_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _duplicate_waypoint_anchor_ids_type duplicate_waypoint_anchor_ids;
  using _duplicate_object_anchor_ids_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _duplicate_object_anchor_ids_type duplicate_object_anchor_ids;
  using _duplicate_edge_ids_type =
    std::vector<bosdyn_msgs::msg::EdgeId_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::EdgeId_<ContainerAllocator>>>;
  _duplicate_edge_ids_type duplicate_edge_ids;
  using _invalid_waypoint_ids_self_edges_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _invalid_waypoint_ids_self_edges_type invalid_waypoint_ids_self_edges;
  using _has_empty_waypoint_ids_type =
    bool;
  _has_empty_waypoint_ids_type has_empty_waypoint_ids;
  using _has_empty_edge_ids_type =
    bool;
  _has_empty_edge_ids_type has_empty_edge_ids;
  using _has_empty_waypoint_anchor_ids_type =
    bool;
  _has_empty_waypoint_anchor_ids_type has_empty_waypoint_anchor_ids;
  using _has_empty_object_anchor_ids_type =
    bool;
  _has_empty_object_anchor_ids_type has_empty_object_anchor_ids;

  // setters for named parameter idiom
  Type & set__missing_waypoint_ids_in_edges(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->missing_waypoint_ids_in_edges = _arg;
    return *this;
  }
  Type & set__missing_waypoint_ids_in_anchors(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->missing_waypoint_ids_in_anchors = _arg;
    return *this;
  }
  Type & set__edge_ids_invalid_transform(
    const std::vector<bosdyn_msgs::msg::EdgeId_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::EdgeId_<ContainerAllocator>>> & _arg)
  {
    this->edge_ids_invalid_transform = _arg;
    return *this;
  }
  Type & set__waypoint_anchors_invalid_transform(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->waypoint_anchors_invalid_transform = _arg;
    return *this;
  }
  Type & set__object_anchors_invalid_transform(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->object_anchors_invalid_transform = _arg;
    return *this;
  }
  Type & set__duplicate_waypoint_ids(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->duplicate_waypoint_ids = _arg;
    return *this;
  }
  Type & set__duplicate_waypoint_anchor_ids(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->duplicate_waypoint_anchor_ids = _arg;
    return *this;
  }
  Type & set__duplicate_object_anchor_ids(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->duplicate_object_anchor_ids = _arg;
    return *this;
  }
  Type & set__duplicate_edge_ids(
    const std::vector<bosdyn_msgs::msg::EdgeId_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::EdgeId_<ContainerAllocator>>> & _arg)
  {
    this->duplicate_edge_ids = _arg;
    return *this;
  }
  Type & set__invalid_waypoint_ids_self_edges(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->invalid_waypoint_ids_self_edges = _arg;
    return *this;
  }
  Type & set__has_empty_waypoint_ids(
    const bool & _arg)
  {
    this->has_empty_waypoint_ids = _arg;
    return *this;
  }
  Type & set__has_empty_edge_ids(
    const bool & _arg)
  {
    this->has_empty_edge_ids = _arg;
    return *this;
  }
  Type & set__has_empty_waypoint_anchor_ids(
    const bool & _arg)
  {
    this->has_empty_waypoint_anchor_ids = _arg;
    return *this;
  }
  Type & set__has_empty_object_anchor_ids(
    const bool & _arg)
  {
    this->has_empty_object_anchor_ids = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::UploadGraphResponseValidationStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::UploadGraphResponseValidationStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::UploadGraphResponseValidationStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::UploadGraphResponseValidationStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::UploadGraphResponseValidationStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::UploadGraphResponseValidationStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::UploadGraphResponseValidationStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::UploadGraphResponseValidationStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::UploadGraphResponseValidationStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::UploadGraphResponseValidationStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__UploadGraphResponseValidationStatus
    std::shared_ptr<bosdyn_msgs::msg::UploadGraphResponseValidationStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__UploadGraphResponseValidationStatus
    std::shared_ptr<bosdyn_msgs::msg::UploadGraphResponseValidationStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const UploadGraphResponseValidationStatus_ & other) const
  {
    if (this->missing_waypoint_ids_in_edges != other.missing_waypoint_ids_in_edges) {
      return false;
    }
    if (this->missing_waypoint_ids_in_anchors != other.missing_waypoint_ids_in_anchors) {
      return false;
    }
    if (this->edge_ids_invalid_transform != other.edge_ids_invalid_transform) {
      return false;
    }
    if (this->waypoint_anchors_invalid_transform != other.waypoint_anchors_invalid_transform) {
      return false;
    }
    if (this->object_anchors_invalid_transform != other.object_anchors_invalid_transform) {
      return false;
    }
    if (this->duplicate_waypoint_ids != other.duplicate_waypoint_ids) {
      return false;
    }
    if (this->duplicate_waypoint_anchor_ids != other.duplicate_waypoint_anchor_ids) {
      return false;
    }
    if (this->duplicate_object_anchor_ids != other.duplicate_object_anchor_ids) {
      return false;
    }
    if (this->duplicate_edge_ids != other.duplicate_edge_ids) {
      return false;
    }
    if (this->invalid_waypoint_ids_self_edges != other.invalid_waypoint_ids_self_edges) {
      return false;
    }
    if (this->has_empty_waypoint_ids != other.has_empty_waypoint_ids) {
      return false;
    }
    if (this->has_empty_edge_ids != other.has_empty_edge_ids) {
      return false;
    }
    if (this->has_empty_waypoint_anchor_ids != other.has_empty_waypoint_anchor_ids) {
      return false;
    }
    if (this->has_empty_object_anchor_ids != other.has_empty_object_anchor_ids) {
      return false;
    }
    return true;
  }
  bool operator!=(const UploadGraphResponseValidationStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct UploadGraphResponseValidationStatus_

// alias to use template instance with default allocator
using UploadGraphResponseValidationStatus =
  bosdyn_msgs::msg::UploadGraphResponseValidationStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__UPLOAD_GRAPH_RESPONSE_VALIDATION_STATUS__STRUCT_HPP_
