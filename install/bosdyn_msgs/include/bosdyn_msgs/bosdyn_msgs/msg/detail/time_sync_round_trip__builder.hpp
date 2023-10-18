// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/TimeSyncRoundTrip.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__TIME_SYNC_ROUND_TRIP__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__TIME_SYNC_ROUND_TRIP__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/time_sync_round_trip__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_TimeSyncRoundTrip_client_rx_is_set
{
public:
  explicit Init_TimeSyncRoundTrip_client_rx_is_set(::bosdyn_msgs::msg::TimeSyncRoundTrip & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::TimeSyncRoundTrip client_rx_is_set(::bosdyn_msgs::msg::TimeSyncRoundTrip::_client_rx_is_set_type arg)
  {
    msg_.client_rx_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::TimeSyncRoundTrip msg_;
};

class Init_TimeSyncRoundTrip_client_rx
{
public:
  explicit Init_TimeSyncRoundTrip_client_rx(::bosdyn_msgs::msg::TimeSyncRoundTrip & msg)
  : msg_(msg)
  {}
  Init_TimeSyncRoundTrip_client_rx_is_set client_rx(::bosdyn_msgs::msg::TimeSyncRoundTrip::_client_rx_type arg)
  {
    msg_.client_rx = std::move(arg);
    return Init_TimeSyncRoundTrip_client_rx_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::TimeSyncRoundTrip msg_;
};

class Init_TimeSyncRoundTrip_server_tx_is_set
{
public:
  explicit Init_TimeSyncRoundTrip_server_tx_is_set(::bosdyn_msgs::msg::TimeSyncRoundTrip & msg)
  : msg_(msg)
  {}
  Init_TimeSyncRoundTrip_client_rx server_tx_is_set(::bosdyn_msgs::msg::TimeSyncRoundTrip::_server_tx_is_set_type arg)
  {
    msg_.server_tx_is_set = std::move(arg);
    return Init_TimeSyncRoundTrip_client_rx(msg_);
  }

private:
  ::bosdyn_msgs::msg::TimeSyncRoundTrip msg_;
};

class Init_TimeSyncRoundTrip_server_tx
{
public:
  explicit Init_TimeSyncRoundTrip_server_tx(::bosdyn_msgs::msg::TimeSyncRoundTrip & msg)
  : msg_(msg)
  {}
  Init_TimeSyncRoundTrip_server_tx_is_set server_tx(::bosdyn_msgs::msg::TimeSyncRoundTrip::_server_tx_type arg)
  {
    msg_.server_tx = std::move(arg);
    return Init_TimeSyncRoundTrip_server_tx_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::TimeSyncRoundTrip msg_;
};

class Init_TimeSyncRoundTrip_server_rx_is_set
{
public:
  explicit Init_TimeSyncRoundTrip_server_rx_is_set(::bosdyn_msgs::msg::TimeSyncRoundTrip & msg)
  : msg_(msg)
  {}
  Init_TimeSyncRoundTrip_server_tx server_rx_is_set(::bosdyn_msgs::msg::TimeSyncRoundTrip::_server_rx_is_set_type arg)
  {
    msg_.server_rx_is_set = std::move(arg);
    return Init_TimeSyncRoundTrip_server_tx(msg_);
  }

private:
  ::bosdyn_msgs::msg::TimeSyncRoundTrip msg_;
};

class Init_TimeSyncRoundTrip_server_rx
{
public:
  explicit Init_TimeSyncRoundTrip_server_rx(::bosdyn_msgs::msg::TimeSyncRoundTrip & msg)
  : msg_(msg)
  {}
  Init_TimeSyncRoundTrip_server_rx_is_set server_rx(::bosdyn_msgs::msg::TimeSyncRoundTrip::_server_rx_type arg)
  {
    msg_.server_rx = std::move(arg);
    return Init_TimeSyncRoundTrip_server_rx_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::TimeSyncRoundTrip msg_;
};

class Init_TimeSyncRoundTrip_client_tx_is_set
{
public:
  explicit Init_TimeSyncRoundTrip_client_tx_is_set(::bosdyn_msgs::msg::TimeSyncRoundTrip & msg)
  : msg_(msg)
  {}
  Init_TimeSyncRoundTrip_server_rx client_tx_is_set(::bosdyn_msgs::msg::TimeSyncRoundTrip::_client_tx_is_set_type arg)
  {
    msg_.client_tx_is_set = std::move(arg);
    return Init_TimeSyncRoundTrip_server_rx(msg_);
  }

private:
  ::bosdyn_msgs::msg::TimeSyncRoundTrip msg_;
};

class Init_TimeSyncRoundTrip_client_tx
{
public:
  Init_TimeSyncRoundTrip_client_tx()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TimeSyncRoundTrip_client_tx_is_set client_tx(::bosdyn_msgs::msg::TimeSyncRoundTrip::_client_tx_type arg)
  {
    msg_.client_tx = std::move(arg);
    return Init_TimeSyncRoundTrip_client_tx_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::TimeSyncRoundTrip msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::TimeSyncRoundTrip>()
{
  return bosdyn_msgs::msg::builder::Init_TimeSyncRoundTrip_client_tx();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__TIME_SYNC_ROUND_TRIP__BUILDER_HPP_
