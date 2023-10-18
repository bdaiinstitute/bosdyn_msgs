// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/SetLocalizationRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__SET_LOCALIZATION_REQUEST__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__SET_LOCALIZATION_REQUEST__STRUCT_HPP_

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
// Member 'initial_guess'
#include "bosdyn_msgs/msg/detail/localization__struct.hpp"
// Member 'ko_tform_body'
#include "geometry_msgs/msg/detail/pose__struct.hpp"
// Member 'fiducial_init'
#include "bosdyn_msgs/msg/detail/set_localization_request_fiducial_init__struct.hpp"
// Member 'refinement'
#include "bosdyn_msgs/msg/detail/set_localization_request_one_of_refinement__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__SetLocalizationRequest __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__SetLocalizationRequest __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SetLocalizationRequest_
{
  using Type = SetLocalizationRequest_<ContainerAllocator>;

  explicit SetLocalizationRequest_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    initial_guess(_init),
    ko_tform_body(_init),
    fiducial_init(_init),
    refinement(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->header_is_set = false;
      this->initial_guess_is_set = false;
      this->ko_tform_body_is_set = false;
      this->max_distance = 0.0;
      this->max_yaw = 0.0;
      this->use_fiducial_id = 0l;
      this->do_ambiguity_check = false;
      this->restrict_fiducial_detections_to_target_waypoint = false;
    }
  }

  explicit SetLocalizationRequest_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    initial_guess(_alloc, _init),
    ko_tform_body(_alloc, _init),
    fiducial_init(_alloc, _init),
    refinement(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->header_is_set = false;
      this->initial_guess_is_set = false;
      this->ko_tform_body_is_set = false;
      this->max_distance = 0.0;
      this->max_yaw = 0.0;
      this->use_fiducial_id = 0l;
      this->do_ambiguity_check = false;
      this->restrict_fiducial_detections_to_target_waypoint = false;
    }
  }

  // field types and members
  using _header_type =
    bosdyn_msgs::msg::RequestHeader_<ContainerAllocator>;
  _header_type header;
  using _header_is_set_type =
    bool;
  _header_is_set_type header_is_set;
  using _initial_guess_type =
    bosdyn_msgs::msg::Localization_<ContainerAllocator>;
  _initial_guess_type initial_guess;
  using _initial_guess_is_set_type =
    bool;
  _initial_guess_is_set_type initial_guess_is_set;
  using _ko_tform_body_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _ko_tform_body_type ko_tform_body;
  using _ko_tform_body_is_set_type =
    bool;
  _ko_tform_body_is_set_type ko_tform_body_is_set;
  using _max_distance_type =
    double;
  _max_distance_type max_distance;
  using _max_yaw_type =
    double;
  _max_yaw_type max_yaw;
  using _fiducial_init_type =
    bosdyn_msgs::msg::SetLocalizationRequestFiducialInit_<ContainerAllocator>;
  _fiducial_init_type fiducial_init;
  using _use_fiducial_id_type =
    int32_t;
  _use_fiducial_id_type use_fiducial_id;
  using _do_ambiguity_check_type =
    bool;
  _do_ambiguity_check_type do_ambiguity_check;
  using _restrict_fiducial_detections_to_target_waypoint_type =
    bool;
  _restrict_fiducial_detections_to_target_waypoint_type restrict_fiducial_detections_to_target_waypoint;
  using _refinement_type =
    bosdyn_msgs::msg::SetLocalizationRequestOneOfRefinement_<ContainerAllocator>;
  _refinement_type refinement;

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
  Type & set__initial_guess(
    const bosdyn_msgs::msg::Localization_<ContainerAllocator> & _arg)
  {
    this->initial_guess = _arg;
    return *this;
  }
  Type & set__initial_guess_is_set(
    const bool & _arg)
  {
    this->initial_guess_is_set = _arg;
    return *this;
  }
  Type & set__ko_tform_body(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->ko_tform_body = _arg;
    return *this;
  }
  Type & set__ko_tform_body_is_set(
    const bool & _arg)
  {
    this->ko_tform_body_is_set = _arg;
    return *this;
  }
  Type & set__max_distance(
    const double & _arg)
  {
    this->max_distance = _arg;
    return *this;
  }
  Type & set__max_yaw(
    const double & _arg)
  {
    this->max_yaw = _arg;
    return *this;
  }
  Type & set__fiducial_init(
    const bosdyn_msgs::msg::SetLocalizationRequestFiducialInit_<ContainerAllocator> & _arg)
  {
    this->fiducial_init = _arg;
    return *this;
  }
  Type & set__use_fiducial_id(
    const int32_t & _arg)
  {
    this->use_fiducial_id = _arg;
    return *this;
  }
  Type & set__do_ambiguity_check(
    const bool & _arg)
  {
    this->do_ambiguity_check = _arg;
    return *this;
  }
  Type & set__restrict_fiducial_detections_to_target_waypoint(
    const bool & _arg)
  {
    this->restrict_fiducial_detections_to_target_waypoint = _arg;
    return *this;
  }
  Type & set__refinement(
    const bosdyn_msgs::msg::SetLocalizationRequestOneOfRefinement_<ContainerAllocator> & _arg)
  {
    this->refinement = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::SetLocalizationRequest_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::SetLocalizationRequest_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::SetLocalizationRequest_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::SetLocalizationRequest_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::SetLocalizationRequest_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::SetLocalizationRequest_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::SetLocalizationRequest_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::SetLocalizationRequest_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::SetLocalizationRequest_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::SetLocalizationRequest_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__SetLocalizationRequest
    std::shared_ptr<bosdyn_msgs::msg::SetLocalizationRequest_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__SetLocalizationRequest
    std::shared_ptr<bosdyn_msgs::msg::SetLocalizationRequest_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetLocalizationRequest_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->header_is_set != other.header_is_set) {
      return false;
    }
    if (this->initial_guess != other.initial_guess) {
      return false;
    }
    if (this->initial_guess_is_set != other.initial_guess_is_set) {
      return false;
    }
    if (this->ko_tform_body != other.ko_tform_body) {
      return false;
    }
    if (this->ko_tform_body_is_set != other.ko_tform_body_is_set) {
      return false;
    }
    if (this->max_distance != other.max_distance) {
      return false;
    }
    if (this->max_yaw != other.max_yaw) {
      return false;
    }
    if (this->fiducial_init != other.fiducial_init) {
      return false;
    }
    if (this->use_fiducial_id != other.use_fiducial_id) {
      return false;
    }
    if (this->do_ambiguity_check != other.do_ambiguity_check) {
      return false;
    }
    if (this->restrict_fiducial_detections_to_target_waypoint != other.restrict_fiducial_detections_to_target_waypoint) {
      return false;
    }
    if (this->refinement != other.refinement) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetLocalizationRequest_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetLocalizationRequest_

// alias to use template instance with default allocator
using SetLocalizationRequest =
  bosdyn_msgs::msg::SetLocalizationRequest_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__SET_LOCALIZATION_REQUEST__STRUCT_HPP_
