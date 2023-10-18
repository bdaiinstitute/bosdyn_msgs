// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/GetLocalizationStateResponse.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__GET_LOCALIZATION_STATE_RESPONSE__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__GET_LOCALIZATION_STATE_RESPONSE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "bosdyn_msgs/msg/detail/response_header__struct.hpp"
// Member 'localization'
#include "bosdyn_msgs/msg/detail/localization__struct.hpp"
// Member 'robot_kinematics'
#include "bosdyn_msgs/msg/detail/kinematic_state__struct.hpp"
// Member 'remote_cloud_status'
#include "bosdyn_msgs/msg/detail/remote_point_cloud_status__struct.hpp"
// Member 'live_data'
#include "bosdyn_msgs/msg/detail/waypoint_snapshot__struct.hpp"
// Member 'lost_detector_state'
#include "bosdyn_msgs/msg/detail/lost_detector_state__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__GetLocalizationStateResponse __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__GetLocalizationStateResponse __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct GetLocalizationStateResponse_
{
  using Type = GetLocalizationStateResponse_<ContainerAllocator>;

  explicit GetLocalizationStateResponse_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    localization(_init),
    robot_kinematics(_init),
    live_data(_init),
    lost_detector_state(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->header_is_set = false;
      this->localization_is_set = false;
      this->robot_kinematics_is_set = false;
      this->live_data_is_set = false;
      this->lost_detector_state_is_set = false;
    }
  }

  explicit GetLocalizationStateResponse_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    localization(_alloc, _init),
    robot_kinematics(_alloc, _init),
    live_data(_alloc, _init),
    lost_detector_state(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->header_is_set = false;
      this->localization_is_set = false;
      this->robot_kinematics_is_set = false;
      this->live_data_is_set = false;
      this->lost_detector_state_is_set = false;
    }
  }

  // field types and members
  using _header_type =
    bosdyn_msgs::msg::ResponseHeader_<ContainerAllocator>;
  _header_type header;
  using _header_is_set_type =
    bool;
  _header_is_set_type header_is_set;
  using _localization_type =
    bosdyn_msgs::msg::Localization_<ContainerAllocator>;
  _localization_type localization;
  using _localization_is_set_type =
    bool;
  _localization_is_set_type localization_is_set;
  using _robot_kinematics_type =
    bosdyn_msgs::msg::KinematicState_<ContainerAllocator>;
  _robot_kinematics_type robot_kinematics;
  using _robot_kinematics_is_set_type =
    bool;
  _robot_kinematics_is_set_type robot_kinematics_is_set;
  using _remote_cloud_status_type =
    std::vector<bosdyn_msgs::msg::RemotePointCloudStatus_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::RemotePointCloudStatus_<ContainerAllocator>>>;
  _remote_cloud_status_type remote_cloud_status;
  using _live_data_type =
    bosdyn_msgs::msg::WaypointSnapshot_<ContainerAllocator>;
  _live_data_type live_data;
  using _live_data_is_set_type =
    bool;
  _live_data_is_set_type live_data_is_set;
  using _lost_detector_state_type =
    bosdyn_msgs::msg::LostDetectorState_<ContainerAllocator>;
  _lost_detector_state_type lost_detector_state;
  using _lost_detector_state_is_set_type =
    bool;
  _lost_detector_state_is_set_type lost_detector_state_is_set;

  // setters for named parameter idiom
  Type & set__header(
    const bosdyn_msgs::msg::ResponseHeader_<ContainerAllocator> & _arg)
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
  Type & set__localization(
    const bosdyn_msgs::msg::Localization_<ContainerAllocator> & _arg)
  {
    this->localization = _arg;
    return *this;
  }
  Type & set__localization_is_set(
    const bool & _arg)
  {
    this->localization_is_set = _arg;
    return *this;
  }
  Type & set__robot_kinematics(
    const bosdyn_msgs::msg::KinematicState_<ContainerAllocator> & _arg)
  {
    this->robot_kinematics = _arg;
    return *this;
  }
  Type & set__robot_kinematics_is_set(
    const bool & _arg)
  {
    this->robot_kinematics_is_set = _arg;
    return *this;
  }
  Type & set__remote_cloud_status(
    const std::vector<bosdyn_msgs::msg::RemotePointCloudStatus_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::RemotePointCloudStatus_<ContainerAllocator>>> & _arg)
  {
    this->remote_cloud_status = _arg;
    return *this;
  }
  Type & set__live_data(
    const bosdyn_msgs::msg::WaypointSnapshot_<ContainerAllocator> & _arg)
  {
    this->live_data = _arg;
    return *this;
  }
  Type & set__live_data_is_set(
    const bool & _arg)
  {
    this->live_data_is_set = _arg;
    return *this;
  }
  Type & set__lost_detector_state(
    const bosdyn_msgs::msg::LostDetectorState_<ContainerAllocator> & _arg)
  {
    this->lost_detector_state = _arg;
    return *this;
  }
  Type & set__lost_detector_state_is_set(
    const bool & _arg)
  {
    this->lost_detector_state_is_set = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::GetLocalizationStateResponse_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::GetLocalizationStateResponse_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::GetLocalizationStateResponse_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::GetLocalizationStateResponse_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::GetLocalizationStateResponse_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::GetLocalizationStateResponse_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::GetLocalizationStateResponse_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::GetLocalizationStateResponse_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::GetLocalizationStateResponse_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::GetLocalizationStateResponse_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__GetLocalizationStateResponse
    std::shared_ptr<bosdyn_msgs::msg::GetLocalizationStateResponse_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__GetLocalizationStateResponse
    std::shared_ptr<bosdyn_msgs::msg::GetLocalizationStateResponse_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetLocalizationStateResponse_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->header_is_set != other.header_is_set) {
      return false;
    }
    if (this->localization != other.localization) {
      return false;
    }
    if (this->localization_is_set != other.localization_is_set) {
      return false;
    }
    if (this->robot_kinematics != other.robot_kinematics) {
      return false;
    }
    if (this->robot_kinematics_is_set != other.robot_kinematics_is_set) {
      return false;
    }
    if (this->remote_cloud_status != other.remote_cloud_status) {
      return false;
    }
    if (this->live_data != other.live_data) {
      return false;
    }
    if (this->live_data_is_set != other.live_data_is_set) {
      return false;
    }
    if (this->lost_detector_state != other.lost_detector_state) {
      return false;
    }
    if (this->lost_detector_state_is_set != other.lost_detector_state_is_set) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetLocalizationStateResponse_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetLocalizationStateResponse_

// alias to use template instance with default allocator
using GetLocalizationStateResponse =
  bosdyn_msgs::msg::GetLocalizationStateResponse_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__GET_LOCALIZATION_STATE_RESPONSE__STRUCT_HPP_
