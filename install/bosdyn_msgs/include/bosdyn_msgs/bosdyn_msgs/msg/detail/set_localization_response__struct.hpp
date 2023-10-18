// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/SetLocalizationResponse.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__SET_LOCALIZATION_RESPONSE__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__SET_LOCALIZATION_RESPONSE__STRUCT_HPP_

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
// Member 'lease_use_result'
#include "bosdyn_msgs/msg/detail/lease_use_result__struct.hpp"
// Member 'status'
#include "bosdyn_msgs/msg/detail/set_localization_response_status__struct.hpp"
// Member 'localization'
#include "bosdyn_msgs/msg/detail/localization__struct.hpp"
// Member 'suspected_ambiguity'
#include "bosdyn_msgs/msg/detail/set_localization_response_suspected_ambiguity__struct.hpp"
// Member 'impaired_state'
#include "bosdyn_msgs/msg/detail/robot_impaired_state__struct.hpp"
// Member 'sensor_status'
#include "bosdyn_msgs/msg/detail/sensor_compatibility_status__struct.hpp"
// Member 'quality_check_result'
#include "bosdyn_msgs/msg/detail/set_localization_response_quality_check_result__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__SetLocalizationResponse __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__SetLocalizationResponse __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SetLocalizationResponse_
{
  using Type = SetLocalizationResponse_<ContainerAllocator>;

  explicit SetLocalizationResponse_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    lease_use_result(_init),
    status(_init),
    localization(_init),
    suspected_ambiguity(_init),
    impaired_state(_init),
    sensor_status(_init),
    quality_check_result(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->header_is_set = false;
      this->lease_use_result_is_set = false;
      this->error_report = "";
      this->localization_is_set = false;
      this->suspected_ambiguity_is_set = false;
      this->impaired_state_is_set = false;
      this->sensor_status_is_set = false;
    }
  }

  explicit SetLocalizationResponse_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    lease_use_result(_alloc, _init),
    status(_alloc, _init),
    error_report(_alloc),
    localization(_alloc, _init),
    suspected_ambiguity(_alloc, _init),
    impaired_state(_alloc, _init),
    sensor_status(_alloc, _init),
    quality_check_result(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->header_is_set = false;
      this->lease_use_result_is_set = false;
      this->error_report = "";
      this->localization_is_set = false;
      this->suspected_ambiguity_is_set = false;
      this->impaired_state_is_set = false;
      this->sensor_status_is_set = false;
    }
  }

  // field types and members
  using _header_type =
    bosdyn_msgs::msg::ResponseHeader_<ContainerAllocator>;
  _header_type header;
  using _header_is_set_type =
    bool;
  _header_is_set_type header_is_set;
  using _lease_use_result_type =
    bosdyn_msgs::msg::LeaseUseResult_<ContainerAllocator>;
  _lease_use_result_type lease_use_result;
  using _lease_use_result_is_set_type =
    bool;
  _lease_use_result_is_set_type lease_use_result_is_set;
  using _status_type =
    bosdyn_msgs::msg::SetLocalizationResponseStatus_<ContainerAllocator>;
  _status_type status;
  using _error_report_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _error_report_type error_report;
  using _localization_type =
    bosdyn_msgs::msg::Localization_<ContainerAllocator>;
  _localization_type localization;
  using _localization_is_set_type =
    bool;
  _localization_is_set_type localization_is_set;
  using _suspected_ambiguity_type =
    bosdyn_msgs::msg::SetLocalizationResponseSuspectedAmbiguity_<ContainerAllocator>;
  _suspected_ambiguity_type suspected_ambiguity;
  using _suspected_ambiguity_is_set_type =
    bool;
  _suspected_ambiguity_is_set_type suspected_ambiguity_is_set;
  using _impaired_state_type =
    bosdyn_msgs::msg::RobotImpairedState_<ContainerAllocator>;
  _impaired_state_type impaired_state;
  using _impaired_state_is_set_type =
    bool;
  _impaired_state_is_set_type impaired_state_is_set;
  using _sensor_status_type =
    bosdyn_msgs::msg::SensorCompatibilityStatus_<ContainerAllocator>;
  _sensor_status_type sensor_status;
  using _sensor_status_is_set_type =
    bool;
  _sensor_status_is_set_type sensor_status_is_set;
  using _quality_check_result_type =
    bosdyn_msgs::msg::SetLocalizationResponseQualityCheckResult_<ContainerAllocator>;
  _quality_check_result_type quality_check_result;

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
    const bosdyn_msgs::msg::SetLocalizationResponseStatus_<ContainerAllocator> & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__error_report(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->error_report = _arg;
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
  Type & set__suspected_ambiguity(
    const bosdyn_msgs::msg::SetLocalizationResponseSuspectedAmbiguity_<ContainerAllocator> & _arg)
  {
    this->suspected_ambiguity = _arg;
    return *this;
  }
  Type & set__suspected_ambiguity_is_set(
    const bool & _arg)
  {
    this->suspected_ambiguity_is_set = _arg;
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
  Type & set__sensor_status(
    const bosdyn_msgs::msg::SensorCompatibilityStatus_<ContainerAllocator> & _arg)
  {
    this->sensor_status = _arg;
    return *this;
  }
  Type & set__sensor_status_is_set(
    const bool & _arg)
  {
    this->sensor_status_is_set = _arg;
    return *this;
  }
  Type & set__quality_check_result(
    const bosdyn_msgs::msg::SetLocalizationResponseQualityCheckResult_<ContainerAllocator> & _arg)
  {
    this->quality_check_result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::SetLocalizationResponse_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::SetLocalizationResponse_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::SetLocalizationResponse_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::SetLocalizationResponse_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::SetLocalizationResponse_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::SetLocalizationResponse_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::SetLocalizationResponse_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::SetLocalizationResponse_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::SetLocalizationResponse_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::SetLocalizationResponse_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__SetLocalizationResponse
    std::shared_ptr<bosdyn_msgs::msg::SetLocalizationResponse_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__SetLocalizationResponse
    std::shared_ptr<bosdyn_msgs::msg::SetLocalizationResponse_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetLocalizationResponse_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->header_is_set != other.header_is_set) {
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
    if (this->error_report != other.error_report) {
      return false;
    }
    if (this->localization != other.localization) {
      return false;
    }
    if (this->localization_is_set != other.localization_is_set) {
      return false;
    }
    if (this->suspected_ambiguity != other.suspected_ambiguity) {
      return false;
    }
    if (this->suspected_ambiguity_is_set != other.suspected_ambiguity_is_set) {
      return false;
    }
    if (this->impaired_state != other.impaired_state) {
      return false;
    }
    if (this->impaired_state_is_set != other.impaired_state_is_set) {
      return false;
    }
    if (this->sensor_status != other.sensor_status) {
      return false;
    }
    if (this->sensor_status_is_set != other.sensor_status_is_set) {
      return false;
    }
    if (this->quality_check_result != other.quality_check_result) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetLocalizationResponse_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetLocalizationResponse_

// alias to use template instance with default allocator
using SetLocalizationResponse =
  bosdyn_msgs::msg::SetLocalizationResponse_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__SET_LOCALIZATION_RESPONSE__STRUCT_HPP_
