// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/PayloadMassVolumeProperties.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__PAYLOAD_MASS_VOLUME_PROPERTIES__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__PAYLOAD_MASS_VOLUME_PROPERTIES__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'com_pos_rt_payload'
#include "geometry_msgs/msg/detail/vector3__struct.hpp"
// Member 'moi_tensor'
#include "bosdyn_msgs/msg/detail/moment_of_intertia__struct.hpp"
// Member 'bounding_box'
#include "bosdyn_msgs/msg/detail/box3_with_frame__struct.hpp"
// Member 'joint_limits'
#include "bosdyn_msgs/msg/detail/joint_limits__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__PayloadMassVolumeProperties __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__PayloadMassVolumeProperties __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PayloadMassVolumeProperties_
{
  using Type = PayloadMassVolumeProperties_<ContainerAllocator>;

  explicit PayloadMassVolumeProperties_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : com_pos_rt_payload(_init),
    moi_tensor(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->total_mass = 0.0f;
      this->com_pos_rt_payload_is_set = false;
      this->moi_tensor_is_set = false;
    }
  }

  explicit PayloadMassVolumeProperties_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : com_pos_rt_payload(_alloc, _init),
    moi_tensor(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->total_mass = 0.0f;
      this->com_pos_rt_payload_is_set = false;
      this->moi_tensor_is_set = false;
    }
  }

  // field types and members
  using _total_mass_type =
    float;
  _total_mass_type total_mass;
  using _com_pos_rt_payload_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _com_pos_rt_payload_type com_pos_rt_payload;
  using _com_pos_rt_payload_is_set_type =
    bool;
  _com_pos_rt_payload_is_set_type com_pos_rt_payload_is_set;
  using _moi_tensor_type =
    bosdyn_msgs::msg::MomentOfIntertia_<ContainerAllocator>;
  _moi_tensor_type moi_tensor;
  using _moi_tensor_is_set_type =
    bool;
  _moi_tensor_is_set_type moi_tensor_is_set;
  using _bounding_box_type =
    std::vector<bosdyn_msgs::msg::Box3WithFrame_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::Box3WithFrame_<ContainerAllocator>>>;
  _bounding_box_type bounding_box;
  using _joint_limits_type =
    std::vector<bosdyn_msgs::msg::JointLimits_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::JointLimits_<ContainerAllocator>>>;
  _joint_limits_type joint_limits;

  // setters for named parameter idiom
  Type & set__total_mass(
    const float & _arg)
  {
    this->total_mass = _arg;
    return *this;
  }
  Type & set__com_pos_rt_payload(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->com_pos_rt_payload = _arg;
    return *this;
  }
  Type & set__com_pos_rt_payload_is_set(
    const bool & _arg)
  {
    this->com_pos_rt_payload_is_set = _arg;
    return *this;
  }
  Type & set__moi_tensor(
    const bosdyn_msgs::msg::MomentOfIntertia_<ContainerAllocator> & _arg)
  {
    this->moi_tensor = _arg;
    return *this;
  }
  Type & set__moi_tensor_is_set(
    const bool & _arg)
  {
    this->moi_tensor_is_set = _arg;
    return *this;
  }
  Type & set__bounding_box(
    const std::vector<bosdyn_msgs::msg::Box3WithFrame_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::Box3WithFrame_<ContainerAllocator>>> & _arg)
  {
    this->bounding_box = _arg;
    return *this;
  }
  Type & set__joint_limits(
    const std::vector<bosdyn_msgs::msg::JointLimits_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::JointLimits_<ContainerAllocator>>> & _arg)
  {
    this->joint_limits = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::PayloadMassVolumeProperties_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::PayloadMassVolumeProperties_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::PayloadMassVolumeProperties_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::PayloadMassVolumeProperties_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::PayloadMassVolumeProperties_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::PayloadMassVolumeProperties_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::PayloadMassVolumeProperties_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::PayloadMassVolumeProperties_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::PayloadMassVolumeProperties_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::PayloadMassVolumeProperties_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__PayloadMassVolumeProperties
    std::shared_ptr<bosdyn_msgs::msg::PayloadMassVolumeProperties_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__PayloadMassVolumeProperties
    std::shared_ptr<bosdyn_msgs::msg::PayloadMassVolumeProperties_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PayloadMassVolumeProperties_ & other) const
  {
    if (this->total_mass != other.total_mass) {
      return false;
    }
    if (this->com_pos_rt_payload != other.com_pos_rt_payload) {
      return false;
    }
    if (this->com_pos_rt_payload_is_set != other.com_pos_rt_payload_is_set) {
      return false;
    }
    if (this->moi_tensor != other.moi_tensor) {
      return false;
    }
    if (this->moi_tensor_is_set != other.moi_tensor_is_set) {
      return false;
    }
    if (this->bounding_box != other.bounding_box) {
      return false;
    }
    if (this->joint_limits != other.joint_limits) {
      return false;
    }
    return true;
  }
  bool operator!=(const PayloadMassVolumeProperties_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PayloadMassVolumeProperties_

// alias to use template instance with default allocator
using PayloadMassVolumeProperties =
  bosdyn_msgs::msg::PayloadMassVolumeProperties_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__PAYLOAD_MASS_VOLUME_PROPERTIES__STRUCT_HPP_
