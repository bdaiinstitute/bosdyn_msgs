// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/DataAcquisitionOnInterruption.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__DATA_ACQUISITION_ON_INTERRUPTION__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__DATA_ACQUISITION_ON_INTERRUPTION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'child'
#include "bosdyn_msgs/msg/detail/node__struct.hpp"
// Member 'request_when_interrupted'
#include "bosdyn_msgs/msg/detail/data_acquisition__struct.hpp"
// Member 'pause_mission_metadata'
// Member 'restart_mission_metadata'
// Member 'load_mission_metadata'
// Member 'stop_mission_metadata'
// Member 'lease_use_error_metadata'
// Member 'play_mission_timeout_metadata'
// Member 'child_node_error_metadata'
// Member 'child_node_exception_metadata'
// Member 'default_metadata'
#include "bosdyn_msgs/msg/detail/metadata__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__DataAcquisitionOnInterruption __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__DataAcquisitionOnInterruption __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DataAcquisitionOnInterruption_
{
  using Type = DataAcquisitionOnInterruption_<ContainerAllocator>;

  explicit DataAcquisitionOnInterruption_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : child(_init),
    request_when_interrupted(_init),
    pause_mission_metadata(_init),
    restart_mission_metadata(_init),
    load_mission_metadata(_init),
    stop_mission_metadata(_init),
    lease_use_error_metadata(_init),
    play_mission_timeout_metadata(_init),
    child_node_error_metadata(_init),
    child_node_exception_metadata(_init),
    default_metadata(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->child_is_set = false;
      this->request_when_interrupted_is_set = false;
      this->pause_mission_metadata_is_set = false;
      this->restart_mission_metadata_is_set = false;
      this->load_mission_metadata_is_set = false;
      this->stop_mission_metadata_is_set = false;
      this->lease_use_error_metadata_is_set = false;
      this->play_mission_timeout_metadata_is_set = false;
      this->child_node_error_metadata_is_set = false;
      this->child_node_exception_metadata_is_set = false;
      this->default_metadata_is_set = false;
    }
  }

  explicit DataAcquisitionOnInterruption_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : child(_alloc, _init),
    request_when_interrupted(_alloc, _init),
    pause_mission_metadata(_alloc, _init),
    restart_mission_metadata(_alloc, _init),
    load_mission_metadata(_alloc, _init),
    stop_mission_metadata(_alloc, _init),
    lease_use_error_metadata(_alloc, _init),
    play_mission_timeout_metadata(_alloc, _init),
    child_node_error_metadata(_alloc, _init),
    child_node_exception_metadata(_alloc, _init),
    default_metadata(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->child_is_set = false;
      this->request_when_interrupted_is_set = false;
      this->pause_mission_metadata_is_set = false;
      this->restart_mission_metadata_is_set = false;
      this->load_mission_metadata_is_set = false;
      this->stop_mission_metadata_is_set = false;
      this->lease_use_error_metadata_is_set = false;
      this->play_mission_timeout_metadata_is_set = false;
      this->child_node_error_metadata_is_set = false;
      this->child_node_exception_metadata_is_set = false;
      this->default_metadata_is_set = false;
    }
  }

  // field types and members
  using _child_type =
    bosdyn_msgs::msg::Node_<ContainerAllocator>;
  _child_type child;
  using _child_is_set_type =
    bool;
  _child_is_set_type child_is_set;
  using _request_when_interrupted_type =
    bosdyn_msgs::msg::DataAcquisition_<ContainerAllocator>;
  _request_when_interrupted_type request_when_interrupted;
  using _request_when_interrupted_is_set_type =
    bool;
  _request_when_interrupted_is_set_type request_when_interrupted_is_set;
  using _pause_mission_metadata_type =
    bosdyn_msgs::msg::Metadata_<ContainerAllocator>;
  _pause_mission_metadata_type pause_mission_metadata;
  using _pause_mission_metadata_is_set_type =
    bool;
  _pause_mission_metadata_is_set_type pause_mission_metadata_is_set;
  using _restart_mission_metadata_type =
    bosdyn_msgs::msg::Metadata_<ContainerAllocator>;
  _restart_mission_metadata_type restart_mission_metadata;
  using _restart_mission_metadata_is_set_type =
    bool;
  _restart_mission_metadata_is_set_type restart_mission_metadata_is_set;
  using _load_mission_metadata_type =
    bosdyn_msgs::msg::Metadata_<ContainerAllocator>;
  _load_mission_metadata_type load_mission_metadata;
  using _load_mission_metadata_is_set_type =
    bool;
  _load_mission_metadata_is_set_type load_mission_metadata_is_set;
  using _stop_mission_metadata_type =
    bosdyn_msgs::msg::Metadata_<ContainerAllocator>;
  _stop_mission_metadata_type stop_mission_metadata;
  using _stop_mission_metadata_is_set_type =
    bool;
  _stop_mission_metadata_is_set_type stop_mission_metadata_is_set;
  using _lease_use_error_metadata_type =
    bosdyn_msgs::msg::Metadata_<ContainerAllocator>;
  _lease_use_error_metadata_type lease_use_error_metadata;
  using _lease_use_error_metadata_is_set_type =
    bool;
  _lease_use_error_metadata_is_set_type lease_use_error_metadata_is_set;
  using _play_mission_timeout_metadata_type =
    bosdyn_msgs::msg::Metadata_<ContainerAllocator>;
  _play_mission_timeout_metadata_type play_mission_timeout_metadata;
  using _play_mission_timeout_metadata_is_set_type =
    bool;
  _play_mission_timeout_metadata_is_set_type play_mission_timeout_metadata_is_set;
  using _child_node_error_metadata_type =
    bosdyn_msgs::msg::Metadata_<ContainerAllocator>;
  _child_node_error_metadata_type child_node_error_metadata;
  using _child_node_error_metadata_is_set_type =
    bool;
  _child_node_error_metadata_is_set_type child_node_error_metadata_is_set;
  using _child_node_exception_metadata_type =
    bosdyn_msgs::msg::Metadata_<ContainerAllocator>;
  _child_node_exception_metadata_type child_node_exception_metadata;
  using _child_node_exception_metadata_is_set_type =
    bool;
  _child_node_exception_metadata_is_set_type child_node_exception_metadata_is_set;
  using _default_metadata_type =
    bosdyn_msgs::msg::Metadata_<ContainerAllocator>;
  _default_metadata_type default_metadata;
  using _default_metadata_is_set_type =
    bool;
  _default_metadata_is_set_type default_metadata_is_set;
  using _keys_for_lease_use_error_message_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _keys_for_lease_use_error_message_type keys_for_lease_use_error_message;

  // setters for named parameter idiom
  Type & set__child(
    const bosdyn_msgs::msg::Node_<ContainerAllocator> & _arg)
  {
    this->child = _arg;
    return *this;
  }
  Type & set__child_is_set(
    const bool & _arg)
  {
    this->child_is_set = _arg;
    return *this;
  }
  Type & set__request_when_interrupted(
    const bosdyn_msgs::msg::DataAcquisition_<ContainerAllocator> & _arg)
  {
    this->request_when_interrupted = _arg;
    return *this;
  }
  Type & set__request_when_interrupted_is_set(
    const bool & _arg)
  {
    this->request_when_interrupted_is_set = _arg;
    return *this;
  }
  Type & set__pause_mission_metadata(
    const bosdyn_msgs::msg::Metadata_<ContainerAllocator> & _arg)
  {
    this->pause_mission_metadata = _arg;
    return *this;
  }
  Type & set__pause_mission_metadata_is_set(
    const bool & _arg)
  {
    this->pause_mission_metadata_is_set = _arg;
    return *this;
  }
  Type & set__restart_mission_metadata(
    const bosdyn_msgs::msg::Metadata_<ContainerAllocator> & _arg)
  {
    this->restart_mission_metadata = _arg;
    return *this;
  }
  Type & set__restart_mission_metadata_is_set(
    const bool & _arg)
  {
    this->restart_mission_metadata_is_set = _arg;
    return *this;
  }
  Type & set__load_mission_metadata(
    const bosdyn_msgs::msg::Metadata_<ContainerAllocator> & _arg)
  {
    this->load_mission_metadata = _arg;
    return *this;
  }
  Type & set__load_mission_metadata_is_set(
    const bool & _arg)
  {
    this->load_mission_metadata_is_set = _arg;
    return *this;
  }
  Type & set__stop_mission_metadata(
    const bosdyn_msgs::msg::Metadata_<ContainerAllocator> & _arg)
  {
    this->stop_mission_metadata = _arg;
    return *this;
  }
  Type & set__stop_mission_metadata_is_set(
    const bool & _arg)
  {
    this->stop_mission_metadata_is_set = _arg;
    return *this;
  }
  Type & set__lease_use_error_metadata(
    const bosdyn_msgs::msg::Metadata_<ContainerAllocator> & _arg)
  {
    this->lease_use_error_metadata = _arg;
    return *this;
  }
  Type & set__lease_use_error_metadata_is_set(
    const bool & _arg)
  {
    this->lease_use_error_metadata_is_set = _arg;
    return *this;
  }
  Type & set__play_mission_timeout_metadata(
    const bosdyn_msgs::msg::Metadata_<ContainerAllocator> & _arg)
  {
    this->play_mission_timeout_metadata = _arg;
    return *this;
  }
  Type & set__play_mission_timeout_metadata_is_set(
    const bool & _arg)
  {
    this->play_mission_timeout_metadata_is_set = _arg;
    return *this;
  }
  Type & set__child_node_error_metadata(
    const bosdyn_msgs::msg::Metadata_<ContainerAllocator> & _arg)
  {
    this->child_node_error_metadata = _arg;
    return *this;
  }
  Type & set__child_node_error_metadata_is_set(
    const bool & _arg)
  {
    this->child_node_error_metadata_is_set = _arg;
    return *this;
  }
  Type & set__child_node_exception_metadata(
    const bosdyn_msgs::msg::Metadata_<ContainerAllocator> & _arg)
  {
    this->child_node_exception_metadata = _arg;
    return *this;
  }
  Type & set__child_node_exception_metadata_is_set(
    const bool & _arg)
  {
    this->child_node_exception_metadata_is_set = _arg;
    return *this;
  }
  Type & set__default_metadata(
    const bosdyn_msgs::msg::Metadata_<ContainerAllocator> & _arg)
  {
    this->default_metadata = _arg;
    return *this;
  }
  Type & set__default_metadata_is_set(
    const bool & _arg)
  {
    this->default_metadata_is_set = _arg;
    return *this;
  }
  Type & set__keys_for_lease_use_error_message(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->keys_for_lease_use_error_message = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::DataAcquisitionOnInterruption_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::DataAcquisitionOnInterruption_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::DataAcquisitionOnInterruption_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::DataAcquisitionOnInterruption_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::DataAcquisitionOnInterruption_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::DataAcquisitionOnInterruption_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::DataAcquisitionOnInterruption_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::DataAcquisitionOnInterruption_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::DataAcquisitionOnInterruption_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::DataAcquisitionOnInterruption_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__DataAcquisitionOnInterruption
    std::shared_ptr<bosdyn_msgs::msg::DataAcquisitionOnInterruption_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__DataAcquisitionOnInterruption
    std::shared_ptr<bosdyn_msgs::msg::DataAcquisitionOnInterruption_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DataAcquisitionOnInterruption_ & other) const
  {
    if (this->child != other.child) {
      return false;
    }
    if (this->child_is_set != other.child_is_set) {
      return false;
    }
    if (this->request_when_interrupted != other.request_when_interrupted) {
      return false;
    }
    if (this->request_when_interrupted_is_set != other.request_when_interrupted_is_set) {
      return false;
    }
    if (this->pause_mission_metadata != other.pause_mission_metadata) {
      return false;
    }
    if (this->pause_mission_metadata_is_set != other.pause_mission_metadata_is_set) {
      return false;
    }
    if (this->restart_mission_metadata != other.restart_mission_metadata) {
      return false;
    }
    if (this->restart_mission_metadata_is_set != other.restart_mission_metadata_is_set) {
      return false;
    }
    if (this->load_mission_metadata != other.load_mission_metadata) {
      return false;
    }
    if (this->load_mission_metadata_is_set != other.load_mission_metadata_is_set) {
      return false;
    }
    if (this->stop_mission_metadata != other.stop_mission_metadata) {
      return false;
    }
    if (this->stop_mission_metadata_is_set != other.stop_mission_metadata_is_set) {
      return false;
    }
    if (this->lease_use_error_metadata != other.lease_use_error_metadata) {
      return false;
    }
    if (this->lease_use_error_metadata_is_set != other.lease_use_error_metadata_is_set) {
      return false;
    }
    if (this->play_mission_timeout_metadata != other.play_mission_timeout_metadata) {
      return false;
    }
    if (this->play_mission_timeout_metadata_is_set != other.play_mission_timeout_metadata_is_set) {
      return false;
    }
    if (this->child_node_error_metadata != other.child_node_error_metadata) {
      return false;
    }
    if (this->child_node_error_metadata_is_set != other.child_node_error_metadata_is_set) {
      return false;
    }
    if (this->child_node_exception_metadata != other.child_node_exception_metadata) {
      return false;
    }
    if (this->child_node_exception_metadata_is_set != other.child_node_exception_metadata_is_set) {
      return false;
    }
    if (this->default_metadata != other.default_metadata) {
      return false;
    }
    if (this->default_metadata_is_set != other.default_metadata_is_set) {
      return false;
    }
    if (this->keys_for_lease_use_error_message != other.keys_for_lease_use_error_message) {
      return false;
    }
    return true;
  }
  bool operator!=(const DataAcquisitionOnInterruption_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DataAcquisitionOnInterruption_

// alias to use template instance with default allocator
using DataAcquisitionOnInterruption =
  bosdyn_msgs::msg::DataAcquisitionOnInterruption_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__DATA_ACQUISITION_ON_INTERRUPTION__STRUCT_HPP_
