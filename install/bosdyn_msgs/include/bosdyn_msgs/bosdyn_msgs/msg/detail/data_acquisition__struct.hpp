// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/DataAcquisition.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__DATA_ACQUISITION__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__DATA_ACQUISITION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'request'
#include "bosdyn_msgs/msg/detail/acquire_data_request__struct.hpp"
// Member 'completion_behavior'
#include "bosdyn_msgs/msg/detail/data_acquisition_completion_behavior__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__DataAcquisition __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__DataAcquisition __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DataAcquisition_
{
  using Type = DataAcquisition_<ContainerAllocator>;

  explicit DataAcquisition_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : request(_init),
    completion_behavior(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->service_name = "";
      this->host = "";
      this->request_is_set = false;
      this->group_name_format = "";
      this->request_name_in_blackboard = "";
      this->metadata_name_in_blackboard = "";
      this->action_name_format = "";
      this->disable_cancel_on_pause_or_stop = false;
    }
  }

  explicit DataAcquisition_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : service_name(_alloc),
    host(_alloc),
    request(_alloc, _init),
    completion_behavior(_alloc, _init),
    group_name_format(_alloc),
    request_name_in_blackboard(_alloc),
    metadata_name_in_blackboard(_alloc),
    action_name_format(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->service_name = "";
      this->host = "";
      this->request_is_set = false;
      this->group_name_format = "";
      this->request_name_in_blackboard = "";
      this->metadata_name_in_blackboard = "";
      this->action_name_format = "";
      this->disable_cancel_on_pause_or_stop = false;
    }
  }

  // field types and members
  using _service_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _service_name_type service_name;
  using _host_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _host_type host;
  using _request_type =
    bosdyn_msgs::msg::AcquireDataRequest_<ContainerAllocator>;
  _request_type request;
  using _request_is_set_type =
    bool;
  _request_is_set_type request_is_set;
  using _completion_behavior_type =
    bosdyn_msgs::msg::DataAcquisitionCompletionBehavior_<ContainerAllocator>;
  _completion_behavior_type completion_behavior;
  using _group_name_format_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _group_name_format_type group_name_format;
  using _request_name_in_blackboard_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _request_name_in_blackboard_type request_name_in_blackboard;
  using _metadata_name_in_blackboard_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _metadata_name_in_blackboard_type metadata_name_in_blackboard;
  using _action_name_format_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _action_name_format_type action_name_format;
  using _disable_cancel_on_pause_or_stop_type =
    bool;
  _disable_cancel_on_pause_or_stop_type disable_cancel_on_pause_or_stop;

  // setters for named parameter idiom
  Type & set__service_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->service_name = _arg;
    return *this;
  }
  Type & set__host(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->host = _arg;
    return *this;
  }
  Type & set__request(
    const bosdyn_msgs::msg::AcquireDataRequest_<ContainerAllocator> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__request_is_set(
    const bool & _arg)
  {
    this->request_is_set = _arg;
    return *this;
  }
  Type & set__completion_behavior(
    const bosdyn_msgs::msg::DataAcquisitionCompletionBehavior_<ContainerAllocator> & _arg)
  {
    this->completion_behavior = _arg;
    return *this;
  }
  Type & set__group_name_format(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->group_name_format = _arg;
    return *this;
  }
  Type & set__request_name_in_blackboard(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->request_name_in_blackboard = _arg;
    return *this;
  }
  Type & set__metadata_name_in_blackboard(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->metadata_name_in_blackboard = _arg;
    return *this;
  }
  Type & set__action_name_format(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->action_name_format = _arg;
    return *this;
  }
  Type & set__disable_cancel_on_pause_or_stop(
    const bool & _arg)
  {
    this->disable_cancel_on_pause_or_stop = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::DataAcquisition_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::DataAcquisition_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::DataAcquisition_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::DataAcquisition_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::DataAcquisition_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::DataAcquisition_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::DataAcquisition_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::DataAcquisition_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::DataAcquisition_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::DataAcquisition_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__DataAcquisition
    std::shared_ptr<bosdyn_msgs::msg::DataAcquisition_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__DataAcquisition
    std::shared_ptr<bosdyn_msgs::msg::DataAcquisition_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DataAcquisition_ & other) const
  {
    if (this->service_name != other.service_name) {
      return false;
    }
    if (this->host != other.host) {
      return false;
    }
    if (this->request != other.request) {
      return false;
    }
    if (this->request_is_set != other.request_is_set) {
      return false;
    }
    if (this->completion_behavior != other.completion_behavior) {
      return false;
    }
    if (this->group_name_format != other.group_name_format) {
      return false;
    }
    if (this->request_name_in_blackboard != other.request_name_in_blackboard) {
      return false;
    }
    if (this->metadata_name_in_blackboard != other.metadata_name_in_blackboard) {
      return false;
    }
    if (this->action_name_format != other.action_name_format) {
      return false;
    }
    if (this->disable_cancel_on_pause_or_stop != other.disable_cancel_on_pause_or_stop) {
      return false;
    }
    return true;
  }
  bool operator!=(const DataAcquisition_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DataAcquisition_

// alias to use template instance with default allocator
using DataAcquisition =
  bosdyn_msgs::msg::DataAcquisition_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__DATA_ACQUISITION__STRUCT_HPP_
