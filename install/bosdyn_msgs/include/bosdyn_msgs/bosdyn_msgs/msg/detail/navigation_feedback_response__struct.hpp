// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bosdyn_msgs:msg/NavigationFeedbackResponse.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__NAVIGATION_FEEDBACK_RESPONSE__STRUCT_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__NAVIGATION_FEEDBACK_RESPONSE__STRUCT_HPP_

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
// Member 'status'
#include "bosdyn_msgs/msg/detail/navigation_feedback_response_status__struct.hpp"
// Member 'impaired_state'
#include "bosdyn_msgs/msg/detail/robot_impaired_state__struct.hpp"
// Member 'area_callback_errors'
#include "bosdyn_msgs/msg/detail/key_string_value_bosdyn_msgs_area_callback_error__struct.hpp"
// Member 'remaining_route'
#include "bosdyn_msgs/msg/detail/route__struct.hpp"
// Member 'last_ko_tform_goal'
#include "geometry_msgs/msg/detail/pose__struct.hpp"
// Member 'body_movement_status'
#include "bosdyn_msgs/msg/detail/se2_trajectory_command_feedback_body_movement_status__struct.hpp"
// Member 'path_following_mode'
#include "bosdyn_msgs/msg/detail/edge_annotations_path_following_mode__struct.hpp"
// Member 'active_region_information'
#include "bosdyn_msgs/msg/detail/key_string_value_bosdyn_msgs_navigation_feedback_response_active_region_information__struct.hpp"
// Member 'route_following_status'
#include "bosdyn_msgs/msg/detail/navigation_feedback_response_route_following_status__struct.hpp"
// Member 'blockage_status'
#include "bosdyn_msgs/msg/detail/navigation_feedback_response_blockage_status__struct.hpp"
// Member 'stuck_reason'
#include "bosdyn_msgs/msg/detail/navigation_feedback_response_stuck_reason__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bosdyn_msgs__msg__NavigationFeedbackResponse __attribute__((deprecated))
#else
# define DEPRECATED__bosdyn_msgs__msg__NavigationFeedbackResponse __declspec(deprecated)
#endif

namespace bosdyn_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct NavigationFeedbackResponse_
{
  using Type = NavigationFeedbackResponse_<ContainerAllocator>;

  explicit NavigationFeedbackResponse_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    status(_init),
    impaired_state(_init),
    remaining_route(_init),
    last_ko_tform_goal(_init),
    body_movement_status(_init),
    path_following_mode(_init),
    route_following_status(_init),
    blockage_status(_init),
    stuck_reason(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->header_is_set = false;
      this->impaired_state_is_set = false;
      this->remaining_route_is_set = false;
      this->command_id = 0ul;
      this->last_ko_tform_goal_is_set = false;
    }
  }

  explicit NavigationFeedbackResponse_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    status(_alloc, _init),
    impaired_state(_alloc, _init),
    remaining_route(_alloc, _init),
    last_ko_tform_goal(_alloc, _init),
    body_movement_status(_alloc, _init),
    path_following_mode(_alloc, _init),
    route_following_status(_alloc, _init),
    blockage_status(_alloc, _init),
    stuck_reason(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->header_is_set = false;
      this->impaired_state_is_set = false;
      this->remaining_route_is_set = false;
      this->command_id = 0ul;
      this->last_ko_tform_goal_is_set = false;
    }
  }

  // field types and members
  using _header_type =
    bosdyn_msgs::msg::ResponseHeader_<ContainerAllocator>;
  _header_type header;
  using _header_is_set_type =
    bool;
  _header_is_set_type header_is_set;
  using _status_type =
    bosdyn_msgs::msg::NavigationFeedbackResponseStatus_<ContainerAllocator>;
  _status_type status;
  using _impaired_state_type =
    bosdyn_msgs::msg::RobotImpairedState_<ContainerAllocator>;
  _impaired_state_type impaired_state;
  using _impaired_state_is_set_type =
    bool;
  _impaired_state_is_set_type impaired_state_is_set;
  using _area_callback_errors_type =
    std::vector<bosdyn_msgs::msg::KeyStringValueBosdynMsgsAreaCallbackError_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::KeyStringValueBosdynMsgsAreaCallbackError_<ContainerAllocator>>>;
  _area_callback_errors_type area_callback_errors;
  using _remaining_route_type =
    bosdyn_msgs::msg::Route_<ContainerAllocator>;
  _remaining_route_type remaining_route;
  using _remaining_route_is_set_type =
    bool;
  _remaining_route_is_set_type remaining_route_is_set;
  using _command_id_type =
    uint32_t;
  _command_id_type command_id;
  using _last_ko_tform_goal_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _last_ko_tform_goal_type last_ko_tform_goal;
  using _last_ko_tform_goal_is_set_type =
    bool;
  _last_ko_tform_goal_is_set_type last_ko_tform_goal_is_set;
  using _body_movement_status_type =
    bosdyn_msgs::msg::SE2TrajectoryCommandFeedbackBodyMovementStatus_<ContainerAllocator>;
  _body_movement_status_type body_movement_status;
  using _path_following_mode_type =
    bosdyn_msgs::msg::EdgeAnnotationsPathFollowingMode_<ContainerAllocator>;
  _path_following_mode_type path_following_mode;
  using _active_region_information_type =
    std::vector<bosdyn_msgs::msg::KeyStringValueBosdynMsgsNavigationFeedbackResponseActiveRegionInformation_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::KeyStringValueBosdynMsgsNavigationFeedbackResponseActiveRegionInformation_<ContainerAllocator>>>;
  _active_region_information_type active_region_information;
  using _route_following_status_type =
    bosdyn_msgs::msg::NavigationFeedbackResponseRouteFollowingStatus_<ContainerAllocator>;
  _route_following_status_type route_following_status;
  using _blockage_status_type =
    bosdyn_msgs::msg::NavigationFeedbackResponseBlockageStatus_<ContainerAllocator>;
  _blockage_status_type blockage_status;
  using _stuck_reason_type =
    bosdyn_msgs::msg::NavigationFeedbackResponseStuckReason_<ContainerAllocator>;
  _stuck_reason_type stuck_reason;

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
  Type & set__status(
    const bosdyn_msgs::msg::NavigationFeedbackResponseStatus_<ContainerAllocator> & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__impaired_state(
    const bosdyn_msgs::msg::RobotImpairedState_<ContainerAllocator> & _arg)
  {
    this->impaired_state = _arg;
    return *this;
  }
  Type & set__impaired_state_is_set(
    const bool & _arg)
  {
    this->impaired_state_is_set = _arg;
    return *this;
  }
  Type & set__area_callback_errors(
    const std::vector<bosdyn_msgs::msg::KeyStringValueBosdynMsgsAreaCallbackError_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::KeyStringValueBosdynMsgsAreaCallbackError_<ContainerAllocator>>> & _arg)
  {
    this->area_callback_errors = _arg;
    return *this;
  }
  Type & set__remaining_route(
    const bosdyn_msgs::msg::Route_<ContainerAllocator> & _arg)
  {
    this->remaining_route = _arg;
    return *this;
  }
  Type & set__remaining_route_is_set(
    const bool & _arg)
  {
    this->remaining_route_is_set = _arg;
    return *this;
  }
  Type & set__command_id(
    const uint32_t & _arg)
  {
    this->command_id = _arg;
    return *this;
  }
  Type & set__last_ko_tform_goal(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->last_ko_tform_goal = _arg;
    return *this;
  }
  Type & set__last_ko_tform_goal_is_set(
    const bool & _arg)
  {
    this->last_ko_tform_goal_is_set = _arg;
    return *this;
  }
  Type & set__body_movement_status(
    const bosdyn_msgs::msg::SE2TrajectoryCommandFeedbackBodyMovementStatus_<ContainerAllocator> & _arg)
  {
    this->body_movement_status = _arg;
    return *this;
  }
  Type & set__path_following_mode(
    const bosdyn_msgs::msg::EdgeAnnotationsPathFollowingMode_<ContainerAllocator> & _arg)
  {
    this->path_following_mode = _arg;
    return *this;
  }
  Type & set__active_region_information(
    const std::vector<bosdyn_msgs::msg::KeyStringValueBosdynMsgsNavigationFeedbackResponseActiveRegionInformation_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bosdyn_msgs::msg::KeyStringValueBosdynMsgsNavigationFeedbackResponseActiveRegionInformation_<ContainerAllocator>>> & _arg)
  {
    this->active_region_information = _arg;
    return *this;
  }
  Type & set__route_following_status(
    const bosdyn_msgs::msg::NavigationFeedbackResponseRouteFollowingStatus_<ContainerAllocator> & _arg)
  {
    this->route_following_status = _arg;
    return *this;
  }
  Type & set__blockage_status(
    const bosdyn_msgs::msg::NavigationFeedbackResponseBlockageStatus_<ContainerAllocator> & _arg)
  {
    this->blockage_status = _arg;
    return *this;
  }
  Type & set__stuck_reason(
    const bosdyn_msgs::msg::NavigationFeedbackResponseStuckReason_<ContainerAllocator> & _arg)
  {
    this->stuck_reason = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bosdyn_msgs::msg::NavigationFeedbackResponse_<ContainerAllocator> *;
  using ConstRawPtr =
    const bosdyn_msgs::msg::NavigationFeedbackResponse_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::NavigationFeedbackResponse_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bosdyn_msgs::msg::NavigationFeedbackResponse_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::NavigationFeedbackResponse_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::NavigationFeedbackResponse_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bosdyn_msgs::msg::NavigationFeedbackResponse_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bosdyn_msgs::msg::NavigationFeedbackResponse_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::NavigationFeedbackResponse_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bosdyn_msgs::msg::NavigationFeedbackResponse_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bosdyn_msgs__msg__NavigationFeedbackResponse
    std::shared_ptr<bosdyn_msgs::msg::NavigationFeedbackResponse_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bosdyn_msgs__msg__NavigationFeedbackResponse
    std::shared_ptr<bosdyn_msgs::msg::NavigationFeedbackResponse_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NavigationFeedbackResponse_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->header_is_set != other.header_is_set) {
      return false;
    }
    if (this->status != other.status) {
      return false;
    }
    if (this->impaired_state != other.impaired_state) {
      return false;
    }
    if (this->impaired_state_is_set != other.impaired_state_is_set) {
      return false;
    }
    if (this->area_callback_errors != other.area_callback_errors) {
      return false;
    }
    if (this->remaining_route != other.remaining_route) {
      return false;
    }
    if (this->remaining_route_is_set != other.remaining_route_is_set) {
      return false;
    }
    if (this->command_id != other.command_id) {
      return false;
    }
    if (this->last_ko_tform_goal != other.last_ko_tform_goal) {
      return false;
    }
    if (this->last_ko_tform_goal_is_set != other.last_ko_tform_goal_is_set) {
      return false;
    }
    if (this->body_movement_status != other.body_movement_status) {
      return false;
    }
    if (this->path_following_mode != other.path_following_mode) {
      return false;
    }
    if (this->active_region_information != other.active_region_information) {
      return false;
    }
    if (this->route_following_status != other.route_following_status) {
      return false;
    }
    if (this->blockage_status != other.blockage_status) {
      return false;
    }
    if (this->stuck_reason != other.stuck_reason) {
      return false;
    }
    return true;
  }
  bool operator!=(const NavigationFeedbackResponse_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NavigationFeedbackResponse_

// alias to use template instance with default allocator
using NavigationFeedbackResponse =
  bosdyn_msgs::msg::NavigationFeedbackResponse_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__NAVIGATION_FEEDBACK_RESPONSE__STRUCT_HPP_
