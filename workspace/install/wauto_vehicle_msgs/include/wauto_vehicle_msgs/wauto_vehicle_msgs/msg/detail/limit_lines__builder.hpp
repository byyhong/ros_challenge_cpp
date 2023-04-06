// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from wauto_vehicle_msgs:msg/LimitLines.idl
// generated code does not contain a copyright notice

#ifndef WAUTO_VEHICLE_MSGS__MSG__DETAIL__LIMIT_LINES__BUILDER_HPP_
#define WAUTO_VEHICLE_MSGS__MSG__DETAIL__LIMIT_LINES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "wauto_vehicle_msgs/msg/detail/limit_lines__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace wauto_vehicle_msgs
{

namespace msg
{

namespace builder
{

class Init_LimitLines_observation_time_of_hour
{
public:
  explicit Init_LimitLines_observation_time_of_hour(::wauto_vehicle_msgs::msg::LimitLines & msg)
  : msg_(msg)
  {}
  ::wauto_vehicle_msgs::msg::LimitLines observation_time_of_hour(::wauto_vehicle_msgs::msg::LimitLines::_observation_time_of_hour_type arg)
  {
    msg_.observation_time_of_hour = std::move(arg);
    return std::move(msg_);
  }

private:
  ::wauto_vehicle_msgs::msg::LimitLines msg_;
};

class Init_LimitLines_current_limit_line_count
{
public:
  explicit Init_LimitLines_current_limit_line_count(::wauto_vehicle_msgs::msg::LimitLines & msg)
  : msg_(msg)
  {}
  Init_LimitLines_observation_time_of_hour current_limit_line_count(::wauto_vehicle_msgs::msg::LimitLines::_current_limit_line_count_type arg)
  {
    msg_.current_limit_line_count = std::move(arg);
    return Init_LimitLines_observation_time_of_hour(msg_);
  }

private:
  ::wauto_vehicle_msgs::msg::LimitLines msg_;
};

class Init_LimitLines_rolling_count
{
public:
  Init_LimitLines_rolling_count()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LimitLines_current_limit_line_count rolling_count(::wauto_vehicle_msgs::msg::LimitLines::_rolling_count_type arg)
  {
    msg_.rolling_count = std::move(arg);
    return Init_LimitLines_current_limit_line_count(msg_);
  }

private:
  ::wauto_vehicle_msgs::msg::LimitLines msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::wauto_vehicle_msgs::msg::LimitLines>()
{
  return wauto_vehicle_msgs::msg::builder::Init_LimitLines_rolling_count();
}

}  // namespace wauto_vehicle_msgs

#endif  // WAUTO_VEHICLE_MSGS__MSG__DETAIL__LIMIT_LINES__BUILDER_HPP_
