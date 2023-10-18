// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/EdgeAnnotationsStairData.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__EDGE_ANNOTATIONS_STAIR_DATA__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__EDGE_ANNOTATIONS_STAIR_DATA__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'state'
#include "bosdyn_msgs/msg/detail/annotation_state__struct.hpp"
// Member 'staircase_with_landings'
#include "bosdyn_msgs/msg/detail/staircase_with_landings__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__EdgeAnnotationsStairData __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__EdgeAnnotationsStairData __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct EdgeAnnotationsStairData_
{
  using Type = EdgeAnnotationsStairData_<ContainerAllocator>;

  explicit EdgeAnnotationsStairData_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : state(_init),
    staircase_with_landings(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->staircase_with_landings_is_set = false;
    }
  }

  explicit EdgeAnnotationsStairData_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : state(_alloc, _init),
    staircase_with_landings(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->staircase_with_landings_is_set = false;
    }
  }

  // field types and members
  using _state_type =
    bosdyn_msgs::msg::AnnotationState_<ContainerAllocator>;
  _state_type state;
  using _staircase_with_landings_type =
    bosdyn_msgs::msg::StaircaseWithLandings_<ContainerAllocator>;
  _staircase_with_landings_type staircase_with_landings;
  using _staircase_with_landings_is_set_type =
    bool;
  _staircase_with_landings_is_set_type staircase_with_landings_is_set;

  // setters for named parameter idiom
  Type & set__state(
    const bosdyn_msgs::msg::AnnotationState_<ContainerAllocator> & _arg)
  {
    this->state = _arg;
    return *this;
  }
  Type & set__staircase_with_landings(
    const bosdyn_msgs::msg::StaircaseWithLandings_<ContainerAllocator> & _arg)
  {
    this->staircase_with_landings = _arg;
    return *this;
  }
  Type & set__staircase_with_landings_is_set(
    const bool & _arg)
  {
    this->staircase_with_landings_is_set = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::EdgeAnnotationsStairData_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::EdgeAnnotationsStairData_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::EdgeAnnotationsStairData_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::EdgeAnnotationsStairData_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::EdgeAnnotationsStairData_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::EdgeAnnotationsStairData_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::EdgeAnnotationsStairData_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::EdgeAnnotationsStairData_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::EdgeAnnotationsStairData_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::EdgeAnnotationsStairData_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__EdgeAnnotationsStairData
    std::shared_ptr<bosdyn_msgs::msg::EdgeAnnotationsStairData_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__EdgeAnnotationsStairData
    std::shared_ptr<bosdyn_msgs::msg::EdgeAnnotationsStairData_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const EdgeAnnotationsStairData_ & other) const
  {
    if (this->state != other.state) {
      return false;
    }
    if (this->staircase_with_landings != other.staircase_with_landings) {
      return false;
    }
    if (this->staircase_with_landings_is_set != other.staircase_with_landings_is_set) {
      return false;
    }
    return true;
  }
  bool operator!=(const EdgeAnnotationsStairData_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct EdgeAnnotationsStairData_

// alias to use template instance with default allocator
using EdgeAnnotationsStairData =
  bosdyn_msgs::msg::EdgeAnnotationsStairData_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__EDGE_ANNOTATIONS_STAIR_DATA__STRUCT_HPP_
