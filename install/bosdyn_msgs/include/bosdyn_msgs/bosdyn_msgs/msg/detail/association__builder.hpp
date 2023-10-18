// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/Association.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ASSOCIATION__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__ASSOCIATION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/association__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_Association_beacon_loss_count
{
public:
  explicit Init_Association_beacon_loss_count(::bosdyn_msgs::msg::Association & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::Association beacon_loss_count(::bosdyn_msgs::msg::Association::_beacon_loss_count_type arg)
  {
    msg_.beacon_loss_count = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::Association msg_;
};

class Init_Association_beacons_received
{
public:
  explicit Init_Association_beacons_received(::bosdyn_msgs::msg::Association & msg)
  : msg_(msg)
  {}
  Init_Association_beacon_loss_count beacons_received(::bosdyn_msgs::msg::Association::_beacons_received_type arg)
  {
    msg_.beacons_received = std::move(arg);
    return Init_Association_beacon_loss_count(msg_);
  }

private:
  ::bosdyn_msgs::msg::Association msg_;
};

class Init_Association_tx_failed
{
public:
  explicit Init_Association_tx_failed(::bosdyn_msgs::msg::Association & msg)
  : msg_(msg)
  {}
  Init_Association_beacons_received tx_failed(::bosdyn_msgs::msg::Association::_tx_failed_type arg)
  {
    msg_.tx_failed = std::move(arg);
    return Init_Association_beacons_received(msg_);
  }

private:
  ::bosdyn_msgs::msg::Association msg_;
};

class Init_Association_tx_retries
{
public:
  explicit Init_Association_tx_retries(::bosdyn_msgs::msg::Association & msg)
  : msg_(msg)
  {}
  Init_Association_tx_failed tx_retries(::bosdyn_msgs::msg::Association::_tx_retries_type arg)
  {
    msg_.tx_retries = std::move(arg);
    return Init_Association_tx_failed(msg_);
  }

private:
  ::bosdyn_msgs::msg::Association msg_;
};

class Init_Association_tx_bits_per_second
{
public:
  explicit Init_Association_tx_bits_per_second(::bosdyn_msgs::msg::Association & msg)
  : msg_(msg)
  {}
  Init_Association_tx_retries tx_bits_per_second(::bosdyn_msgs::msg::Association::_tx_bits_per_second_type arg)
  {
    msg_.tx_bits_per_second = std::move(arg);
    return Init_Association_tx_retries(msg_);
  }

private:
  ::bosdyn_msgs::msg::Association msg_;
};

class Init_Association_tx_packets
{
public:
  explicit Init_Association_tx_packets(::bosdyn_msgs::msg::Association & msg)
  : msg_(msg)
  {}
  Init_Association_tx_bits_per_second tx_packets(::bosdyn_msgs::msg::Association::_tx_packets_type arg)
  {
    msg_.tx_packets = std::move(arg);
    return Init_Association_tx_bits_per_second(msg_);
  }

private:
  ::bosdyn_msgs::msg::Association msg_;
};

class Init_Association_tx_bytes
{
public:
  explicit Init_Association_tx_bytes(::bosdyn_msgs::msg::Association & msg)
  : msg_(msg)
  {}
  Init_Association_tx_packets tx_bytes(::bosdyn_msgs::msg::Association::_tx_bytes_type arg)
  {
    msg_.tx_bytes = std::move(arg);
    return Init_Association_tx_packets(msg_);
  }

private:
  ::bosdyn_msgs::msg::Association msg_;
};

class Init_Association_rx_bits_per_second
{
public:
  explicit Init_Association_rx_bits_per_second(::bosdyn_msgs::msg::Association & msg)
  : msg_(msg)
  {}
  Init_Association_tx_bytes rx_bits_per_second(::bosdyn_msgs::msg::Association::_rx_bits_per_second_type arg)
  {
    msg_.rx_bits_per_second = std::move(arg);
    return Init_Association_tx_bytes(msg_);
  }

private:
  ::bosdyn_msgs::msg::Association msg_;
};

class Init_Association_rx_packets
{
public:
  explicit Init_Association_rx_packets(::bosdyn_msgs::msg::Association & msg)
  : msg_(msg)
  {}
  Init_Association_rx_bits_per_second rx_packets(::bosdyn_msgs::msg::Association::_rx_packets_type arg)
  {
    msg_.rx_packets = std::move(arg);
    return Init_Association_rx_bits_per_second(msg_);
  }

private:
  ::bosdyn_msgs::msg::Association msg_;
};

class Init_Association_rx_bytes
{
public:
  explicit Init_Association_rx_bytes(::bosdyn_msgs::msg::Association & msg)
  : msg_(msg)
  {}
  Init_Association_rx_packets rx_bytes(::bosdyn_msgs::msg::Association::_rx_bytes_type arg)
  {
    msg_.rx_bytes = std::move(arg);
    return Init_Association_rx_packets(msg_);
  }

private:
  ::bosdyn_msgs::msg::Association msg_;
};

class Init_Association_expected_bits_per_second
{
public:
  explicit Init_Association_expected_bits_per_second(::bosdyn_msgs::msg::Association & msg)
  : msg_(msg)
  {}
  Init_Association_rx_bytes expected_bits_per_second(::bosdyn_msgs::msg::Association::_expected_bits_per_second_type arg)
  {
    msg_.expected_bits_per_second = std::move(arg);
    return Init_Association_rx_bytes(msg_);
  }

private:
  ::bosdyn_msgs::msg::Association msg_;
};

class Init_Association_rx_beacon_signal_avg_dbm
{
public:
  explicit Init_Association_rx_beacon_signal_avg_dbm(::bosdyn_msgs::msg::Association & msg)
  : msg_(msg)
  {}
  Init_Association_expected_bits_per_second rx_beacon_signal_avg_dbm(::bosdyn_msgs::msg::Association::_rx_beacon_signal_avg_dbm_type arg)
  {
    msg_.rx_beacon_signal_avg_dbm = std::move(arg);
    return Init_Association_expected_bits_per_second(msg_);
  }

private:
  ::bosdyn_msgs::msg::Association msg_;
};

class Init_Association_rx_signal_avg_dbm
{
public:
  explicit Init_Association_rx_signal_avg_dbm(::bosdyn_msgs::msg::Association & msg)
  : msg_(msg)
  {}
  Init_Association_rx_beacon_signal_avg_dbm rx_signal_avg_dbm(::bosdyn_msgs::msg::Association::_rx_signal_avg_dbm_type arg)
  {
    msg_.rx_signal_avg_dbm = std::move(arg);
    return Init_Association_rx_beacon_signal_avg_dbm(msg_);
  }

private:
  ::bosdyn_msgs::msg::Association msg_;
};

class Init_Association_rx_signal_dbm
{
public:
  explicit Init_Association_rx_signal_dbm(::bosdyn_msgs::msg::Association & msg)
  : msg_(msg)
  {}
  Init_Association_rx_signal_avg_dbm rx_signal_dbm(::bosdyn_msgs::msg::Association::_rx_signal_dbm_type arg)
  {
    msg_.rx_signal_dbm = std::move(arg);
    return Init_Association_rx_signal_avg_dbm(msg_);
  }

private:
  ::bosdyn_msgs::msg::Association msg_;
};

class Init_Association_connected_time_is_set
{
public:
  explicit Init_Association_connected_time_is_set(::bosdyn_msgs::msg::Association & msg)
  : msg_(msg)
  {}
  Init_Association_rx_signal_dbm connected_time_is_set(::bosdyn_msgs::msg::Association::_connected_time_is_set_type arg)
  {
    msg_.connected_time_is_set = std::move(arg);
    return Init_Association_rx_signal_dbm(msg_);
  }

private:
  ::bosdyn_msgs::msg::Association msg_;
};

class Init_Association_connected_time
{
public:
  explicit Init_Association_connected_time(::bosdyn_msgs::msg::Association & msg)
  : msg_(msg)
  {}
  Init_Association_connected_time_is_set connected_time(::bosdyn_msgs::msg::Association::_connected_time_type arg)
  {
    msg_.connected_time = std::move(arg);
    return Init_Association_connected_time_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::Association msg_;
};

class Init_Association_mac_address
{
public:
  Init_Association_mac_address()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Association_connected_time mac_address(::bosdyn_msgs::msg::Association::_mac_address_type arg)
  {
    msg_.mac_address = std::move(arg);
    return Init_Association_connected_time(msg_);
  }

private:
  ::bosdyn_msgs::msg::Association msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::Association>()
{
  return bosdyn_msgs::msg::builder::Init_Association_mac_address();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__ASSOCIATION__BUILDER_HPP_
