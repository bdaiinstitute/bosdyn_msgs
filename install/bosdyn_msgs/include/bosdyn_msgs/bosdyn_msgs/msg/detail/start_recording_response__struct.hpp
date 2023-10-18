// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/StartRecordingResponse.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__START_RECORDING_RESPONSE__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__START_RECORDING_RESPONSE__STRUCT_HPP_

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
// Member 'created_waypoint'
#include "bosdyn_msgs/msg/detail/waypoint__struct.hpp"
// Member 'lease_use_result'
#include "bosdyn_msgs/msg/detail/lease_use_result__struct.hpp"
// Member 'status'
#include "bosdyn_msgs/msg/detail/start_recording_response_status__struct.hpp"
// Member 'license_status'
#include "bosdyn_msgs/msg/detail/license_info_status__struct.hpp"
// Member 'impaired_state'
#include "bosdyn_msgs/msg/detail/robot_impaired_state__struct.hpp"
// Member 'session_start_time'
#include "builtin_interfaces/msg/detail/time__struct.hpp"
// Member 'map_stats'
#include "bosdyn_msgs/msg/detail/map_stats__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__StartRecordingResponse __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__StartRecordingResponse __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct StartRecordingResponse_
{
  using Type = StartRecordingResponse_<ContainerAllocator>;

  explicit StartRecordingResponse_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    created_waypoint(_init),
    lease_use_result(_init),
    status(_init),
    license_status(_init),
    impaired_state(_init),
    session_start_time(_init),
    map_stats(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->header_is_set = false;
      this->created_waypoint_is_set = false;
      this->lease_use_result_is_set = false;
      this->impaired_state_is_set = false;
      this->session_start_time_is_set = false;
      this->map_stats_is_set = false;
    }
  }

  explicit StartRecordingResponse_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    created_waypoint(_alloc, _init),
    lease_use_result(_alloc, _init),
    status(_alloc, _init),
    license_status(_alloc, _init),
    impaired_state(_alloc, _init),
    session_start_time(_alloc, _init),
    map_stats(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->header_is_set = false;
      this->created_waypoint_is_set = false;
      this->lease_use_result_is_set = false;
      this->impaired_state_is_set = false;
      this->session_start_time_is_set = false;
      this->map_stats_is_set = false;
    }
  }

  // field types and members
  using _header_type =
    bosdyn_msgs::msg::ResponseHeader_<ContainerAllocator>;
  _header_type header;
  using _header_is_set_type =
    bool;
  _header_is_set_type header_is_set;
  using _created_waypoint_type =
    bosdyn_msgs::msg::Waypoint_<ContainerAllocator>;
  _created_waypoint_type created_waypoint;
  using _created_waypoint_is_set_type =
    bool;
  _created_waypoint_is_set_type created_waypoint_is_set;
  using _lease_use_result_type =
    bosdyn_msgs::msg::LeaseUseResult_<ContainerAllocator>;
  _lease_use_result_type lease_use_result;
  using _lease_use_result_is_set_type =
    bool;
  _lease_use_result_is_set_type lease_use_result_is_set;
  using _status_type =
    bosdyn_msgs::msg::StartRecordingResponseStatus_<ContainerAllocator>;
  _status_type status;
  using _missing_fiducials_type =
    std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>>;
  _missing_fiducials_type missing_fiducials;
  using _bad_pose_fiducials_type =
    std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>>;
  _bad_pose_fiducials_type bad_pose_fiducials;
  using _license_status_type =
    bosdyn_msgs::msg::LicenseInfoStatus_<ContainerAllocator>;
  _license_status_type license_status;
  using _impaired_state_type =
    bosdyn_msgs::msg::RobotImpairedState_<ContainerAllocator>;
  _impaired_state_type impaired_state;
  using _impaired_state_is_set_type =
    bool;
  _impaired_state_is_set_type impaired_state_is_set;
  using _session_start_time_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _session_start_time_type session_start_time;
  using _session_start_time_is_set_type =
    bool;
  _session_start_time_is_set_type session_start_time_is_set;
  using _map_stats_type =
    bosdyn_msgs::msg::MapStats_<ContainerAllocator>;
  _map_stats_type map_stats;
  using _map_stats_is_set_type =
    bool;
  _map_stats_is_set_type map_stats_is_set;

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
  Type & set__created_waypoint(
    const bosdyn_msgs::msg::Waypoint_<ContainerAllocator> & _arg)
  {
    this->created_waypoint = _arg;
    return *this;
  }
  Type & set__created_waypoint_is_set(
    const bool & _arg)
  {
    this->created_waypoint_is_set = _arg;
    return *this;
  }
  Type & set__lease_use_result(
    const bosdyn_msgs::msg::LeaseUseResult_<ContainerAllocator> & _arg)
  {
    this->lease_use_result = _arg;
    return *this;
  }
  Type & set__lease_use_result_is_set(
    const bool & _arg)
  {
    this->lease_use_result_is_set = _arg;
    return *this;
  }
  Type & set__status(
    const bosdyn_msgs::msg::StartRecordingResponseStatus_<ContainerAllocator> & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__missing_fiducials(
    const std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>> & _arg)
  {
    this->missing_fiducials = _arg;
    return *this;
  }
  Type & set__bad_pose_fiducials(
    const std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>> & _arg)
  {
    this->bad_pose_fiducials = _arg;
    return *this;
  }
  Type & set__license_status(
    const bosdyn_msgs::msg::LicenseInfoStatus_<ContainerAllocator> & _arg)
  {
    this->license_status = _arg;
    return *this;
  }
  Type & set__impaired_state(
    const bosdyn_msgs::msg::RobotImpairedState_<ContainerAllocator> & _arg)
  {
    this->impaired_state = _arg;
    return *this;
  }
  Type & set__impaired_state_is_set(
    const bool & _arg)
  {
    this->impaired_state_is_set = _arg;
    return *this;
  }
  Type & set__session_start_time(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->session_start_time = _arg;
    return *this;
  }
  Type & set__session_start_time_is_set(
    const bool & _arg)
  {
    this->session_start_time_is_set = _arg;
    return *this;
  }
  Type & set__map_stats(
    const bosdyn_msgs::msg::MapStats_<ContainerAllocator> & _arg)
  {
    this->map_stats = _arg;
    return *this;
  }
  Type & set__map_stats_is_set(
    const bool & _arg)
  {
    this->map_stats_is_set = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::StartRecordingResponse_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::StartRecordingResponse_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::StartRecordingResponse_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::StartRecordingResponse_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::StartRecordingResponse_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::StartRecordingResponse_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::StartRecordingResponse_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::StartRecordingResponse_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::StartRecordingResponse_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::StartRecordingResponse_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__StartRecordingResponse
    std::shared_ptr<bosdyn_msgs::msg::StartRecordingResponse_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__StartRecordingResponse
    std::shared_ptr<bosdyn_msgs::msg::StartRecordingResponse_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const StartRecordingResponse_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->header_is_set != other.header_is_set) {
      return false;
    }
    if (this->created_waypoint != other.created_waypoint) {
      return false;
    }
    if (this->created_waypoint_is_set != other.created_waypoint_is_set) {
      return false;
    }
    if (this->lease_use_result != other.lease_use_result) {
      return false;
    }
    if (this->lease_use_result_is_set != other.lease_use_result_is_set) {
      return false;
    }
    if (this->status != other.status) {
      return false;
    }
    if (this->missing_fiducials != other.missing_fiducials) {
      return false;
    }
    if (this->bad_pose_fiducials != other.bad_pose_fiducials) {
      return false;
    }
    if (this->license_status != other.license_status) {
      return false;
    }
    if (this->impaired_state != other.impaired_state) {
      return false;
    }
    if (this->impaired_state_is_set != other.impaired_state_is_set) {
      return false;
    }
    if (this->session_start_time != other.session_start_time) {
      return false;
    }
    if (this->session_start_time_is_set != other.session_start_time_is_set) {
      return false;
    }
    if (this->map_stats != other.map_stats) {
      return false;
    }
    if (this->map_stats_is_set != other.map_stats_is_set) {
      return false;
    }
    return true;
  }
  bool operator!=(const StartRecordingResponse_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct StartRecordingResponse_

// alias to use template instance with default allocator
using StartRecordingResponse =
  bosdyn_msgs::msg::StartRecordingResponse_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__START_RECORDING_RESPONSE__STRUCT_HPP_
