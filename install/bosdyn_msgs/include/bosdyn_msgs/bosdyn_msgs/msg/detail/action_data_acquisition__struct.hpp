// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/ActionDataAcquisition.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ACTION_DATA_ACQUISITION__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__ACTION_DATA_ACQUISITION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'acquire_data_request'
#include "bosdyn_msgs/msg/detail/acquire_data_request__struct.hpp"
// Member 'completion_behavior'
#include "bosdyn_msgs/msg/detail/data_acquisition_completion_behavior__struct.hpp"
// Member 'last_known_capabilities'
#include "bosdyn_msgs/msg/detail/acquisition_capability_list__struct.hpp"
// Member 'record_time_images'
#include "bosdyn_msgs/msg/detail/image_capture_and_source__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__ActionDataAcquisition __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__ActionDataAcquisition __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ActionDataAcquisition_
{
  using Type = ActionDataAcquisition_<ContainerAllocator>;

  explicit ActionDataAcquisition_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : acquire_data_request(_init),
    completion_behavior(_init),
    last_known_capabilities(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->acquire_data_request_is_set = false;
      this->last_known_capabilities_is_set = false;
    }
  }

  explicit ActionDataAcquisition_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : acquire_data_request(_alloc, _init),
    completion_behavior(_alloc, _init),
    last_known_capabilities(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->acquire_data_request_is_set = false;
      this->last_known_capabilities_is_set = false;
    }
  }

  // field types and members
  using _acquire_data_request_type =
    bosdyn_msgs::msg::AcquireDataRequest_<ContainerAllocator>;
  _acquire_data_request_type acquire_data_request;
  using _acquire_data_request_is_set_type =
    bool;
  _acquire_data_request_is_set_type acquire_data_request_is_set;
  using _completion_behavior_type =
    bosdyn_msgs::msg::DataAcquisitionCompletionBehavior_<ContainerAllocator>;
  _completion_behavior_type completion_behavior;
  using _last_known_capabilities_type =
    bosdyn_msgs::msg::AcquisitionCapabilityList_<ContainerAllocator>;
  _last_known_capabilities_type last_known_capabilities;
  using _last_known_capabilities_is_set_type =
    bool;
  _last_known_capabilities_is_set_type last_known_capabilities_is_set;
  using _record_time_images_type =
    std::vector<bosdyn_msgs::msg::ImageCaptureAndSource_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::ImageCaptureAndSource_<ContainerAllocator>>>;
  _record_time_images_type record_time_images;

  // setters for named parameter idiom
  Type & set__acquire_data_request(
    const bosdyn_msgs::msg::AcquireDataRequest_<ContainerAllocator> & _arg)
  {
    this->acquire_data_request = _arg;
    return *this;
  }
  Type & set__acquire_data_request_is_set(
    const bool & _arg)
  {
    this->acquire_data_request_is_set = _arg;
    return *this;
  }
  Type & set__completion_behavior(
    const bosdyn_msgs::msg::DataAcquisitionCompletionBehavior_<ContainerAllocator> & _arg)
  {
    this->completion_behavior = _arg;
    return *this;
  }
  Type & set__last_known_capabilities(
    const bosdyn_msgs::msg::AcquisitionCapabilityList_<ContainerAllocator> & _arg)
  {
    this->last_known_capabilities = _arg;
    return *this;
  }
  Type & set__last_known_capabilities_is_set(
    const bool & _arg)
  {
    this->last_known_capabilities_is_set = _arg;
    return *this;
  }
  Type & set__record_time_images(
    const std::vector<bosdyn_msgs::msg::ImageCaptureAndSource_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::ImageCaptureAndSource_<ContainerAllocator>>> & _arg)
  {
    this->record_time_images = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::ActionDataAcquisition_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::ActionDataAcquisition_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::ActionDataAcquisition_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::ActionDataAcquisition_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::ActionDataAcquisition_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::ActionDataAcquisition_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::ActionDataAcquisition_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::ActionDataAcquisition_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::ActionDataAcquisition_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::ActionDataAcquisition_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__ActionDataAcquisition
    std::shared_ptr<bosdyn_msgs::msg::ActionDataAcquisition_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__ActionDataAcquisition
    std::shared_ptr<bosdyn_msgs::msg::ActionDataAcquisition_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ActionDataAcquisition_ & other) const
  {
    if (this->acquire_data_request != other.acquire_data_request) {
      return false;
    }
    if (this->acquire_data_request_is_set != other.acquire_data_request_is_set) {
      return false;
    }
    if (this->completion_behavior != other.completion_behavior) {
      return false;
    }
    if (this->last_known_capabilities != other.last_known_capabilities) {
      return false;
    }
    if (this->last_known_capabilities_is_set != other.last_known_capabilities_is_set) {
      return false;
    }
    if (this->record_time_images != other.record_time_images) {
      return false;
    }
    return true;
  }
  bool operator!=(const ActionDataAcquisition_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ActionDataAcquisition_

// alias to use template instance with default allocator
using ActionDataAcquisition =
  bosdyn_msgs::msg::ActionDataAcquisition_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__ACTION_DATA_ACQUISITION__STRUCT_HPP_
