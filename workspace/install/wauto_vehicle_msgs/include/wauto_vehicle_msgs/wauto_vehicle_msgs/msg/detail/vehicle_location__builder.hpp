// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from wauto_vehicle_msgs:msg/VehicleLocation.idl
// generated code does not contain a copyright notice

#ifndef WAUTO_VEHICLE_MSGS__MSG__DETAIL__VEHICLE_LOCATION__BUILDER_HPP_
#define WAUTO_VEHICLE_MSGS__MSG__DETAIL__VEHICLE_LOCATION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "wauto_vehicle_msgs/msg/detail/vehicle_location__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace wauto_vehicle_msgs
{

namespace msg
{

namespace builder
{

class Init_VehicleLocation_vehiclelongitude
{
public:
  explicit Init_VehicleLocation_vehiclelongitude(::wauto_vehicle_msgs::msg::VehicleLocation & msg)
  : msg_(msg)
  {}
  ::wauto_vehicle_msgs::msg::VehicleLocation vehiclelongitude(::wauto_vehicle_msgs::msg::VehicleLocation::_vehiclelongitude_type arg)
  {
    msg_.vehiclelongitude = std::move(arg);
    return std::move(msg_);
  }

private:
  ::wauto_vehicle_msgs::msg::VehicleLocation msg_;
};

class Init_VehicleLocation_vehiclelatitude
{
public:
  Init_VehicleLocation_vehiclelatitude()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VehicleLocation_vehiclelongitude vehiclelatitude(::wauto_vehicle_msgs::msg::VehicleLocation::_vehiclelatitude_type arg)
  {
    msg_.vehiclelatitude = std::move(arg);
    return Init_VehicleLocation_vehiclelongitude(msg_);
  }

private:
  ::wauto_vehicle_msgs::msg::VehicleLocation msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::wauto_vehicle_msgs::msg::VehicleLocation>()
{
  return wauto_vehicle_msgs::msg::builder::Init_VehicleLocation_vehiclelatitude();
}

}  // namespace wauto_vehicle_msgs

#endif  // WAUTO_VEHICLE_MSGS__MSG__DETAIL__VEHICLE_LOCATION__BUILDER_HPP_
