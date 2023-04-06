// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from wauto_control_msgs:msg/LaneBoundaries.idl
// generated code does not contain a copyright notice

#ifndef WAUTO_CONTROL_MSGS__MSG__DETAIL__LANE_BOUNDARIES__STRUCT_HPP_
#define WAUTO_CONTROL_MSGS__MSG__DETAIL__LANE_BOUNDARIES__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'right'
// Member 'left'
#include "wauto_control_msgs/msg/detail/lane_marking__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__wauto_control_msgs__msg__LaneBoundaries __attribute__((deprecated))
#else
# define DEPRECATED__wauto_control_msgs__msg__LaneBoundaries __declspec(deprecated)
#endif

namespace wauto_control_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LaneBoundaries_
{
  using Type = LaneBoundaries_<ContainerAllocator>;

  explicit LaneBoundaries_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : right(_init),
    left(_init)
  {
    (void)_init;
  }

  explicit LaneBoundaries_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : right(_alloc, _init),
    left(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _right_type =
    wauto_control_msgs::msg::LaneMarking_<ContainerAllocator>;
  _right_type right;
  using _left_type =
    wauto_control_msgs::msg::LaneMarking_<ContainerAllocator>;
  _left_type left;

  // setters for named parameter idiom
  Type & set__right(
    const wauto_control_msgs::msg::LaneMarking_<ContainerAllocator> & _arg)
  {
    this->right = _arg;
    return *this;
  }
  Type & set__left(
    const wauto_control_msgs::msg::LaneMarking_<ContainerAllocator> & _arg)
  {
    this->left = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    wauto_control_msgs::msg::LaneBoundaries_<ContainerAllocator> *;
  using ConstRawPtr =
    const wauto_control_msgs::msg::LaneBoundaries_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<wauto_control_msgs::msg::LaneBoundaries_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<wauto_control_msgs::msg::LaneBoundaries_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      wauto_control_msgs::msg::LaneBoundaries_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<wauto_control_msgs::msg::LaneBoundaries_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      wauto_control_msgs::msg::LaneBoundaries_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<wauto_control_msgs::msg::LaneBoundaries_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<wauto_control_msgs::msg::LaneBoundaries_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<wauto_control_msgs::msg::LaneBoundaries_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__wauto_control_msgs__msg__LaneBoundaries
    std::shared_ptr<wauto_control_msgs::msg::LaneBoundaries_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__wauto_control_msgs__msg__LaneBoundaries
    std::shared_ptr<wauto_control_msgs::msg::LaneBoundaries_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LaneBoundaries_ & other) const
  {
    if (this->right != other.right) {
      return false;
    }
    if (this->left != other.left) {
      return false;
    }
    return true;
  }
  bool operator!=(const LaneBoundaries_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LaneBoundaries_

// alias to use template instance with default allocator
using LaneBoundaries =
  wauto_control_msgs::msg::LaneBoundaries_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace wauto_control_msgs

#endif  // WAUTO_CONTROL_MSGS__MSG__DETAIL__LANE_BOUNDARIES__STRUCT_HPP_
