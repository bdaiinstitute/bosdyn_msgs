// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/FootStateTerrainState.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__FOOT_STATE_TERRAIN_STATE__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__FOOT_STATE_TERRAIN_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'foot_slip_distance_rt_frame'
// Member 'foot_slip_velocity_rt_frame'
// Member 'ground_contact_normal_rt_frame'
#include "geometry_msgs/msg/detail/vector3__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__FootStateTerrainState __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__FootStateTerrainState __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct FootStateTerrainState_
{
  using Type = FootStateTerrainState_<ContainerAllocator>;

  explicit FootStateTerrainState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : foot_slip_distance_rt_frame(_init),
    foot_slip_velocity_rt_frame(_init),
    ground_contact_normal_rt_frame(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ground_mu_est = 0.0;
      this->frame_name = "";
      this->foot_slip_distance_rt_frame_is_set = false;
      this->foot_slip_velocity_rt_frame_is_set = false;
      this->ground_contact_normal_rt_frame_is_set = false;
      this->visual_surface_ground_penetration_mean = 0.0;
      this->visual_surface_ground_penetration_std = 0.0;
    }
  }

  explicit FootStateTerrainState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : frame_name(_alloc),
    foot_slip_distance_rt_frame(_alloc, _init),
    foot_slip_velocity_rt_frame(_alloc, _init),
    ground_contact_normal_rt_frame(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ground_mu_est = 0.0;
      this->frame_name = "";
      this->foot_slip_distance_rt_frame_is_set = false;
      this->foot_slip_velocity_rt_frame_is_set = false;
      this->ground_contact_normal_rt_frame_is_set = false;
      this->visual_surface_ground_penetration_mean = 0.0;
      this->visual_surface_ground_penetration_std = 0.0;
    }
  }

  // field types and members
  using _ground_mu_est_type =
    double;
  _ground_mu_est_type ground_mu_est;
  using _frame_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _frame_name_type frame_name;
  using _foot_slip_distance_rt_frame_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _foot_slip_distance_rt_frame_type foot_slip_distance_rt_frame;
  using _foot_slip_distance_rt_frame_is_set_type =
    bool;
  _foot_slip_distance_rt_frame_is_set_type foot_slip_distance_rt_frame_is_set;
  using _foot_slip_velocity_rt_frame_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _foot_slip_velocity_rt_frame_type foot_slip_velocity_rt_frame;
  using _foot_slip_velocity_rt_frame_is_set_type =
    bool;
  _foot_slip_velocity_rt_frame_is_set_type foot_slip_velocity_rt_frame_is_set;
  using _ground_contact_normal_rt_frame_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _ground_contact_normal_rt_frame_type ground_contact_normal_rt_frame;
  using _ground_contact_normal_rt_frame_is_set_type =
    bool;
  _ground_contact_normal_rt_frame_is_set_type ground_contact_normal_rt_frame_is_set;
  using _visual_surface_ground_penetration_mean_type =
    double;
  _visual_surface_ground_penetration_mean_type visual_surface_ground_penetration_mean;
  using _visual_surface_ground_penetration_std_type =
    double;
  _visual_surface_ground_penetration_std_type visual_surface_ground_penetration_std;

  // setters for named parameter idiom
  Type & set__ground_mu_est(
    const double & _arg)
  {
    this->ground_mu_est = _arg;
    return *this;
  }
  Type & set__frame_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->frame_name = _arg;
    return *this;
  }
  Type & set__foot_slip_distance_rt_frame(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->foot_slip_distance_rt_frame = _arg;
    return *this;
  }
  Type & set__foot_slip_distance_rt_frame_is_set(
    const bool & _arg)
  {
    this->foot_slip_distance_rt_frame_is_set = _arg;
    return *this;
  }
  Type & set__foot_slip_velocity_rt_frame(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->foot_slip_velocity_rt_frame = _arg;
    return *this;
  }
  Type & set__foot_slip_velocity_rt_frame_is_set(
    const bool & _arg)
  {
    this->foot_slip_velocity_rt_frame_is_set = _arg;
    return *this;
  }
  Type & set__ground_contact_normal_rt_frame(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->ground_contact_normal_rt_frame = _arg;
    return *this;
  }
  Type & set__ground_contact_normal_rt_frame_is_set(
    const bool & _arg)
  {
    this->ground_contact_normal_rt_frame_is_set = _arg;
    return *this;
  }
  Type & set__visual_surface_ground_penetration_mean(
    const double & _arg)
  {
    this->visual_surface_ground_penetration_mean = _arg;
    return *this;
  }
  Type & set__visual_surface_ground_penetration_std(
    const double & _arg)
  {
    this->visual_surface_ground_penetration_std = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::FootStateTerrainState_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::FootStateTerrainState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::FootStateTerrainState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::FootStateTerrainState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::FootStateTerrainState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::FootStateTerrainState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::FootStateTerrainState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::FootStateTerrainState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::FootStateTerrainState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::FootStateTerrainState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__FootStateTerrainState
    std::shared_ptr<bosdyn_msgs::msg::FootStateTerrainState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__FootStateTerrainState
    std::shared_ptr<bosdyn_msgs::msg::FootStateTerrainState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FootStateTerrainState_ & other) const
  {
    if (this->ground_mu_est != other.ground_mu_est) {
      return false;
    }
    if (this->frame_name != other.frame_name) {
      return false;
    }
    if (this->foot_slip_distance_rt_frame != other.foot_slip_distance_rt_frame) {
      return false;
    }
    if (this->foot_slip_distance_rt_frame_is_set != other.foot_slip_distance_rt_frame_is_set) {
      return false;
    }
    if (this->foot_slip_velocity_rt_frame != other.foot_slip_velocity_rt_frame) {
      return false;
    }
    if (this->foot_slip_velocity_rt_frame_is_set != other.foot_slip_velocity_rt_frame_is_set) {
      return false;
    }
    if (this->ground_contact_normal_rt_frame != other.ground_contact_normal_rt_frame) {
      return false;
    }
    if (this->ground_contact_normal_rt_frame_is_set != other.ground_contact_normal_rt_frame_is_set) {
      return false;
    }
    if (this->visual_surface_ground_penetration_mean != other.visual_surface_ground_penetration_mean) {
      return false;
    }
    if (this->visual_surface_ground_penetration_std != other.visual_surface_ground_penetration_std) {
      return false;
    }
    return true;
  }
  bool operator!=(const FootStateTerrainState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FootStateTerrainState_

// alias to use template instance with default allocator
using FootStateTerrainState =
  bosdyn_msgs::msg::FootStateTerrainState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__FOOT_STATE_TERRAIN_STATE__STRUCT_HPP_
