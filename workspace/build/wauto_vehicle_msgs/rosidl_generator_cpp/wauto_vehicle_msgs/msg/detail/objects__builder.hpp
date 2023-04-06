// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from wauto_vehicle_msgs:msg/Objects.idl
// generated code does not contain a copyright notice

#ifndef WAUTO_VEHICLE_MSGS__MSG__DETAIL__OBJECTS__BUILDER_HPP_
#define WAUTO_VEHICLE_MSGS__MSG__DETAIL__OBJECTS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "wauto_vehicle_msgs/msg/detail/objects__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace wauto_vehicle_msgs
{

namespace msg
{

namespace builder
{

class Init_Objects_observation_time_of_hour
{
public:
  explicit Init_Objects_observation_time_of_hour(::wauto_vehicle_msgs::msg::Objects & msg)
  : msg_(msg)
  {}
  ::wauto_vehicle_msgs::msg::Objects observation_time_of_hour(::wauto_vehicle_msgs::msg::Objects::_observation_time_of_hour_type arg)
  {
    msg_.observation_time_of_hour = std::move(arg);
    return std::move(msg_);
  }

private:
  ::wauto_vehicle_msgs::msg::Objects msg_;
};

class Init_Objects_current_object_count
{
public:
  explicit Init_Objects_current_object_count(::wauto_vehicle_msgs::msg::Objects & msg)
  : msg_(msg)
  {}
  Init_Objects_observation_time_of_hour current_object_count(::wauto_vehicle_msgs::msg::Objects::_current_object_count_type arg)
  {
    msg_.current_object_count = std::move(arg);
    return Init_Objects_observation_time_of_hour(msg_);
  }

private:
  ::wauto_vehicle_msgs::msg::Objects msg_;
};

class Init_Objects_rolling_count
{
public:
  Init_Objects_rolling_count()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Objects_current_object_count rolling_count(::wauto_vehicle_msgs::msg::Objects::_rolling_count_type arg)
  {
    msg_.rolling_count = std::move(arg);
    return Init_Objects_current_object_count(msg_);
  }

private:
  ::wauto_vehicle_msgs::msg::Objects msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::wauto_vehicle_msgs::msg::Objects>()
{
  return wauto_vehicle_msgs::msg::builder::Init_Objects_rolling_count();
}

}  // namespace wauto_vehicle_msgs

#endif  // WAUTO_VEHICLE_MSGS__MSG__DETAIL__OBJECTS__BUILDER_HPP_
