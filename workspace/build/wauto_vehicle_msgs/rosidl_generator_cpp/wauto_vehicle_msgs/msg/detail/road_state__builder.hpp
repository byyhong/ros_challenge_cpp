// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from wauto_vehicle_msgs:msg/RoadState.idl
// generated code does not contain a copyright notice

#ifndef WAUTO_VEHICLE_MSGS__MSG__DETAIL__ROAD_STATE__BUILDER_HPP_
#define WAUTO_VEHICLE_MSGS__MSG__DETAIL__ROAD_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "wauto_vehicle_msgs/msg/detail/road_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace wauto_vehicle_msgs
{

namespace msg
{

namespace builder
{

class Init_RoadState_disttorlnedge
{
public:
  explicit Init_RoadState_disttorlnedge(::wauto_vehicle_msgs::msg::RoadState & msg)
  : msg_(msg)
  {}
  ::wauto_vehicle_msgs::msg::RoadState disttorlnedge(::wauto_vehicle_msgs::msg::RoadState::_disttorlnedge_type arg)
  {
    msg_.disttorlnedge = std::move(arg);
    return std::move(msg_);
  }

private:
  ::wauto_vehicle_msgs::msg::RoadState msg_;
};

class Init_RoadState_rlndistancevalid
{
public:
  explicit Init_RoadState_rlndistancevalid(::wauto_vehicle_msgs::msg::RoadState & msg)
  : msg_(msg)
  {}
  Init_RoadState_disttorlnedge rlndistancevalid(::wauto_vehicle_msgs::msg::RoadState::_rlndistancevalid_type arg)
  {
    msg_.rlndistancevalid = std::move(arg);
    return Init_RoadState_disttorlnedge(msg_);
  }

private:
  ::wauto_vehicle_msgs::msg::RoadState msg_;
};

class Init_RoadState_disttollnedge
{
public:
  explicit Init_RoadState_disttollnedge(::wauto_vehicle_msgs::msg::RoadState & msg)
  : msg_(msg)
  {}
  Init_RoadState_rlndistancevalid disttollnedge(::wauto_vehicle_msgs::msg::RoadState::_disttollnedge_type arg)
  {
    msg_.disttollnedge = std::move(arg);
    return Init_RoadState_rlndistancevalid(msg_);
  }

private:
  ::wauto_vehicle_msgs::msg::RoadState msg_;
};

class Init_RoadState_llndistancevalid
{
public:
  explicit Init_RoadState_llndistancevalid(::wauto_vehicle_msgs::msg::RoadState & msg)
  : msg_(msg)
  {}
  Init_RoadState_disttollnedge llndistancevalid(::wauto_vehicle_msgs::msg::RoadState::_llndistancevalid_type arg)
  {
    msg_.llndistancevalid = std::move(arg);
    return Init_RoadState_disttollnedge(msg_);
  }

private:
  ::wauto_vehicle_msgs::msg::RoadState msg_;
};

class Init_RoadState_right_lane_marking_id
{
public:
  explicit Init_RoadState_right_lane_marking_id(::wauto_vehicle_msgs::msg::RoadState & msg)
  : msg_(msg)
  {}
  Init_RoadState_llndistancevalid right_lane_marking_id(::wauto_vehicle_msgs::msg::RoadState::_right_lane_marking_id_type arg)
  {
    msg_.right_lane_marking_id = std::move(arg);
    return Init_RoadState_llndistancevalid(msg_);
  }

private:
  ::wauto_vehicle_msgs::msg::RoadState msg_;
};

class Init_RoadState_left_lane_marking_id
{
public:
  explicit Init_RoadState_left_lane_marking_id(::wauto_vehicle_msgs::msg::RoadState & msg)
  : msg_(msg)
  {}
  Init_RoadState_right_lane_marking_id left_lane_marking_id(::wauto_vehicle_msgs::msg::RoadState::_left_lane_marking_id_type arg)
  {
    msg_.left_lane_marking_id = std::move(arg);
    return Init_RoadState_right_lane_marking_id(msg_);
  }

private:
  ::wauto_vehicle_msgs::msg::RoadState msg_;
};

class Init_RoadState_active_lane_number
{
public:
  explicit Init_RoadState_active_lane_number(::wauto_vehicle_msgs::msg::RoadState & msg)
  : msg_(msg)
  {}
  Init_RoadState_left_lane_marking_id active_lane_number(::wauto_vehicle_msgs::msg::RoadState::_active_lane_number_type arg)
  {
    msg_.active_lane_number = std::move(arg);
    return Init_RoadState_left_lane_marking_id(msg_);
  }

private:
  ::wauto_vehicle_msgs::msg::RoadState msg_;
};

class Init_RoadState_next_observed_speed_limit_longit
{
public:
  explicit Init_RoadState_next_observed_speed_limit_longit(::wauto_vehicle_msgs::msg::RoadState & msg)
  : msg_(msg)
  {}
  Init_RoadState_active_lane_number next_observed_speed_limit_longit(::wauto_vehicle_msgs::msg::RoadState::_next_observed_speed_limit_longit_type arg)
  {
    msg_.next_observed_speed_limit_longit = std::move(arg);
    return Init_RoadState_active_lane_number(msg_);
  }

private:
  ::wauto_vehicle_msgs::msg::RoadState msg_;
};

class Init_RoadState_next_observed_speed_limit
{
public:
  explicit Init_RoadState_next_observed_speed_limit(::wauto_vehicle_msgs::msg::RoadState & msg)
  : msg_(msg)
  {}
  Init_RoadState_next_observed_speed_limit_longit next_observed_speed_limit(::wauto_vehicle_msgs::msg::RoadState::_next_observed_speed_limit_type arg)
  {
    msg_.next_observed_speed_limit = std::move(arg);
    return Init_RoadState_next_observed_speed_limit_longit(msg_);
  }

private:
  ::wauto_vehicle_msgs::msg::RoadState msg_;
};

class Init_RoadState_current_observed_speed_limit
{
public:
  explicit Init_RoadState_current_observed_speed_limit(::wauto_vehicle_msgs::msg::RoadState & msg)
  : msg_(msg)
  {}
  Init_RoadState_next_observed_speed_limit current_observed_speed_limit(::wauto_vehicle_msgs::msg::RoadState::_current_observed_speed_limit_type arg)
  {
    msg_.current_observed_speed_limit = std::move(arg);
    return Init_RoadState_next_observed_speed_limit(msg_);
  }

private:
  ::wauto_vehicle_msgs::msg::RoadState msg_;
};

class Init_RoadState_active_traffic_signal_head_id
{
public:
  explicit Init_RoadState_active_traffic_signal_head_id(::wauto_vehicle_msgs::msg::RoadState & msg)
  : msg_(msg)
  {}
  Init_RoadState_current_observed_speed_limit active_traffic_signal_head_id(::wauto_vehicle_msgs::msg::RoadState::_active_traffic_signal_head_id_type arg)
  {
    msg_.active_traffic_signal_head_id = std::move(arg);
    return Init_RoadState_current_observed_speed_limit(msg_);
  }

private:
  ::wauto_vehicle_msgs::msg::RoadState msg_;
};

class Init_RoadState_rolling_count
{
public:
  Init_RoadState_rolling_count()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RoadState_active_traffic_signal_head_id rolling_count(::wauto_vehicle_msgs::msg::RoadState::_rolling_count_type arg)
  {
    msg_.rolling_count = std::move(arg);
    return Init_RoadState_active_traffic_signal_head_id(msg_);
  }

private:
  ::wauto_vehicle_msgs::msg::RoadState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::wauto_vehicle_msgs::msg::RoadState>()
{
  return wauto_vehicle_msgs::msg::builder::Init_RoadState_rolling_count();
}

}  // namespace wauto_vehicle_msgs

#endif  // WAUTO_VEHICLE_MSGS__MSG__DETAIL__ROAD_STATE__BUILDER_HPP_
