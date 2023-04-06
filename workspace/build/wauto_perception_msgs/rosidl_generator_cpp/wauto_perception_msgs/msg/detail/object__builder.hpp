// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from wauto_perception_msgs:msg/Object.idl
// generated code does not contain a copyright notice

#ifndef WAUTO_PERCEPTION_MSGS__MSG__DETAIL__OBJECT__BUILDER_HPP_
#define WAUTO_PERCEPTION_MSGS__MSG__DETAIL__OBJECT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "wauto_perception_msgs/msg/detail/object__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace wauto_perception_msgs
{

namespace msg
{

namespace builder
{

class Init_Object_size
{
public:
  explicit Init_Object_size(::wauto_perception_msgs::msg::Object & msg)
  : msg_(msg)
  {}
  ::wauto_perception_msgs::msg::Object size(::wauto_perception_msgs::msg::Object::_size_type arg)
  {
    msg_.size = std::move(arg);
    return std::move(msg_);
  }

private:
  ::wauto_perception_msgs::msg::Object msg_;
};

class Init_Object_twist
{
public:
  explicit Init_Object_twist(::wauto_perception_msgs::msg::Object & msg)
  : msg_(msg)
  {}
  Init_Object_size twist(::wauto_perception_msgs::msg::Object::_twist_type arg)
  {
    msg_.twist = std::move(arg);
    return Init_Object_size(msg_);
  }

private:
  ::wauto_perception_msgs::msg::Object msg_;
};

class Init_Object_pose
{
public:
  explicit Init_Object_pose(::wauto_perception_msgs::msg::Object & msg)
  : msg_(msg)
  {}
  Init_Object_twist pose(::wauto_perception_msgs::msg::Object::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return Init_Object_twist(msg_);
  }

private:
  ::wauto_perception_msgs::msg::Object msg_;
};

class Init_Object_classification
{
public:
  explicit Init_Object_classification(::wauto_perception_msgs::msg::Object & msg)
  : msg_(msg)
  {}
  Init_Object_pose classification(::wauto_perception_msgs::msg::Object::_classification_type arg)
  {
    msg_.classification = std::move(arg);
    return Init_Object_pose(msg_);
  }

private:
  ::wauto_perception_msgs::msg::Object msg_;
};

class Init_Object_id
{
public:
  Init_Object_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Object_classification id(::wauto_perception_msgs::msg::Object::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_Object_classification(msg_);
  }

private:
  ::wauto_perception_msgs::msg::Object msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::wauto_perception_msgs::msg::Object>()
{
  return wauto_perception_msgs::msg::builder::Init_Object_id();
}

}  // namespace wauto_perception_msgs

#endif  // WAUTO_PERCEPTION_MSGS__MSG__DETAIL__OBJECT__BUILDER_HPP_
