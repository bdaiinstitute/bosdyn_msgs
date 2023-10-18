// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/TerrainParams.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__TERRAIN_PARAMS__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__TERRAIN_PARAMS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'grated_surfaces_mode'
#include "bosdyn_msgs/msg/detail/terrain_params_grated_surfaces_mode__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__TerrainParams __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__TerrainParams __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TerrainParams_
{
  using Type = TerrainParams_<ContainerAllocator>;

  explicit TerrainParams_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : grated_surfaces_mode(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ground_mu_hint = 0.0;
      this->ground_mu_hint_is_set = false;
    }
  }

  explicit TerrainParams_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : grated_surfaces_mode(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ground_mu_hint = 0.0;
      this->ground_mu_hint_is_set = false;
    }
  }

  // field types and members
  using _ground_mu_hint_type =
    double;
  _ground_mu_hint_type ground_mu_hint;
  using _ground_mu_hint_is_set_type =
    bool;
  _ground_mu_hint_is_set_type ground_mu_hint_is_set;
  using _grated_surfaces_mode_type =
    bosdyn_msgs::msg::TerrainParamsGratedSurfacesMode_<ContainerAllocator>;
  _grated_surfaces_mode_type grated_surfaces_mode;

  // setters for named parameter idiom
  Type & set__ground_mu_hint(
    const double & _arg)
  {
    this->ground_mu_hint = _arg;
    return *this;
  }
  Type & set__ground_mu_hint_is_set(
    const bool & _arg)
  {
    this->ground_mu_hint_is_set = _arg;
    return *this;
  }
  Type & set__grated_surfaces_mode(
    const bosdyn_msgs::msg::TerrainParamsGratedSurfacesMode_<ContainerAllocator> & _arg)
  {
    this->grated_surfaces_mode = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::TerrainParams_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::TerrainParams_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::TerrainParams_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::TerrainParams_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::TerrainParams_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::TerrainParams_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::TerrainParams_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::TerrainParams_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::TerrainParams_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::TerrainParams_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__TerrainParams
    std::shared_ptr<bosdyn_msgs::msg::TerrainParams_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__TerrainParams
    std::shared_ptr<bosdyn_msgs::msg::TerrainParams_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TerrainParams_ & other) const
  {
    if (this->ground_mu_hint != other.ground_mu_hint) {
      return false;
    }
    if (this->ground_mu_hint_is_set != other.ground_mu_hint_is_set) {
      return false;
    }
    if (this->grated_surfaces_mode != other.grated_surfaces_mode) {
      return false;
    }
    return true;
  }
  bool operator!=(const TerrainParams_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TerrainParams_

// alias to use template instance with default allocator
using TerrainParams =
  bosdyn_msgs::msg::TerrainParams_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__TERRAIN_PARAMS__STRUCT_HPP_
