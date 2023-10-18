// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/ImageProperties.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__IMAGE_PROPERTIES__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__IMAGE_PROPERTIES__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'image_data'
#include "bosdyn_msgs/msg/detail/image_properties_one_of_image_data__struct.hpp"
// Member 'image_source'
#include "bosdyn_msgs/msg/detail/image_source__struct.hpp"
// Member 'image_capture'
#include "bosdyn_msgs/msg/detail/image_capture__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__ImageProperties __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__ImageProperties __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ImageProperties_
{
  using Type = ImageProperties_<ContainerAllocator>;

  explicit ImageProperties_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : image_data(_init),
    image_source(_init),
    image_capture(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->camera_source = "";
      this->image_source_is_set = false;
      this->image_capture_is_set = false;
      this->frame_name_image_coordinates = "";
    }
  }

  explicit ImageProperties_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : camera_source(_alloc),
    image_data(_alloc, _init),
    image_source(_alloc, _init),
    image_capture(_alloc, _init),
    frame_name_image_coordinates(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->camera_source = "";
      this->image_source_is_set = false;
      this->image_capture_is_set = false;
      this->frame_name_image_coordinates = "";
    }
  }

  // field types and members
  using _camera_source_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _camera_source_type camera_source;
  using _image_data_type =
    bosdyn_msgs::msg::ImagePropertiesOneOfImageData_<ContainerAllocator>;
  _image_data_type image_data;
  using _image_source_type =
    bosdyn_msgs::msg::ImageSource_<ContainerAllocator>;
  _image_source_type image_source;
  using _image_source_is_set_type =
    bool;
  _image_source_is_set_type image_source_is_set;
  using _image_capture_type =
    bosdyn_msgs::msg::ImageCapture_<ContainerAllocator>;
  _image_capture_type image_capture;
  using _image_capture_is_set_type =
    bool;
  _image_capture_is_set_type image_capture_is_set;
  using _frame_name_image_coordinates_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _frame_name_image_coordinates_type frame_name_image_coordinates;

  // setters for named parameter idiom
  Type & set__camera_source(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->camera_source = _arg;
    return *this;
  }
  Type & set__image_data(
    const bosdyn_msgs::msg::ImagePropertiesOneOfImageData_<ContainerAllocator> & _arg)
  {
    this->image_data = _arg;
    return *this;
  }
  Type & set__image_source(
    const bosdyn_msgs::msg::ImageSource_<ContainerAllocator> & _arg)
  {
    this->image_source = _arg;
    return *this;
  }
  Type & set__image_source_is_set(
    const bool & _arg)
  {
    this->image_source_is_set = _arg;
    return *this;
  }
  Type & set__image_capture(
    const bosdyn_msgs::msg::ImageCapture_<ContainerAllocator> & _arg)
  {
    this->image_capture = _arg;
    return *this;
  }
  Type & set__image_capture_is_set(
    const bool & _arg)
  {
    this->image_capture_is_set = _arg;
    return *this;
  }
  Type & set__frame_name_image_coordinates(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->frame_name_image_coordinates = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::ImageProperties_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::ImageProperties_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::ImageProperties_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::ImageProperties_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::ImageProperties_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::ImageProperties_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::ImageProperties_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::ImageProperties_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::ImageProperties_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::ImageProperties_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__ImageProperties
    std::shared_ptr<bosdyn_msgs::msg::ImageProperties_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__ImageProperties
    std::shared_ptr<bosdyn_msgs::msg::ImageProperties_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ImageProperties_ & other) const
  {
    if (this->camera_source != other.camera_source) {
      return false;
    }
    if (this->image_data != other.image_data) {
      return false;
    }
    if (this->image_source != other.image_source) {
      return false;
    }
    if (this->image_source_is_set != other.image_source_is_set) {
      return false;
    }
    if (this->image_capture != other.image_capture) {
      return false;
    }
    if (this->image_capture_is_set != other.image_capture_is_set) {
      return false;
    }
    if (this->frame_name_image_coordinates != other.frame_name_image_coordinates) {
      return false;
    }
    return true;
  }
  bool operator!=(const ImageProperties_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ImageProperties_

// alias to use template instance with default allocator
using ImageProperties =
  bosdyn_msgs::msg::ImageProperties_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__IMAGE_PROPERTIES__STRUCT_HPP_
