// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/NavigationFeedbackResponseActiveRegionInformation.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__NAVIGATION_FEEDBACK_RESPONSE_ACTIVE_REGION_INFORMATION__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__NAVIGATION_FEEDBACK_RESPONSE_ACTIVE_REGION_INFORMATION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'region_status'
#include "bosdyn_msgs/msg/detail/navigation_feedback_response_active_region_information_area_callback_status__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__NavigationFeedbackResponseActiveRegionInformation __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__NavigationFeedbackResponseActiveRegionInformation __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct NavigationFeedbackResponseActiveRegionInformation_
{
  using Type = NavigationFeedbackResponseActiveRegionInformation_<ContainerAllocator>;

  explicit NavigationFeedbackResponseActiveRegionInformation_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : region_status(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->description = "";
      this->service_name = "";
    }
  }

  explicit NavigationFeedbackResponseActiveRegionInformation_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : description(_alloc),
    service_name(_alloc),
    region_status(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->description = "";
      this->service_name = "";
    }
  }

  // field types and members
  using _description_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _description_type description;
  using _service_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _service_name_type service_name;
  using _region_status_type =
    bosdyn_msgs::msg::NavigationFeedbackResponseActiveRegionInformationAreaCallbackStatus_<ContainerAllocator>;
  _region_status_type region_status;

  // setters for named parameter idiom
  Type & set__description(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->description = _arg;
    return *this;
  }
  Type & set__service_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->service_name = _arg;
    return *this;
  }
  Type & set__region_status(
    const bosdyn_msgs::msg::NavigationFeedbackResponseActiveRegionInformationAreaCallbackStatus_<ContainerAllocator> & _arg)
  {
    this->region_status = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::NavigationFeedbackResponseActiveRegionInformation_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::NavigationFeedbackResponseActiveRegionInformation_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::NavigationFeedbackResponseActiveRegionInformation_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::NavigationFeedbackResponseActiveRegionInformation_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::NavigationFeedbackResponseActiveRegionInformation_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::NavigationFeedbackResponseActiveRegionInformation_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::NavigationFeedbackResponseActiveRegionInformation_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::NavigationFeedbackResponseActiveRegionInformation_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::NavigationFeedbackResponseActiveRegionInformation_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::NavigationFeedbackResponseActiveRegionInformation_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__NavigationFeedbackResponseActiveRegionInformation
    std::shared_ptr<bosdyn_msgs::msg::NavigationFeedbackResponseActiveRegionInformation_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__NavigationFeedbackResponseActiveRegionInformation
    std::shared_ptr<bosdyn_msgs::msg::NavigationFeedbackResponseActiveRegionInformation_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NavigationFeedbackResponseActiveRegionInformation_ & other) const
  {
    if (this->description != other.description) {
      return false;
    }
    if (this->service_name != other.service_name) {
      return false;
    }
    if (this->region_status != other.region_status) {
      return false;
    }
    return true;
  }
  bool operator!=(const NavigationFeedbackResponseActiveRegionInformation_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NavigationFeedbackResponseActiveRegionInformation_

// alias to use template instance with default allocator
using NavigationFeedbackResponseActiveRegionInformation =
  bosdyn_msgs::msg::NavigationFeedbackResponseActiveRegionInformation_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__NAVIGATION_FEEDBACK_RESPONSE_ACTIVE_REGION_INFORMATION__STRUCT_HPP_
