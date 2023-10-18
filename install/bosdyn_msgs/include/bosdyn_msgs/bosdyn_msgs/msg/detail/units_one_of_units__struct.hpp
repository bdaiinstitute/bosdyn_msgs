// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/UnitsOneOfUnits.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__UNITS_ONE_OF_UNITS__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__UNITS_ONE_OF_UNITS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'temp'
#include "bosdyn_msgs/msg/detail/temperature_enum__struct.hpp"
// Member 'press'
#include "bosdyn_msgs/msg/detail/pressure_enum__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__UnitsOneOfUnits __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__UnitsOneOfUnits __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct UnitsOneOfUnits_
{
  using Type = UnitsOneOfUnits_<ContainerAllocator>;

  explicit UnitsOneOfUnits_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : temp(_init),
    press(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->units_choice = 0;
    }
  }

  explicit UnitsOneOfUnits_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_alloc),
    temp(_alloc, _init),
    press(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->units_choice = 0;
    }
  }

  // field types and members
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name_type name;
  using _temp_type =
    bosdyn_msgs::msg::TemperatureEnum_<ContainerAllocator>;
  _temp_type temp;
  using _press_type =
    bosdyn_msgs::msg::PressureEnum_<ContainerAllocator>;
  _press_type press;
  using _units_choice_type =
    int8_t;
  _units_choice_type units_choice;

  // setters for named parameter idiom
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__temp(
    const bosdyn_msgs::msg::TemperatureEnum_<ContainerAllocator> & _arg)
  {
    this->temp = _arg;
    return *this;
  }
  Type & set__press(
    const bosdyn_msgs::msg::PressureEnum_<ContainerAllocator> & _arg)
  {
    this->press = _arg;
    return *this;
  }
  Type & set__units_choice(
    const int8_t & _arg)
  {
    this->units_choice = _arg;
    return *this;
  }

  // constant declarations
  static constexpr int8_t UNITS_NOT_SET =
    0;
  static constexpr int8_t UNITS_NAME_SET =
    1;
  static constexpr int8_t UNITS_TEMP_SET =
    2;
  static constexpr int8_t UNITS_PRESS_SET =
    3;

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::UnitsOneOfUnits_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::UnitsOneOfUnits_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::UnitsOneOfUnits_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::UnitsOneOfUnits_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::UnitsOneOfUnits_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::UnitsOneOfUnits_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::UnitsOneOfUnits_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::UnitsOneOfUnits_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::UnitsOneOfUnits_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::UnitsOneOfUnits_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__UnitsOneOfUnits
    std::shared_ptr<bosdyn_msgs::msg::UnitsOneOfUnits_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__UnitsOneOfUnits
    std::shared_ptr<bosdyn_msgs::msg::UnitsOneOfUnits_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const UnitsOneOfUnits_ & other) const
  {
    if (this->name != other.name) {
      return false;
    }
    if (this->temp != other.temp) {
      return false;
    }
    if (this->press != other.press) {
      return false;
    }
    if (this->units_choice != other.units_choice) {
      return false;
    }
    return true;
  }
  bool operator!=(const UnitsOneOfUnits_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct UnitsOneOfUnits_

// alias to use template instance with default allocator
using UnitsOneOfUnits =
  bosdyn_msgs::msg::UnitsOneOfUnits_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t UnitsOneOfUnits_<ContainerAllocator>::UNITS_NOT_SET;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t UnitsOneOfUnits_<ContainerAllocator>::UNITS_NAME_SET;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t UnitsOneOfUnits_<ContainerAllocator>::UNITS_TEMP_SET;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t UnitsOneOfUnits_<ContainerAllocator>::UNITS_PRESS_SET;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__UNITS_ONE_OF_UNITS__STRUCT_HPP_
