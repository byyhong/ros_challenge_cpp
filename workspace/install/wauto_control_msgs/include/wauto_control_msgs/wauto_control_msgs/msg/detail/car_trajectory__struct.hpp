// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from wauto_control_msgs:msg/CarTrajectory.idl
// generated code does not contain a copyright notice

#ifndef WAUTO_CONTROL_MSGS__MSG__DETAIL__CAR_TRAJECTORY__STRUCT_HPP_
#define WAUTO_CONTROL_MSGS__MSG__DETAIL__CAR_TRAJECTORY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'u'
#include "wauto_control_msgs/msg/detail/car_input__struct.hpp"
// Member 'x'
#include "wauto_control_msgs/msg/detail/car_state__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__wauto_control_msgs__msg__CarTrajectory __attribute__((deprecated))
#else
# define DEPRECATED__wauto_control_msgs__msg__CarTrajectory __declspec(deprecated)
#endif

namespace wauto_control_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CarTrajectory_
{
  using Type = CarTrajectory_<ContainerAllocator>;

  explicit CarTrajectory_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : u(_init),
    x(_init)
  {
    (void)_init;
  }

  explicit CarTrajectory_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : u(_alloc, _init),
    x(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _u_type =
    wauto_control_msgs::msg::CarInput_<ContainerAllocator>;
  _u_type u;
  using _x_type =
    wauto_control_msgs::msg::CarState_<ContainerAllocator>;
  _x_type x;

  // setters for named parameter idiom
  Type & set__u(
    const wauto_control_msgs::msg::CarInput_<ContainerAllocator> & _arg)
  {
    this->u = _arg;
    return *this;
  }
  Type & set__x(
    const wauto_control_msgs::msg::CarState_<ContainerAllocator> & _arg)
  {
    this->x = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    wauto_control_msgs::msg::CarTrajectory_<ContainerAllocator> *;
  using ConstRawPtr =
    const wauto_control_msgs::msg::CarTrajectory_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<wauto_control_msgs::msg::CarTrajectory_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<wauto_control_msgs::msg::CarTrajectory_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      wauto_control_msgs::msg::CarTrajectory_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<wauto_control_msgs::msg::CarTrajectory_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      wauto_control_msgs::msg::CarTrajectory_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<wauto_control_msgs::msg::CarTrajectory_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<wauto_control_msgs::msg::CarTrajectory_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<wauto_control_msgs::msg::CarTrajectory_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__wauto_control_msgs__msg__CarTrajectory
    std::shared_ptr<wauto_control_msgs::msg::CarTrajectory_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__wauto_control_msgs__msg__CarTrajectory
    std::shared_ptr<wauto_control_msgs::msg::CarTrajectory_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CarTrajectory_ & other) const
  {
    if (this->u != other.u) {
      return false;
    }
    if (this->x != other.x) {
      return false;
    }
    return true;
  }
  bool operator!=(const CarTrajectory_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CarTrajectory_

// alias to use template instance with default allocator
using CarTrajectory =
  wauto_control_msgs::msg::CarTrajectory_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace wauto_control_msgs

#endif  // WAUTO_CONTROL_MSGS__MSG__DETAIL__CAR_TRAJECTORY__STRUCT_HPP_
