// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from wauto_perception_msgs:msg/ClusterArray.idl
// generated code does not contain a copyright notice

#ifndef WAUTO_PERCEPTION_MSGS__MSG__DETAIL__CLUSTER_ARRAY__STRUCT_HPP_
#define WAUTO_PERCEPTION_MSGS__MSG__DETAIL__CLUSTER_ARRAY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"
// Member 'clusters'
#include "wauto_perception_msgs/msg/detail/cluster__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__wauto_perception_msgs__msg__ClusterArray __attribute__((deprecated))
#else
# define DEPRECATED__wauto_perception_msgs__msg__ClusterArray __declspec(deprecated)
#endif

namespace wauto_perception_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ClusterArray_
{
  using Type = ClusterArray_<ContainerAllocator>;

  explicit ClusterArray_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    (void)_init;
  }

  explicit ClusterArray_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _clusters_type =
    std::vector<wauto_perception_msgs::msg::Cluster_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<wauto_perception_msgs::msg::Cluster_<ContainerAllocator>>>;
  _clusters_type clusters;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__clusters(
    const std::vector<wauto_perception_msgs::msg::Cluster_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<wauto_perception_msgs::msg::Cluster_<ContainerAllocator>>> & _arg)
  {
    this->clusters = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    wauto_perception_msgs::msg::ClusterArray_<ContainerAllocator> *;
  using ConstRawPtr =
    const wauto_perception_msgs::msg::ClusterArray_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<wauto_perception_msgs::msg::ClusterArray_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<wauto_perception_msgs::msg::ClusterArray_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      wauto_perception_msgs::msg::ClusterArray_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<wauto_perception_msgs::msg::ClusterArray_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      wauto_perception_msgs::msg::ClusterArray_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<wauto_perception_msgs::msg::ClusterArray_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<wauto_perception_msgs::msg::ClusterArray_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<wauto_perception_msgs::msg::ClusterArray_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__wauto_perception_msgs__msg__ClusterArray
    std::shared_ptr<wauto_perception_msgs::msg::ClusterArray_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__wauto_perception_msgs__msg__ClusterArray
    std::shared_ptr<wauto_perception_msgs::msg::ClusterArray_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ClusterArray_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->clusters != other.clusters) {
      return false;
    }
    return true;
  }
  bool operator!=(const ClusterArray_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ClusterArray_

// alias to use template instance with default allocator
using ClusterArray =
  wauto_perception_msgs::msg::ClusterArray_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace wauto_perception_msgs

#endif  // WAUTO_PERCEPTION_MSGS__MSG__DETAIL__CLUSTER_ARRAY__STRUCT_HPP_
