// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/Staircase.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__STAIRCASE__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__STAIRCASE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'knowledge_type'
#include "bosdyn_msgs/msg/detail/staircase_knowledge_type__struct.hpp"
// Member 'stair_tform'
#include "bosdyn_msgs/msg/detail/stair_transform__struct.hpp"
// Member 'average_width'
#include "bosdyn_msgs/msg/detail/staircase_width__struct.hpp"
// Member 'steps'
#include "bosdyn_msgs/msg/detail/staircase_step__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__Staircase __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__Staircase __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Staircase_
{
  using Type = Staircase_<ContainerAllocator>;

  explicit Staircase_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : knowledge_type(_init),
    stair_tform(_init),
    average_width(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->stair_tform_is_set = false;
      this->number_of_steps = 0l;
      this->average_rise = 0.0;
      this->average_run = 0.0;
      this->average_width_is_set = false;
    }
  }

  explicit Staircase_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : knowledge_type(_alloc, _init),
    stair_tform(_alloc, _init),
    average_width(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->stair_tform_is_set = false;
      this->number_of_steps = 0l;
      this->average_rise = 0.0;
      this->average_run = 0.0;
      this->average_width_is_set = false;
    }
  }

  // field types and members
  using _knowledge_type_type =
    bosdyn_msgs::msg::StaircaseKnowledgeType_<ContainerAllocator>;
  _knowledge_type_type knowledge_type;
  using _stair_tform_type =
    bosdyn_msgs::msg::StairTransform_<ContainerAllocator>;
  _stair_tform_type stair_tform;
  using _stair_tform_is_set_type =
    bool;
  _stair_tform_is_set_type stair_tform_is_set;
  using _number_of_steps_type =
    int32_t;
  _number_of_steps_type number_of_steps;
  using _average_rise_type =
    double;
  _average_rise_type average_rise;
  using _average_run_type =
    double;
  _average_run_type average_run;
  using _average_width_type =
    bosdyn_msgs::msg::StaircaseWidth_<ContainerAllocator>;
  _average_width_type average_width;
  using _average_width_is_set_type =
    bool;
  _average_width_is_set_type average_width_is_set;
  using _steps_type =
    std::vector<bosdyn_msgs::msg::StaircaseStep_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::StaircaseStep_<ContainerAllocator>>>;
  _steps_type steps;

  // setters for named parameter idiom
  Type & set__knowledge_type(
    const bosdyn_msgs::msg::StaircaseKnowledgeType_<ContainerAllocator> & _arg)
  {
    this->knowledge_type = _arg;
    return *this;
  }
  Type & set__stair_tform(
    const bosdyn_msgs::msg::StairTransform_<ContainerAllocator> & _arg)
  {
    this->stair_tform = _arg;
    return *this;
  }
  Type & set__stair_tform_is_set(
    const bool & _arg)
  {
    this->stair_tform_is_set = _arg;
    return *this;
  }
  Type & set__number_of_steps(
    const int32_t & _arg)
  {
    this->number_of_steps = _arg;
    return *this;
  }
  Type & set__average_rise(
    const double & _arg)
  {
    this->average_rise = _arg;
    return *this;
  }
  Type & set__average_run(
    const double & _arg)
  {
    this->average_run = _arg;
    return *this;
  }
  Type & set__average_width(
    const bosdyn_msgs::msg::StaircaseWidth_<ContainerAllocator> & _arg)
  {
    this->average_width = _arg;
    return *this;
  }
  Type & set__average_width_is_set(
    const bool & _arg)
  {
    this->average_width_is_set = _arg;
    return *this;
  }
  Type & set__steps(
    const std::vector<bosdyn_msgs::msg::StaircaseStep_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::StaircaseStep_<ContainerAllocator>>> & _arg)
  {
    this->steps = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::Staircase_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::Staircase_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::Staircase_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::Staircase_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::Staircase_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::Staircase_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::Staircase_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::Staircase_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::Staircase_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::Staircase_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__Staircase
    std::shared_ptr<bosdyn_msgs::msg::Staircase_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__Staircase
    std::shared_ptr<bosdyn_msgs::msg::Staircase_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Staircase_ & other) const
  {
    if (this->knowledge_type != other.knowledge_type) {
      return false;
    }
    if (this->stair_tform != other.stair_tform) {
      return false;
    }
    if (this->stair_tform_is_set != other.stair_tform_is_set) {
      return false;
    }
    if (this->number_of_steps != other.number_of_steps) {
      return false;
    }
    if (this->average_rise != other.average_rise) {
      return false;
    }
    if (this->average_run != other.average_run) {
      return false;
    }
    if (this->average_width != other.average_width) {
      return false;
    }
    if (this->average_width_is_set != other.average_width_is_set) {
      return false;
    }
    if (this->steps != other.steps) {
      return false;
    }
    return true;
  }
  bool operator!=(const Staircase_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Staircase_

// alias to use template instance with default allocator
using Staircase =
  bosdyn_msgs::msg::Staircase_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__STAIRCASE__STRUCT_HPP_
