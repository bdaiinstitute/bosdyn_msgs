// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/ModelData.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__MODEL_DATA__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__MODEL_DATA__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'output_image_spec'
#include "bosdyn_msgs/msg/detail/output_image_spec__struct.hpp"
// Member 'custom_params'
#include "bosdyn_msgs/msg/detail/dict_param_spec__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__ModelData __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__ModelData __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ModelData_
{
  using Type = ModelData_<ContainerAllocator>;

  explicit ModelData_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : custom_params(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->model_name = "";
      this->custom_params_is_set = false;
    }
  }

  explicit ModelData_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : model_name(_alloc),
    custom_params(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->model_name = "";
      this->custom_params_is_set = false;
    }
  }

  // field types and members
  using _model_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _model_name_type model_name;
  using _available_labels_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _available_labels_type available_labels;
  using _output_image_spec_type =
    std::vector<bosdyn_msgs::msg::OutputImageSpec_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::OutputImageSpec_<ContainerAllocator>>>;
  _output_image_spec_type output_image_spec;
  using _custom_params_type =
    bosdyn_msgs::msg::DictParamSpec_<ContainerAllocator>;
  _custom_params_type custom_params;
  using _custom_params_is_set_type =
    bool;
  _custom_params_is_set_type custom_params_is_set;

  // setters for named parameter idiom
  Type & set__model_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->model_name = _arg;
    return *this;
  }
  Type & set__available_labels(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->available_labels = _arg;
    return *this;
  }
  Type & set__output_image_spec(
    const std::vector<bosdyn_msgs::msg::OutputImageSpec_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::OutputImageSpec_<ContainerAllocator>>> & _arg)
  {
    this->output_image_spec = _arg;
    return *this;
  }
  Type & set__custom_params(
    const bosdyn_msgs::msg::DictParamSpec_<ContainerAllocator> & _arg)
  {
    this->custom_params = _arg;
    return *this;
  }
  Type & set__custom_params_is_set(
    const bool & _arg)
  {
    this->custom_params_is_set = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::ModelData_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::ModelData_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::ModelData_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::ModelData_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::ModelData_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::ModelData_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::ModelData_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::ModelData_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::ModelData_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::ModelData_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__ModelData
    std::shared_ptr<bosdyn_msgs::msg::ModelData_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__ModelData
    std::shared_ptr<bosdyn_msgs::msg::ModelData_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ModelData_ & other) const
  {
    if (this->model_name != other.model_name) {
      return false;
    }
    if (this->available_labels != other.available_labels) {
      return false;
    }
    if (this->output_image_spec != other.output_image_spec) {
      return false;
    }
    if (this->custom_params != other.custom_params) {
      return false;
    }
    if (this->custom_params_is_set != other.custom_params_is_set) {
      return false;
    }
    return true;
  }
  bool operator!=(const ModelData_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ModelData_

// alias to use template instance with default allocator
using ModelData =
  bosdyn_msgs::msg::ModelData_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__MODEL_DATA__STRUCT_HPP_
