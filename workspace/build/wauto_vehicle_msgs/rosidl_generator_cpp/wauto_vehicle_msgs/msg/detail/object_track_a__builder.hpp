// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from wauto_vehicle_msgs:msg/ObjectTrackA.idl
// generated code does not contain a copyright notice

#ifndef WAUTO_VEHICLE_MSGS__MSG__DETAIL__OBJECT_TRACK_A__BUILDER_HPP_
#define WAUTO_VEHICLE_MSGS__MSG__DETAIL__OBJECT_TRACK_A__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "wauto_vehicle_msgs/msg/detail/object_track_a__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace wauto_vehicle_msgs
{

namespace msg
{

namespace builder
{

class Init_ObjectTrackA_relative_lane
{
public:
  explicit Init_ObjectTrackA_relative_lane(::wauto_vehicle_msgs::msg::ObjectTrackA & msg)
  : msg_(msg)
  {}
  ::wauto_vehicle_msgs::msg::ObjectTrackA relative_lane(::wauto_vehicle_msgs::msg::ObjectTrackA::_relative_lane_type arg)
  {
    msg_.relative_lane = std::move(arg);
    return std::move(msg_);
  }

private:
  ::wauto_vehicle_msgs::msg::ObjectTrackA msg_;
};

class Init_ObjectTrackA_confidence
{
public:
  explicit Init_ObjectTrackA_confidence(::wauto_vehicle_msgs::msg::ObjectTrackA & msg)
  : msg_(msg)
  {}
  Init_ObjectTrackA_relative_lane confidence(::wauto_vehicle_msgs::msg::ObjectTrackA::_confidence_type arg)
  {
    msg_.confidence = std::move(arg);
    return Init_ObjectTrackA_relative_lane(msg_);
  }

private:
  ::wauto_vehicle_msgs::msg::ObjectTrackA msg_;
};

class Init_ObjectTrackA_rellatvel
{
public:
  explicit Init_ObjectTrackA_rellatvel(::wauto_vehicle_msgs::msg::ObjectTrackA & msg)
  : msg_(msg)
  {}
  Init_ObjectTrackA_confidence rellatvel(::wauto_vehicle_msgs::msg::ObjectTrackA::_rellatvel_type arg)
  {
    msg_.rellatvel = std::move(arg);
    return Init_ObjectTrackA_confidence(msg_);
  }

private:
  ::wauto_vehicle_msgs::msg::ObjectTrackA msg_;
};

class Init_ObjectTrackA_rellongvel
{
public:
  explicit Init_ObjectTrackA_rellongvel(::wauto_vehicle_msgs::msg::ObjectTrackA & msg)
  : msg_(msg)
  {}
  Init_ObjectTrackA_rellatvel rellongvel(::wauto_vehicle_msgs::msg::ObjectTrackA::_rellongvel_type arg)
  {
    msg_.rellongvel = std::move(arg);
    return Init_ObjectTrackA_rellatvel(msg_);
  }

private:
  ::wauto_vehicle_msgs::msg::ObjectTrackA msg_;
};

class Init_ObjectTrackA_latpos
{
public:
  explicit Init_ObjectTrackA_latpos(::wauto_vehicle_msgs::msg::ObjectTrackA & msg)
  : msg_(msg)
  {}
  Init_ObjectTrackA_rellongvel latpos(::wauto_vehicle_msgs::msg::ObjectTrackA::_latpos_type arg)
  {
    msg_.latpos = std::move(arg);
    return Init_ObjectTrackA_rellongvel(msg_);
  }

private:
  ::wauto_vehicle_msgs::msg::ObjectTrackA msg_;
};

class Init_ObjectTrackA_longpos
{
public:
  explicit Init_ObjectTrackA_longpos(::wauto_vehicle_msgs::msg::ObjectTrackA & msg)
  : msg_(msg)
  {}
  Init_ObjectTrackA_latpos longpos(::wauto_vehicle_msgs::msg::ObjectTrackA::_longpos_type arg)
  {
    msg_.longpos = std::move(arg);
    return Init_ObjectTrackA_latpos(msg_);
  }

private:
  ::wauto_vehicle_msgs::msg::ObjectTrackA msg_;
};

class Init_ObjectTrackA_objobjecttype
{
public:
  explicit Init_ObjectTrackA_objobjecttype(::wauto_vehicle_msgs::msg::ObjectTrackA & msg)
  : msg_(msg)
  {}
  Init_ObjectTrackA_longpos objobjecttype(::wauto_vehicle_msgs::msg::ObjectTrackA::_objobjecttype_type arg)
  {
    msg_.objobjecttype = std::move(arg);
    return Init_ObjectTrackA_longpos(msg_);
  }

private:
  ::wauto_vehicle_msgs::msg::ObjectTrackA msg_;
};

class Init_ObjectTrackA_objobjectid
{
public:
  explicit Init_ObjectTrackA_objobjectid(::wauto_vehicle_msgs::msg::ObjectTrackA & msg)
  : msg_(msg)
  {}
  Init_ObjectTrackA_objobjecttype objobjectid(::wauto_vehicle_msgs::msg::ObjectTrackA::_objobjectid_type arg)
  {
    msg_.objobjectid = std::move(arg);
    return Init_ObjectTrackA_objobjecttype(msg_);
  }

private:
  ::wauto_vehicle_msgs::msg::ObjectTrackA msg_;
};

class Init_ObjectTrackA_rolling_count
{
public:
  Init_ObjectTrackA_rolling_count()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ObjectTrackA_objobjectid rolling_count(::wauto_vehicle_msgs::msg::ObjectTrackA::_rolling_count_type arg)
  {
    msg_.rolling_count = std::move(arg);
    return Init_ObjectTrackA_objobjectid(msg_);
  }

private:
  ::wauto_vehicle_msgs::msg::ObjectTrackA msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::wauto_vehicle_msgs::msg::ObjectTrackA>()
{
  return wauto_vehicle_msgs::msg::builder::Init_ObjectTrackA_rolling_count();
}

}  // namespace wauto_vehicle_msgs

#endif  // WAUTO_VEHICLE_MSGS__MSG__DETAIL__OBJECT_TRACK_A__BUILDER_HPP_
