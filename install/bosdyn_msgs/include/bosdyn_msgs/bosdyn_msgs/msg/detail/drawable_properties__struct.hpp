// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/DrawableProperties.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__DRAWABLE_PROPERTIES__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__DRAWABLE_PROPERTIES__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'color'
#include "bosdyn_msgs/msg/detail/drawable_properties_color__struct.hpp"
// Member 'drawable'
#include "bosdyn_msgs/msg/detail/drawable_properties_one_of_drawable__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__DrawableProperties __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__DrawableProperties __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DrawableProperties_
{
  using Type = DrawableProperties_<ContainerAllocator>;

  explicit DrawableProperties_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : color(_init),
    drawable(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->color_is_set = false;
      this->label = "";
      this->wireframe = false;
      this->frame_name_drawable = "";
    }
  }

  explicit DrawableProperties_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : color(_alloc, _init),
    label(_alloc),
    drawable(_alloc, _init),
    frame_name_drawable(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->color_is_set = false;
      this->label = "";
      this->wireframe = false;
      this->frame_name_drawable = "";
    }
  }

  // field types and members
  using _color_type =
    bosdyn_msgs::msg::DrawablePropertiesColor_<ContainerAllocator>;
  _color_type color;
  using _color_is_set_type =
    bool;
  _color_is_set_type color_is_set;
  using _label_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _label_type label;
  using _wireframe_type =
    bool;
  _wireframe_type wireframe;
  using _drawable_type =
    bosdyn_msgs::msg::DrawablePropertiesOneOfDrawable_<ContainerAllocator>;
  _drawable_type drawable;
  using _frame_name_drawable_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _frame_name_drawable_type frame_name_drawable;

  // setters for named parameter idiom
  Type & set__color(
    const bosdyn_msgs::msg::DrawablePropertiesColor_<ContainerAllocator> & _arg)
  {
    this->color = _arg;
    return *this;
  }
  Type & set__color_is_set(
    const bool & _arg)
  {
    this->color_is_set = _arg;
    return *this;
  }
  Type & set__label(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->label = _arg;
    return *this;
  }
  Type & set__wireframe(
    const bool & _arg)
  {
    this->wireframe = _arg;
    return *this;
  }
  Type & set__drawable(
    const bosdyn_msgs::msg::DrawablePropertiesOneOfDrawable_<ContainerAllocator> & _arg)
  {
    this->drawable = _arg;
    return *this;
  }
  Type & set__frame_name_drawable(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->frame_name_drawable = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::DrawableProperties_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::DrawableProperties_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::DrawableProperties_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::DrawableProperties_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::DrawableProperties_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::DrawableProperties_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::DrawableProperties_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::DrawableProperties_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::DrawableProperties_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::DrawableProperties_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__DrawableProperties
    std::shared_ptr<bosdyn_msgs::msg::DrawableProperties_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__DrawableProperties
    std::shared_ptr<bosdyn_msgs::msg::DrawableProperties_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DrawableProperties_ & other) const
  {
    if (this->color != other.color) {
      return false;
    }
    if (this->color_is_set != other.color_is_set) {
      return false;
    }
    if (this->label != other.label) {
      return false;
    }
    if (this->wireframe != other.wireframe) {
      return false;
    }
    if (this->drawable != other.drawable) {
      return false;
    }
    if (this->frame_name_drawable != other.frame_name_drawable) {
      return false;
    }
    return true;
  }
  bool operator!=(const DrawableProperties_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DrawableProperties_

// alias to use template instance with default allocator
using DrawableProperties =
  bosdyn_msgs::msg::DrawableProperties_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__DRAWABLE_PROPERTIES__STRUCT_HPP_
