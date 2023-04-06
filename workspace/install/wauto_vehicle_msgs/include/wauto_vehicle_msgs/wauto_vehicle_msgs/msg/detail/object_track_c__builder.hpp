// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from wauto_vehicle_msgs:msg/ObjectTrackC.idl
// generated code does not contain a copyright notice

#ifndef WAUTO_VEHICLE_MSGS__MSG__DETAIL__OBJECT_TRACK_C__BUILDER_HPP_
#define WAUTO_VEHICLE_MSGS__MSG__DETAIL__OBJECT_TRACK_C__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "wauto_vehicle_msgs/msg/detail/object_track_c__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace wauto_vehicle_msgs
{

namespace msg
{

namespace builder
{

class Init_ObjectTrackC_dynprop
{
public:
  explicit Init_ObjectTrackC_dynprop(::wauto_vehicle_msgs::msg::ObjectTrackC & msg)
  : msg_(msg)
  {}
  ::wauto_vehicle_msgs::msg::ObjectTrackC dynprop(::wauto_vehicle_msgs::msg::ObjectTrackC::_dynprop_type arg)
  {
    msg_.dynprop = std::move(arg);
    return std::move(msg_);
  }

private:
  ::wauto_vehicle_msgs::msg::ObjectTrackC msg_;
};

class Init_ObjectTrackC_object_course
{
public:
  explicit Init_ObjectTrackC_object_course(::wauto_vehicle_msgs::msg::ObjectTrackC & msg)
  : msg_(msg)
  {}
  Init_ObjectTrackC_dynprop object_course(::wauto_vehicle_msgs::msg::ObjectTrackC::_object_course_type arg)
  {
    msg_.object_course = std::move(arg);
    return Init_ObjectTrackC_dynprop(msg_);
  }

private:
  ::wauto_vehicle_msgs::msg::ObjectTrackC msg_;
};

class Init_ObjectTrackC_object_absolute_velocity
{
public:
  explicit Init_ObjectTrackC_object_absolute_velocity(::wauto_vehicle_msgs::msg::ObjectTrackC & msg)
  : msg_(msg)
  {}
  Init_ObjectTrackC_object_course object_absolute_velocity(::wauto_vehicle_msgs::msg::ObjectTrackC::_object_absolute_velocity_type arg)
  {
    msg_.object_absolute_velocity = std::move(arg);
    return Init_ObjectTrackC_object_course(msg_);
  }

private:
  ::wauto_vehicle_msgs::msg::ObjectTrackC msg_;
};

class Init_ObjectTrackC_object_latitude
{
public:
  explicit Init_ObjectTrackC_object_latitude(::wauto_vehicle_msgs::msg::ObjectTrackC & msg)
  : msg_(msg)
  {}
  Init_ObjectTrackC_object_absolute_velocity object_latitude(::wauto_vehicle_msgs::msg::ObjectTrackC::_object_latitude_type arg)
  {
    msg_.object_latitude = std::move(arg);
    return Init_ObjectTrackC_object_absolute_velocity(msg_);
  }

private:
  ::wauto_vehicle_msgs::msg::ObjectTrackC msg_;
};

class Init_ObjectTrackC_objobjectid
{
public:
  explicit Init_ObjectTrackC_objobjectid(::wauto_vehicle_msgs::msg::ObjectTrackC & msg)
  : msg_(msg)
  {}
  Init_ObjectTrackC_object_latitude objobjectid(::wauto_vehicle_msgs::msg::ObjectTrackC::_objobjectid_type arg)
  {
    msg_.objobjectid = std::move(arg);
    return Init_ObjectTrackC_object_latitude(msg_);
  }

private:
  ::wauto_vehicle_msgs::msg::ObjectTrackC msg_;
};

class Init_ObjectTrackC_rolling_count
{
public:
  Init_ObjectTrackC_rolling_count()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ObjectTrackC_objobjectid rolling_count(::wauto_vehicle_msgs::msg::ObjectTrackC::_rolling_count_type arg)
  {
    msg_.rolling_count = std::move(arg);
    return Init_ObjectTrackC_objobjectid(msg_);
  }

private:
  ::wauto_vehicle_msgs::msg::ObjectTrackC msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::wauto_vehicle_msgs::msg::ObjectTrackC>()
{
  return wauto_vehicle_msgs::msg::builder::Init_ObjectTrackC_rolling_count();
}

}  // namespace wauto_vehicle_msgs

#endif  // WAUTO_VEHICLE_MSGS__MSG__DETAIL__OBJECT_TRACK_C__BUILDER_HPP_
