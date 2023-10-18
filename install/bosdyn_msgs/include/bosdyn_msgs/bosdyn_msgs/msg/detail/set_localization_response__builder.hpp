// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/SetLocalizationResponse.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__SET_LOCALIZATION_RESPONSE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__SET_LOCALIZATION_RESPONSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/set_localization_response__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_SetLocalizationResponse_quality_check_result
{
public:
  explicit Init_SetLocalizationResponse_quality_check_result(::bosdyn_msgs::msg::SetLocalizationResponse & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::SetLocalizationResponse quality_check_result(::bosdyn_msgs::msg::SetLocalizationResponse::_quality_check_result_type arg)
  {
    msg_.quality_check_result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::SetLocalizationResponse msg_;
};

class Init_SetLocalizationResponse_sensor_status_is_set
{
public:
  explicit Init_SetLocalizationResponse_sensor_status_is_set(::bosdyn_msgs::msg::SetLocalizationResponse & msg)
  : msg_(msg)
  {}
  Init_SetLocalizationResponse_quality_check_result sensor_status_is_set(::bosdyn_msgs::msg::SetLocalizationResponse::_sensor_status_is_set_type arg)
  {
    msg_.sensor_status_is_set = std::move(arg);
    return Init_SetLocalizationResponse_quality_check_result(msg_);
  }

private:
  ::bosdyn_msgs::msg::SetLocalizationResponse msg_;
};

class Init_SetLocalizationResponse_sensor_status
{
public:
  explicit Init_SetLocalizationResponse_sensor_status(::bosdyn_msgs::msg::SetLocalizationResponse & msg)
  : msg_(msg)
  {}
  Init_SetLocalizationResponse_sensor_status_is_set sensor_status(::bosdyn_msgs::msg::SetLocalizationResponse::_sensor_status_type arg)
  {
    msg_.sensor_status = std::move(arg);
    return Init_SetLocalizationResponse_sensor_status_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::SetLocalizationResponse msg_;
};

class Init_SetLocalizationResponse_impaired_state_is_set
{
public:
  explicit Init_SetLocalizationResponse_impaired_state_is_set(::bosdyn_msgs::msg::SetLocalizationResponse & msg)
  : msg_(msg)
  {}
  Init_SetLocalizationResponse_sensor_status impaired_state_is_set(::bosdyn_msgs::msg::SetLocalizationResponse::_impaired_state_is_set_type arg)
  {
    msg_.impaired_state_is_set = std::move(arg);
    return Init_SetLocalizationResponse_sensor_status(msg_);
  }

private:
  ::bosdyn_msgs::msg::SetLocalizationResponse msg_;
};

class Init_SetLocalizationResponse_impaired_state
{
public:
  explicit Init_SetLocalizationResponse_impaired_state(::bosdyn_msgs::msg::SetLocalizationResponse & msg)
  : msg_(msg)
  {}
  Init_SetLocalizationResponse_impaired_state_is_set impaired_state(::bosdyn_msgs::msg::SetLocalizationResponse::_impaired_state_type arg)
  {
    msg_.impaired_state = std::move(arg);
    return Init_SetLocalizationResponse_impaired_state_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::SetLocalizationResponse msg_;
};

class Init_SetLocalizationResponse_suspected_ambiguity_is_set
{
public:
  explicit Init_SetLocalizationResponse_suspected_ambiguity_is_set(::bosdyn_msgs::msg::SetLocalizationResponse & msg)
  : msg_(msg)
  {}
  Init_SetLocalizationResponse_impaired_state suspected_ambiguity_is_set(::bosdyn_msgs::msg::SetLocalizationResponse::_suspected_ambiguity_is_set_type arg)
  {
    msg_.suspected_ambiguity_is_set = std::move(arg);
    return Init_SetLocalizationResponse_impaired_state(msg_);
  }

private:
  ::bosdyn_msgs::msg::SetLocalizationResponse msg_;
};

class Init_SetLocalizationResponse_suspected_ambiguity
{
public:
  explicit Init_SetLocalizationResponse_suspected_ambiguity(::bosdyn_msgs::msg::SetLocalizationResponse & msg)
  : msg_(msg)
  {}
  Init_SetLocalizationResponse_suspected_ambiguity_is_set suspected_ambiguity(::bosdyn_msgs::msg::SetLocalizationResponse::_suspected_ambiguity_type arg)
  {
    msg_.suspected_ambiguity = std::move(arg);
    return Init_SetLocalizationResponse_suspected_ambiguity_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::SetLocalizationResponse msg_;
};

class Init_SetLocalizationResponse_localization_is_set
{
public:
  explicit Init_SetLocalizationResponse_localization_is_set(::bosdyn_msgs::msg::SetLocalizationResponse & msg)
  : msg_(msg)
  {}
  Init_SetLocalizationResponse_suspected_ambiguity localization_is_set(::bosdyn_msgs::msg::SetLocalizationResponse::_localization_is_set_type arg)
  {
    msg_.localization_is_set = std::move(arg);
    return Init_SetLocalizationResponse_suspected_ambiguity(msg_);
  }

private:
  ::bosdyn_msgs::msg::SetLocalizationResponse msg_;
};

class Init_SetLocalizationResponse_localization
{
public:
  explicit Init_SetLocalizationResponse_localization(::bosdyn_msgs::msg::SetLocalizationResponse & msg)
  : msg_(msg)
  {}
  Init_SetLocalizationResponse_localization_is_set localization(::bosdyn_msgs::msg::SetLocalizationResponse::_localization_type arg)
  {
    msg_.localization = std::move(arg);
    return Init_SetLocalizationResponse_localization_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::SetLocalizationResponse msg_;
};

class Init_SetLocalizationResponse_error_report
{
public:
  explicit Init_SetLocalizationResponse_error_report(::bosdyn_msgs::msg::SetLocalizationResponse & msg)
  : msg_(msg)
  {}
  Init_SetLocalizationResponse_localization error_report(::bosdyn_msgs::msg::SetLocalizationResponse::_error_report_type arg)
  {
    msg_.error_report = std::move(arg);
    return Init_SetLocalizationResponse_localization(msg_);
  }

private:
  ::bosdyn_msgs::msg::SetLocalizationResponse msg_;
};

class Init_SetLocalizationResponse_status
{
public:
  explicit Init_SetLocalizationResponse_status(::bosdyn_msgs::msg::SetLocalizationResponse & msg)
  : msg_(msg)
  {}
  Init_SetLocalizationResponse_error_report status(::bosdyn_msgs::msg::SetLocalizationResponse::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_SetLocalizationResponse_error_report(msg_);
  }

private:
  ::bosdyn_msgs::msg::SetLocalizationResponse msg_;
};

class Init_SetLocalizationResponse_lease_use_result_is_set
{
public:
  explicit Init_SetLocalizationResponse_lease_use_result_is_set(::bosdyn_msgs::msg::SetLocalizationResponse & msg)
  : msg_(msg)
  {}
  Init_SetLocalizationResponse_status lease_use_result_is_set(::bosdyn_msgs::msg::SetLocalizationResponse::_lease_use_result_is_set_type arg)
  {
    msg_.lease_use_result_is_set = std::move(arg);
    return Init_SetLocalizationResponse_status(msg_);
  }

private:
  ::bosdyn_msgs::msg::SetLocalizationResponse msg_;
};

class Init_SetLocalizationResponse_lease_use_result
{
public:
  explicit Init_SetLocalizationResponse_lease_use_result(::bosdyn_msgs::msg::SetLocalizationResponse & msg)
  : msg_(msg)
  {}
  Init_SetLocalizationResponse_lease_use_result_is_set lease_use_result(::bosdyn_msgs::msg::SetLocalizationResponse::_lease_use_result_type arg)
  {
    msg_.lease_use_result = std::move(arg);
    return Init_SetLocalizationResponse_lease_use_result_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::SetLocalizationResponse msg_;
};

class Init_SetLocalizationResponse_header_is_set
{
public:
  explicit Init_SetLocalizationResponse_header_is_set(::bosdyn_msgs::msg::SetLocalizationResponse & msg)
  : msg_(msg)
  {}
  Init_SetLocalizationResponse_lease_use_result header_is_set(::bosdyn_msgs::msg::SetLocalizationResponse::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_SetLocalizationResponse_lease_use_result(msg_);
  }

private:
  ::bosdyn_msgs::msg::SetLocalizationResponse msg_;
};

class Init_SetLocalizationResponse_header
{
public:
  Init_SetLocalizationResponse_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetLocalizationResponse_header_is_set header(::bosdyn_msgs::msg::SetLocalizationResponse::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_SetLocalizationResponse_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::SetLocalizationResponse msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::SetLocalizationResponse>()
{
  return bosdyn_msgs::msg::builder::Init_SetLocalizationResponse_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__SET_LOCALIZATION_RESPONSE__BUILDER_HPP_
