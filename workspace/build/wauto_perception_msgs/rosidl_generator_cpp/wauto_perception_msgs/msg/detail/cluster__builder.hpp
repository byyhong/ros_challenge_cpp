// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from wauto_perception_msgs:msg/Cluster.idl
// generated code does not contain a copyright notice

#ifndef WAUTO_PERCEPTION_MSGS__MSG__DETAIL__CLUSTER__BUILDER_HPP_
#define WAUTO_PERCEPTION_MSGS__MSG__DETAIL__CLUSTER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "wauto_perception_msgs/msg/detail/cluster__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace wauto_perception_msgs
{

namespace msg
{

namespace builder
{

class Init_Cluster_size
{
public:
  explicit Init_Cluster_size(::wauto_perception_msgs::msg::Cluster & msg)
  : msg_(msg)
  {}
  ::wauto_perception_msgs::msg::Cluster size(::wauto_perception_msgs::msg::Cluster::_size_type arg)
  {
    msg_.size = std::move(arg);
    return std::move(msg_);
  }

private:
  ::wauto_perception_msgs::msg::Cluster msg_;
};

class Init_Cluster_pose
{
public:
  explicit Init_Cluster_pose(::wauto_perception_msgs::msg::Cluster & msg)
  : msg_(msg)
  {}
  Init_Cluster_size pose(::wauto_perception_msgs::msg::Cluster::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return Init_Cluster_size(msg_);
  }

private:
  ::wauto_perception_msgs::msg::Cluster msg_;
};

class Init_Cluster_cloud
{
public:
  explicit Init_Cluster_cloud(::wauto_perception_msgs::msg::Cluster & msg)
  : msg_(msg)
  {}
  Init_Cluster_pose cloud(::wauto_perception_msgs::msg::Cluster::_cloud_type arg)
  {
    msg_.cloud = std::move(arg);
    return Init_Cluster_pose(msg_);
  }

private:
  ::wauto_perception_msgs::msg::Cluster msg_;
};

class Init_Cluster_id
{
public:
  explicit Init_Cluster_id(::wauto_perception_msgs::msg::Cluster & msg)
  : msg_(msg)
  {}
  Init_Cluster_cloud id(::wauto_perception_msgs::msg::Cluster::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_Cluster_cloud(msg_);
  }

private:
  ::wauto_perception_msgs::msg::Cluster msg_;
};

class Init_Cluster_header
{
public:
  Init_Cluster_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Cluster_id header(::wauto_perception_msgs::msg::Cluster::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Cluster_id(msg_);
  }

private:
  ::wauto_perception_msgs::msg::Cluster msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::wauto_perception_msgs::msg::Cluster>()
{
  return wauto_perception_msgs::msg::builder::Init_Cluster_header();
}

}  // namespace wauto_perception_msgs

#endif  // WAUTO_PERCEPTION_MSGS__MSG__DETAIL__CLUSTER__BUILDER_HPP_
