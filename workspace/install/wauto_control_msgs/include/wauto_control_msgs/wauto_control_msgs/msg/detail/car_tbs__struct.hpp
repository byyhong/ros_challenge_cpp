// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from wauto_control_msgs:msg/CarTBS.idl
// generated code does not contain a copyright notice

#ifndef WAUTO_CONTROL_MSGS__MSG__DETAIL__CAR_TBS__STRUCT_HPP_
#define WAUTO_CONTROL_MSGS__MSG__DETAIL__CAR_TBS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__wauto_control_msgs__msg__CarTBS __attribute__((deprecated))
#else
# define DEPRECATED__wauto_control_msgs__msg__CarTBS __declspec(deprecated)
#endif

namespace wauto_control_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CarTBS_
{
  using Type = CarTBS_<ContainerAllocator>;

  explicit CarTBS_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->t = 0.0;
      this->b = 0.0;
      this->s = 0.0;
    }
  }

  explicit CarTBS_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->t = 0.0;
      this->b = 0.0;
      this->s = 0.0;
    }
  }

  // field types and members
  using _t_type =
    double;
  _t_type t;
  using _b_type =
    double;
  _b_type b;
  using _s_type =
    double;
  _s_type s;

  // setters for named parameter idiom
  Type & set__t(
    const double & _arg)
  {
    this->t = _arg;
    return *this;
  }
  Type & set__b(
    const double & _arg)
  {
    this->b = _arg;
    return *this;
  }
  Type & set__s(
    const double & _arg)
  {
    this->s = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    wauto_control_msgs::msg::CarTBS_<ContainerAllocator> *;
  using ConstRawPtr =
    const wauto_control_msgs::msg::CarTBS_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<wauto_control_msgs::msg::CarTBS_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<wauto_control_msgs::msg::CarTBS_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      wauto_control_msgs::msg::CarTBS_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<wauto_control_msgs::msg::CarTBS_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      wauto_control_msgs::msg::CarTBS_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<wauto_control_msgs::msg::CarTBS_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<wauto_control_msgs::msg::CarTBS_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<wauto_control_msgs::msg::CarTBS_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__wauto_control_msgs__msg__CarTBS
    std::shared_ptr<wauto_control_msgs::msg::CarTBS_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__wauto_control_msgs__msg__CarTBS
    std::shared_ptr<wauto_control_msgs::msg::CarTBS_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CarTBS_ & other) const
  {
    if (this->t != other.t) {
      return false;
    }
    if (this->b != other.b) {
      return false;
    }
    if (this->s != other.s) {
      return false;
    }
    return true;
  }
  bool operator!=(const CarTBS_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CarTBS_

// alias to use template instance with default allocator
using CarTBS =
  wauto_control_msgs::msg::CarTBS_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace wauto_control_msgs

#endif  // WAUTO_CONTROL_MSGS__MSG__DETAIL__CAR_TBS__STRUCT_HPP_
