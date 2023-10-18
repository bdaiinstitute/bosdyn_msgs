// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/ProcessAnchoringRequestParams.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__PROCESS_ANCHORING_REQUEST_PARAMS__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__PROCESS_ANCHORING_REQUEST_PARAMS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'optimizer_params'
#include "bosdyn_msgs/msg/detail/process_anchoring_request_params_optimizer_params__struct.hpp"
// Member 'measurement_params'
#include "bosdyn_msgs/msg/detail/process_anchoring_request_params_measurement_params__struct.hpp"
// Member 'weights'
#include "bosdyn_msgs/msg/detail/process_anchoring_request_params_weights__struct.hpp"
// Member 'gravity_ewrt_seed'
#include "geometry_msgs/msg/detail/vector3__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__ProcessAnchoringRequestParams __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__ProcessAnchoringRequestParams __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ProcessAnchoringRequestParams_
{
  using Type = ProcessAnchoringRequestParams_<ContainerAllocator>;

  explicit ProcessAnchoringRequestParams_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : optimizer_params(_init),
    measurement_params(_init),
    weights(_init),
    gravity_ewrt_seed(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->optimizer_params_is_set = false;
      this->measurement_params_is_set = false;
      this->weights_is_set = false;
      this->optimize_existing_anchoring = false;
      this->optimize_existing_anchoring_is_set = false;
      this->gravity_ewrt_seed_is_set = false;
    }
  }

  explicit ProcessAnchoringRequestParams_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : optimizer_params(_alloc, _init),
    measurement_params(_alloc, _init),
    weights(_alloc, _init),
    gravity_ewrt_seed(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->optimizer_params_is_set = false;
      this->measurement_params_is_set = false;
      this->weights_is_set = false;
      this->optimize_existing_anchoring = false;
      this->optimize_existing_anchoring_is_set = false;
      this->gravity_ewrt_seed_is_set = false;
    }
  }

  // field types and members
  using _optimizer_params_type =
    bosdyn_msgs::msg::ProcessAnchoringRequestParamsOptimizerParams_<ContainerAllocator>;
  _optimizer_params_type optimizer_params;
  using _optimizer_params_is_set_type =
    bool;
  _optimizer_params_is_set_type optimizer_params_is_set;
  using _measurement_params_type =
    bosdyn_msgs::msg::ProcessAnchoringRequestParamsMeasurementParams_<ContainerAllocator>;
  _measurement_params_type measurement_params;
  using _measurement_params_is_set_type =
    bool;
  _measurement_params_is_set_type measurement_params_is_set;
  using _weights_type =
    bosdyn_msgs::msg::ProcessAnchoringRequestParamsWeights_<ContainerAllocator>;
  _weights_type weights;
  using _weights_is_set_type =
    bool;
  _weights_is_set_type weights_is_set;
  using _optimize_existing_anchoring_type =
    bool;
  _optimize_existing_anchoring_type optimize_existing_anchoring;
  using _optimize_existing_anchoring_is_set_type =
    bool;
  _optimize_existing_anchoring_is_set_type optimize_existing_anchoring_is_set;
  using _gravity_ewrt_seed_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _gravity_ewrt_seed_type gravity_ewrt_seed;
  using _gravity_ewrt_seed_is_set_type =
    bool;
  _gravity_ewrt_seed_is_set_type gravity_ewrt_seed_is_set;

  // setters for named parameter idiom
  Type & set__optimizer_params(
    const bosdyn_msgs::msg::ProcessAnchoringRequestParamsOptimizerParams_<ContainerAllocator> & _arg)
  {
    this->optimizer_params = _arg;
    return *this;
  }
  Type & set__optimizer_params_is_set(
    const bool & _arg)
  {
    this->optimizer_params_is_set = _arg;
    return *this;
  }
  Type & set__measurement_params(
    const bosdyn_msgs::msg::ProcessAnchoringRequestParamsMeasurementParams_<ContainerAllocator> & _arg)
  {
    this->measurement_params = _arg;
    return *this;
  }
  Type & set__measurement_params_is_set(
    const bool & _arg)
  {
    this->measurement_params_is_set = _arg;
    return *this;
  }
  Type & set__weights(
    const bosdyn_msgs::msg::ProcessAnchoringRequestParamsWeights_<ContainerAllocator> & _arg)
  {
    this->weights = _arg;
    return *this;
  }
  Type & set__weights_is_set(
    const bool & _arg)
  {
    this->weights_is_set = _arg;
    return *this;
  }
  Type & set__optimize_existing_anchoring(
    const bool & _arg)
  {
    this->optimize_existing_anchoring = _arg;
    return *this;
  }
  Type & set__optimize_existing_anchoring_is_set(
    const bool & _arg)
  {
    this->optimize_existing_anchoring_is_set = _arg;
    return *this;
  }
  Type & set__gravity_ewrt_seed(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->gravity_ewrt_seed = _arg;
    return *this;
  }
  Type & set__gravity_ewrt_seed_is_set(
    const bool & _arg)
  {
    this->gravity_ewrt_seed_is_set = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::ProcessAnchoringRequestParams_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::ProcessAnchoringRequestParams_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::ProcessAnchoringRequestParams_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::ProcessAnchoringRequestParams_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::ProcessAnchoringRequestParams_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::ProcessAnchoringRequestParams_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::ProcessAnchoringRequestParams_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::ProcessAnchoringRequestParams_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::ProcessAnchoringRequestParams_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::ProcessAnchoringRequestParams_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__ProcessAnchoringRequestParams
    std::shared_ptr<bosdyn_msgs::msg::ProcessAnchoringRequestParams_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__ProcessAnchoringRequestParams
    std::shared_ptr<bosdyn_msgs::msg::ProcessAnchoringRequestParams_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ProcessAnchoringRequestParams_ & other) const
  {
    if (this->optimizer_params != other.optimizer_params) {
      return false;
    }
    if (this->optimizer_params_is_set != other.optimizer_params_is_set) {
      return false;
    }
    if (this->measurement_params != other.measurement_params) {
      return false;
    }
    if (this->measurement_params_is_set != other.measurement_params_is_set) {
      return false;
    }
    if (this->weights != other.weights) {
      return false;
    }
    if (this->weights_is_set != other.weights_is_set) {
      return false;
    }
    if (this->optimize_existing_anchoring != other.optimize_existing_anchoring) {
      return false;
    }
    if (this->optimize_existing_anchoring_is_set != other.optimize_existing_anchoring_is_set) {
      return false;
    }
    if (this->gravity_ewrt_seed != other.gravity_ewrt_seed) {
      return false;
    }
    if (this->gravity_ewrt_seed_is_set != other.gravity_ewrt_seed_is_set) {
      return false;
    }
    return true;
  }
  bool operator!=(const ProcessAnchoringRequestParams_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ProcessAnchoringRequestParams_

// alias to use template instance with default allocator
using ProcessAnchoringRequestParams =
  bosdyn_msgs::msg::ProcessAnchoringRequestParams_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__PROCESS_ANCHORING_REQUEST_PARAMS__STRUCT_HPP_
