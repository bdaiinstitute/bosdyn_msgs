// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/WorldObject.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__WORLD_OBJECT__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__WORLD_OBJECT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'acquisition_time'
#include "builtin_interfaces/msg/detail/time__struct.hpp"
// Member 'transforms_snapshot'
#include "bosdyn_msgs/msg/detail/frame_tree_snapshot__struct.hpp"
// Member 'object_lifetime'
#include "builtin_interfaces/msg/detail/duration__struct.hpp"
// Member 'drawable_properties'
#include "bosdyn_msgs/msg/detail/drawable_properties__struct.hpp"
// Member 'apriltag_properties'
#include "bosdyn_msgs/msg/detail/april_tag_properties__struct.hpp"
// Member 'nogo_region_properties'
#include "bosdyn_msgs/msg/detail/no_go_region_properties__struct.hpp"
// Member 'image_properties'
#include "bosdyn_msgs/msg/detail/image_properties__struct.hpp"
// Member 'dock_properties'
#include "bosdyn_msgs/msg/detail/dock_properties__struct.hpp"
// Member 'ray_properties'
#include "bosdyn_msgs/msg/detail/ray_properties__struct.hpp"
// Member 'bounding_box_properties'
#include "bosdyn_msgs/msg/detail/bounding_box_properties__struct.hpp"
// Member 'staircase_properties'
#include "bosdyn_msgs/msg/detail/staircase_properties__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__WorldObject __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__WorldObject __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct WorldObject_
{
  using Type = WorldObject_<ContainerAllocator>;

  explicit WorldObject_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : acquisition_time(_init),
    transforms_snapshot(_init),
    object_lifetime(_init),
    apriltag_properties(_init),
    nogo_region_properties(_init),
    image_properties(_init),
    dock_properties(_init),
    ray_properties(_init),
    bounding_box_properties(_init),
    staircase_properties(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0l;
      this->name = "";
      this->acquisition_time_is_set = false;
      this->transforms_snapshot_is_set = false;
      this->object_lifetime_is_set = false;
      this->apriltag_properties_is_set = false;
      this->nogo_region_properties_is_set = false;
      this->image_properties_is_set = false;
      this->dock_properties_is_set = false;
      this->ray_properties_is_set = false;
      this->bounding_box_properties_is_set = false;
      this->staircase_properties_is_set = false;
    }
  }

  explicit WorldObject_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_alloc),
    acquisition_time(_alloc, _init),
    transforms_snapshot(_alloc, _init),
    object_lifetime(_alloc, _init),
    apriltag_properties(_alloc, _init),
    nogo_region_properties(_alloc, _init),
    image_properties(_alloc, _init),
    dock_properties(_alloc, _init),
    ray_properties(_alloc, _init),
    bounding_box_properties(_alloc, _init),
    staircase_properties(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0l;
      this->name = "";
      this->acquisition_time_is_set = false;
      this->transforms_snapshot_is_set = false;
      this->object_lifetime_is_set = false;
      this->apriltag_properties_is_set = false;
      this->nogo_region_properties_is_set = false;
      this->image_properties_is_set = false;
      this->dock_properties_is_set = false;
      this->ray_properties_is_set = false;
      this->bounding_box_properties_is_set = false;
      this->staircase_properties_is_set = false;
    }
  }

  // field types and members
  using _id_type =
    int32_t;
  _id_type id;
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name_type name;
  using _acquisition_time_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _acquisition_time_type acquisition_time;
  using _acquisition_time_is_set_type =
    bool;
  _acquisition_time_is_set_type acquisition_time_is_set;
  using _transforms_snapshot_type =
    bosdyn_msgs::msg::FrameTreeSnapshot_<ContainerAllocator>;
  _transforms_snapshot_type transforms_snapshot;
  using _transforms_snapshot_is_set_type =
    bool;
  _transforms_snapshot_is_set_type transforms_snapshot_is_set;
  using _object_lifetime_type =
    builtin_interfaces::msg::Duration_<ContainerAllocator>;
  _object_lifetime_type object_lifetime;
  using _object_lifetime_is_set_type =
    bool;
  _object_lifetime_is_set_type object_lifetime_is_set;
  using _drawable_properties_type =
    std::vector<bosdyn_msgs::msg::DrawableProperties_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::DrawableProperties_<ContainerAllocator>>>;
  _drawable_properties_type drawable_properties;
  using _apriltag_properties_type =
    bosdyn_msgs::msg::AprilTagProperties_<ContainerAllocator>;
  _apriltag_properties_type apriltag_properties;
  using _apriltag_properties_is_set_type =
    bool;
  _apriltag_properties_is_set_type apriltag_properties_is_set;
  using _nogo_region_properties_type =
    bosdyn_msgs::msg::NoGoRegionProperties_<ContainerAllocator>;
  _nogo_region_properties_type nogo_region_properties;
  using _nogo_region_properties_is_set_type =
    bool;
  _nogo_region_properties_is_set_type nogo_region_properties_is_set;
  using _image_properties_type =
    bosdyn_msgs::msg::ImageProperties_<ContainerAllocator>;
  _image_properties_type image_properties;
  using _image_properties_is_set_type =
    bool;
  _image_properties_is_set_type image_properties_is_set;
  using _dock_properties_type =
    bosdyn_msgs::msg::DockProperties_<ContainerAllocator>;
  _dock_properties_type dock_properties;
  using _dock_properties_is_set_type =
    bool;
  _dock_properties_is_set_type dock_properties_is_set;
  using _ray_properties_type =
    bosdyn_msgs::msg::RayProperties_<ContainerAllocator>;
  _ray_properties_type ray_properties;
  using _ray_properties_is_set_type =
    bool;
  _ray_properties_is_set_type ray_properties_is_set;
  using _bounding_box_properties_type =
    bosdyn_msgs::msg::BoundingBoxProperties_<ContainerAllocator>;
  _bounding_box_properties_type bounding_box_properties;
  using _bounding_box_properties_is_set_type =
    bool;
  _bounding_box_properties_is_set_type bounding_box_properties_is_set;
  using _staircase_properties_type =
    bosdyn_msgs::msg::StaircaseProperties_<ContainerAllocator>;
  _staircase_properties_type staircase_properties;
  using _staircase_properties_is_set_type =
    bool;
  _staircase_properties_is_set_type staircase_properties_is_set;

  // setters for named parameter idiom
  Type & set__id(
    const int32_t & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__acquisition_time(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->acquisition_time = _arg;
    return *this;
  }
  Type & set__acquisition_time_is_set(
    const bool & _arg)
  {
    this->acquisition_time_is_set = _arg;
    return *this;
  }
  Type & set__transforms_snapshot(
    const bosdyn_msgs::msg::FrameTreeSnapshot_<ContainerAllocator> & _arg)
  {
    this->transforms_snapshot = _arg;
    return *this;
  }
  Type & set__transforms_snapshot_is_set(
    const bool & _arg)
  {
    this->transforms_snapshot_is_set = _arg;
    return *this;
  }
  Type & set__object_lifetime(
    const builtin_interfaces::msg::Duration_<ContainerAllocator> & _arg)
  {
    this->object_lifetime = _arg;
    return *this;
  }
  Type & set__object_lifetime_is_set(
    const bool & _arg)
  {
    this->object_lifetime_is_set = _arg;
    return *this;
  }
  Type & set__drawable_properties(
    const std::vector<bosdyn_msgs::msg::DrawableProperties_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::DrawableProperties_<ContainerAllocator>>> & _arg)
  {
    this->drawable_properties = _arg;
    return *this;
  }
  Type & set__apriltag_properties(
    const bosdyn_msgs::msg::AprilTagProperties_<ContainerAllocator> & _arg)
  {
    this->apriltag_properties = _arg;
    return *this;
  }
  Type & set__apriltag_properties_is_set(
    const bool & _arg)
  {
    this->apriltag_properties_is_set = _arg;
    return *this;
  }
  Type & set__nogo_region_properties(
    const bosdyn_msgs::msg::NoGoRegionProperties_<ContainerAllocator> & _arg)
  {
    this->nogo_region_properties = _arg;
    return *this;
  }
  Type & set__nogo_region_properties_is_set(
    const bool & _arg)
  {
    this->nogo_region_properties_is_set = _arg;
    return *this;
  }
  Type & set__image_properties(
    const bosdyn_msgs::msg::ImageProperties_<ContainerAllocator> & _arg)
  {
    this->image_properties = _arg;
    return *this;
  }
  Type & set__image_properties_is_set(
    const bool & _arg)
  {
    this->image_properties_is_set = _arg;
    return *this;
  }
  Type & set__dock_properties(
    const bosdyn_msgs::msg::DockProperties_<ContainerAllocator> & _arg)
  {
    this->dock_properties = _arg;
    return *this;
  }
  Type & set__dock_properties_is_set(
    const bool & _arg)
  {
    this->dock_properties_is_set = _arg;
    return *this;
  }
  Type & set__ray_properties(
    const bosdyn_msgs::msg::RayProperties_<ContainerAllocator> & _arg)
  {
    this->ray_properties = _arg;
    return *this;
  }
  Type & set__ray_properties_is_set(
    const bool & _arg)
  {
    this->ray_properties_is_set = _arg;
    return *this;
  }
  Type & set__bounding_box_properties(
    const bosdyn_msgs::msg::BoundingBoxProperties_<ContainerAllocator> & _arg)
  {
    this->bounding_box_properties = _arg;
    return *this;
  }
  Type & set__bounding_box_properties_is_set(
    const bool & _arg)
  {
    this->bounding_box_properties_is_set = _arg;
    return *this;
  }
  Type & set__staircase_properties(
    const bosdyn_msgs::msg::StaircaseProperties_<ContainerAllocator> & _arg)
  {
    this->staircase_properties = _arg;
    return *this;
  }
  Type & set__staircase_properties_is_set(
    const bool & _arg)
  {
    this->staircase_properties_is_set = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::WorldObject_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::WorldObject_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::WorldObject_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::WorldObject_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::WorldObject_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::WorldObject_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::WorldObject_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::WorldObject_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::WorldObject_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::WorldObject_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__WorldObject
    std::shared_ptr<bosdyn_msgs::msg::WorldObject_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__WorldObject
    std::shared_ptr<bosdyn_msgs::msg::WorldObject_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const WorldObject_ & other) const
  {
    if (this->id != other.id) {
      return false;
    }
    if (this->name != other.name) {
      return false;
    }
    if (this->acquisition_time != other.acquisition_time) {
      return false;
    }
    if (this->acquisition_time_is_set != other.acquisition_time_is_set) {
      return false;
    }
    if (this->transforms_snapshot != other.transforms_snapshot) {
      return false;
    }
    if (this->transforms_snapshot_is_set != other.transforms_snapshot_is_set) {
      return false;
    }
    if (this->object_lifetime != other.object_lifetime) {
      return false;
    }
    if (this->object_lifetime_is_set != other.object_lifetime_is_set) {
      return false;
    }
    if (this->drawable_properties != other.drawable_properties) {
      return false;
    }
    if (this->apriltag_properties != other.apriltag_properties) {
      return false;
    }
    if (this->apriltag_properties_is_set != other.apriltag_properties_is_set) {
      return false;
    }
    if (this->nogo_region_properties != other.nogo_region_properties) {
      return false;
    }
    if (this->nogo_region_properties_is_set != other.nogo_region_properties_is_set) {
      return false;
    }
    if (this->image_properties != other.image_properties) {
      return false;
    }
    if (this->image_properties_is_set != other.image_properties_is_set) {
      return false;
    }
    if (this->dock_properties != other.dock_properties) {
      return false;
    }
    if (this->dock_properties_is_set != other.dock_properties_is_set) {
      return false;
    }
    if (this->ray_properties != other.ray_properties) {
      return false;
    }
    if (this->ray_properties_is_set != other.ray_properties_is_set) {
      return false;
    }
    if (this->bounding_box_properties != other.bounding_box_properties) {
      return false;
    }
    if (this->bounding_box_properties_is_set != other.bounding_box_properties_is_set) {
      return false;
    }
    if (this->staircase_properties != other.staircase_properties) {
      return false;
    }
    if (this->staircase_properties_is_set != other.staircase_properties_is_set) {
      return false;
    }
    return true;
  }
  bool operator!=(const WorldObject_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct WorldObject_

// alias to use template instance with default allocator
using WorldObject =
  bosdyn_msgs::msg::WorldObject_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__WORLD_OBJECT__STRUCT_HPP_
