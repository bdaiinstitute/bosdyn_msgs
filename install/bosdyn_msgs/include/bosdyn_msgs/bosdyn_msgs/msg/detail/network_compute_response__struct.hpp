// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/NetworkComputeResponse.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__NETWORK_COMPUTE_RESPONSE__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__NETWORK_COMPUTE_RESPONSE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "bosdyn_msgs/msg/detail/response_header__struct.hpp"
// Member 'object_in_image'
#include "bosdyn_msgs/msg/detail/world_object__struct.hpp"
// Member 'image_responses'
#include "bosdyn_msgs/msg/detail/image_capture_and_source__struct.hpp"
// Member 'status'
#include "bosdyn_msgs/msg/detail/network_compute_status__struct.hpp"
// Member 'custom_param_error'
#include "bosdyn_msgs/msg/detail/custom_param_error__struct.hpp"
// Member 'output_images'
#include "bosdyn_msgs/msg/detail/key_string_value_bosdyn_msgs_output_image__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__NetworkComputeResponse __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__NetworkComputeResponse __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct NetworkComputeResponse_
{
  using Type = NetworkComputeResponse_<ContainerAllocator>;

  explicit NetworkComputeResponse_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    status(_init),
    custom_param_error(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->header_is_set = false;
      this->custom_param_error_is_set = false;
    }
  }

  explicit NetworkComputeResponse_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    status(_alloc, _init),
    custom_param_error(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->header_is_set = false;
      this->custom_param_error_is_set = false;
    }
  }

  // field types and members
  using _header_type =
    bosdyn_msgs::msg::ResponseHeader_<ContainerAllocator>;
  _header_type header;
  using _header_is_set_type =
    bool;
  _header_is_set_type header_is_set;
  using _object_in_image_type =
    std::vector<bosdyn_msgs::msg::WorldObject_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::WorldObject_<ContainerAllocator>>>;
  _object_in_image_type object_in_image;
  using _image_responses_type =
    std::vector<bosdyn_msgs::msg::ImageCaptureAndSource_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::ImageCaptureAndSource_<ContainerAllocator>>>;
  _image_responses_type image_responses;
  using _status_type =
    bosdyn_msgs::msg::NetworkComputeStatus_<ContainerAllocator>;
  _status_type status;
  using _custom_param_error_type =
    bosdyn_msgs::msg::CustomParamError_<ContainerAllocator>;
  _custom_param_error_type custom_param_error;
  using _custom_param_error_is_set_type =
    bool;
  _custom_param_error_is_set_type custom_param_error_is_set;
  using _output_images_type =
    std::vector<bosdyn_msgs::msg::KeyStringValueBosdynMsgsOutputImage_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::KeyStringValueBosdynMsgsOutputImage_<ContainerAllocator>>>;
  _output_images_type output_images;

  // setters for named parameter idiom
  Type & set__header(
    const bosdyn_msgs::msg::ResponseHeader_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__header_is_set(
    const bool & _arg)
  {
    this->header_is_set = _arg;
    return *this;
  }
  Type & set__object_in_image(
    const std::vector<bosdyn_msgs::msg::WorldObject_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::WorldObject_<ContainerAllocator>>> & _arg)
  {
    this->object_in_image = _arg;
    return *this;
  }
  Type & set__image_responses(
    const std::vector<bosdyn_msgs::msg::ImageCaptureAndSource_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::ImageCaptureAndSource_<ContainerAllocator>>> & _arg)
  {
    this->image_responses = _arg;
    return *this;
  }
  Type & set__status(
    const bosdyn_msgs::msg::NetworkComputeStatus_<ContainerAllocator> & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__custom_param_error(
    const bosdyn_msgs::msg::CustomParamError_<ContainerAllocator> & _arg)
  {
    this->custom_param_error = _arg;
    return *this;
  }
  Type & set__custom_param_error_is_set(
    const bool & _arg)
  {
    this->custom_param_error_is_set = _arg;
    return *this;
  }
  Type & set__output_images(
    const std::vector<bosdyn_msgs::msg::KeyStringValueBosdynMsgsOutputImage_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::KeyStringValueBosdynMsgsOutputImage_<ContainerAllocator>>> & _arg)
  {
    this->output_images = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::NetworkComputeResponse_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::NetworkComputeResponse_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::NetworkComputeResponse_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::NetworkComputeResponse_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::NetworkComputeResponse_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::NetworkComputeResponse_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::NetworkComputeResponse_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::NetworkComputeResponse_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::NetworkComputeResponse_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::NetworkComputeResponse_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__NetworkComputeResponse
    std::shared_ptr<bosdyn_msgs::msg::NetworkComputeResponse_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__NetworkComputeResponse
    std::shared_ptr<bosdyn_msgs::msg::NetworkComputeResponse_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NetworkComputeResponse_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->header_is_set != other.header_is_set) {
      return false;
    }
    if (this->object_in_image != other.object_in_image) {
      return false;
    }
    if (this->image_responses != other.image_responses) {
      return false;
    }
    if (this->status != other.status) {
      return false;
    }
    if (this->custom_param_error != other.custom_param_error) {
      return false;
    }
    if (this->custom_param_error_is_set != other.custom_param_error_is_set) {
      return false;
    }
    if (this->output_images != other.output_images) {
      return false;
    }
    return true;
  }
  bool operator!=(const NetworkComputeResponse_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NetworkComputeResponse_

// alias to use template instance with default allocator
using NetworkComputeResponse =
  bosdyn_msgs::msg::NetworkComputeResponse_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__NETWORK_COMPUTE_RESPONSE__STRUCT_HPP_
