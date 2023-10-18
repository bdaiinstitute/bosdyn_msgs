// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/RoiParameters.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ROI_PARAMETERS__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__ROI_PARAMETERS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'roi_percentage_in_image'
#include "bosdyn_msgs/msg/detail/vec2__struct.hpp"
// Member 'window_size'
#include "bosdyn_msgs/msg/detail/roi_parameters_roi_window_size__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__RoiParameters __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__RoiParameters __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RoiParameters_
{
  using Type = RoiParameters_<ContainerAllocator>;

  explicit RoiParameters_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : roi_percentage_in_image(_init),
    window_size(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->roi_percentage_in_image_is_set = false;
    }
  }

  explicit RoiParameters_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : roi_percentage_in_image(_alloc, _init),
    window_size(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->roi_percentage_in_image_is_set = false;
    }
  }

  // field types and members
  using _roi_percentage_in_image_type =
    bosdyn_msgs::msg::Vec2_<ContainerAllocator>;
  _roi_percentage_in_image_type roi_percentage_in_image;
  using _roi_percentage_in_image_is_set_type =
    bool;
  _roi_percentage_in_image_is_set_type roi_percentage_in_image_is_set;
  using _window_size_type =
    bosdyn_msgs::msg::RoiParametersRoiWindowSize_<ContainerAllocator>;
  _window_size_type window_size;

  // setters for named parameter idiom
  Type & set__roi_percentage_in_image(
    const bosdyn_msgs::msg::Vec2_<ContainerAllocator> & _arg)
  {
    this->roi_percentage_in_image = _arg;
    return *this;
  }
  Type & set__roi_percentage_in_image_is_set(
    const bool & _arg)
  {
    this->roi_percentage_in_image_is_set = _arg;
    return *this;
  }
  Type & set__window_size(
    const bosdyn_msgs::msg::RoiParametersRoiWindowSize_<ContainerAllocator> & _arg)
  {
    this->window_size = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::RoiParameters_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::RoiParameters_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::RoiParameters_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::RoiParameters_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::RoiParameters_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::RoiParameters_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::RoiParameters_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::RoiParameters_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::RoiParameters_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::RoiParameters_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__RoiParameters
    std::shared_ptr<bosdyn_msgs::msg::RoiParameters_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__RoiParameters
    std::shared_ptr<bosdyn_msgs::msg::RoiParameters_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RoiParameters_ & other) const
  {
    if (this->roi_percentage_in_image != other.roi_percentage_in_image) {
      return false;
    }
    if (this->roi_percentage_in_image_is_set != other.roi_percentage_in_image_is_set) {
      return false;
    }
    if (this->window_size != other.window_size) {
      return false;
    }
    return true;
  }
  bool operator!=(const RoiParameters_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RoiParameters_

// alias to use template instance with default allocator
using RoiParameters =
  bosdyn_msgs::msg::RoiParameters_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__ROI_PARAMETERS__STRUCT_HPP_
