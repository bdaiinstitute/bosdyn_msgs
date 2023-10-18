// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/AcquisitionRequestList.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ACQUISITION_REQUEST_LIST__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__ACQUISITION_REQUEST_LIST__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'image_captures'
#include "bosdyn_msgs/msg/detail/image_source_capture__struct.hpp"
// Member 'data_captures'
#include "bosdyn_msgs/msg/detail/data_capture__struct.hpp"
// Member 'network_compute_captures'
#include "bosdyn_msgs/msg/detail/network_compute_capture__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__AcquisitionRequestList __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__AcquisitionRequestList __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct AcquisitionRequestList_
{
  using Type = AcquisitionRequestList_<ContainerAllocator>;

  explicit AcquisitionRequestList_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit AcquisitionRequestList_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _image_captures_type =
    std::vector<bosdyn_msgs::msg::ImageSourceCapture_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::ImageSourceCapture_<ContainerAllocator>>>;
  _image_captures_type image_captures;
  using _data_captures_type =
    std::vector<bosdyn_msgs::msg::DataCapture_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::DataCapture_<ContainerAllocator>>>;
  _data_captures_type data_captures;
  using _network_compute_captures_type =
    std::vector<bosdyn_msgs::msg::NetworkComputeCapture_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::NetworkComputeCapture_<ContainerAllocator>>>;
  _network_compute_captures_type network_compute_captures;

  // setters for named parameter idiom
  Type & set__image_captures(
    const std::vector<bosdyn_msgs::msg::ImageSourceCapture_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::ImageSourceCapture_<ContainerAllocator>>> & _arg)
  {
    this->image_captures = _arg;
    return *this;
  }
  Type & set__data_captures(
    const std::vector<bosdyn_msgs::msg::DataCapture_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::DataCapture_<ContainerAllocator>>> & _arg)
  {
    this->data_captures = _arg;
    return *this;
  }
  Type & set__network_compute_captures(
    const std::vector<bosdyn_msgs::msg::NetworkComputeCapture_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::NetworkComputeCapture_<ContainerAllocator>>> & _arg)
  {
    this->network_compute_captures = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::AcquisitionRequestList_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::AcquisitionRequestList_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::AcquisitionRequestList_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::AcquisitionRequestList_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::AcquisitionRequestList_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::AcquisitionRequestList_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::AcquisitionRequestList_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::AcquisitionRequestList_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::AcquisitionRequestList_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::AcquisitionRequestList_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__AcquisitionRequestList
    std::shared_ptr<bosdyn_msgs::msg::AcquisitionRequestList_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__AcquisitionRequestList
    std::shared_ptr<bosdyn_msgs::msg::AcquisitionRequestList_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AcquisitionRequestList_ & other) const
  {
    if (this->image_captures != other.image_captures) {
      return false;
    }
    if (this->data_captures != other.data_captures) {
      return false;
    }
    if (this->network_compute_captures != other.network_compute_captures) {
      return false;
    }
    return true;
  }
  bool operator!=(const AcquisitionRequestList_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AcquisitionRequestList_

// alias to use template instance with default allocator
using AcquisitionRequestList =
  bosdyn_msgs::msg::AcquisitionRequestList_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__ACQUISITION_REQUEST_LIST__STRUCT_HPP_
