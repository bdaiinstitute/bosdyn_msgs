// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/ImageAcquisitionCapability.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__IMAGE_ACQUISITION_CAPABILITY__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__IMAGE_ACQUISITION_CAPABILITY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'image_sources'
#include "bosdyn_msgs/msg/detail/image_source__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__ImageAcquisitionCapability __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__ImageAcquisitionCapability __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ImageAcquisitionCapability_
{
  using Type = ImageAcquisitionCapability_<ContainerAllocator>;

  explicit ImageAcquisitionCapability_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->service_name = "";
    }
  }

  explicit ImageAcquisitionCapability_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : service_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->service_name = "";
    }
  }

  // field types and members
  using _service_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _service_name_type service_name;
  using _image_sources_type =
    std::vector<bosdyn_msgs::msg::ImageSource_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::ImageSource_<ContainerAllocator>>>;
  _image_sources_type image_sources;

  // setters for named parameter idiom
  Type & set__service_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->service_name = _arg;
    return *this;
  }
  Type & set__image_sources(
    const std::vector<bosdyn_msgs::msg::ImageSource_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::ImageSource_<ContainerAllocator>>> & _arg)
  {
    this->image_sources = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::ImageAcquisitionCapability_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::ImageAcquisitionCapability_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::ImageAcquisitionCapability_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::ImageAcquisitionCapability_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::ImageAcquisitionCapability_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::ImageAcquisitionCapability_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::ImageAcquisitionCapability_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::ImageAcquisitionCapability_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::ImageAcquisitionCapability_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::ImageAcquisitionCapability_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__ImageAcquisitionCapability
    std::shared_ptr<bosdyn_msgs::msg::ImageAcquisitionCapability_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__ImageAcquisitionCapability
    std::shared_ptr<bosdyn_msgs::msg::ImageAcquisitionCapability_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ImageAcquisitionCapability_ & other) const
  {
    if (this->service_name != other.service_name) {
      return false;
    }
    if (this->image_sources != other.image_sources) {
      return false;
    }
    return true;
  }
  bool operator!=(const ImageAcquisitionCapability_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ImageAcquisitionCapability_

// alias to use template instance with default allocator
using ImageAcquisitionCapability =
  bosdyn_msgs::msg::ImageAcquisitionCapability_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__IMAGE_ACQUISITION_CAPABILITY__STRUCT_HPP_
