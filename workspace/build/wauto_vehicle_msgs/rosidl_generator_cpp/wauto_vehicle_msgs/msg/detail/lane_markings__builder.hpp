// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from wauto_vehicle_msgs:msg/LaneMarkings.idl
// generated code does not contain a copyright notice

#ifndef WAUTO_VEHICLE_MSGS__MSG__DETAIL__LANE_MARKINGS__BUILDER_HPP_
#define WAUTO_VEHICLE_MSGS__MSG__DETAIL__LANE_MARKINGS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "wauto_vehicle_msgs/msg/detail/lane_markings__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace wauto_vehicle_msgs
{

namespace msg
{

namespace builder
{

class Init_LaneMarkings_observation_time_of_hour
{
public:
  explicit Init_LaneMarkings_observation_time_of_hour(::wauto_vehicle_msgs::msg::LaneMarkings & msg)
  : msg_(msg)
  {}
  ::wauto_vehicle_msgs::msg::LaneMarkings observation_time_of_hour(::wauto_vehicle_msgs::msg::LaneMarkings::_observation_time_of_hour_type arg)
  {
    msg_.observation_time_of_hour = std::move(arg);
    return std::move(msg_);
  }

private:
  ::wauto_vehicle_msgs::msg::LaneMarkings msg_;
};

class Init_LaneMarkings_currentlanemarkingcount
{
public:
  explicit Init_LaneMarkings_currentlanemarkingcount(::wauto_vehicle_msgs::msg::LaneMarkings & msg)
  : msg_(msg)
  {}
  Init_LaneMarkings_observation_time_of_hour currentlanemarkingcount(::wauto_vehicle_msgs::msg::LaneMarkings::_currentlanemarkingcount_type arg)
  {
    msg_.currentlanemarkingcount = std::move(arg);
    return Init_LaneMarkings_observation_time_of_hour(msg_);
  }

private:
  ::wauto_vehicle_msgs::msg::LaneMarkings msg_;
};

class Init_LaneMarkings_rolling_count
{
public:
  Init_LaneMarkings_rolling_count()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LaneMarkings_currentlanemarkingcount rolling_count(::wauto_vehicle_msgs::msg::LaneMarkings::_rolling_count_type arg)
  {
    msg_.rolling_count = std::move(arg);
    return Init_LaneMarkings_currentlanemarkingcount(msg_);
  }

private:
  ::wauto_vehicle_msgs::msg::LaneMarkings msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::wauto_vehicle_msgs::msg::LaneMarkings>()
{
  return wauto_vehicle_msgs::msg::builder::Init_LaneMarkings_rolling_count();
}

}  // namespace wauto_vehicle_msgs

#endif  // WAUTO_VEHICLE_MSGS__MSG__DETAIL__LANE_MARKINGS__BUILDER_HPP_
