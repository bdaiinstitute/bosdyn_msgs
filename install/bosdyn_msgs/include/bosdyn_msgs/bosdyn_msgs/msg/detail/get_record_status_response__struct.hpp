// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/GetRecordStatusResponse.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__GET_RECORD_STATUS_RESPONSE__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__GET_RECORD_STATUS_RESPONSE__STRUCT_HPP_

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
// Member 'recording_environment'
#include "bosdyn_msgs/msg/detail/recording_environment__struct.hpp"
// Member 'map_state'
#include "bosdyn_msgs/msg/detail/get_record_status_response_map_state__struct.hpp"
// Member 'status'
#include "bosdyn_msgs/msg/detail/get_record_status_response_status__struct.hpp"
// Member 'impaired_state'
#include "bosdyn_msgs/msg/detail/robot_impaired_state__struct.hpp"
// Member 'session_start_time'
#include "builtin_interfaces/msg/detail/time__struct.hpp"
// Member 'map_stats'
#include "bosdyn_msgs/msg/detail/map_stats__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__GetRecordStatusResponse __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__GetRecordStatusResponse __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct GetRecordStatusResponse_
{
  using Type = GetRecordStatusResponse_<ContainerAllocator>;

  explicit GetRecordStatusResponse_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    recording_environment(_init),
    map_state(_init),
    status(_init),
    impaired_state(_init),
    session_start_time(_init),
    map_stats(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->header_is_set = false;
      this->is_recording = false;
      this->recording_environment_is_set = false;
      this->impaired_state_is_set = false;
      this->session_start_time_is_set = false;
      this->map_stats_is_set = false;
    }
  }

  explicit GetRecordStatusResponse_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    recording_environment(_alloc, _init),
    map_state(_alloc, _init),
    status(_alloc, _init),
    impaired_state(_alloc, _init),
    session_start_time(_alloc, _init),
    map_stats(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->header_is_set = false;
      this->is_recording = false;
      this->recording_environment_is_set = false;
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
  using _is_recording_type =
    bool;
  _is_recording_type is_recording;
  using _recording_environment_type =
    bosdyn_msgs::msg::RecordingEnvironment_<ContainerAllocator>;
  _recording_environment_type recording_environment;
  using _recording_environment_is_set_type =
    bool;
  _recording_environment_is_set_type recording_environment_is_set;
  using _map_state_type =
    bosdyn_msgs::msg::GetRecordStatusResponseMapState_<ContainerAllocator>;
  _map_state_type map_state;
  using _status_type =
    bosdyn_msgs::msg::GetRecordStatusResponseStatus_<ContainerAllocator>;
  _status_type status;
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
  Type & set__is_recording(
    const bool & _arg)
  {
    this->is_recording = _arg;
    return *this;
  }
  Type & set__recording_environment(
    const bosdyn_msgs::msg::RecordingEnvironment_<ContainerAllocator> & _arg)
  {
    this->recording_environment = _arg;
    return *this;
  }
  Type & set__recording_environment_is_set(
    const bool & _arg)
  {
    this->recording_environment_is_set = _arg;
    return *this;
  }
  Type & set__map_state(
    const bosdyn_msgs::msg::GetRecordStatusResponseMapState_<ContainerAllocator> & _arg)
  {
    this->map_state = _arg;
    return *this;
  }
  Type & set__status(
    const bosdyn_msgs::msg::GetRecordStatusResponseStatus_<ContainerAllocator> & _arg)
  {
    this->status = _arg;
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
    bosdyn_msgs::msg::GetRecordStatusResponse_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::GetRecordStatusResponse_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::GetRecordStatusResponse_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::GetRecordStatusResponse_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::GetRecordStatusResponse_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::GetRecordStatusResponse_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::GetRecordStatusResponse_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::GetRecordStatusResponse_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::GetRecordStatusResponse_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::GetRecordStatusResponse_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__GetRecordStatusResponse
    std::shared_ptr<bosdyn_msgs::msg::GetRecordStatusResponse_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__GetRecordStatusResponse
    std::shared_ptr<bosdyn_msgs::msg::GetRecordStatusResponse_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetRecordStatusResponse_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->header_is_set != other.header_is_set) {
      return false;
    }
    if (this->is_recording != other.is_recording) {
      return false;
    }
    if (this->recording_environment != other.recording_environment) {
      return false;
    }
    if (this->recording_environment_is_set != other.recording_environment_is_set) {
      return false;
    }
    if (this->map_state != other.map_state) {
      return false;
    }
    if (this->status != other.status) {
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
  bool operator!=(const GetRecordStatusResponse_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetRecordStatusResponse_

// alias to use template instance with default allocator
using GetRecordStatusResponse =
  bosdyn_msgs::msg::GetRecordStatusResponse_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__GET_RECORD_STATUS_RESPONSE__STRUCT_HPP_
