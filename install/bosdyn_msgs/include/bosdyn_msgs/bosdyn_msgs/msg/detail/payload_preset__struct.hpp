// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/PayloadPreset.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__PAYLOAD_PRESET__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__PAYLOAD_PRESET__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'mount_tform_payload'
#include "geometry_msgs/msg/detail/pose__struct.hpp"
// Member 'mount_frame_name'
#include "bosdyn_msgs/msg/detail/mount_frame_name__struct.hpp"
// Member 'mass_volume_properties'
#include "bosdyn_msgs/msg/detail/payload_mass_volume_properties__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__PayloadPreset __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__PayloadPreset __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PayloadPreset_
{
  using Type = PayloadPreset_<ContainerAllocator>;

  explicit PayloadPreset_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : mount_tform_payload(_init),
    mount_frame_name(_init),
    mass_volume_properties(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->preset_name = "";
      this->description = "";
      this->mount_tform_payload_is_set = false;
      this->mass_volume_properties_is_set = false;
    }
  }

  explicit PayloadPreset_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : preset_name(_alloc),
    description(_alloc),
    mount_tform_payload(_alloc, _init),
    mount_frame_name(_alloc, _init),
    mass_volume_properties(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->preset_name = "";
      this->description = "";
      this->mount_tform_payload_is_set = false;
      this->mass_volume_properties_is_set = false;
    }
  }

  // field types and members
  using _preset_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _preset_name_type preset_name;
  using _description_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _description_type description;
  using _mount_tform_payload_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _mount_tform_payload_type mount_tform_payload;
  using _mount_tform_payload_is_set_type =
    bool;
  _mount_tform_payload_is_set_type mount_tform_payload_is_set;
  using _mount_frame_name_type =
    bosdyn_msgs::msg::MountFrameName_<ContainerAllocator>;
  _mount_frame_name_type mount_frame_name;
  using _mass_volume_properties_type =
    bosdyn_msgs::msg::PayloadMassVolumeProperties_<ContainerAllocator>;
  _mass_volume_properties_type mass_volume_properties;
  using _mass_volume_properties_is_set_type =
    bool;
  _mass_volume_properties_is_set_type mass_volume_properties_is_set;
  using _label_prefix_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _label_prefix_type label_prefix;

  // setters for named parameter idiom
  Type & set__preset_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->preset_name = _arg;
    return *this;
  }
  Type & set__description(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->description = _arg;
    return *this;
  }
  Type & set__mount_tform_payload(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->mount_tform_payload = _arg;
    return *this;
  }
  Type & set__mount_tform_payload_is_set(
    const bool & _arg)
  {
    this->mount_tform_payload_is_set = _arg;
    return *this;
  }
  Type & set__mount_frame_name(
    const bosdyn_msgs::msg::MountFrameName_<ContainerAllocator> & _arg)
  {
    this->mount_frame_name = _arg;
    return *this;
  }
  Type & set__mass_volume_properties(
    const bosdyn_msgs::msg::PayloadMassVolumeProperties_<ContainerAllocator> & _arg)
  {
    this->mass_volume_properties = _arg;
    return *this;
  }
  Type & set__mass_volume_properties_is_set(
    const bool & _arg)
  {
    this->mass_volume_properties_is_set = _arg;
    return *this;
  }
  Type & set__label_prefix(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->label_prefix = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::PayloadPreset_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::PayloadPreset_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::PayloadPreset_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::PayloadPreset_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::PayloadPreset_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::PayloadPreset_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::PayloadPreset_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::PayloadPreset_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::PayloadPreset_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::PayloadPreset_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__PayloadPreset
    std::shared_ptr<bosdyn_msgs::msg::PayloadPreset_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__PayloadPreset
    std::shared_ptr<bosdyn_msgs::msg::PayloadPreset_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PayloadPreset_ & other) const
  {
    if (this->preset_name != other.preset_name) {
      return false;
    }
    if (this->description != other.description) {
      return false;
    }
    if (this->mount_tform_payload != other.mount_tform_payload) {
      return false;
    }
    if (this->mount_tform_payload_is_set != other.mount_tform_payload_is_set) {
      return false;
    }
    if (this->mount_frame_name != other.mount_frame_name) {
      return false;
    }
    if (this->mass_volume_properties != other.mass_volume_properties) {
      return false;
    }
    if (this->mass_volume_properties_is_set != other.mass_volume_properties_is_set) {
      return false;
    }
    if (this->label_prefix != other.label_prefix) {
      return false;
    }
    return true;
  }
  bool operator!=(const PayloadPreset_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PayloadPreset_

// alias to use template instance with default allocator
using PayloadPreset =
  bosdyn_msgs::msg::PayloadPreset_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__PAYLOAD_PRESET__STRUCT_HPP_
