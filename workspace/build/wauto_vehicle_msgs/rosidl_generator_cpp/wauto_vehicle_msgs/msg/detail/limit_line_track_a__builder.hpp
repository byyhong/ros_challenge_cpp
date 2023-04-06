// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from wauto_vehicle_msgs:msg/LimitLineTrackA.idl
// generated code does not contain a copyright notice

#ifndef WAUTO_VEHICLE_MSGS__MSG__DETAIL__LIMIT_LINE_TRACK_A__BUILDER_HPP_
#define WAUTO_VEHICLE_MSGS__MSG__DETAIL__LIMIT_LINE_TRACK_A__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "wauto_vehicle_msgs/msg/detail/limit_line_track_a__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace wauto_vehicle_msgs
{

namespace msg
{

namespace builder
{

class Init_LimitLineTrackA_relative_lane
{
public:
  explicit Init_LimitLineTrackA_relative_lane(::wauto_vehicle_msgs::msg::LimitLineTrackA & msg)
  : msg_(msg)
  {}
  ::wauto_vehicle_msgs::msg::LimitLineTrackA relative_lane(::wauto_vehicle_msgs::msg::LimitLineTrackA::_relative_lane_type arg)
  {
    msg_.relative_lane = std::move(arg);
    return std::move(msg_);
  }

private:
  ::wauto_vehicle_msgs::msg::LimitLineTrackA msg_;
};

class Init_LimitLineTrackA_latpos
{
public:
  explicit Init_LimitLineTrackA_latpos(::wauto_vehicle_msgs::msg::LimitLineTrackA & msg)
  : msg_(msg)
  {}
  Init_LimitLineTrackA_relative_lane latpos(::wauto_vehicle_msgs::msg::LimitLineTrackA::_latpos_type arg)
  {
    msg_.latpos = std::move(arg);
    return Init_LimitLineTrackA_relative_lane(msg_);
  }

private:
  ::wauto_vehicle_msgs::msg::LimitLineTrackA msg_;
};

class Init_LimitLineTrackA_longpos
{
public:
  explicit Init_LimitLineTrackA_longpos(::wauto_vehicle_msgs::msg::LimitLineTrackA & msg)
  : msg_(msg)
  {}
  Init_LimitLineTrackA_latpos longpos(::wauto_vehicle_msgs::msg::LimitLineTrackA::_longpos_type arg)
  {
    msg_.longpos = std::move(arg);
    return Init_LimitLineTrackA_latpos(msg_);
  }

private:
  ::wauto_vehicle_msgs::msg::LimitLineTrackA msg_;
};

class Init_LimitLineTrackA_width
{
public:
  explicit Init_LimitLineTrackA_width(::wauto_vehicle_msgs::msg::LimitLineTrackA & msg)
  : msg_(msg)
  {}
  Init_LimitLineTrackA_longpos width(::wauto_vehicle_msgs::msg::LimitLineTrackA::_width_type arg)
  {
    msg_.width = std::move(arg);
    return Init_LimitLineTrackA_longpos(msg_);
  }

private:
  ::wauto_vehicle_msgs::msg::LimitLineTrackA msg_;
};

class Init_LimitLineTrackA_longitudinal_length
{
public:
  explicit Init_LimitLineTrackA_longitudinal_length(::wauto_vehicle_msgs::msg::LimitLineTrackA & msg)
  : msg_(msg)
  {}
  Init_LimitLineTrackA_width longitudinal_length(::wauto_vehicle_msgs::msg::LimitLineTrackA::_longitudinal_length_type arg)
  {
    msg_.longitudinal_length = std::move(arg);
    return Init_LimitLineTrackA_width(msg_);
  }

private:
  ::wauto_vehicle_msgs::msg::LimitLineTrackA msg_;
};

class Init_LimitLineTrackA_confidence
{
public:
  explicit Init_LimitLineTrackA_confidence(::wauto_vehicle_msgs::msg::LimitLineTrackA & msg)
  : msg_(msg)
  {}
  Init_LimitLineTrackA_longitudinal_length confidence(::wauto_vehicle_msgs::msg::LimitLineTrackA::_confidence_type arg)
  {
    msg_.confidence = std::move(arg);
    return Init_LimitLineTrackA_longitudinal_length(msg_);
  }

private:
  ::wauto_vehicle_msgs::msg::LimitLineTrackA msg_;
};

class Init_LimitLineTrackA_lineobjectid
{
public:
  explicit Init_LimitLineTrackA_lineobjectid(::wauto_vehicle_msgs::msg::LimitLineTrackA & msg)
  : msg_(msg)
  {}
  Init_LimitLineTrackA_confidence lineobjectid(::wauto_vehicle_msgs::msg::LimitLineTrackA::_lineobjectid_type arg)
  {
    msg_.lineobjectid = std::move(arg);
    return Init_LimitLineTrackA_confidence(msg_);
  }

private:
  ::wauto_vehicle_msgs::msg::LimitLineTrackA msg_;
};

class Init_LimitLineTrackA_rolling_count
{
public:
  Init_LimitLineTrackA_rolling_count()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LimitLineTrackA_lineobjectid rolling_count(::wauto_vehicle_msgs::msg::LimitLineTrackA::_rolling_count_type arg)
  {
    msg_.rolling_count = std::move(arg);
    return Init_LimitLineTrackA_lineobjectid(msg_);
  }

private:
  ::wauto_vehicle_msgs::msg::LimitLineTrackA msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::wauto_vehicle_msgs::msg::LimitLineTrackA>()
{
  return wauto_vehicle_msgs::msg::builder::Init_LimitLineTrackA_rolling_count();
}

}  // namespace wauto_vehicle_msgs

#endif  // WAUTO_VEHICLE_MSGS__MSG__DETAIL__LIMIT_LINE_TRACK_A__BUILDER_HPP_
