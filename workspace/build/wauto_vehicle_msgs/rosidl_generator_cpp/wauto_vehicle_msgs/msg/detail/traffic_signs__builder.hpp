// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from wauto_vehicle_msgs:msg/TrafficSigns.idl
// generated code does not contain a copyright notice

#ifndef WAUTO_VEHICLE_MSGS__MSG__DETAIL__TRAFFIC_SIGNS__BUILDER_HPP_
#define WAUTO_VEHICLE_MSGS__MSG__DETAIL__TRAFFIC_SIGNS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "wauto_vehicle_msgs/msg/detail/traffic_signs__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace wauto_vehicle_msgs
{

namespace msg
{

namespace builder
{

class Init_TrafficSigns_observation_time_of_hour
{
public:
  explicit Init_TrafficSigns_observation_time_of_hour(::wauto_vehicle_msgs::msg::TrafficSigns & msg)
  : msg_(msg)
  {}
  ::wauto_vehicle_msgs::msg::TrafficSigns observation_time_of_hour(::wauto_vehicle_msgs::msg::TrafficSigns::_observation_time_of_hour_type arg)
  {
    msg_.observation_time_of_hour = std::move(arg);
    return std::move(msg_);
  }

private:
  ::wauto_vehicle_msgs::msg::TrafficSigns msg_;
};

class Init_TrafficSigns_current_sign_count
{
public:
  explicit Init_TrafficSigns_current_sign_count(::wauto_vehicle_msgs::msg::TrafficSigns & msg)
  : msg_(msg)
  {}
  Init_TrafficSigns_observation_time_of_hour current_sign_count(::wauto_vehicle_msgs::msg::TrafficSigns::_current_sign_count_type arg)
  {
    msg_.current_sign_count = std::move(arg);
    return Init_TrafficSigns_observation_time_of_hour(msg_);
  }

private:
  ::wauto_vehicle_msgs::msg::TrafficSigns msg_;
};

class Init_TrafficSigns_rolling_count
{
public:
  Init_TrafficSigns_rolling_count()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TrafficSigns_current_sign_count rolling_count(::wauto_vehicle_msgs::msg::TrafficSigns::_rolling_count_type arg)
  {
    msg_.rolling_count = std::move(arg);
    return Init_TrafficSigns_current_sign_count(msg_);
  }

private:
  ::wauto_vehicle_msgs::msg::TrafficSigns msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::wauto_vehicle_msgs::msg::TrafficSigns>()
{
  return wauto_vehicle_msgs::msg::builder::Init_TrafficSigns_rolling_count();
}

}  // namespace wauto_vehicle_msgs

#endif  // WAUTO_VEHICLE_MSGS__MSG__DETAIL__TRAFFIC_SIGNS__BUILDER_HPP_
