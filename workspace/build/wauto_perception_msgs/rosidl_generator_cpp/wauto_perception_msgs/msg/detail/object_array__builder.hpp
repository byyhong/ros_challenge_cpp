// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from wauto_perception_msgs:msg/ObjectArray.idl
// generated code does not contain a copyright notice

#ifndef WAUTO_PERCEPTION_MSGS__MSG__DETAIL__OBJECT_ARRAY__BUILDER_HPP_
#define WAUTO_PERCEPTION_MSGS__MSG__DETAIL__OBJECT_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "wauto_perception_msgs/msg/detail/object_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace wauto_perception_msgs
{

namespace msg
{

namespace builder
{

class Init_ObjectArray_objects
{
public:
  explicit Init_ObjectArray_objects(::wauto_perception_msgs::msg::ObjectArray & msg)
  : msg_(msg)
  {}
  ::wauto_perception_msgs::msg::ObjectArray objects(::wauto_perception_msgs::msg::ObjectArray::_objects_type arg)
  {
    msg_.objects = std::move(arg);
    return std::move(msg_);
  }

private:
  ::wauto_perception_msgs::msg::ObjectArray msg_;
};

class Init_ObjectArray_header
{
public:
  Init_ObjectArray_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ObjectArray_objects header(::wauto_perception_msgs::msg::ObjectArray::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ObjectArray_objects(msg_);
  }

private:
  ::wauto_perception_msgs::msg::ObjectArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::wauto_perception_msgs::msg::ObjectArray>()
{
  return wauto_perception_msgs::msg::builder::Init_ObjectArray_header();
}

}  // namespace wauto_perception_msgs

#endif  // WAUTO_PERCEPTION_MSGS__MSG__DETAIL__OBJECT_ARRAY__BUILDER_HPP_
