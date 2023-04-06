// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from wauto_vehicle_msgs:msg/ObjectTrackB.idl
// generated code does not contain a copyright notice

#ifndef WAUTO_VEHICLE_MSGS__MSG__DETAIL__OBJECT_TRACK_B__BUILDER_HPP_
#define WAUTO_VEHICLE_MSGS__MSG__DETAIL__OBJECT_TRACK_B__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "wauto_vehicle_msgs/msg/detail/object_track_b__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace wauto_vehicle_msgs
{

namespace msg
{

namespace builder
{

class Init_ObjectTrackB_object_source_other
{
public:
  explicit Init_ObjectTrackB_object_source_other(::wauto_vehicle_msgs::msg::ObjectTrackB & msg)
  : msg_(msg)
  {}
  ::wauto_vehicle_msgs::msg::ObjectTrackB object_source_other(::wauto_vehicle_msgs::msg::ObjectTrackB::_object_source_other_type arg)
  {
    msg_.object_source_other = std::move(arg);
    return std::move(msg_);
  }

private:
  ::wauto_vehicle_msgs::msg::ObjectTrackB msg_;
};

class Init_ObjectTrackB_object_source_lidar
{
public:
  explicit Init_ObjectTrackB_object_source_lidar(::wauto_vehicle_msgs::msg::ObjectTrackB & msg)
  : msg_(msg)
  {}
  Init_ObjectTrackB_object_source_other object_source_lidar(::wauto_vehicle_msgs::msg::ObjectTrackB::_object_source_lidar_type arg)
  {
    msg_.object_source_lidar = std::move(arg);
    return Init_ObjectTrackB_object_source_other(msg_);
  }

private:
  ::wauto_vehicle_msgs::msg::ObjectTrackB msg_;
};

class Init_ObjectTrackB_object_source_v2x
{
public:
  explicit Init_ObjectTrackB_object_source_v2x(::wauto_vehicle_msgs::msg::ObjectTrackB & msg)
  : msg_(msg)
  {}
  Init_ObjectTrackB_object_source_lidar object_source_v2x(::wauto_vehicle_msgs::msg::ObjectTrackB::_object_source_v2x_type arg)
  {
    msg_.object_source_v2x = std::move(arg);
    return Init_ObjectTrackB_object_source_lidar(msg_);
  }

private:
  ::wauto_vehicle_msgs::msg::ObjectTrackB msg_;
};

class Init_ObjectTrackB_object_source_ultrasonic
{
public:
  explicit Init_ObjectTrackB_object_source_ultrasonic(::wauto_vehicle_msgs::msg::ObjectTrackB & msg)
  : msg_(msg)
  {}
  Init_ObjectTrackB_object_source_v2x object_source_ultrasonic(::wauto_vehicle_msgs::msg::ObjectTrackB::_object_source_ultrasonic_type arg)
  {
    msg_.object_source_ultrasonic = std::move(arg);
    return Init_ObjectTrackB_object_source_v2x(msg_);
  }

private:
  ::wauto_vehicle_msgs::msg::ObjectTrackB msg_;
};

class Init_ObjectTrackB_object_source_radar
{
public:
  explicit Init_ObjectTrackB_object_source_radar(::wauto_vehicle_msgs::msg::ObjectTrackB & msg)
  : msg_(msg)
  {}
  Init_ObjectTrackB_object_source_ultrasonic object_source_radar(::wauto_vehicle_msgs::msg::ObjectTrackB::_object_source_radar_type arg)
  {
    msg_.object_source_radar = std::move(arg);
    return Init_ObjectTrackB_object_source_ultrasonic(msg_);
  }

private:
  ::wauto_vehicle_msgs::msg::ObjectTrackB msg_;
};

class Init_ObjectTrackB_object_source_camera
{
public:
  explicit Init_ObjectTrackB_object_source_camera(::wauto_vehicle_msgs::msg::ObjectTrackB & msg)
  : msg_(msg)
  {}
  Init_ObjectTrackB_object_source_radar object_source_camera(::wauto_vehicle_msgs::msg::ObjectTrackB::_object_source_camera_type arg)
  {
    msg_.object_source_camera = std::move(arg);
    return Init_ObjectTrackB_object_source_radar(msg_);
  }

private:
  ::wauto_vehicle_msgs::msg::ObjectTrackB msg_;
};

class Init_ObjectTrackB_rellnposition
{
public:
  explicit Init_ObjectTrackB_rellnposition(::wauto_vehicle_msgs::msg::ObjectTrackB & msg)
  : msg_(msg)
  {}
  Init_ObjectTrackB_object_source_camera rellnposition(::wauto_vehicle_msgs::msg::ObjectTrackB::_rellnposition_type arg)
  {
    msg_.rellnposition = std::move(arg);
    return Init_ObjectTrackB_object_source_camera(msg_);
  }

private:
  ::wauto_vehicle_msgs::msg::ObjectTrackB msg_;
};

class Init_ObjectTrackB_object_relative_orientation
{
public:
  explicit Init_ObjectTrackB_object_relative_orientation(::wauto_vehicle_msgs::msg::ObjectTrackB & msg)
  : msg_(msg)
  {}
  Init_ObjectTrackB_rellnposition object_relative_orientation(::wauto_vehicle_msgs::msg::ObjectTrackB::_object_relative_orientation_type arg)
  {
    msg_.object_relative_orientation = std::move(arg);
    return Init_ObjectTrackB_rellnposition(msg_);
  }

private:
  ::wauto_vehicle_msgs::msg::ObjectTrackB msg_;
};

class Init_ObjectTrackB_height
{
public:
  explicit Init_ObjectTrackB_height(::wauto_vehicle_msgs::msg::ObjectTrackB & msg)
  : msg_(msg)
  {}
  Init_ObjectTrackB_object_relative_orientation height(::wauto_vehicle_msgs::msg::ObjectTrackB::_height_type arg)
  {
    msg_.height = std::move(arg);
    return Init_ObjectTrackB_object_relative_orientation(msg_);
  }

private:
  ::wauto_vehicle_msgs::msg::ObjectTrackB msg_;
};

class Init_ObjectTrackB_width
{
public:
  explicit Init_ObjectTrackB_width(::wauto_vehicle_msgs::msg::ObjectTrackB & msg)
  : msg_(msg)
  {}
  Init_ObjectTrackB_height width(::wauto_vehicle_msgs::msg::ObjectTrackB::_width_type arg)
  {
    msg_.width = std::move(arg);
    return Init_ObjectTrackB_height(msg_);
  }

private:
  ::wauto_vehicle_msgs::msg::ObjectTrackB msg_;
};

class Init_ObjectTrackB_objobjectid
{
public:
  explicit Init_ObjectTrackB_objobjectid(::wauto_vehicle_msgs::msg::ObjectTrackB & msg)
  : msg_(msg)
  {}
  Init_ObjectTrackB_width objobjectid(::wauto_vehicle_msgs::msg::ObjectTrackB::_objobjectid_type arg)
  {
    msg_.objobjectid = std::move(arg);
    return Init_ObjectTrackB_width(msg_);
  }

private:
  ::wauto_vehicle_msgs::msg::ObjectTrackB msg_;
};

class Init_ObjectTrackB_rolling_count
{
public:
  Init_ObjectTrackB_rolling_count()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ObjectTrackB_objobjectid rolling_count(::wauto_vehicle_msgs::msg::ObjectTrackB::_rolling_count_type arg)
  {
    msg_.rolling_count = std::move(arg);
    return Init_ObjectTrackB_objobjectid(msg_);
  }

private:
  ::wauto_vehicle_msgs::msg::ObjectTrackB msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::wauto_vehicle_msgs::msg::ObjectTrackB>()
{
  return wauto_vehicle_msgs::msg::builder::Init_ObjectTrackB_rolling_count();
}

}  // namespace wauto_vehicle_msgs

#endif  // WAUTO_VEHICLE_MSGS__MSG__DETAIL__OBJECT_TRACK_B__BUILDER_HPP_
