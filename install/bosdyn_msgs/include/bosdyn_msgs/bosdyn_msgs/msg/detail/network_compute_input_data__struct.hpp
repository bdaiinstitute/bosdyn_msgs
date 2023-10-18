// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/NetworkComputeInputData.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__NETWORK_COMPUTE_INPUT_DATA__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__NETWORK_COMPUTE_INPUT_DATA__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'input'
#include "bosdyn_msgs/msg/detail/network_compute_input_data_one_of_input__struct.hpp"
// Member 'rotate_image'
#include "bosdyn_msgs/msg/detail/network_compute_input_data_rotate_image__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__NetworkComputeInputData __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__NetworkComputeInputData __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct NetworkComputeInputData_
{
  using Type = NetworkComputeInputData_<ContainerAllocator>;

  explicit NetworkComputeInputData_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : input(_init),
    rotate_image(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->model_name = "";
      this->min_confidence = 0.0f;
    }
  }

  explicit NetworkComputeInputData_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : input(_alloc, _init),
    model_name(_alloc),
    rotate_image(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->model_name = "";
      this->min_confidence = 0.0f;
    }
  }

  // field types and members
  using _input_type =
    bosdyn_msgs::msg::NetworkComputeInputDataOneOfInput_<ContainerAllocator>;
  _input_type input;
  using _model_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _model_name_type model_name;
  using _min_confidence_type =
    float;
  _min_confidence_type min_confidence;
  using _rotate_image_type =
    bosdyn_msgs::msg::NetworkComputeInputDataRotateImage_<ContainerAllocator>;
  _rotate_image_type rotate_image;

  // setters for named parameter idiom
  Type & set__input(
    const bosdyn_msgs::msg::NetworkComputeInputDataOneOfInput_<ContainerAllocator> & _arg)
  {
    this->input = _arg;
    return *this;
  }
  Type & set__model_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->model_name = _arg;
    return *this;
  }
  Type & set__min_confidence(
    const float & _arg)
  {
    this->min_confidence = _arg;
    return *this;
  }
  Type & set__rotate_image(
    const bosdyn_msgs::msg::NetworkComputeInputDataRotateImage_<ContainerAllocator> & _arg)
  {
    this->rotate_image = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::NetworkComputeInputData_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::NetworkComputeInputData_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::NetworkComputeInputData_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::NetworkComputeInputData_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::NetworkComputeInputData_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::NetworkComputeInputData_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::NetworkComputeInputData_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::NetworkComputeInputData_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::NetworkComputeInputData_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::NetworkComputeInputData_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__NetworkComputeInputData
    std::shared_ptr<bosdyn_msgs::msg::NetworkComputeInputData_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__NetworkComputeInputData
    std::shared_ptr<bosdyn_msgs::msg::NetworkComputeInputData_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NetworkComputeInputData_ & other) const
  {
    if (this->input != other.input) {
      return false;
    }
    if (this->model_name != other.model_name) {
      return false;
    }
    if (this->min_confidence != other.min_confidence) {
      return false;
    }
    if (this->rotate_image != other.rotate_image) {
      return false;
    }
    return true;
  }
  bool operator!=(const NetworkComputeInputData_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NetworkComputeInputData_

// alias to use template instance with default allocator
using NetworkComputeInputData =
  bosdyn_msgs::msg::NetworkComputeInputData_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__NETWORK_COMPUTE_INPUT_DATA__STRUCT_HPP_
