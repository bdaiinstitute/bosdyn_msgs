// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/DrawablePropertiesOneOfDrawable.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__DRAWABLE_PROPERTIES_ONE_OF_DRAWABLE__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__DRAWABLE_PROPERTIES_ONE_OF_DRAWABLE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'frame'
#include "bosdyn_msgs/msg/detail/drawable_frame__struct.hpp"
// Member 'sphere'
#include "bosdyn_msgs/msg/detail/drawable_sphere__struct.hpp"
// Member 'box'
#include "bosdyn_msgs/msg/detail/drawable_box__struct.hpp"
// Member 'arrow'
#include "bosdyn_msgs/msg/detail/drawable_arrow__struct.hpp"
// Member 'capsule'
#include "bosdyn_msgs/msg/detail/drawable_capsule__struct.hpp"
// Member 'cylinder'
#include "bosdyn_msgs/msg/detail/drawable_cylinder__struct.hpp"
// Member 'linestrip'
#include "bosdyn_msgs/msg/detail/drawable_line_strip__struct.hpp"
// Member 'points'
#include "bosdyn_msgs/msg/detail/drawable_points__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__DrawablePropertiesOneOfDrawable __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__DrawablePropertiesOneOfDrawable __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DrawablePropertiesOneOfDrawable_
{
  using Type = DrawablePropertiesOneOfDrawable_<ContainerAllocator>;

  explicit DrawablePropertiesOneOfDrawable_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : frame(_init),
    sphere(_init),
    box(_init),
    arrow(_init),
    capsule(_init),
    cylinder(_init),
    linestrip(_init),
    points(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->drawable_choice = 0;
    }
  }

  explicit DrawablePropertiesOneOfDrawable_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : frame(_alloc, _init),
    sphere(_alloc, _init),
    box(_alloc, _init),
    arrow(_alloc, _init),
    capsule(_alloc, _init),
    cylinder(_alloc, _init),
    linestrip(_alloc, _init),
    points(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->drawable_choice = 0;
    }
  }

  // field types and members
  using _frame_type =
    bosdyn_msgs::msg::DrawableFrame_<ContainerAllocator>;
  _frame_type frame;
  using _sphere_type =
    bosdyn_msgs::msg::DrawableSphere_<ContainerAllocator>;
  _sphere_type sphere;
  using _box_type =
    bosdyn_msgs::msg::DrawableBox_<ContainerAllocator>;
  _box_type box;
  using _arrow_type =
    bosdyn_msgs::msg::DrawableArrow_<ContainerAllocator>;
  _arrow_type arrow;
  using _capsule_type =
    bosdyn_msgs::msg::DrawableCapsule_<ContainerAllocator>;
  _capsule_type capsule;
  using _cylinder_type =
    bosdyn_msgs::msg::DrawableCylinder_<ContainerAllocator>;
  _cylinder_type cylinder;
  using _linestrip_type =
    bosdyn_msgs::msg::DrawableLineStrip_<ContainerAllocator>;
  _linestrip_type linestrip;
  using _points_type =
    bosdyn_msgs::msg::DrawablePoints_<ContainerAllocator>;
  _points_type points;
  using _drawable_choice_type =
    int8_t;
  _drawable_choice_type drawable_choice;

  // setters for named parameter idiom
  Type & set__frame(
    const bosdyn_msgs::msg::DrawableFrame_<ContainerAllocator> & _arg)
  {
    this->frame = _arg;
    return *this;
  }
  Type & set__sphere(
    const bosdyn_msgs::msg::DrawableSphere_<ContainerAllocator> & _arg)
  {
    this->sphere = _arg;
    return *this;
  }
  Type & set__box(
    const bosdyn_msgs::msg::DrawableBox_<ContainerAllocator> & _arg)
  {
    this->box = _arg;
    return *this;
  }
  Type & set__arrow(
    const bosdyn_msgs::msg::DrawableArrow_<ContainerAllocator> & _arg)
  {
    this->arrow = _arg;
    return *this;
  }
  Type & set__capsule(
    const bosdyn_msgs::msg::DrawableCapsule_<ContainerAllocator> & _arg)
  {
    this->capsule = _arg;
    return *this;
  }
  Type & set__cylinder(
    const bosdyn_msgs::msg::DrawableCylinder_<ContainerAllocator> & _arg)
  {
    this->cylinder = _arg;
    return *this;
  }
  Type & set__linestrip(
    const bosdyn_msgs::msg::DrawableLineStrip_<ContainerAllocator> & _arg)
  {
    this->linestrip = _arg;
    return *this;
  }
  Type & set__points(
    const bosdyn_msgs::msg::DrawablePoints_<ContainerAllocator> & _arg)
  {
    this->points = _arg;
    return *this;
  }
  Type & set__drawable_choice(
    const int8_t & _arg)
  {
    this->drawable_choice = _arg;
    return *this;
  }

  // constant declarations
  static constexpr int8_t DRAWABLE_NOT_SET =
    0;
  static constexpr int8_t DRAWABLE_FRAME_SET =
    1;
  static constexpr int8_t DRAWABLE_SPHERE_SET =
    2;
  static constexpr int8_t DRAWABLE_BOX_SET =
    3;
  static constexpr int8_t DRAWABLE_ARROW_SET =
    4;
  static constexpr int8_t DRAWABLE_CAPSULE_SET =
    5;
  static constexpr int8_t DRAWABLE_CYLINDER_SET =
    6;
  static constexpr int8_t DRAWABLE_LINESTRIP_SET =
    7;
  static constexpr int8_t DRAWABLE_POINTS_SET =
    8;

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::DrawablePropertiesOneOfDrawable_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::DrawablePropertiesOneOfDrawable_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::DrawablePropertiesOneOfDrawable_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::DrawablePropertiesOneOfDrawable_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::DrawablePropertiesOneOfDrawable_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::DrawablePropertiesOneOfDrawable_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::DrawablePropertiesOneOfDrawable_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::DrawablePropertiesOneOfDrawable_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::DrawablePropertiesOneOfDrawable_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::DrawablePropertiesOneOfDrawable_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__DrawablePropertiesOneOfDrawable
    std::shared_ptr<bosdyn_msgs::msg::DrawablePropertiesOneOfDrawable_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__DrawablePropertiesOneOfDrawable
    std::shared_ptr<bosdyn_msgs::msg::DrawablePropertiesOneOfDrawable_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DrawablePropertiesOneOfDrawable_ & other) const
  {
    if (this->frame != other.frame) {
      return false;
    }
    if (this->sphere != other.sphere) {
      return false;
    }
    if (this->box != other.box) {
      return false;
    }
    if (this->arrow != other.arrow) {
      return false;
    }
    if (this->capsule != other.capsule) {
      return false;
    }
    if (this->cylinder != other.cylinder) {
      return false;
    }
    if (this->linestrip != other.linestrip) {
      return false;
    }
    if (this->points != other.points) {
      return false;
    }
    if (this->drawable_choice != other.drawable_choice) {
      return false;
    }
    return true;
  }
  bool operator!=(const DrawablePropertiesOneOfDrawable_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DrawablePropertiesOneOfDrawable_

// alias to use template instance with default allocator
using DrawablePropertiesOneOfDrawable =
  bosdyn_msgs::msg::DrawablePropertiesOneOfDrawable_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t DrawablePropertiesOneOfDrawable_<ContainerAllocator>::DRAWABLE_NOT_SET;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t DrawablePropertiesOneOfDrawable_<ContainerAllocator>::DRAWABLE_FRAME_SET;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t DrawablePropertiesOneOfDrawable_<ContainerAllocator>::DRAWABLE_SPHERE_SET;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t DrawablePropertiesOneOfDrawable_<ContainerAllocator>::DRAWABLE_BOX_SET;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t DrawablePropertiesOneOfDrawable_<ContainerAllocator>::DRAWABLE_ARROW_SET;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t DrawablePropertiesOneOfDrawable_<ContainerAllocator>::DRAWABLE_CAPSULE_SET;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t DrawablePropertiesOneOfDrawable_<ContainerAllocator>::DRAWABLE_CYLINDER_SET;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t DrawablePropertiesOneOfDrawable_<ContainerAllocator>::DRAWABLE_LINESTRIP_SET;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t DrawablePropertiesOneOfDrawable_<ContainerAllocator>::DRAWABLE_POINTS_SET;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__DRAWABLE_PROPERTIES_ONE_OF_DRAWABLE__STRUCT_HPP_
