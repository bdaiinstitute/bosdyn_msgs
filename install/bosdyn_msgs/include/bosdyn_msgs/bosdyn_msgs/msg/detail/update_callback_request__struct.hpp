// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/UpdateCallbackRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__UPDATE_CALLBACK_REQUEST__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__UPDATE_CALLBACK_REQUEST__STRUCT_HPP_

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
// Member 'end_time'
#include "builtin_interfaces/msg/detail/time__struct.hpp"
// Member 'stage'
#include "bosdyn_msgs/msg/detail/update_callback_request_stage__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__UpdateCallbackRequest __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__UpdateCallbackRequest __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct UpdateCallbackRequest_
{
  using Type = UpdateCallbackRequest_<ContainerAllocator>;

  explicit UpdateCallbackRequest_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    end_time(_init),
    stage(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->header_is_set = false;
      this->command_id = 0ul;
      this->end_time_is_set = false;
    }
  }

  explicit UpdateCallbackRequest_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    end_time(_alloc, _init),
    stage(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->header_is_set = false;
      this->command_id = 0ul;
      this->end_time_is_set = false;
    }
  }

  // field types and members
  using _header_type =
    bosdyn_msgs::msg::RequestHeader_<ContainerAllocator>;
  _header_type header;
  using _header_is_set_type =
    bool;
  _header_is_set_type header_is_set;
  using _command_id_type =
    uint32_t;
  _command_id_type command_id;
  using _end_time_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _end_time_type end_time;
  using _end_time_is_set_type =
    bool;
  _end_time_is_set_type end_time_is_set;
  using _stage_type =
    bosdyn_msgs::msg::UpdateCallbackRequestStage_<ContainerAllocator>;
  _stage_type stage;

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
  Type & set__command_id(
    const uint32_t & _arg)
  {
    this->command_id = _arg;
    return *this;
  }
  Type & set__end_time(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->end_time = _arg;
    return *this;
  }
  Type & set__end_time_is_set(
    const bool & _arg)
  {
    this->end_time_is_set = _arg;
    return *this;
  }
  Type & set__stage(
    const bosdyn_msgs::msg::UpdateCallbackRequestStage_<ContainerAllocator> & _arg)
  {
    this->stage = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::UpdateCallbackRequest_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::UpdateCallbackRequest_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::UpdateCallbackRequest_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::UpdateCallbackRequest_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::UpdateCallbackRequest_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::UpdateCallbackRequest_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::UpdateCallbackRequest_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::UpdateCallbackRequest_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::UpdateCallbackRequest_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::UpdateCallbackRequest_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__UpdateCallbackRequest
    std::shared_ptr<bosdyn_msgs::msg::UpdateCallbackRequest_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__UpdateCallbackRequest
    std::shared_ptr<bosdyn_msgs::msg::UpdateCallbackRequest_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const UpdateCallbackRequest_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->header_is_set != other.header_is_set) {
      return false;
    }
    if (this->command_id != other.command_id) {
      return false;
    }
    if (this->end_time != other.end_time) {
      return false;
    }
    if (this->end_time_is_set != other.end_time_is_set) {
      return false;
    }
    if (this->stage != other.stage) {
      return false;
    }
    return true;
  }
  bool operator!=(const UpdateCallbackRequest_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct UpdateCallbackRequest_

// alias to use template instance with default allocator
using UpdateCallbackRequest =
  bosdyn_msgs::msg::UpdateCallbackRequest_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__UPDATE_CALLBACK_REQUEST__STRUCT_HPP_
