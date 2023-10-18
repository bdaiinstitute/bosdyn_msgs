// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/ActionWrapperSpotCamPtz.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ACTION_WRAPPER_SPOT_CAM_PTZ__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__ACTION_WRAPPER_SPOT_CAM_PTZ__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'ptz_position'
#include "bosdyn_msgs/msg/detail/ptz_position__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__ActionWrapperSpotCamPtz __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__ActionWrapperSpotCamPtz __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ActionWrapperSpotCamPtz_
{
  using Type = ActionWrapperSpotCamPtz_<ContainerAllocator>;

  explicit ActionWrapperSpotCamPtz_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : ptz_position(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ptz_position_is_set = false;
    }
  }

  explicit ActionWrapperSpotCamPtz_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : ptz_position(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ptz_position_is_set = false;
    }
  }

  // field types and members
  using _ptz_position_type =
    bosdyn_msgs::msg::PtzPosition_<ContainerAllocator>;
  _ptz_position_type ptz_position;
  using _ptz_position_is_set_type =
    bool;
  _ptz_position_is_set_type ptz_position_is_set;

  // setters for named parameter idiom
  Type & set__ptz_position(
    const bosdyn_msgs::msg::PtzPosition_<ContainerAllocator> & _arg)
  {
    this->ptz_position = _arg;
    return *this;
  }
  Type & set__ptz_position_is_set(
    const bool & _arg)
  {
    this->ptz_position_is_set = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::ActionWrapperSpotCamPtz_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::ActionWrapperSpotCamPtz_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::ActionWrapperSpotCamPtz_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::ActionWrapperSpotCamPtz_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::ActionWrapperSpotCamPtz_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::ActionWrapperSpotCamPtz_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::ActionWrapperSpotCamPtz_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::ActionWrapperSpotCamPtz_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::ActionWrapperSpotCamPtz_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::ActionWrapperSpotCamPtz_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__ActionWrapperSpotCamPtz
    std::shared_ptr<bosdyn_msgs::msg::ActionWrapperSpotCamPtz_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__ActionWrapperSpotCamPtz
    std::shared_ptr<bosdyn_msgs::msg::ActionWrapperSpotCamPtz_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ActionWrapperSpotCamPtz_ & other) const
  {
    if (this->ptz_position != other.ptz_position) {
      return false;
    }
    if (this->ptz_position_is_set != other.ptz_position_is_set) {
      return false;
    }
    return true;
  }
  bool operator!=(const ActionWrapperSpotCamPtz_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ActionWrapperSpotCamPtz_

// alias to use template instance with default allocator
using ActionWrapperSpotCamPtz =
  bosdyn_msgs::msg::ActionWrapperSpotCamPtz_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__ACTION_WRAPPER_SPOT_CAM_PTZ__STRUCT_HPP_
