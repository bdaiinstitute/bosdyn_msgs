// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/ProcessAnchoringRequestParamsWeights.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__PROCESS_ANCHORING_REQUEST_PARAMS_WEIGHTS__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__PROCESS_ANCHORING_REQUEST_PARAMS_WEIGHTS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__ProcessAnchoringRequestParamsWeights __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__ProcessAnchoringRequestParamsWeights __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ProcessAnchoringRequestParamsWeights_
{
  using Type = ProcessAnchoringRequestParamsWeights_<ContainerAllocator>;

  explicit ProcessAnchoringRequestParamsWeights_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->kinematic_odometry_weight = 0.0;
      this->visual_odometry_weight = 0.0;
      this->world_object_weight = 0.0;
      this->hint_weight = 0.0;
      this->gyroscope_weight = 0.0;
      this->loop_closure_weight = 0.0;
    }
  }

  explicit ProcessAnchoringRequestParamsWeights_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->kinematic_odometry_weight = 0.0;
      this->visual_odometry_weight = 0.0;
      this->world_object_weight = 0.0;
      this->hint_weight = 0.0;
      this->gyroscope_weight = 0.0;
      this->loop_closure_weight = 0.0;
    }
  }

  // field types and members
  using _kinematic_odometry_weight_type =
    double;
  _kinematic_odometry_weight_type kinematic_odometry_weight;
  using _visual_odometry_weight_type =
    double;
  _visual_odometry_weight_type visual_odometry_weight;
  using _world_object_weight_type =
    double;
  _world_object_weight_type world_object_weight;
  using _hint_weight_type =
    double;
  _hint_weight_type hint_weight;
  using _gyroscope_weight_type =
    double;
  _gyroscope_weight_type gyroscope_weight;
  using _loop_closure_weight_type =
    double;
  _loop_closure_weight_type loop_closure_weight;

  // setters for named parameter idiom
  Type & set__kinematic_odometry_weight(
    const double & _arg)
  {
    this->kinematic_odometry_weight = _arg;
    return *this;
  }
  Type & set__visual_odometry_weight(
    const double & _arg)
  {
    this->visual_odometry_weight = _arg;
    return *this;
  }
  Type & set__world_object_weight(
    const double & _arg)
  {
    this->world_object_weight = _arg;
    return *this;
  }
  Type & set__hint_weight(
    const double & _arg)
  {
    this->hint_weight = _arg;
    return *this;
  }
  Type & set__gyroscope_weight(
    const double & _arg)
  {
    this->gyroscope_weight = _arg;
    return *this;
  }
  Type & set__loop_closure_weight(
    const double & _arg)
  {
    this->loop_closure_weight = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::ProcessAnchoringRequestParamsWeights_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::ProcessAnchoringRequestParamsWeights_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::ProcessAnchoringRequestParamsWeights_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::ProcessAnchoringRequestParamsWeights_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::ProcessAnchoringRequestParamsWeights_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::ProcessAnchoringRequestParamsWeights_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::ProcessAnchoringRequestParamsWeights_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::ProcessAnchoringRequestParamsWeights_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::ProcessAnchoringRequestParamsWeights_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::ProcessAnchoringRequestParamsWeights_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__ProcessAnchoringRequestParamsWeights
    std::shared_ptr<bosdyn_msgs::msg::ProcessAnchoringRequestParamsWeights_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__ProcessAnchoringRequestParamsWeights
    std::shared_ptr<bosdyn_msgs::msg::ProcessAnchoringRequestParamsWeights_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ProcessAnchoringRequestParamsWeights_ & other) const
  {
    if (this->kinematic_odometry_weight != other.kinematic_odometry_weight) {
      return false;
    }
    if (this->visual_odometry_weight != other.visual_odometry_weight) {
      return false;
    }
    if (this->world_object_weight != other.world_object_weight) {
      return false;
    }
    if (this->hint_weight != other.hint_weight) {
      return false;
    }
    if (this->gyroscope_weight != other.gyroscope_weight) {
      return false;
    }
    if (this->loop_closure_weight != other.loop_closure_weight) {
      return false;
    }
    return true;
  }
  bool operator!=(const ProcessAnchoringRequestParamsWeights_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ProcessAnchoringRequestParamsWeights_

// alias to use template instance with default allocator
using ProcessAnchoringRequestParamsWeights =
  bosdyn_msgs::msg::ProcessAnchoringRequestParamsWeights_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__PROCESS_ANCHORING_REQUEST_PARAMS_WEIGHTS__STRUCT_HPP_
