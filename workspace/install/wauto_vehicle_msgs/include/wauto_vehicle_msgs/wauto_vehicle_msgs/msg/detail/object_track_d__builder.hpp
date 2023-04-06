// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from wauto_vehicle_msgs:msg/ObjectTrackD.idl
// generated code does not contain a copyright notice

#ifndef WAUTO_VEHICLE_MSGS__MSG__DETAIL__OBJECT_TRACK_D__BUILDER_HPP_
#define WAUTO_VEHICLE_MSGS__MSG__DETAIL__OBJECT_TRACK_D__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "wauto_vehicle_msgs/msg/detail/object_track_d__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace wauto_vehicle_msgs
{

namespace msg
{

namespace builder
{

class Init_ObjectTrackD_object_longitude
{
public:
  explicit Init_ObjectTrackD_object_longitude(::wauto_vehicle_msgs::msg::ObjectTrackD & msg)
  : msg_(msg)
  {}
  ::wauto_vehicle_msgs::msg::ObjectTrackD object_longitude(::wauto_vehicle_msgs::msg::ObjectTrackD::_object_longitude_type arg)
  {
    msg_.object_longitude = std::move(arg);
    return std::move(msg_);
  }

private:
  ::wauto_vehicle_msgs::msg::ObjectTrackD msg_;
};

class Init_ObjectTrackD_objobjectid
{
public:
  explicit Init_ObjectTrackD_objobjectid(::wauto_vehicle_msgs::msg::ObjectTrackD & msg)
  : msg_(msg)
  {}
  Init_ObjectTrackD_object_longitude objobjectid(::wauto_vehicle_msgs::msg::ObjectTrackD::_objobjectid_type arg)
  {
    msg_.objobjectid = std::move(arg);
    return Init_ObjectTrackD_object_longitude(msg_);
  }

private:
  ::wauto_vehicle_msgs::msg::ObjectTrackD msg_;
};

class Init_ObjectTrackD_rolling_count
{
public:
  Init_ObjectTrackD_rolling_count()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ObjectTrackD_objobjectid rolling_count(::wauto_vehicle_msgs::msg::ObjectTrackD::_rolling_count_type arg)
  {
    msg_.rolling_count = std::move(arg);
    return Init_ObjectTrackD_objobjectid(msg_);
  }

private:
  ::wauto_vehicle_msgs::msg::ObjectTrackD msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::wauto_vehicle_msgs::msg::ObjectTrackD>()
{
  return wauto_vehicle_msgs::msg::builder::Init_ObjectTrackD_rolling_count();
}

}  // namespace wauto_vehicle_msgs

#endif  // WAUTO_VEHICLE_MSGS__MSG__DETAIL__OBJECT_TRACK_D__BUILDER_HPP_
