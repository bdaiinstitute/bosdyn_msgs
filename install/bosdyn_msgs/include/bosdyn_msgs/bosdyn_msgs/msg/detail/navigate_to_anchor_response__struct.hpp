// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/NavigateToAnchorResponse.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__NAVIGATE_TO_ANCHOR_RESPONSE__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__NAVIGATE_TO_ANCHOR_RESPONSE__STRUCT_HPP_

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
// Member 'lease_use_results'
#include "bosdyn_msgs/msg/detail/lease_use_result__struct.hpp"
// Member 'status'
#include "bosdyn_msgs/msg/detail/navigate_to_anchor_response_status__struct.hpp"
// Member 'impaired_state'
#include "bosdyn_msgs/msg/detail/robot_impaired_state__struct.hpp"
// Member 'area_callback_error'
#include "bosdyn_msgs/msg/detail/area_callback_service_error__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__NavigateToAnchorResponse __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__NavigateToAnchorResponse __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct NavigateToAnchorResponse_
{
  using Type = NavigateToAnchorResponse_<ContainerAllocator>;

  explicit NavigateToAnchorResponse_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    status(_init),
    impaired_state(_init),
    area_callback_error(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->header_is_set = false;
      this->impaired_state_is_set = false;
      this->command_id = 0ul;
      this->area_callback_error_is_set = false;
    }
  }

  explicit NavigateToAnchorResponse_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    status(_alloc, _init),
    impaired_state(_alloc, _init),
    area_callback_error(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->header_is_set = false;
      this->impaired_state_is_set = false;
      this->command_id = 0ul;
      this->area_callback_error_is_set = false;
    }
  }

  // field types and members
  using _header_type =
    bosdyn_msgs::msg::ResponseHeader_<ContainerAllocator>;
  _header_type header;
  using _header_is_set_type =
    bool;
  _header_is_set_type header_is_set;
  using _lease_use_results_type =
    std::vector<bosdyn_msgs::msg::LeaseUseResult_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::LeaseUseResult_<ContainerAllocator>>>;
  _lease_use_results_type lease_use_results;
  using _status_type =
    bosdyn_msgs::msg::NavigateToAnchorResponseStatus_<ContainerAllocator>;
  _status_type status;
  using _impaired_state_type =
    bosdyn_msgs::msg::RobotImpairedState_<ContainerAllocator>;
  _impaired_state_type impaired_state;
  using _impaired_state_is_set_type =
    bool;
  _impaired_state_is_set_type impaired_state_is_set;
  using _command_id_type =
    uint32_t;
  _command_id_type command_id;
  using _error_waypoint_ids_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _error_waypoint_ids_type error_waypoint_ids;
  using _area_callback_error_type =
    bosdyn_msgs::msg::AreaCallbackServiceError_<ContainerAllocator>;
  _area_callback_error_type area_callback_error;
  using _area_callback_error_is_set_type =
    bool;
  _area_callback_error_is_set_type area_callback_error_is_set;

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
  Type & set__lease_use_results(
    const std::vector<bosdyn_msgs::msg::LeaseUseResult_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::LeaseUseResult_<ContainerAllocator>>> & _arg)
  {
    this->lease_use_results = _arg;
    return *this;
  }
  Type & set__status(
    const bosdyn_msgs::msg::NavigateToAnchorResponseStatus_<ContainerAllocator> & _arg)
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
  Type & set__command_id(
    const uint32_t & _arg)
  {
    this->command_id = _arg;
    return *this;
  }
  Type & set__error_waypoint_ids(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->error_waypoint_ids = _arg;
    return *this;
  }
  Type & set__area_callback_error(
    const bosdyn_msgs::msg::AreaCallbackServiceError_<ContainerAllocator> & _arg)
  {
    this->area_callback_error = _arg;
    return *this;
  }
  Type & set__area_callback_error_is_set(
    const bool & _arg)
  {
    this->area_callback_error_is_set = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::NavigateToAnchorResponse_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::NavigateToAnchorResponse_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::NavigateToAnchorResponse_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::NavigateToAnchorResponse_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::NavigateToAnchorResponse_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::NavigateToAnchorResponse_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::NavigateToAnchorResponse_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::NavigateToAnchorResponse_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::NavigateToAnchorResponse_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::NavigateToAnchorResponse_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__NavigateToAnchorResponse
    std::shared_ptr<bosdyn_msgs::msg::NavigateToAnchorResponse_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__NavigateToAnchorResponse
    std::shared_ptr<bosdyn_msgs::msg::NavigateToAnchorResponse_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NavigateToAnchorResponse_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->header_is_set != other.header_is_set) {
      return false;
    }
    if (this->lease_use_results != other.lease_use_results) {
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
    if (this->command_id != other.command_id) {
      return false;
    }
    if (this->error_waypoint_ids != other.error_waypoint_ids) {
      return false;
    }
    if (this->area_callback_error != other.area_callback_error) {
      return false;
    }
    if (this->area_callback_error_is_set != other.area_callback_error_is_set) {
      return false;
    }
    return true;
  }
  bool operator!=(const NavigateToAnchorResponse_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NavigateToAnchorResponse_

// alias to use template instance with default allocator
using NavigateToAnchorResponse =
  bosdyn_msgs::msg::NavigateToAnchorResponse_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__NAVIGATE_TO_ANCHOR_RESPONSE__STRUCT_HPP_
