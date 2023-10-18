// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/ProcessAnchoringRequestParamsMeasurementParams.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__PROCESS_ANCHORING_REQUEST_PARAMS_MEASUREMENT_PARAMS__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__PROCESS_ANCHORING_REQUEST_PARAMS_MEASUREMENT_PARAMS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__ProcessAnchoringRequestParamsMeasurementParams __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__ProcessAnchoringRequestParamsMeasurementParams __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ProcessAnchoringRequestParamsMeasurementParams_
{
  using Type = ProcessAnchoringRequestParamsMeasurementParams_<ContainerAllocator>;

  explicit ProcessAnchoringRequestParamsMeasurementParams_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->use_kinematic_odometry = false;
      this->use_kinematic_odometry_is_set = false;
      this->use_visual_odometry = false;
      this->use_visual_odometry_is_set = false;
      this->use_gyroscope_measurements = false;
      this->use_gyroscope_measurements_is_set = false;
      this->use_loop_closures = false;
      this->use_loop_closures_is_set = false;
      this->use_world_objects = false;
      this->use_world_objects_is_set = false;
    }
  }

  explicit ProcessAnchoringRequestParamsMeasurementParams_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->use_kinematic_odometry = false;
      this->use_kinematic_odometry_is_set = false;
      this->use_visual_odometry = false;
      this->use_visual_odometry_is_set = false;
      this->use_gyroscope_measurements = false;
      this->use_gyroscope_measurements_is_set = false;
      this->use_loop_closures = false;
      this->use_loop_closures_is_set = false;
      this->use_world_objects = false;
      this->use_world_objects_is_set = false;
    }
  }

  // field types and members
  using _use_kinematic_odometry_type =
    bool;
  _use_kinematic_odometry_type use_kinematic_odometry;
  using _use_kinematic_odometry_is_set_type =
    bool;
  _use_kinematic_odometry_is_set_type use_kinematic_odometry_is_set;
  using _use_visual_odometry_type =
    bool;
  _use_visual_odometry_type use_visual_odometry;
  using _use_visual_odometry_is_set_type =
    bool;
  _use_visual_odometry_is_set_type use_visual_odometry_is_set;
  using _use_gyroscope_measurements_type =
    bool;
  _use_gyroscope_measurements_type use_gyroscope_measurements;
  using _use_gyroscope_measurements_is_set_type =
    bool;
  _use_gyroscope_measurements_is_set_type use_gyroscope_measurements_is_set;
  using _use_loop_closures_type =
    bool;
  _use_loop_closures_type use_loop_closures;
  using _use_loop_closures_is_set_type =
    bool;
  _use_loop_closures_is_set_type use_loop_closures_is_set;
  using _use_world_objects_type =
    bool;
  _use_world_objects_type use_world_objects;
  using _use_world_objects_is_set_type =
    bool;
  _use_world_objects_is_set_type use_world_objects_is_set;

  // setters for named parameter idiom
  Type & set__use_kinematic_odometry(
    const bool & _arg)
  {
    this->use_kinematic_odometry = _arg;
    return *this;
  }
  Type & set__use_kinematic_odometry_is_set(
    const bool & _arg)
  {
    this->use_kinematic_odometry_is_set = _arg;
    return *this;
  }
  Type & set__use_visual_odometry(
    const bool & _arg)
  {
    this->use_visual_odometry = _arg;
    return *this;
  }
  Type & set__use_visual_odometry_is_set(
    const bool & _arg)
  {
    this->use_visual_odometry_is_set = _arg;
    return *this;
  }
  Type & set__use_gyroscope_measurements(
    const bool & _arg)
  {
    this->use_gyroscope_measurements = _arg;
    return *this;
  }
  Type & set__use_gyroscope_measurements_is_set(
    const bool & _arg)
  {
    this->use_gyroscope_measurements_is_set = _arg;
    return *this;
  }
  Type & set__use_loop_closures(
    const bool & _arg)
  {
    this->use_loop_closures = _arg;
    return *this;
  }
  Type & set__use_loop_closures_is_set(
    const bool & _arg)
  {
    this->use_loop_closures_is_set = _arg;
    return *this;
  }
  Type & set__use_world_objects(
    const bool & _arg)
  {
    this->use_world_objects = _arg;
    return *this;
  }
  Type & set__use_world_objects_is_set(
    const bool & _arg)
  {
    this->use_world_objects_is_set = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::ProcessAnchoringRequestParamsMeasurementParams_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::ProcessAnchoringRequestParamsMeasurementParams_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::ProcessAnchoringRequestParamsMeasurementParams_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::ProcessAnchoringRequestParamsMeasurementParams_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::ProcessAnchoringRequestParamsMeasurementParams_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::ProcessAnchoringRequestParamsMeasurementParams_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::ProcessAnchoringRequestParamsMeasurementParams_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::ProcessAnchoringRequestParamsMeasurementParams_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::ProcessAnchoringRequestParamsMeasurementParams_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::ProcessAnchoringRequestParamsMeasurementParams_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__ProcessAnchoringRequestParamsMeasurementParams
    std::shared_ptr<bosdyn_msgs::msg::ProcessAnchoringRequestParamsMeasurementParams_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__ProcessAnchoringRequestParamsMeasurementParams
    std::shared_ptr<bosdyn_msgs::msg::ProcessAnchoringRequestParamsMeasurementParams_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ProcessAnchoringRequestParamsMeasurementParams_ & other) const
  {
    if (this->use_kinematic_odometry != other.use_kinematic_odometry) {
      return false;
    }
    if (this->use_kinematic_odometry_is_set != other.use_kinematic_odometry_is_set) {
      return false;
    }
    if (this->use_visual_odometry != other.use_visual_odometry) {
      return false;
    }
    if (this->use_visual_odometry_is_set != other.use_visual_odometry_is_set) {
      return false;
    }
    if (this->use_gyroscope_measurements != other.use_gyroscope_measurements) {
      return false;
    }
    if (this->use_gyroscope_measurements_is_set != other.use_gyroscope_measurements_is_set) {
      return false;
    }
    if (this->use_loop_closures != other.use_loop_closures) {
      return false;
    }
    if (this->use_loop_closures_is_set != other.use_loop_closures_is_set) {
      return false;
    }
    if (this->use_world_objects != other.use_world_objects) {
      return false;
    }
    if (this->use_world_objects_is_set != other.use_world_objects_is_set) {
      return false;
    }
    return true;
  }
  bool operator!=(const ProcessAnchoringRequestParamsMeasurementParams_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ProcessAnchoringRequestParamsMeasurementParams_

// alias to use template instance with default allocator
using ProcessAnchoringRequestParamsMeasurementParams =
  bosdyn_msgs::msg::ProcessAnchoringRequestParamsMeasurementParams_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__PROCESS_ANCHORING_REQUEST_PARAMS_MEASUREMENT_PARAMS__STRUCT_HPP_
