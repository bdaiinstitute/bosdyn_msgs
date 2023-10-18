// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/AcquirePluginDataRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ACQUIRE_PLUGIN_DATA_REQUEST__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__ACQUIRE_PLUGIN_DATA_REQUEST__STRUCT_HPP_

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
// Member 'data_id'
#include "bosdyn_msgs/msg/detail/data_identifier__struct.hpp"
// Member 'metadata'
#include "bosdyn_msgs/msg/detail/metadata__struct.hpp"
// Member 'action_id'
#include "bosdyn_msgs/msg/detail/capture_action_id__struct.hpp"
// Member 'acquisition_requests'
#include "bosdyn_msgs/msg/detail/acquisition_request_list__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__AcquirePluginDataRequest __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__AcquirePluginDataRequest __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct AcquirePluginDataRequest_
{
  using Type = AcquirePluginDataRequest_<ContainerAllocator>;

  explicit AcquirePluginDataRequest_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    metadata(_init),
    action_id(_init),
    acquisition_requests(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->header_is_set = false;
      this->metadata_is_set = false;
      this->action_id_is_set = false;
      this->acquisition_requests_is_set = false;
    }
  }

  explicit AcquirePluginDataRequest_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    metadata(_alloc, _init),
    action_id(_alloc, _init),
    acquisition_requests(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->header_is_set = false;
      this->metadata_is_set = false;
      this->action_id_is_set = false;
      this->acquisition_requests_is_set = false;
    }
  }

  // field types and members
  using _header_type =
    bosdyn_msgs::msg::RequestHeader_<ContainerAllocator>;
  _header_type header;
  using _header_is_set_type =
    bool;
  _header_is_set_type header_is_set;
  using _data_id_type =
    std::vector<bosdyn_msgs::msg::DataIdentifier_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::DataIdentifier_<ContainerAllocator>>>;
  _data_id_type data_id;
  using _metadata_type =
    bosdyn_msgs::msg::Metadata_<ContainerAllocator>;
  _metadata_type metadata;
  using _metadata_is_set_type =
    bool;
  _metadata_is_set_type metadata_is_set;
  using _action_id_type =
    bosdyn_msgs::msg::CaptureActionId_<ContainerAllocator>;
  _action_id_type action_id;
  using _action_id_is_set_type =
    bool;
  _action_id_is_set_type action_id_is_set;
  using _acquisition_requests_type =
    bosdyn_msgs::msg::AcquisitionRequestList_<ContainerAllocator>;
  _acquisition_requests_type acquisition_requests;
  using _acquisition_requests_is_set_type =
    bool;
  _acquisition_requests_is_set_type acquisition_requests_is_set;

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
  Type & set__data_id(
    const std::vector<bosdyn_msgs::msg::DataIdentifier_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::DataIdentifier_<ContainerAllocator>>> & _arg)
  {
    this->data_id = _arg;
    return *this;
  }
  Type & set__metadata(
    const bosdyn_msgs::msg::Metadata_<ContainerAllocator> & _arg)
  {
    this->metadata = _arg;
    return *this;
  }
  Type & set__metadata_is_set(
    const bool & _arg)
  {
    this->metadata_is_set = _arg;
    return *this;
  }
  Type & set__action_id(
    const bosdyn_msgs::msg::CaptureActionId_<ContainerAllocator> & _arg)
  {
    this->action_id = _arg;
    return *this;
  }
  Type & set__action_id_is_set(
    const bool & _arg)
  {
    this->action_id_is_set = _arg;
    return *this;
  }
  Type & set__acquisition_requests(
    const bosdyn_msgs::msg::AcquisitionRequestList_<ContainerAllocator> & _arg)
  {
    this->acquisition_requests = _arg;
    return *this;
  }
  Type & set__acquisition_requests_is_set(
    const bool & _arg)
  {
    this->acquisition_requests_is_set = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::AcquirePluginDataRequest_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::AcquirePluginDataRequest_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::AcquirePluginDataRequest_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::AcquirePluginDataRequest_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::AcquirePluginDataRequest_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::AcquirePluginDataRequest_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::AcquirePluginDataRequest_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::AcquirePluginDataRequest_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::AcquirePluginDataRequest_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::AcquirePluginDataRequest_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__AcquirePluginDataRequest
    std::shared_ptr<bosdyn_msgs::msg::AcquirePluginDataRequest_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__AcquirePluginDataRequest
    std::shared_ptr<bosdyn_msgs::msg::AcquirePluginDataRequest_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AcquirePluginDataRequest_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->header_is_set != other.header_is_set) {
      return false;
    }
    if (this->data_id != other.data_id) {
      return false;
    }
    if (this->metadata != other.metadata) {
      return false;
    }
    if (this->metadata_is_set != other.metadata_is_set) {
      return false;
    }
    if (this->action_id != other.action_id) {
      return false;
    }
    if (this->action_id_is_set != other.action_id_is_set) {
      return false;
    }
    if (this->acquisition_requests != other.acquisition_requests) {
      return false;
    }
    if (this->acquisition_requests_is_set != other.acquisition_requests_is_set) {
      return false;
    }
    return true;
  }
  bool operator!=(const AcquirePluginDataRequest_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AcquirePluginDataRequest_

// alias to use template instance with default allocator
using AcquirePluginDataRequest =
  bosdyn_msgs::msg::AcquirePluginDataRequest_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__ACQUIRE_PLUGIN_DATA_REQUEST__STRUCT_HPP_
