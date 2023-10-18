// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/SpotCheckFeedbackResponse.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__SPOT_CHECK_FEEDBACK_RESPONSE__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__SPOT_CHECK_FEEDBACK_RESPONSE__STRUCT_HPP_

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
// Member 'state'
#include "bosdyn_msgs/msg/detail/spot_check_feedback_response_state__struct.hpp"
// Member 'last_command'
#include "bosdyn_msgs/msg/detail/spot_check_command_request_command__struct.hpp"
// Member 'error'
#include "bosdyn_msgs/msg/detail/spot_check_feedback_response_error__struct.hpp"
// Member 'camera_results'
#include "bosdyn_msgs/msg/detail/key_string_value_bosdyn_msgs_depth_plane_spot_check_result__struct.hpp"
// Member 'load_cell_results'
#include "bosdyn_msgs/msg/detail/key_string_value_bosdyn_msgs_load_cell_spot_check_result__struct.hpp"
// Member 'kinematic_cal_results'
#include "bosdyn_msgs/msg/detail/key_string_value_bosdyn_msgs_joint_kinematic_check_result__struct.hpp"
// Member 'payload_result'
#include "bosdyn_msgs/msg/detail/payload_check_result__struct.hpp"
// Member 'hip_range_of_motion_results'
#include "bosdyn_msgs/msg/detail/key_string_value_bosdyn_msgs_hip_range_of_motion_result__struct.hpp"
// Member 'last_cal_timestamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__SpotCheckFeedbackResponse __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__SpotCheckFeedbackResponse __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SpotCheckFeedbackResponse_
{
  using Type = SpotCheckFeedbackResponse_<ContainerAllocator>;

  explicit SpotCheckFeedbackResponse_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    state(_init),
    last_command(_init),
    error(_init),
    payload_result(_init),
    last_cal_timestamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->header_is_set = false;
      this->payload_result_is_set = false;
      this->progress = 0.0f;
      this->last_cal_timestamp_is_set = false;
    }
  }

  explicit SpotCheckFeedbackResponse_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    state(_alloc, _init),
    last_command(_alloc, _init),
    error(_alloc, _init),
    payload_result(_alloc, _init),
    last_cal_timestamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->header_is_set = false;
      this->payload_result_is_set = false;
      this->progress = 0.0f;
      this->last_cal_timestamp_is_set = false;
    }
  }

  // field types and members
  using _header_type =
    bosdyn_msgs::msg::ResponseHeader_<ContainerAllocator>;
  _header_type header;
  using _header_is_set_type =
    bool;
  _header_is_set_type header_is_set;
  using _state_type =
    bosdyn_msgs::msg::SpotCheckFeedbackResponseState_<ContainerAllocator>;
  _state_type state;
  using _last_command_type =
    bosdyn_msgs::msg::SpotCheckCommandRequestCommand_<ContainerAllocator>;
  _last_command_type last_command;
  using _error_type =
    bosdyn_msgs::msg::SpotCheckFeedbackResponseError_<ContainerAllocator>;
  _error_type error;
  using _camera_results_type =
    std::vector<bosdyn_msgs::msg::KeyStringValueBosdynMsgsDepthPlaneSpotCheckResult_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::KeyStringValueBosdynMsgsDepthPlaneSpotCheckResult_<ContainerAllocator>>>;
  _camera_results_type camera_results;
  using _load_cell_results_type =
    std::vector<bosdyn_msgs::msg::KeyStringValueBosdynMsgsLoadCellSpotCheckResult_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::KeyStringValueBosdynMsgsLoadCellSpotCheckResult_<ContainerAllocator>>>;
  _load_cell_results_type load_cell_results;
  using _kinematic_cal_results_type =
    std::vector<bosdyn_msgs::msg::KeyStringValueBosdynMsgsJointKinematicCheckResult_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::KeyStringValueBosdynMsgsJointKinematicCheckResult_<ContainerAllocator>>>;
  _kinematic_cal_results_type kinematic_cal_results;
  using _payload_result_type =
    bosdyn_msgs::msg::PayloadCheckResult_<ContainerAllocator>;
  _payload_result_type payload_result;
  using _payload_result_is_set_type =
    bool;
  _payload_result_is_set_type payload_result_is_set;
  using _hip_range_of_motion_results_type =
    std::vector<bosdyn_msgs::msg::KeyStringValueBosdynMsgsHipRangeOfMotionResult_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::KeyStringValueBosdynMsgsHipRangeOfMotionResult_<ContainerAllocator>>>;
  _hip_range_of_motion_results_type hip_range_of_motion_results;
  using _progress_type =
    float;
  _progress_type progress;
  using _last_cal_timestamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _last_cal_timestamp_type last_cal_timestamp;
  using _last_cal_timestamp_is_set_type =
    bool;
  _last_cal_timestamp_is_set_type last_cal_timestamp_is_set;

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
  Type & set__state(
    const bosdyn_msgs::msg::SpotCheckFeedbackResponseState_<ContainerAllocator> & _arg)
  {
    this->state = _arg;
    return *this;
  }
  Type & set__last_command(
    const bosdyn_msgs::msg::SpotCheckCommandRequestCommand_<ContainerAllocator> & _arg)
  {
    this->last_command = _arg;
    return *this;
  }
  Type & set__error(
    const bosdyn_msgs::msg::SpotCheckFeedbackResponseError_<ContainerAllocator> & _arg)
  {
    this->error = _arg;
    return *this;
  }
  Type & set__camera_results(
    const std::vector<bosdyn_msgs::msg::KeyStringValueBosdynMsgsDepthPlaneSpotCheckResult_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::KeyStringValueBosdynMsgsDepthPlaneSpotCheckResult_<ContainerAllocator>>> & _arg)
  {
    this->camera_results = _arg;
    return *this;
  }
  Type & set__load_cell_results(
    const std::vector<bosdyn_msgs::msg::KeyStringValueBosdynMsgsLoadCellSpotCheckResult_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::KeyStringValueBosdynMsgsLoadCellSpotCheckResult_<ContainerAllocator>>> & _arg)
  {
    this->load_cell_results = _arg;
    return *this;
  }
  Type & set__kinematic_cal_results(
    const std::vector<bosdyn_msgs::msg::KeyStringValueBosdynMsgsJointKinematicCheckResult_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::KeyStringValueBosdynMsgsJointKinematicCheckResult_<ContainerAllocator>>> & _arg)
  {
    this->kinematic_cal_results = _arg;
    return *this;
  }
  Type & set__payload_result(
    const bosdyn_msgs::msg::PayloadCheckResult_<ContainerAllocator> & _arg)
  {
    this->payload_result = _arg;
    return *this;
  }
  Type & set__payload_result_is_set(
    const bool & _arg)
  {
    this->payload_result_is_set = _arg;
    return *this;
  }
  Type & set__hip_range_of_motion_results(
    const std::vector<bosdyn_msgs::msg::KeyStringValueBosdynMsgsHipRangeOfMotionResult_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::KeyStringValueBosdynMsgsHipRangeOfMotionResult_<ContainerAllocator>>> & _arg)
  {
    this->hip_range_of_motion_results = _arg;
    return *this;
  }
  Type & set__progress(
    const float & _arg)
  {
    this->progress = _arg;
    return *this;
  }
  Type & set__last_cal_timestamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->last_cal_timestamp = _arg;
    return *this;
  }
  Type & set__last_cal_timestamp_is_set(
    const bool & _arg)
  {
    this->last_cal_timestamp_is_set = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::SpotCheckFeedbackResponse_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::SpotCheckFeedbackResponse_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::SpotCheckFeedbackResponse_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::SpotCheckFeedbackResponse_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::SpotCheckFeedbackResponse_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::SpotCheckFeedbackResponse_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::SpotCheckFeedbackResponse_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::SpotCheckFeedbackResponse_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::SpotCheckFeedbackResponse_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::SpotCheckFeedbackResponse_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__SpotCheckFeedbackResponse
    std::shared_ptr<bosdyn_msgs::msg::SpotCheckFeedbackResponse_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__SpotCheckFeedbackResponse
    std::shared_ptr<bosdyn_msgs::msg::SpotCheckFeedbackResponse_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SpotCheckFeedbackResponse_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->header_is_set != other.header_is_set) {
      return false;
    }
    if (this->state != other.state) {
      return false;
    }
    if (this->last_command != other.last_command) {
      return false;
    }
    if (this->error != other.error) {
      return false;
    }
    if (this->camera_results != other.camera_results) {
      return false;
    }
    if (this->load_cell_results != other.load_cell_results) {
      return false;
    }
    if (this->kinematic_cal_results != other.kinematic_cal_results) {
      return false;
    }
    if (this->payload_result != other.payload_result) {
      return false;
    }
    if (this->payload_result_is_set != other.payload_result_is_set) {
      return false;
    }
    if (this->hip_range_of_motion_results != other.hip_range_of_motion_results) {
      return false;
    }
    if (this->progress != other.progress) {
      return false;
    }
    if (this->last_cal_timestamp != other.last_cal_timestamp) {
      return false;
    }
    if (this->last_cal_timestamp_is_set != other.last_cal_timestamp_is_set) {
      return false;
    }
    return true;
  }
  bool operator!=(const SpotCheckFeedbackResponse_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SpotCheckFeedbackResponse_

// alias to use template instance with default allocator
using SpotCheckFeedbackResponse =
  bosdyn_msgs::msg::SpotCheckFeedbackResponse_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__SPOT_CHECK_FEEDBACK_RESPONSE__STRUCT_HPP_
