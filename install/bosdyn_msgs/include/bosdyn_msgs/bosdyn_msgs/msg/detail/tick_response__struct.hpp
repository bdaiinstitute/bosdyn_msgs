// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/TickResponse.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__TICK_RESPONSE__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__TICK_RESPONSE__STRUCT_HPP_

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
// Member 'status'
#include "bosdyn_msgs/msg/detail/tick_response_status__struct.hpp"
// Member 'lease_use_results'
#include "bosdyn_msgs/msg/detail/lease_use_result__struct.hpp"
// Member 'missing_inputs'
#include "bosdyn_msgs/msg/detail/variable_declaration__struct.hpp"
// Member 'custom_param_error'
#include "bosdyn_msgs/msg/detail/custom_param_error__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__TickResponse __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__TickResponse __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TickResponse_
{
  using Type = TickResponse_<ContainerAllocator>;

  explicit TickResponse_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    status(_init),
    custom_param_error(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->header_is_set = false;
      this->error_message = "";
      this->custom_param_error_is_set = false;
    }
  }

  explicit TickResponse_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    status(_alloc, _init),
    error_message(_alloc),
    custom_param_error(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->header_is_set = false;
      this->error_message = "";
      this->custom_param_error_is_set = false;
    }
  }

  // field types and members
  using _header_type =
    bosdyn_msgs::msg::ResponseHeader_<ContainerAllocator>;
  _header_type header;
  using _header_is_set_type =
    bool;
  _header_is_set_type header_is_set;
  using _status_type =
    bosdyn_msgs::msg::TickResponseStatus_<ContainerAllocator>;
  _status_type status;
  using _missing_lease_resources_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _missing_lease_resources_type missing_lease_resources;
  using _lease_use_results_type =
    std::vector<bosdyn_msgs::msg::LeaseUseResult_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::LeaseUseResult_<ContainerAllocator>>>;
  _lease_use_results_type lease_use_results;
  using _missing_inputs_type =
    std::vector<bosdyn_msgs::msg::VariableDeclaration_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::VariableDeclaration_<ContainerAllocator>>>;
  _missing_inputs_type missing_inputs;
  using _error_message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _error_message_type error_message;
  using _custom_param_error_type =
    bosdyn_msgs::msg::CustomParamError_<ContainerAllocator>;
  _custom_param_error_type custom_param_error;
  using _custom_param_error_is_set_type =
    bool;
  _custom_param_error_is_set_type custom_param_error_is_set;

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
  Type & set__status(
    const bosdyn_msgs::msg::TickResponseStatus_<ContainerAllocator> & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__missing_lease_resources(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->missing_lease_resources = _arg;
    return *this;
  }
  Type & set__lease_use_results(
    const std::vector<bosdyn_msgs::msg::LeaseUseResult_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::LeaseUseResult_<ContainerAllocator>>> & _arg)
  {
    this->lease_use_results = _arg;
    return *this;
  }
  Type & set__missing_inputs(
    const std::vector<bosdyn_msgs::msg::VariableDeclaration_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::VariableDeclaration_<ContainerAllocator>>> & _arg)
  {
    this->missing_inputs = _arg;
    return *this;
  }
  Type & set__error_message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->error_message = _arg;
    return *this;
  }
  Type & set__custom_param_error(
    const bosdyn_msgs::msg::CustomParamError_<ContainerAllocator> & _arg)
  {
    this->custom_param_error = _arg;
    return *this;
  }
  Type & set__custom_param_error_is_set(
    const bool & _arg)
  {
    this->custom_param_error_is_set = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::TickResponse_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::TickResponse_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::TickResponse_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::TickResponse_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::TickResponse_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::TickResponse_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::TickResponse_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::TickResponse_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::TickResponse_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::TickResponse_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__TickResponse
    std::shared_ptr<bosdyn_msgs::msg::TickResponse_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__TickResponse
    std::shared_ptr<bosdyn_msgs::msg::TickResponse_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TickResponse_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->header_is_set != other.header_is_set) {
      return false;
    }
    if (this->status != other.status) {
      return false;
    }
    if (this->missing_lease_resources != other.missing_lease_resources) {
      return false;
    }
    if (this->lease_use_results != other.lease_use_results) {
      return false;
    }
    if (this->missing_inputs != other.missing_inputs) {
      return false;
    }
    if (this->error_message != other.error_message) {
      return false;
    }
    if (this->custom_param_error != other.custom_param_error) {
      return false;
    }
    if (this->custom_param_error_is_set != other.custom_param_error_is_set) {
      return false;
    }
    return true;
  }
  bool operator!=(const TickResponse_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TickResponse_

// alias to use template instance with default allocator
using TickResponse =
  bosdyn_msgs::msg::TickResponse_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__TICK_RESPONSE__STRUCT_HPP_
