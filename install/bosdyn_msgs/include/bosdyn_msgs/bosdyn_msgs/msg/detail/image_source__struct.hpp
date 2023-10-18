// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/ImageSource.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__IMAGE_SOURCE__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__IMAGE_SOURCE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'camera_models'
#include "bosdyn_msgs/msg/detail/image_source_one_of_camera_models__struct.hpp"
// Member 'image_type'
#include "bosdyn_msgs/msg/detail/image_source_image_type__struct.hpp"
// Member 'pixel_formats'
#include "bosdyn_msgs/msg/detail/image_pixel_format__struct.hpp"
// Member 'image_formats'
#include "bosdyn_msgs/msg/detail/image_format__struct.hpp"
// Member 'custom_params'
#include "bosdyn_msgs/msg/detail/dict_param_spec__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__ImageSource __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__ImageSource __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ImageSource_
{
  using Type = ImageSource_<ContainerAllocator>;

  explicit ImageSource_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : camera_models(_init),
    image_type(_init),
    custom_params(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->cols = 0l;
      this->rows = 0l;
      this->depth_scale = 0.0;
      this->custom_params_is_set = false;
    }
  }

  explicit ImageSource_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_alloc),
    camera_models(_alloc, _init),
    image_type(_alloc, _init),
    custom_params(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->cols = 0l;
      this->rows = 0l;
      this->depth_scale = 0.0;
      this->custom_params_is_set = false;
    }
  }

  // field types and members
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name_type name;
  using _cols_type =
    int32_t;
  _cols_type cols;
  using _rows_type =
    int32_t;
  _rows_type rows;
  using _depth_scale_type =
    double;
  _depth_scale_type depth_scale;
  using _camera_models_type =
    bosdyn_msgs::msg::ImageSourceOneOfCameraModels_<ContainerAllocator>;
  _camera_models_type camera_models;
  using _image_type_type =
    bosdyn_msgs::msg::ImageSourceImageType_<ContainerAllocator>;
  _image_type_type image_type;
  using _pixel_formats_type =
    std::vector<bosdyn_msgs::msg::ImagePixelFormat_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::ImagePixelFormat_<ContainerAllocator>>>;
  _pixel_formats_type pixel_formats;
  using _image_formats_type =
    std::vector<bosdyn_msgs::msg::ImageFormat_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::ImageFormat_<ContainerAllocator>>>;
  _image_formats_type image_formats;
  using _custom_params_type =
    bosdyn_msgs::msg::DictParamSpec_<ContainerAllocator>;
  _custom_params_type custom_params;
  using _custom_params_is_set_type =
    bool;
  _custom_params_is_set_type custom_params_is_set;

  // setters for named parameter idiom
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__cols(
    const int32_t & _arg)
  {
    this->cols = _arg;
    return *this;
  }
  Type & set__rows(
    const int32_t & _arg)
  {
    this->rows = _arg;
    return *this;
  }
  Type & set__depth_scale(
    const double & _arg)
  {
    this->depth_scale = _arg;
    return *this;
  }
  Type & set__camera_models(
    const bosdyn_msgs::msg::ImageSourceOneOfCameraModels_<ContainerAllocator> & _arg)
  {
    this->camera_models = _arg;
    return *this;
  }
  Type & set__image_type(
    const bosdyn_msgs::msg::ImageSourceImageType_<ContainerAllocator> & _arg)
  {
    this->image_type = _arg;
    return *this;
  }
  Type & set__pixel_formats(
    const std::vector<bosdyn_msgs::msg::ImagePixelFormat_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::ImagePixelFormat_<ContainerAllocator>>> & _arg)
  {
    this->pixel_formats = _arg;
    return *this;
  }
  Type & set__image_formats(
    const std::vector<bosdyn_msgs::msg::ImageFormat_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::ImageFormat_<ContainerAllocator>>> & _arg)
  {
    this->image_formats = _arg;
    return *this;
  }
  Type & set__custom_params(
    const bosdyn_msgs::msg::DictParamSpec_<ContainerAllocator> & _arg)
  {
    this->custom_params = _arg;
    return *this;
  }
  Type & set__custom_params_is_set(
    const bool & _arg)
  {
    this->custom_params_is_set = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::ImageSource_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::ImageSource_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::ImageSource_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::ImageSource_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::ImageSource_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::ImageSource_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::ImageSource_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::ImageSource_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::ImageSource_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::ImageSource_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__ImageSource
    std::shared_ptr<bosdyn_msgs::msg::ImageSource_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__ImageSource
    std::shared_ptr<bosdyn_msgs::msg::ImageSource_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ImageSource_ & other) const
  {
    if (this->name != other.name) {
      return false;
    }
    if (this->cols != other.cols) {
      return false;
    }
    if (this->rows != other.rows) {
      return false;
    }
    if (this->depth_scale != other.depth_scale) {
      return false;
    }
    if (this->camera_models != other.camera_models) {
      return false;
    }
    if (this->image_type != other.image_type) {
      return false;
    }
    if (this->pixel_formats != other.pixel_formats) {
      return false;
    }
    if (this->image_formats != other.image_formats) {
      return false;
    }
    if (this->custom_params != other.custom_params) {
      return false;
    }
    if (this->custom_params_is_set != other.custom_params_is_set) {
      return false;
    }
    return true;
  }
  bool operator!=(const ImageSource_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ImageSource_

// alias to use template instance with default allocator
using ImageSource =
  bosdyn_msgs::msg::ImageSource_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__IMAGE_SOURCE__STRUCT_HPP_
