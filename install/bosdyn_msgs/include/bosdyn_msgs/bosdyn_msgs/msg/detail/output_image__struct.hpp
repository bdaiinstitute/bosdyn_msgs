// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/OutputImage.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__OUTPUT_IMAGE__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__OUTPUT_IMAGE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'image_response'
#include "bosdyn_msgs/msg/detail/image_response__struct.hpp"
// Member 'object_in_image'
#include "bosdyn_msgs/msg/detail/world_object__struct.hpp"
// Member 'alert_data'
#include "bosdyn_msgs/msg/detail/alert_data__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__OutputImage __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__OutputImage __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct OutputImage_
{
  using Type = OutputImage_<ContainerAllocator>;

  explicit OutputImage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : image_response(_init),
    alert_data(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->image_response_is_set = false;
      this->alert_data_is_set = false;
    }
  }

  explicit OutputImage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : image_response(_alloc, _init),
    alert_data(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->image_response_is_set = false;
      this->alert_data_is_set = false;
    }
  }

  // field types and members
  using _image_response_type =
    bosdyn_msgs::msg::ImageResponse_<ContainerAllocator>;
  _image_response_type image_response;
  using _image_response_is_set_type =
    bool;
  _image_response_is_set_type image_response_is_set;
  using _object_in_image_type =
    std::vector<bosdyn_msgs::msg::WorldObject_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::WorldObject_<ContainerAllocator>>>;
  _object_in_image_type object_in_image;
  using _alert_data_type =
    bosdyn_msgs::msg::AlertData_<ContainerAllocator>;
  _alert_data_type alert_data;
  using _alert_data_is_set_type =
    bool;
  _alert_data_is_set_type alert_data_is_set;

  // setters for named parameter idiom
  Type & set__image_response(
    const bosdyn_msgs::msg::ImageResponse_<ContainerAllocator> & _arg)
  {
    this->image_response = _arg;
    return *this;
  }
  Type & set__image_response_is_set(
    const bool & _arg)
  {
    this->image_response_is_set = _arg;
    return *this;
  }
  Type & set__object_in_image(
    const std::vector<bosdyn_msgs::msg::WorldObject_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::WorldObject_<ContainerAllocator>>> & _arg)
  {
    this->object_in_image = _arg;
    return *this;
  }
  Type & set__alert_data(
    const bosdyn_msgs::msg::AlertData_<ContainerAllocator> & _arg)
  {
    this->alert_data = _arg;
    return *this;
  }
  Type & set__alert_data_is_set(
    const bool & _arg)
  {
    this->alert_data_is_set = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::OutputImage_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::OutputImage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::OutputImage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::OutputImage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::OutputImage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::OutputImage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::OutputImage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::OutputImage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::OutputImage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::OutputImage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__OutputImage
    std::shared_ptr<bosdyn_msgs::msg::OutputImage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__OutputImage
    std::shared_ptr<bosdyn_msgs::msg::OutputImage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const OutputImage_ & other) const
  {
    if (this->image_response != other.image_response) {
      return false;
    }
    if (this->image_response_is_set != other.image_response_is_set) {
      return false;
    }
    if (this->object_in_image != other.object_in_image) {
      return false;
    }
    if (this->alert_data != other.alert_data) {
      return false;
    }
    if (this->alert_data_is_set != other.alert_data_is_set) {
      return false;
    }
    return true;
  }
  bool operator!=(const OutputImage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct OutputImage_

// alias to use template instance with default allocator
using OutputImage =
  bosdyn_msgs::msg::OutputImage_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__OUTPUT_IMAGE__STRUCT_HPP_
