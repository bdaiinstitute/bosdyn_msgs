// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/DockingCommandFeedbackRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__DOCKING_COMMAND_FEEDBACK_REQUEST__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__DOCKING_COMMAND_FEEDBACK_REQUEST__STRUCT_HPP_

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
// Member 'update_docking_params'
#include "bosdyn_msgs/msg/detail/update_docking_params__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__DockingCommandFeedbackRequest __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__DockingCommandFeedbackRequest __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DockingCommandFeedbackRequest_
{
  using Type = DockingCommandFeedbackRequest_<ContainerAllocator>;

  explicit DockingCommandFeedbackRequest_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    update_docking_params(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->header_is_set = false;
      this->docking_command_id = 0ul;
      this->update_docking_params_is_set = false;
    }
  }

  explicit DockingCommandFeedbackRequest_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    update_docking_params(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->header_is_set = false;
      this->docking_command_id = 0ul;
      this->update_docking_params_is_set = false;
    }
  }

  // field types and members
  using _header_type =
    bosdyn_msgs::msg::RequestHeader_<ContainerAllocator>;
  _header_type header;
  using _header_is_set_type =
    bool;
  _header_is_set_type header_is_set;
  using _docking_command_id_type =
    uint32_t;
  _docking_command_id_type docking_command_id;
  using _update_docking_params_type =
    bosdyn_msgs::msg::UpdateDockingParams_<ContainerAllocator>;
  _update_docking_params_type update_docking_params;
  using _update_docking_params_is_set_type =
    bool;
  _update_docking_params_is_set_type update_docking_params_is_set;

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
  Type & set__docking_command_id(
    const uint32_t & _arg)
  {
    this->docking_command_id = _arg;
    return *this;
  }
  Type & set__update_docking_params(
    const bosdyn_msgs::msg::UpdateDockingParams_<ContainerAllocator> & _arg)
  {
    this->update_docking_params = _arg;
    return *this;
  }
  Type & set__update_docking_params_is_set(
    const bool & _arg)
  {
    this->update_docking_params_is_set = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::DockingCommandFeedbackRequest_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::DockingCommandFeedbackRequest_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::DockingCommandFeedbackRequest_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::DockingCommandFeedbackRequest_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::DockingCommandFeedbackRequest_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::DockingCommandFeedbackRequest_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::DockingCommandFeedbackRequest_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::DockingCommandFeedbackRequest_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::DockingCommandFeedbackRequest_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::DockingCommandFeedbackRequest_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__DockingCommandFeedbackRequest
    std::shared_ptr<bosdyn_msgs::msg::DockingCommandFeedbackRequest_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__DockingCommandFeedbackRequest
    std::shared_ptr<bosdyn_msgs::msg::DockingCommandFeedbackRequest_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DockingCommandFeedbackRequest_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->header_is_set != other.header_is_set) {
      return false;
    }
    if (this->docking_command_id != other.docking_command_id) {
      return false;
    }
    if (this->update_docking_params != other.update_docking_params) {
      return false;
    }
    if (this->update_docking_params_is_set != other.update_docking_params_is_set) {
      return false;
    }
    return true;
  }
  bool operator!=(const DockingCommandFeedbackRequest_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DockingCommandFeedbackRequest_

// alias to use template instance with default allocator
using DockingCommandFeedbackRequest =
  bosdyn_msgs::msg::DockingCommandFeedbackRequest_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__DOCKING_COMMAND_FEEDBACK_REQUEST__STRUCT_HPP_
