// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from wauto_vehicle_msgs:msg/LaneMarkingTrackA.idl
// generated code does not contain a copyright notice

#ifndef WAUTO_VEHICLE_MSGS__MSG__DETAIL__LANE_MARKING_TRACK_A__BUILDER_HPP_
#define WAUTO_VEHICLE_MSGS__MSG__DETAIL__LANE_MARKING_TRACK_A__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "wauto_vehicle_msgs/msg/detail/lane_marking_track_a__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace wauto_vehicle_msgs
{

namespace msg
{

namespace builder
{

class Init_LaneMarkingTrackA_lanemarkingcolor
{
public:
  explicit Init_LaneMarkingTrackA_lanemarkingcolor(::wauto_vehicle_msgs::msg::LaneMarkingTrackA & msg)
  : msg_(msg)
  {}
  ::wauto_vehicle_msgs::msg::LaneMarkingTrackA lanemarkingcolor(::wauto_vehicle_msgs::msg::LaneMarkingTrackA::_lanemarkingcolor_type arg)
  {
    msg_.lanemarkingcolor = std::move(arg);
    return std::move(msg_);
  }

private:
  ::wauto_vehicle_msgs::msg::LaneMarkingTrackA msg_;
};

class Init_LaneMarkingTrackA_lanemarkinglnmrkrtyp
{
public:
  explicit Init_LaneMarkingTrackA_lanemarkinglnmrkrtyp(::wauto_vehicle_msgs::msg::LaneMarkingTrackA & msg)
  : msg_(msg)
  {}
  Init_LaneMarkingTrackA_lanemarkingcolor lanemarkinglnmrkrtyp(::wauto_vehicle_msgs::msg::LaneMarkingTrackA::_lanemarkinglnmrkrtyp_type arg)
  {
    msg_.lanemarkinglnmrkrtyp = std::move(arg);
    return Init_LaneMarkingTrackA_lanemarkingcolor(msg_);
  }

private:
  ::wauto_vehicle_msgs::msg::LaneMarkingTrackA msg_;
};

class Init_LaneMarkingTrackA_lanemarkinglnqltyconflvl
{
public:
  explicit Init_LaneMarkingTrackA_lanemarkinglnqltyconflvl(::wauto_vehicle_msgs::msg::LaneMarkingTrackA & msg)
  : msg_(msg)
  {}
  Init_LaneMarkingTrackA_lanemarkinglnmrkrtyp lanemarkinglnqltyconflvl(::wauto_vehicle_msgs::msg::LaneMarkingTrackA::_lanemarkinglnqltyconflvl_type arg)
  {
    msg_.lanemarkinglnqltyconflvl = std::move(arg);
    return Init_LaneMarkingTrackA_lanemarkinglnmrkrtyp(msg_);
  }

private:
  ::wauto_vehicle_msgs::msg::LaneMarkingTrackA msg_;
};

class Init_LaneMarkingTrackA_lanemarkinglncrvt
{
public:
  explicit Init_LaneMarkingTrackA_lanemarkinglncrvt(::wauto_vehicle_msgs::msg::LaneMarkingTrackA & msg)
  : msg_(msg)
  {}
  Init_LaneMarkingTrackA_lanemarkinglnqltyconflvl lanemarkinglncrvt(::wauto_vehicle_msgs::msg::LaneMarkingTrackA::_lanemarkinglncrvt_type arg)
  {
    msg_.lanemarkinglncrvt = std::move(arg);
    return Init_LaneMarkingTrackA_lanemarkinglnqltyconflvl(msg_);
  }

private:
  ::wauto_vehicle_msgs::msg::LaneMarkingTrackA msg_;
};

class Init_LaneMarkingTrackA_lanemarkinglncrvtgrad
{
public:
  explicit Init_LaneMarkingTrackA_lanemarkinglncrvtgrad(::wauto_vehicle_msgs::msg::LaneMarkingTrackA & msg)
  : msg_(msg)
  {}
  Init_LaneMarkingTrackA_lanemarkinglncrvt lanemarkinglncrvtgrad(::wauto_vehicle_msgs::msg::LaneMarkingTrackA::_lanemarkinglncrvtgrad_type arg)
  {
    msg_.lanemarkinglncrvtgrad = std::move(arg);
    return Init_LaneMarkingTrackA_lanemarkinglncrvt(msg_);
  }

private:
  ::wauto_vehicle_msgs::msg::LaneMarkingTrackA msg_;
};

class Init_LaneMarkingTrackA_lanemarkinglncrvtgradv
{
public:
  explicit Init_LaneMarkingTrackA_lanemarkinglncrvtgradv(::wauto_vehicle_msgs::msg::LaneMarkingTrackA & msg)
  : msg_(msg)
  {}
  Init_LaneMarkingTrackA_lanemarkinglncrvtgrad lanemarkinglncrvtgradv(::wauto_vehicle_msgs::msg::LaneMarkingTrackA::_lanemarkinglncrvtgradv_type arg)
  {
    msg_.lanemarkinglncrvtgradv = std::move(arg);
    return Init_LaneMarkingTrackA_lanemarkinglncrvtgrad(msg_);
  }

private:
  ::wauto_vehicle_msgs::msg::LaneMarkingTrackA msg_;
};

class Init_LaneMarkingTrackA_lanemarkinglncrvtv
{
public:
  explicit Init_LaneMarkingTrackA_lanemarkinglncrvtv(::wauto_vehicle_msgs::msg::LaneMarkingTrackA & msg)
  : msg_(msg)
  {}
  Init_LaneMarkingTrackA_lanemarkinglncrvtgradv lanemarkinglncrvtv(::wauto_vehicle_msgs::msg::LaneMarkingTrackA::_lanemarkinglncrvtv_type arg)
  {
    msg_.lanemarkinglncrvtv = std::move(arg);
    return Init_LaneMarkingTrackA_lanemarkinglncrvtgradv(msg_);
  }

private:
  ::wauto_vehicle_msgs::msg::LaneMarkingTrackA msg_;
};

class Init_LaneMarkingTrackA_lanemarkinglndst
{
public:
  explicit Init_LaneMarkingTrackA_lanemarkinglndst(::wauto_vehicle_msgs::msg::LaneMarkingTrackA & msg)
  : msg_(msg)
  {}
  Init_LaneMarkingTrackA_lanemarkinglncrvtv lanemarkinglndst(::wauto_vehicle_msgs::msg::LaneMarkingTrackA::_lanemarkinglndst_type arg)
  {
    msg_.lanemarkinglndst = std::move(arg);
    return Init_LaneMarkingTrackA_lanemarkinglncrvtv(msg_);
  }

private:
  ::wauto_vehicle_msgs::msg::LaneMarkingTrackA msg_;
};

class Init_LaneMarkingTrackA_lanemarkinglndstv
{
public:
  explicit Init_LaneMarkingTrackA_lanemarkinglndstv(::wauto_vehicle_msgs::msg::LaneMarkingTrackA & msg)
  : msg_(msg)
  {}
  Init_LaneMarkingTrackA_lanemarkinglndst lanemarkinglndstv(::wauto_vehicle_msgs::msg::LaneMarkingTrackA::_lanemarkinglndstv_type arg)
  {
    msg_.lanemarkinglndstv = std::move(arg);
    return Init_LaneMarkingTrackA_lanemarkinglndst(msg_);
  }

private:
  ::wauto_vehicle_msgs::msg::LaneMarkingTrackA msg_;
};

class Init_LaneMarkingTrackA_lanemarkinglnhdngtngt
{
public:
  explicit Init_LaneMarkingTrackA_lanemarkinglnhdngtngt(::wauto_vehicle_msgs::msg::LaneMarkingTrackA & msg)
  : msg_(msg)
  {}
  Init_LaneMarkingTrackA_lanemarkinglndstv lanemarkinglnhdngtngt(::wauto_vehicle_msgs::msg::LaneMarkingTrackA::_lanemarkinglnhdngtngt_type arg)
  {
    msg_.lanemarkinglnhdngtngt = std::move(arg);
    return Init_LaneMarkingTrackA_lanemarkinglndstv(msg_);
  }

private:
  ::wauto_vehicle_msgs::msg::LaneMarkingTrackA msg_;
};

class Init_LaneMarkingTrackA_lanemarkinglnhdngtngtv
{
public:
  explicit Init_LaneMarkingTrackA_lanemarkinglnhdngtngtv(::wauto_vehicle_msgs::msg::LaneMarkingTrackA & msg)
  : msg_(msg)
  {}
  Init_LaneMarkingTrackA_lanemarkinglnhdngtngt lanemarkinglnhdngtngtv(::wauto_vehicle_msgs::msg::LaneMarkingTrackA::_lanemarkinglnhdngtngtv_type arg)
  {
    msg_.lanemarkinglnhdngtngtv = std::move(arg);
    return Init_LaneMarkingTrackA_lanemarkinglnhdngtngt(msg_);
  }

private:
  ::wauto_vehicle_msgs::msg::LaneMarkingTrackA msg_;
};

class Init_LaneMarkingTrackA_lanemarkingid
{
public:
  explicit Init_LaneMarkingTrackA_lanemarkingid(::wauto_vehicle_msgs::msg::LaneMarkingTrackA & msg)
  : msg_(msg)
  {}
  Init_LaneMarkingTrackA_lanemarkinglnhdngtngtv lanemarkingid(::wauto_vehicle_msgs::msg::LaneMarkingTrackA::_lanemarkingid_type arg)
  {
    msg_.lanemarkingid = std::move(arg);
    return Init_LaneMarkingTrackA_lanemarkinglnhdngtngtv(msg_);
  }

private:
  ::wauto_vehicle_msgs::msg::LaneMarkingTrackA msg_;
};

class Init_LaneMarkingTrackA_rolling_count
{
public:
  Init_LaneMarkingTrackA_rolling_count()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LaneMarkingTrackA_lanemarkingid rolling_count(::wauto_vehicle_msgs::msg::LaneMarkingTrackA::_rolling_count_type arg)
  {
    msg_.rolling_count = std::move(arg);
    return Init_LaneMarkingTrackA_lanemarkingid(msg_);
  }

private:
  ::wauto_vehicle_msgs::msg::LaneMarkingTrackA msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::wauto_vehicle_msgs::msg::LaneMarkingTrackA>()
{
  return wauto_vehicle_msgs::msg::builder::Init_LaneMarkingTrackA_rolling_count();
}

}  // namespace wauto_vehicle_msgs

#endif  // WAUTO_VEHICLE_MSGS__MSG__DETAIL__LANE_MARKING_TRACK_A__BUILDER_HPP_
