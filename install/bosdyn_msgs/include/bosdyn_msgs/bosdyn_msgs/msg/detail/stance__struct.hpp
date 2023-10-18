// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/Stance.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__STANCE__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__STANCE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'foot_positions'
#include "bosdyn_msgs/msg/detail/key_string_value_bosdyn_msgs_vec2__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__Stance __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__Stance __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Stance_
{
  using Type = Stance_<ContainerAllocator>;

  explicit Stance_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->se2_frame_name = "";
      this->accuracy = 0.0f;
    }
  }

  explicit Stance_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : se2_frame_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->se2_frame_name = "";
      this->accuracy = 0.0f;
    }
  }

  // field types and members
  using _se2_frame_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _se2_frame_name_type se2_frame_name;
  using _foot_positions_type =
    std::vector<bosdyn_msgs::msg::KeyStringValueBosdynMsgsVec2_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::KeyStringValueBosdynMsgsVec2_<ContainerAllocator>>>;
  _foot_positions_type foot_positions;
  using _accuracy_type =
    float;
  _accuracy_type accuracy;

  // setters for named parameter idiom
  Type & set__se2_frame_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->se2_frame_name = _arg;
    return *this;
  }
  Type & set__foot_positions(
    const std::vector<bosdyn_msgs::msg::KeyStringValueBosdynMsgsVec2_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::KeyStringValueBosdynMsgsVec2_<ContainerAllocator>>> & _arg)
  {
    this->foot_positions = _arg;
    return *this;
  }
  Type & set__accuracy(
    const float & _arg)
  {
    this->accuracy = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::Stance_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::Stance_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::Stance_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::Stance_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::Stance_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::Stance_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::Stance_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::Stance_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::Stance_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::Stance_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__Stance
    std::shared_ptr<bosdyn_msgs::msg::Stance_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__Stance
    std::shared_ptr<bosdyn_msgs::msg::Stance_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Stance_ & other) const
  {
    if (this->se2_frame_name != other.se2_frame_name) {
      return false;
    }
    if (this->foot_positions != other.foot_positions) {
      return false;
    }
    if (this->accuracy != other.accuracy) {
      return false;
    }
    return true;
  }
  bool operator!=(const Stance_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Stance_

// alias to use template instance with default allocator
using Stance =
  bosdyn_msgs::msg::Stance_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__STANCE__STRUCT_HPP_
