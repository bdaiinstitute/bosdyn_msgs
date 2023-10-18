// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/DrawablePropertiesColor.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__DRAWABLE_PROPERTIES_COLOR__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__DRAWABLE_PROPERTIES_COLOR__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__DrawablePropertiesColor __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__DrawablePropertiesColor __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DrawablePropertiesColor_
{
  using Type = DrawablePropertiesColor_<ContainerAllocator>;

  explicit DrawablePropertiesColor_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->r = 0l;
      this->g = 0l;
      this->b = 0l;
      this->a = 0.0;
    }
  }

  explicit DrawablePropertiesColor_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->r = 0l;
      this->g = 0l;
      this->b = 0l;
      this->a = 0.0;
    }
  }

  // field types and members
  using _r_type =
    int32_t;
  _r_type r;
  using _g_type =
    int32_t;
  _g_type g;
  using _b_type =
    int32_t;
  _b_type b;
  using _a_type =
    double;
  _a_type a;

  // setters for named parameter idiom
  Type & set__r(
    const int32_t & _arg)
  {
    this->r = _arg;
    return *this;
  }
  Type & set__g(
    const int32_t & _arg)
  {
    this->g = _arg;
    return *this;
  }
  Type & set__b(
    const int32_t & _arg)
  {
    this->b = _arg;
    return *this;
  }
  Type & set__a(
    const double & _arg)
  {
    this->a = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::DrawablePropertiesColor_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::DrawablePropertiesColor_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::DrawablePropertiesColor_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::DrawablePropertiesColor_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::DrawablePropertiesColor_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::DrawablePropertiesColor_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::DrawablePropertiesColor_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::DrawablePropertiesColor_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::DrawablePropertiesColor_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::DrawablePropertiesColor_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__DrawablePropertiesColor
    std::shared_ptr<bosdyn_msgs::msg::DrawablePropertiesColor_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__DrawablePropertiesColor
    std::shared_ptr<bosdyn_msgs::msg::DrawablePropertiesColor_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DrawablePropertiesColor_ & other) const
  {
    if (this->r != other.r) {
      return false;
    }
    if (this->g != other.g) {
      return false;
    }
    if (this->b != other.b) {
      return false;
    }
    if (this->a != other.a) {
      return false;
    }
    return true;
  }
  bool operator!=(const DrawablePropertiesColor_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DrawablePropertiesColor_

// alias to use template instance with default allocator
using DrawablePropertiesColor =
  bosdyn_msgs::msg::DrawablePropertiesColor_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__DRAWABLE_PROPERTIES_COLOR__STRUCT_HPP_
