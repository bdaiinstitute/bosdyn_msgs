// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/GetLocalizationStateResponse.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__GET_LOCALIZATION_STATE_RESPONSE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__GET_LOCALIZATION_STATE_RESPONSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/get_localization_state_response__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_GetLocalizationStateResponse_lost_detector_state_is_set
{
public:
  explicit Init_GetLocalizationStateResponse_lost_detector_state_is_set(::bosdyn_msgs::msg::GetLocalizationStateResponse & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::GetLocalizationStateResponse lost_detector_state_is_set(::bosdyn_msgs::msg::GetLocalizationStateResponse::_lost_detector_state_is_set_type arg)
  {
    msg_.lost_detector_state_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetLocalizationStateResponse msg_;
};

class Init_GetLocalizationStateResponse_lost_detector_state
{
public:
  explicit Init_GetLocalizationStateResponse_lost_detector_state(::bosdyn_msgs::msg::GetLocalizationStateResponse & msg)
  : msg_(msg)
  {}
  Init_GetLocalizationStateResponse_lost_detector_state_is_set lost_detector_state(::bosdyn_msgs::msg::GetLocalizationStateResponse::_lost_detector_state_type arg)
  {
    msg_.lost_detector_state = std::move(arg);
    return Init_GetLocalizationStateResponse_lost_detector_state_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetLocalizationStateResponse msg_;
};

class Init_GetLocalizationStateResponse_live_data_is_set
{
public:
  explicit Init_GetLocalizationStateResponse_live_data_is_set(::bosdyn_msgs::msg::GetLocalizationStateResponse & msg)
  : msg_(msg)
  {}
  Init_GetLocalizationStateResponse_lost_detector_state live_data_is_set(::bosdyn_msgs::msg::GetLocalizationStateResponse::_live_data_is_set_type arg)
  {
    msg_.live_data_is_set = std::move(arg);
    return Init_GetLocalizationStateResponse_lost_detector_state(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetLocalizationStateResponse msg_;
};

class Init_GetLocalizationStateResponse_live_data
{
public:
  explicit Init_GetLocalizationStateResponse_live_data(::bosdyn_msgs::msg::GetLocalizationStateResponse & msg)
  : msg_(msg)
  {}
  Init_GetLocalizationStateResponse_live_data_is_set live_data(::bosdyn_msgs::msg::GetLocalizationStateResponse::_live_data_type arg)
  {
    msg_.live_data = std::move(arg);
    return Init_GetLocalizationStateResponse_live_data_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetLocalizationStateResponse msg_;
};

class Init_GetLocalizationStateResponse_remote_cloud_status
{
public:
  explicit Init_GetLocalizationStateResponse_remote_cloud_status(::bosdyn_msgs::msg::GetLocalizationStateResponse & msg)
  : msg_(msg)
  {}
  Init_GetLocalizationStateResponse_live_data remote_cloud_status(::bosdyn_msgs::msg::GetLocalizationStateResponse::_remote_cloud_status_type arg)
  {
    msg_.remote_cloud_status = std::move(arg);
    return Init_GetLocalizationStateResponse_live_data(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetLocalizationStateResponse msg_;
};

class Init_GetLocalizationStateResponse_robot_kinematics_is_set
{
public:
  explicit Init_GetLocalizationStateResponse_robot_kinematics_is_set(::bosdyn_msgs::msg::GetLocalizationStateResponse & msg)
  : msg_(msg)
  {}
  Init_GetLocalizationStateResponse_remote_cloud_status robot_kinematics_is_set(::bosdyn_msgs::msg::GetLocalizationStateResponse::_robot_kinematics_is_set_type arg)
  {
    msg_.robot_kinematics_is_set = std::move(arg);
    return Init_GetLocalizationStateResponse_remote_cloud_status(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetLocalizationStateResponse msg_;
};

class Init_GetLocalizationStateResponse_robot_kinematics
{
public:
  explicit Init_GetLocalizationStateResponse_robot_kinematics(::bosdyn_msgs::msg::GetLocalizationStateResponse & msg)
  : msg_(msg)
  {}
  Init_GetLocalizationStateResponse_robot_kinematics_is_set robot_kinematics(::bosdyn_msgs::msg::GetLocalizationStateResponse::_robot_kinematics_type arg)
  {
    msg_.robot_kinematics = std::move(arg);
    return Init_GetLocalizationStateResponse_robot_kinematics_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetLocalizationStateResponse msg_;
};

class Init_GetLocalizationStateResponse_localization_is_set
{
public:
  explicit Init_GetLocalizationStateResponse_localization_is_set(::bosdyn_msgs::msg::GetLocalizationStateResponse & msg)
  : msg_(msg)
  {}
  Init_GetLocalizationStateResponse_robot_kinematics localization_is_set(::bosdyn_msgs::msg::GetLocalizationStateResponse::_localization_is_set_type arg)
  {
    msg_.localization_is_set = std::move(arg);
    return Init_GetLocalizationStateResponse_robot_kinematics(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetLocalizationStateResponse msg_;
};

class Init_GetLocalizationStateResponse_localization
{
public:
  explicit Init_GetLocalizationStateResponse_localization(::bosdyn_msgs::msg::GetLocalizationStateResponse & msg)
  : msg_(msg)
  {}
  Init_GetLocalizationStateResponse_localization_is_set localization(::bosdyn_msgs::msg::GetLocalizationStateResponse::_localization_type arg)
  {
    msg_.localization = std::move(arg);
    return Init_GetLocalizationStateResponse_localization_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetLocalizationStateResponse msg_;
};

class Init_GetLocalizationStateResponse_header_is_set
{
public:
  explicit Init_GetLocalizationStateResponse_header_is_set(::bosdyn_msgs::msg::GetLocalizationStateResponse & msg)
  : msg_(msg)
  {}
  Init_GetLocalizationStateResponse_localization header_is_set(::bosdyn_msgs::msg::GetLocalizationStateResponse::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_GetLocalizationStateResponse_localization(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetLocalizationStateResponse msg_;
};

class Init_GetLocalizationStateResponse_header
{
public:
  Init_GetLocalizationStateResponse_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetLocalizationStateResponse_header_is_set header(::bosdyn_msgs::msg::GetLocalizationStateResponse::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_GetLocalizationStateResponse_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetLocalizationStateResponse msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::GetLocalizationStateResponse>()
{
  return bosdyn_msgs::msg::builder::Init_GetLocalizationStateResponse_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__GET_LOCALIZATION_STATE_RESPONSE__BUILDER_HPP_
