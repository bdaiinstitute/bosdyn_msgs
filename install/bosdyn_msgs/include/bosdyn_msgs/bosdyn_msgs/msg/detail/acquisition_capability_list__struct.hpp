// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/AcquisitionCapabilityList.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ACQUISITION_CAPABILITY_LIST__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__ACQUISITION_CAPABILITY_LIST__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'data_sources'
#include "bosdyn_msgs/msg/detail/data_acquisition_capability__struct.hpp"
// Member 'image_sources'
#include "bosdyn_msgs/msg/detail/image_acquisition_capability__struct.hpp"
// Member 'network_compute_sources'
#include "bosdyn_msgs/msg/detail/network_compute_capability__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__AcquisitionCapabilityList __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__AcquisitionCapabilityList __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct AcquisitionCapabilityList_
{
  using Type = AcquisitionCapabilityList_<ContainerAllocator>;

  explicit AcquisitionCapabilityList_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit AcquisitionCapabilityList_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _data_sources_type =
    std::vector<bosdyn_msgs::msg::DataAcquisitionCapability_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::DataAcquisitionCapability_<ContainerAllocator>>>;
  _data_sources_type data_sources;
  using _image_sources_type =
    std::vector<bosdyn_msgs::msg::ImageAcquisitionCapability_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::ImageAcquisitionCapability_<ContainerAllocator>>>;
  _image_sources_type image_sources;
  using _network_compute_sources_type =
    std::vector<bosdyn_msgs::msg::NetworkComputeCapability_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::NetworkComputeCapability_<ContainerAllocator>>>;
  _network_compute_sources_type network_compute_sources;

  // setters for named parameter idiom
  Type & set__data_sources(
    const std::vector<bosdyn_msgs::msg::DataAcquisitionCapability_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::DataAcquisitionCapability_<ContainerAllocator>>> & _arg)
  {
    this->data_sources = _arg;
    return *this;
  }
  Type & set__image_sources(
    const std::vector<bosdyn_msgs::msg::ImageAcquisitionCapability_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::ImageAcquisitionCapability_<ContainerAllocator>>> & _arg)
  {
    this->image_sources = _arg;
    return *this;
  }
  Type & set__network_compute_sources(
    const std::vector<bosdyn_msgs::msg::NetworkComputeCapability_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::NetworkComputeCapability_<ContainerAllocator>>> & _arg)
  {
    this->network_compute_sources = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::AcquisitionCapabilityList_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::AcquisitionCapabilityList_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::AcquisitionCapabilityList_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::AcquisitionCapabilityList_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::AcquisitionCapabilityList_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::AcquisitionCapabilityList_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::AcquisitionCapabilityList_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::AcquisitionCapabilityList_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::AcquisitionCapabilityList_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::AcquisitionCapabilityList_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__AcquisitionCapabilityList
    std::shared_ptr<bosdyn_msgs::msg::AcquisitionCapabilityList_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__AcquisitionCapabilityList
    std::shared_ptr<bosdyn_msgs::msg::AcquisitionCapabilityList_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AcquisitionCapabilityList_ & other) const
  {
    if (this->data_sources != other.data_sources) {
      return false;
    }
    if (this->image_sources != other.image_sources) {
      return false;
    }
    if (this->network_compute_sources != other.network_compute_sources) {
      return false;
    }
    return true;
  }
  bool operator!=(const AcquisitionCapabilityList_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AcquisitionCapabilityList_

// alias to use template instance with default allocator
using AcquisitionCapabilityList =
  bosdyn_msgs::msg::AcquisitionCapabilityList_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__ACQUISITION_CAPABILITY_LIST__STRUCT_HPP_
