// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/ActionWrapperSpotCamAlignmentAlignmentOneOfReference.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ACTION_WRAPPER_SPOT_CAM_ALIGNMENT_ALIGNMENT_ONE_OF_REFERENCE__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__ACTION_WRAPPER_SPOT_CAM_ALIGNMENT_ALIGNMENT_ONE_OF_REFERENCE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__ActionWrapperSpotCamAlignmentAlignmentOneOfReference __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__ActionWrapperSpotCamAlignmentAlignmentOneOfReference __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ActionWrapperSpotCamAlignmentAlignmentOneOfReference_
{
  using Type = ActionWrapperSpotCamAlignmentAlignmentOneOfReference_<ContainerAllocator>;

  explicit ActionWrapperSpotCamAlignmentAlignmentOneOfReference_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->scene_object_id = "";
      this->reference_choice = 0;
    }
  }

  explicit ActionWrapperSpotCamAlignmentAlignmentOneOfReference_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : scene_object_id(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->scene_object_id = "";
      this->reference_choice = 0;
    }
  }

  // field types and members
  using _scene_object_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _scene_object_id_type scene_object_id;
  using _reference_choice_type =
    int8_t;
  _reference_choice_type reference_choice;

  // setters for named parameter idiom
  Type & set__scene_object_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->scene_object_id = _arg;
    return *this;
  }
  Type & set__reference_choice(
    const int8_t & _arg)
  {
    this->reference_choice = _arg;
    return *this;
  }

  // constant declarations
  static constexpr int8_t REFERENCE_NOT_SET =
    0;
  static constexpr int8_t REFERENCE_SCENE_OBJECT_ID_SET =
    1;

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::ActionWrapperSpotCamAlignmentAlignmentOneOfReference_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::ActionWrapperSpotCamAlignmentAlignmentOneOfReference_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::ActionWrapperSpotCamAlignmentAlignmentOneOfReference_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::ActionWrapperSpotCamAlignmentAlignmentOneOfReference_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::ActionWrapperSpotCamAlignmentAlignmentOneOfReference_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::ActionWrapperSpotCamAlignmentAlignmentOneOfReference_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::ActionWrapperSpotCamAlignmentAlignmentOneOfReference_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::ActionWrapperSpotCamAlignmentAlignmentOneOfReference_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::ActionWrapperSpotCamAlignmentAlignmentOneOfReference_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::ActionWrapperSpotCamAlignmentAlignmentOneOfReference_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__ActionWrapperSpotCamAlignmentAlignmentOneOfReference
    std::shared_ptr<bosdyn_msgs::msg::ActionWrapperSpotCamAlignmentAlignmentOneOfReference_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__ActionWrapperSpotCamAlignmentAlignmentOneOfReference
    std::shared_ptr<bosdyn_msgs::msg::ActionWrapperSpotCamAlignmentAlignmentOneOfReference_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ActionWrapperSpotCamAlignmentAlignmentOneOfReference_ & other) const
  {
    if (this->scene_object_id != other.scene_object_id) {
      return false;
    }
    if (this->reference_choice != other.reference_choice) {
      return false;
    }
    return true;
  }
  bool operator!=(const ActionWrapperSpotCamAlignmentAlignmentOneOfReference_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ActionWrapperSpotCamAlignmentAlignmentOneOfReference_

// alias to use template instance with default allocator
using ActionWrapperSpotCamAlignmentAlignmentOneOfReference =
  bosdyn_msgs::msg::ActionWrapperSpotCamAlignmentAlignmentOneOfReference_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t ActionWrapperSpotCamAlignmentAlignmentOneOfReference_<ContainerAllocator>::REFERENCE_NOT_SET;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t ActionWrapperSpotCamAlignmentAlignmentOneOfReference_<ContainerAllocator>::REFERENCE_SCENE_OBJECT_ID_SET;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__ACTION_WRAPPER_SPOT_CAM_ALIGNMENT_ALIGNMENT_ONE_OF_REFERENCE__STRUCT_HPP_
