// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/UpdateCallbackResponseUpdateLocalization.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__UPDATE_CALLBACK_RESPONSE_UPDATE_LOCALIZATION__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__UPDATE_CALLBACK_RESPONSE_UPDATE_LOCALIZATION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'change'
#include "bosdyn_msgs/msg/detail/update_callback_response_update_localization_localization_change__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__UpdateCallbackResponseUpdateLocalization __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__UpdateCallbackResponseUpdateLocalization __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct UpdateCallbackResponseUpdateLocalization_
{
  using Type = UpdateCallbackResponseUpdateLocalization_<ContainerAllocator>;

  explicit UpdateCallbackResponseUpdateLocalization_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : change(_init)
  {
    (void)_init;
  }

  explicit UpdateCallbackResponseUpdateLocalization_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : change(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _change_type =
    bosdyn_msgs::msg::UpdateCallbackResponseUpdateLocalizationLocalizationChange_<ContainerAllocator>;
  _change_type change;

  // setters for named parameter idiom
  Type & set__change(
    const bosdyn_msgs::msg::UpdateCallbackResponseUpdateLocalizationLocalizationChange_<ContainerAllocator> & _arg)
  {
    this->change = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::UpdateCallbackResponseUpdateLocalization_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::UpdateCallbackResponseUpdateLocalization_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::UpdateCallbackResponseUpdateLocalization_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::UpdateCallbackResponseUpdateLocalization_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::UpdateCallbackResponseUpdateLocalization_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::UpdateCallbackResponseUpdateLocalization_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::UpdateCallbackResponseUpdateLocalization_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::UpdateCallbackResponseUpdateLocalization_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::UpdateCallbackResponseUpdateLocalization_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::UpdateCallbackResponseUpdateLocalization_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__UpdateCallbackResponseUpdateLocalization
    std::shared_ptr<bosdyn_msgs::msg::UpdateCallbackResponseUpdateLocalization_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__UpdateCallbackResponseUpdateLocalization
    std::shared_ptr<bosdyn_msgs::msg::UpdateCallbackResponseUpdateLocalization_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const UpdateCallbackResponseUpdateLocalization_ & other) const
  {
    if (this->change != other.change) {
      return false;
    }
    return true;
  }
  bool operator!=(const UpdateCallbackResponseUpdateLocalization_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct UpdateCallbackResponseUpdateLocalization_

// alias to use template instance with default allocator
using UpdateCallbackResponseUpdateLocalization =
  bosdyn_msgs::msg::UpdateCallbackResponseUpdateLocalization_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__UPDATE_CALLBACK_RESPONSE_UPDATE_LOCALIZATION__STRUCT_HPP_
