// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from wauto_perception_msgs:msg/LimitLine.idl
// generated code does not contain a copyright notice

#ifndef WAUTO_PERCEPTION_MSGS__MSG__DETAIL__LIMIT_LINE__BUILDER_HPP_
#define WAUTO_PERCEPTION_MSGS__MSG__DETAIL__LIMIT_LINE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "wauto_perception_msgs/msg/detail/limit_line__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace wauto_perception_msgs
{

namespace msg
{

namespace builder
{

class Init_LimitLine_assignment
{
public:
  explicit Init_LimitLine_assignment(::wauto_perception_msgs::msg::LimitLine & msg)
  : msg_(msg)
  {}
  ::wauto_perception_msgs::msg::LimitLine assignment(::wauto_perception_msgs::msg::LimitLine::_assignment_type arg)
  {
    msg_.assignment = std::move(arg);
    return std::move(msg_);
  }

private:
  ::wauto_perception_msgs::msg::LimitLine msg_;
};

class Init_LimitLine_position
{
public:
  explicit Init_LimitLine_position(::wauto_perception_msgs::msg::LimitLine & msg)
  : msg_(msg)
  {}
  Init_LimitLine_assignment position(::wauto_perception_msgs::msg::LimitLine::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_LimitLine_assignment(msg_);
  }

private:
  ::wauto_perception_msgs::msg::LimitLine msg_;
};

class Init_LimitLine_confidence
{
public:
  explicit Init_LimitLine_confidence(::wauto_perception_msgs::msg::LimitLine & msg)
  : msg_(msg)
  {}
  Init_LimitLine_position confidence(::wauto_perception_msgs::msg::LimitLine::_confidence_type arg)
  {
    msg_.confidence = std::move(arg);
    return Init_LimitLine_position(msg_);
  }

private:
  ::wauto_perception_msgs::msg::LimitLine msg_;
};

class Init_LimitLine_id
{
public:
  Init_LimitLine_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LimitLine_confidence id(::wauto_perception_msgs::msg::LimitLine::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_LimitLine_confidence(msg_);
  }

private:
  ::wauto_perception_msgs::msg::LimitLine msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::wauto_perception_msgs::msg::LimitLine>()
{
  return wauto_perception_msgs::msg::builder::Init_LimitLine_id();
}

}  // namespace wauto_perception_msgs

#endif  // WAUTO_PERCEPTION_MSGS__MSG__DETAIL__LIMIT_LINE__BUILDER_HPP_
