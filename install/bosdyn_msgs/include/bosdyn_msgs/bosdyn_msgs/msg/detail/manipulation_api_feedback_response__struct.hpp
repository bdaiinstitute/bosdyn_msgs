// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/ManipulationApiFeedbackResponse.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__MANIPULATION_API_FEEDBACK_RESPONSE__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__MANIPULATION_API_FEEDBACK_RESPONSE__STRUCT_HPP_

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
// Member 'current_state'
#include "bosdyn_msgs/msg/detail/manipulation_feedback_state__struct.hpp"
// Member 'transforms_snapshot_manipulation_data'
#include "bosdyn_msgs/msg/detail/frame_tree_snapshot__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__ManipulationApiFeedbackResponse __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__ManipulationApiFeedbackResponse __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ManipulationApiFeedbackResponse_
{
  using Type = ManipulationApiFeedbackResponse_<ContainerAllocator>;

  explicit ManipulationApiFeedbackResponse_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    current_state(_init),
    transforms_snapshot_manipulation_data(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->header_is_set = false;
      this->manipulation_cmd_id = 0l;
      this->transforms_snapshot_manipulation_data_is_set = false;
    }
  }

  explicit ManipulationApiFeedbackResponse_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    current_state(_alloc, _init),
    transforms_snapshot_manipulation_data(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->header_is_set = false;
      this->manipulation_cmd_id = 0l;
      this->transforms_snapshot_manipulation_data_is_set = false;
    }
  }

  // field types and members
  using _header_type =
    bosdyn_msgs::msg::ResponseHeader_<ContainerAllocator>;
  _header_type header;
  using _header_is_set_type =
    bool;
  _header_is_set_type header_is_set;
  using _manipulation_cmd_id_type =
    int32_t;
  _manipulation_cmd_id_type manipulation_cmd_id;
  using _current_state_type =
    bosdyn_msgs::msg::ManipulationFeedbackState_<ContainerAllocator>;
  _current_state_type current_state;
  using _transforms_snapshot_manipulation_data_type =
    bosdyn_msgs::msg::FrameTreeSnapshot_<ContainerAllocator>;
  _transforms_snapshot_manipulation_data_type transforms_snapshot_manipulation_data;
  using _transforms_snapshot_manipulation_data_is_set_type =
    bool;
  _transforms_snapshot_manipulation_data_is_set_type transforms_snapshot_manipulation_data_is_set;

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
  Type & set__manipulation_cmd_id(
    const int32_t & _arg)
  {
    this->manipulation_cmd_id = _arg;
    return *this;
  }
  Type & set__current_state(
    const bosdyn_msgs::msg::ManipulationFeedbackState_<ContainerAllocator> & _arg)
  {
    this->current_state = _arg;
    return *this;
  }
  Type & set__transforms_snapshot_manipulation_data(
    const bosdyn_msgs::msg::FrameTreeSnapshot_<ContainerAllocator> & _arg)
  {
    this->transforms_snapshot_manipulation_data = _arg;
    return *this;
  }
  Type & set__transforms_snapshot_manipulation_data_is_set(
    const bool & _arg)
  {
    this->transforms_snapshot_manipulation_data_is_set = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::ManipulationApiFeedbackResponse_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::ManipulationApiFeedbackResponse_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::ManipulationApiFeedbackResponse_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::ManipulationApiFeedbackResponse_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::ManipulationApiFeedbackResponse_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::ManipulationApiFeedbackResponse_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::ManipulationApiFeedbackResponse_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::ManipulationApiFeedbackResponse_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::ManipulationApiFeedbackResponse_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::ManipulationApiFeedbackResponse_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__ManipulationApiFeedbackResponse
    std::shared_ptr<bosdyn_msgs::msg::ManipulationApiFeedbackResponse_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__ManipulationApiFeedbackResponse
    std::shared_ptr<bosdyn_msgs::msg::ManipulationApiFeedbackResponse_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ManipulationApiFeedbackResponse_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->header_is_set != other.header_is_set) {
      return false;
    }
    if (this->manipulation_cmd_id != other.manipulation_cmd_id) {
      return false;
    }
    if (this->current_state != other.current_state) {
      return false;
    }
    if (this->transforms_snapshot_manipulation_data != other.transforms_snapshot_manipulation_data) {
      return false;
    }
    if (this->transforms_snapshot_manipulation_data_is_set != other.transforms_snapshot_manipulation_data_is_set) {
      return false;
    }
    return true;
  }
  bool operator!=(const ManipulationApiFeedbackResponse_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ManipulationApiFeedbackResponse_

// alias to use template instance with default allocator
using ManipulationApiFeedbackResponse =
  bosdyn_msgs::msg::ManipulationApiFeedbackResponse_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__MANIPULATION_API_FEEDBACK_RESPONSE__STRUCT_HPP_
