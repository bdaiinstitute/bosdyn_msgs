// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/RoiParametersRoiWindowSize.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ROI_PARAMETERS_ROI_WINDOW_SIZE__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__ROI_PARAMETERS_ROI_WINDOW_SIZE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__RoiParametersRoiWindowSize __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__RoiParametersRoiWindowSize __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RoiParametersRoiWindowSize_
{
  using Type = RoiParametersRoiWindowSize_<ContainerAllocator>;

  explicit RoiParametersRoiWindowSize_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->value = 0;
    }
  }

  explicit RoiParametersRoiWindowSize_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->value = 0;
    }
  }

  // field types and members
  using _value_type =
    int8_t;
  _value_type value;

  // setters for named parameter idiom
  Type & set__value(
    const int8_t & _arg)
  {
    this->value = _arg;
    return *this;
  }

  // constant declarations
  static constexpr int8_t ROI_WINDOW_SIZE_UNKNOWN =
    0;
  static constexpr int8_t ROI_WINDOW_SIZE_1 =
    1;
  static constexpr int8_t ROI_WINDOW_SIZE_2 =
    2;
  static constexpr int8_t ROI_WINDOW_SIZE_3 =
    3;
  static constexpr int8_t ROI_WINDOW_SIZE_4 =
    4;
  static constexpr int8_t ROI_WINDOW_SIZE_5 =
    5;
  static constexpr int8_t ROI_WINDOW_SIZE_6 =
    6;
  static constexpr int8_t ROI_WINDOW_SIZE_7 =
    7;
  static constexpr int8_t ROI_WINDOW_SIZE_8 =
    8;

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::RoiParametersRoiWindowSize_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::RoiParametersRoiWindowSize_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::RoiParametersRoiWindowSize_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::RoiParametersRoiWindowSize_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::RoiParametersRoiWindowSize_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::RoiParametersRoiWindowSize_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::RoiParametersRoiWindowSize_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::RoiParametersRoiWindowSize_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::RoiParametersRoiWindowSize_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::RoiParametersRoiWindowSize_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__RoiParametersRoiWindowSize
    std::shared_ptr<bosdyn_msgs::msg::RoiParametersRoiWindowSize_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__RoiParametersRoiWindowSize
    std::shared_ptr<bosdyn_msgs::msg::RoiParametersRoiWindowSize_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RoiParametersRoiWindowSize_ & other) const
  {
    if (this->value != other.value) {
      return false;
    }
    return true;
  }
  bool operator!=(const RoiParametersRoiWindowSize_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RoiParametersRoiWindowSize_

// alias to use template instance with default allocator
using RoiParametersRoiWindowSize =
  bosdyn_msgs::msg::RoiParametersRoiWindowSize_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t RoiParametersRoiWindowSize_<ContainerAllocator>::ROI_WINDOW_SIZE_UNKNOWN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t RoiParametersRoiWindowSize_<ContainerAllocator>::ROI_WINDOW_SIZE_1;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t RoiParametersRoiWindowSize_<ContainerAllocator>::ROI_WINDOW_SIZE_2;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t RoiParametersRoiWindowSize_<ContainerAllocator>::ROI_WINDOW_SIZE_3;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t RoiParametersRoiWindowSize_<ContainerAllocator>::ROI_WINDOW_SIZE_4;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t RoiParametersRoiWindowSize_<ContainerAllocator>::ROI_WINDOW_SIZE_5;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t RoiParametersRoiWindowSize_<ContainerAllocator>::ROI_WINDOW_SIZE_6;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t RoiParametersRoiWindowSize_<ContainerAllocator>::ROI_WINDOW_SIZE_7;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t RoiParametersRoiWindowSize_<ContainerAllocator>::ROI_WINDOW_SIZE_8;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__ROI_PARAMETERS_ROI_WINDOW_SIZE__STRUCT_HPP_
