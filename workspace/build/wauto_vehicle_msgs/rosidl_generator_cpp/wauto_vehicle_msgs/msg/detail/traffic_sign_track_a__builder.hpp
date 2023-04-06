// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from wauto_vehicle_msgs:msg/TrafficSignTrackA.idl
// generated code does not contain a copyright notice

#ifndef WAUTO_VEHICLE_MSGS__MSG__DETAIL__TRAFFIC_SIGN_TRACK_A__BUILDER_HPP_
#define WAUTO_VEHICLE_MSGS__MSG__DETAIL__TRAFFIC_SIGN_TRACK_A__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "wauto_vehicle_msgs/msg/detail/traffic_sign_track_a__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace wauto_vehicle_msgs
{

namespace msg
{

namespace builder
{

class Init_TrafficSignTrackA_sign_value
{
public:
  explicit Init_TrafficSignTrackA_sign_value(::wauto_vehicle_msgs::msg::TrafficSignTrackA & msg)
  : msg_(msg)
  {}
  ::wauto_vehicle_msgs::msg::TrafficSignTrackA sign_value(::wauto_vehicle_msgs::msg::TrafficSignTrackA::_sign_value_type arg)
  {
    msg_.sign_value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::wauto_vehicle_msgs::msg::TrafficSignTrackA msg_;
};

class Init_TrafficSignTrackA_sign_type
{
public:
  explicit Init_TrafficSignTrackA_sign_type(::wauto_vehicle_msgs::msg::TrafficSignTrackA & msg)
  : msg_(msg)
  {}
  Init_TrafficSignTrackA_sign_value sign_type(::wauto_vehicle_msgs::msg::TrafficSignTrackA::_sign_type_type arg)
  {
    msg_.sign_type = std::move(arg);
    return Init_TrafficSignTrackA_sign_value(msg_);
  }

private:
  ::wauto_vehicle_msgs::msg::TrafficSignTrackA msg_;
};

class Init_TrafficSignTrackA_latpos
{
public:
  explicit Init_TrafficSignTrackA_latpos(::wauto_vehicle_msgs::msg::TrafficSignTrackA & msg)
  : msg_(msg)
  {}
  Init_TrafficSignTrackA_sign_type latpos(::wauto_vehicle_msgs::msg::TrafficSignTrackA::_latpos_type arg)
  {
    msg_.latpos = std::move(arg);
    return Init_TrafficSignTrackA_sign_type(msg_);
  }

private:
  ::wauto_vehicle_msgs::msg::TrafficSignTrackA msg_;
};

class Init_TrafficSignTrackA_height_above_ground
{
public:
  explicit Init_TrafficSignTrackA_height_above_ground(::wauto_vehicle_msgs::msg::TrafficSignTrackA & msg)
  : msg_(msg)
  {}
  Init_TrafficSignTrackA_latpos height_above_ground(::wauto_vehicle_msgs::msg::TrafficSignTrackA::_height_above_ground_type arg)
  {
    msg_.height_above_ground = std::move(arg);
    return Init_TrafficSignTrackA_latpos(msg_);
  }

private:
  ::wauto_vehicle_msgs::msg::TrafficSignTrackA msg_;
};

class Init_TrafficSignTrackA_longpos
{
public:
  explicit Init_TrafficSignTrackA_longpos(::wauto_vehicle_msgs::msg::TrafficSignTrackA & msg)
  : msg_(msg)
  {}
  Init_TrafficSignTrackA_height_above_ground longpos(::wauto_vehicle_msgs::msg::TrafficSignTrackA::_longpos_type arg)
  {
    msg_.longpos = std::move(arg);
    return Init_TrafficSignTrackA_height_above_ground(msg_);
  }

private:
  ::wauto_vehicle_msgs::msg::TrafficSignTrackA msg_;
};

class Init_TrafficSignTrackA_confidence
{
public:
  explicit Init_TrafficSignTrackA_confidence(::wauto_vehicle_msgs::msg::TrafficSignTrackA & msg)
  : msg_(msg)
  {}
  Init_TrafficSignTrackA_longpos confidence(::wauto_vehicle_msgs::msg::TrafficSignTrackA::_confidence_type arg)
  {
    msg_.confidence = std::move(arg);
    return Init_TrafficSignTrackA_longpos(msg_);
  }

private:
  ::wauto_vehicle_msgs::msg::TrafficSignTrackA msg_;
};

class Init_TrafficSignTrackA_signobjectid
{
public:
  explicit Init_TrafficSignTrackA_signobjectid(::wauto_vehicle_msgs::msg::TrafficSignTrackA & msg)
  : msg_(msg)
  {}
  Init_TrafficSignTrackA_confidence signobjectid(::wauto_vehicle_msgs::msg::TrafficSignTrackA::_signobjectid_type arg)
  {
    msg_.signobjectid = std::move(arg);
    return Init_TrafficSignTrackA_confidence(msg_);
  }

private:
  ::wauto_vehicle_msgs::msg::TrafficSignTrackA msg_;
};

class Init_TrafficSignTrackA_rolling_count
{
public:
  Init_TrafficSignTrackA_rolling_count()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TrafficSignTrackA_signobjectid rolling_count(::wauto_vehicle_msgs::msg::TrafficSignTrackA::_rolling_count_type arg)
  {
    msg_.rolling_count = std::move(arg);
    return Init_TrafficSignTrackA_signobjectid(msg_);
  }

private:
  ::wauto_vehicle_msgs::msg::TrafficSignTrackA msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::wauto_vehicle_msgs::msg::TrafficSignTrackA>()
{
  return wauto_vehicle_msgs::msg::builder::Init_TrafficSignTrackA_rolling_count();
}

}  // namespace wauto_vehicle_msgs

#endif  // WAUTO_VEHICLE_MSGS__MSG__DETAIL__TRAFFIC_SIGN_TRACK_A__BUILDER_HPP_
