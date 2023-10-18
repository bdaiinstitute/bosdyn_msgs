// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/SetLocalizationRequestOneOfRefinement.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__SET_LOCALIZATION_REQUEST_ONE_OF_REFINEMENT__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__SET_LOCALIZATION_REQUEST_ONE_OF_REFINEMENT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'refine_with_visual_features'
#include "bosdyn_msgs/msg/detail/visual_refinement_options__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__SetLocalizationRequestOneOfRefinement __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__SetLocalizationRequestOneOfRefinement __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SetLocalizationRequestOneOfRefinement_
{
  using Type = SetLocalizationRequestOneOfRefinement_<ContainerAllocator>;

  explicit SetLocalizationRequestOneOfRefinement_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : refine_with_visual_features(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->refine_fiducial_result_with_icp = false;
      this->refinement_choice = 0;
    }
  }

  explicit SetLocalizationRequestOneOfRefinement_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : refine_with_visual_features(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->refine_fiducial_result_with_icp = false;
      this->refinement_choice = 0;
    }
  }

  // field types and members
  using _refine_fiducial_result_with_icp_type =
    bool;
  _refine_fiducial_result_with_icp_type refine_fiducial_result_with_icp;
  using _refine_with_visual_features_type =
    bosdyn_msgs::msg::VisualRefinementOptions_<ContainerAllocator>;
  _refine_with_visual_features_type refine_with_visual_features;
  using _refinement_choice_type =
    int8_t;
  _refinement_choice_type refinement_choice;

  // setters for named parameter idiom
  Type & set__refine_fiducial_result_with_icp(
    const bool & _arg)
  {
    this->refine_fiducial_result_with_icp = _arg;
    return *this;
  }
  Type & set__refine_with_visual_features(
    const bosdyn_msgs::msg::VisualRefinementOptions_<ContainerAllocator> & _arg)
  {
    this->refine_with_visual_features = _arg;
    return *this;
  }
  Type & set__refinement_choice(
    const int8_t & _arg)
  {
    this->refinement_choice = _arg;
    return *this;
  }

  // constant declarations
  static constexpr int8_t REFINEMENT_NOT_SET =
    0;
  static constexpr int8_t REFINEMENT_REFINE_FIDUCIAL_RESULT_WITH_ICP_SET =
    1;
  static constexpr int8_t REFINEMENT_REFINE_WITH_VISUAL_FEATURES_SET =
    2;

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::SetLocalizationRequestOneOfRefinement_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::SetLocalizationRequestOneOfRefinement_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::SetLocalizationRequestOneOfRefinement_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::SetLocalizationRequestOneOfRefinement_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::SetLocalizationRequestOneOfRefinement_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::SetLocalizationRequestOneOfRefinement_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::SetLocalizationRequestOneOfRefinement_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::SetLocalizationRequestOneOfRefinement_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::SetLocalizationRequestOneOfRefinement_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::SetLocalizationRequestOneOfRefinement_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__SetLocalizationRequestOneOfRefinement
    std::shared_ptr<bosdyn_msgs::msg::SetLocalizationRequestOneOfRefinement_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__SetLocalizationRequestOneOfRefinement
    std::shared_ptr<bosdyn_msgs::msg::SetLocalizationRequestOneOfRefinement_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetLocalizationRequestOneOfRefinement_ & other) const
  {
    if (this->refine_fiducial_result_with_icp != other.refine_fiducial_result_with_icp) {
      return false;
    }
    if (this->refine_with_visual_features != other.refine_with_visual_features) {
      return false;
    }
    if (this->refinement_choice != other.refinement_choice) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetLocalizationRequestOneOfRefinement_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetLocalizationRequestOneOfRefinement_

// alias to use template instance with default allocator
using SetLocalizationRequestOneOfRefinement =
  bosdyn_msgs::msg::SetLocalizationRequestOneOfRefinement_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t SetLocalizationRequestOneOfRefinement_<ContainerAllocator>::REFINEMENT_NOT_SET;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t SetLocalizationRequestOneOfRefinement_<ContainerAllocator>::REFINEMENT_REFINE_FIDUCIAL_RESULT_WITH_ICP_SET;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t SetLocalizationRequestOneOfRefinement_<ContainerAllocator>::REFINEMENT_REFINE_WITH_VISUAL_FEATURES_SET;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__SET_LOCALIZATION_REQUEST_ONE_OF_REFINEMENT__STRUCT_HPP_
