// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/AreaCallbackRegion.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__AREA_CALLBACK_REGION__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__AREA_CALLBACK_REGION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'recorded_data'
#include "bosdyn_msgs/msg/detail/area_callback_data__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__AreaCallbackRegion __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__AreaCallbackRegion __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct AreaCallbackRegion_
{
  using Type = AreaCallbackRegion_<ContainerAllocator>;

  explicit AreaCallbackRegion_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : recorded_data(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->service_name = "";
      this->description = "";
      this->recorded_data_is_set = false;
    }
  }

  explicit AreaCallbackRegion_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : service_name(_alloc),
    description(_alloc),
    recorded_data(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->service_name = "";
      this->description = "";
      this->recorded_data_is_set = false;
    }
  }

  // field types and members
  using _service_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _service_name_type service_name;
  using _description_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _description_type description;
  using _recorded_data_type =
    bosdyn_msgs::msg::AreaCallbackData_<ContainerAllocator>;
  _recorded_data_type recorded_data;
  using _recorded_data_is_set_type =
    bool;
  _recorded_data_is_set_type recorded_data_is_set;

  // setters for named parameter idiom
  Type & set__service_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->service_name = _arg;
    return *this;
  }
  Type & set__description(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->description = _arg;
    return *this;
  }
  Type & set__recorded_data(
    const bosdyn_msgs::msg::AreaCallbackData_<ContainerAllocator> & _arg)
  {
    this->recorded_data = _arg;
    return *this;
  }
  Type & set__recorded_data_is_set(
    const bool & _arg)
  {
    this->recorded_data_is_set = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::AreaCallbackRegion_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::AreaCallbackRegion_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::AreaCallbackRegion_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::AreaCallbackRegion_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::AreaCallbackRegion_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::AreaCallbackRegion_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::AreaCallbackRegion_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::AreaCallbackRegion_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::AreaCallbackRegion_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::AreaCallbackRegion_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__AreaCallbackRegion
    std::shared_ptr<bosdyn_msgs::msg::AreaCallbackRegion_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__AreaCallbackRegion
    std::shared_ptr<bosdyn_msgs::msg::AreaCallbackRegion_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AreaCallbackRegion_ & other) const
  {
    if (this->service_name != other.service_name) {
      return false;
    }
    if (this->description != other.description) {
      return false;
    }
    if (this->recorded_data != other.recorded_data) {
      return false;
    }
    if (this->recorded_data_is_set != other.recorded_data_is_set) {
      return false;
    }
    return true;
  }
  bool operator!=(const AreaCallbackRegion_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AreaCallbackRegion_

// alias to use template instance with default allocator
using AreaCallbackRegion =
  bosdyn_msgs::msg::AreaCallbackRegion_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__AREA_CALLBACK_REGION__STRUCT_HPP_
