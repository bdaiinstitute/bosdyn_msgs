// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/BodyControlParamsOneOfParam.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__BODY_CONTROL_PARAMS_ONE_OF_PARAM__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__BODY_CONTROL_PARAMS_ONE_OF_PARAM__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'base_offset_rt_footprint'
#include "bosdyn_msgs/msg/detail/se3_trajectory__struct.hpp"
// Member 'body_assist_for_manipulation'
#include "bosdyn_msgs/msg/detail/body_control_params_body_assist_for_manipulation__struct.hpp"
// Member 'body_pose'
#include "bosdyn_msgs/msg/detail/body_control_params_body_pose__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__BodyControlParamsOneOfParam __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__BodyControlParamsOneOfParam __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct BodyControlParamsOneOfParam_
{
  using Type = BodyControlParamsOneOfParam_<ContainerAllocator>;

  explicit BodyControlParamsOneOfParam_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : base_offset_rt_footprint(_init),
    body_assist_for_manipulation(_init),
    body_pose(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->param_choice = 0;
    }
  }

  explicit BodyControlParamsOneOfParam_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : base_offset_rt_footprint(_alloc, _init),
    body_assist_for_manipulation(_alloc, _init),
    body_pose(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->param_choice = 0;
    }
  }

  // field types and members
  using _base_offset_rt_footprint_type =
    bosdyn_msgs::msg::SE3Trajectory_<ContainerAllocator>;
  _base_offset_rt_footprint_type base_offset_rt_footprint;
  using _body_assist_for_manipulation_type =
    bosdyn_msgs::msg::BodyControlParamsBodyAssistForManipulation_<ContainerAllocator>;
  _body_assist_for_manipulation_type body_assist_for_manipulation;
  using _body_pose_type =
    bosdyn_msgs::msg::BodyControlParamsBodyPose_<ContainerAllocator>;
  _body_pose_type body_pose;
  using _param_choice_type =
    int8_t;
  _param_choice_type param_choice;

  // setters for named parameter idiom
  Type & set__base_offset_rt_footprint(
    const bosdyn_msgs::msg::SE3Trajectory_<ContainerAllocator> & _arg)
  {
    this->base_offset_rt_footprint = _arg;
    return *this;
  }
  Type & set__body_assist_for_manipulation(
    const bosdyn_msgs::msg::BodyControlParamsBodyAssistForManipulation_<ContainerAllocator> & _arg)
  {
    this->body_assist_for_manipulation = _arg;
    return *this;
  }
  Type & set__body_pose(
    const bosdyn_msgs::msg::BodyControlParamsBodyPose_<ContainerAllocator> & _arg)
  {
    this->body_pose = _arg;
    return *this;
  }
  Type & set__param_choice(
    const int8_t & _arg)
  {
    this->param_choice = _arg;
    return *this;
  }

  // constant declarations
  static constexpr int8_t PARAM_NOT_SET =
    0;
  static constexpr int8_t PARAM_BASE_OFFSET_RT_FOOTPRINT_SET =
    1;
  static constexpr int8_t PARAM_BODY_ASSIST_FOR_MANIPULATION_SET =
    2;
  static constexpr int8_t PARAM_BODY_POSE_SET =
    3;

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::BodyControlParamsOneOfParam_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::BodyControlParamsOneOfParam_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::BodyControlParamsOneOfParam_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::BodyControlParamsOneOfParam_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::BodyControlParamsOneOfParam_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::BodyControlParamsOneOfParam_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::BodyControlParamsOneOfParam_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::BodyControlParamsOneOfParam_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::BodyControlParamsOneOfParam_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::BodyControlParamsOneOfParam_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__BodyControlParamsOneOfParam
    std::shared_ptr<bosdyn_msgs::msg::BodyControlParamsOneOfParam_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__BodyControlParamsOneOfParam
    std::shared_ptr<bosdyn_msgs::msg::BodyControlParamsOneOfParam_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BodyControlParamsOneOfParam_ & other) const
  {
    if (this->base_offset_rt_footprint != other.base_offset_rt_footprint) {
      return false;
    }
    if (this->body_assist_for_manipulation != other.body_assist_for_manipulation) {
      return false;
    }
    if (this->body_pose != other.body_pose) {
      return false;
    }
    if (this->param_choice != other.param_choice) {
      return false;
    }
    return true;
  }
  bool operator!=(const BodyControlParamsOneOfParam_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BodyControlParamsOneOfParam_

// alias to use template instance with default allocator
using BodyControlParamsOneOfParam =
  bosdyn_msgs::msg::BodyControlParamsOneOfParam_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t BodyControlParamsOneOfParam_<ContainerAllocator>::PARAM_NOT_SET;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t BodyControlParamsOneOfParam_<ContainerAllocator>::PARAM_BASE_OFFSET_RT_FOOTPRINT_SET;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t BodyControlParamsOneOfParam_<ContainerAllocator>::PARAM_BODY_ASSIST_FOR_MANIPULATION_SET;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t BodyControlParamsOneOfParam_<ContainerAllocator>::PARAM_BODY_POSE_SET;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__BODY_CONTROL_PARAMS_ONE_OF_PARAM__STRUCT_HPP_
