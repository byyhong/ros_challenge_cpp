// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from wauto_control_msgs:msg/CarSafety.idl
// generated code does not contain a copyright notice

#ifndef WAUTO_CONTROL_MSGS__MSG__DETAIL__CAR_SAFETY__STRUCT_HPP_
#define WAUTO_CONTROL_MSGS__MSG__DETAIL__CAR_SAFETY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__wauto_control_msgs__msg__CarSafety __attribute__((deprecated))
#else
# define DEPRECATED__wauto_control_msgs__msg__CarSafety __declspec(deprecated)
#endif

namespace wauto_control_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CarSafety_
{
  using Type = CarSafety_<ContainerAllocator>;

  explicit CarSafety_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->human_ready = false;
      this->human_stop = false;
      this->car_disabled = false;
      this->publishing_traj = false;
      this->finished_traj = false;
    }
  }

  explicit CarSafety_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->human_ready = false;
      this->human_stop = false;
      this->car_disabled = false;
      this->publishing_traj = false;
      this->finished_traj = false;
    }
  }

  // field types and members
  using _human_ready_type =
    bool;
  _human_ready_type human_ready;
  using _human_stop_type =
    bool;
  _human_stop_type human_stop;
  using _car_disabled_type =
    bool;
  _car_disabled_type car_disabled;
  using _publishing_traj_type =
    bool;
  _publishing_traj_type publishing_traj;
  using _finished_traj_type =
    bool;
  _finished_traj_type finished_traj;

  // setters for named parameter idiom
  Type & set__human_ready(
    const bool & _arg)
  {
    this->human_ready = _arg;
    return *this;
  }
  Type & set__human_stop(
    const bool & _arg)
  {
    this->human_stop = _arg;
    return *this;
  }
  Type & set__car_disabled(
    const bool & _arg)
  {
    this->car_disabled = _arg;
    return *this;
  }
  Type & set__publishing_traj(
    const bool & _arg)
  {
    this->publishing_traj = _arg;
    return *this;
  }
  Type & set__finished_traj(
    const bool & _arg)
  {
    this->finished_traj = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    wauto_control_msgs::msg::CarSafety_<ContainerAllocator> *;
  using ConstRawPtr =
    const wauto_control_msgs::msg::CarSafety_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<wauto_control_msgs::msg::CarSafety_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<wauto_control_msgs::msg::CarSafety_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      wauto_control_msgs::msg::CarSafety_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<wauto_control_msgs::msg::CarSafety_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      wauto_control_msgs::msg::CarSafety_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<wauto_control_msgs::msg::CarSafety_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<wauto_control_msgs::msg::CarSafety_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<wauto_control_msgs::msg::CarSafety_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__wauto_control_msgs__msg__CarSafety
    std::shared_ptr<wauto_control_msgs::msg::CarSafety_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__wauto_control_msgs__msg__CarSafety
    std::shared_ptr<wauto_control_msgs::msg::CarSafety_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CarSafety_ & other) const
  {
    if (this->human_ready != other.human_ready) {
      return false;
    }
    if (this->human_stop != other.human_stop) {
      return false;
    }
    if (this->car_disabled != other.car_disabled) {
      return false;
    }
    if (this->publishing_traj != other.publishing_traj) {
      return false;
    }
    if (this->finished_traj != other.finished_traj) {
      return false;
    }
    return true;
  }
  bool operator!=(const CarSafety_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CarSafety_

// alias to use template instance with default allocator
using CarSafety =
  wauto_control_msgs::msg::CarSafety_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace wauto_control_msgs

#endif  // WAUTO_CONTROL_MSGS__MSG__DETAIL__CAR_SAFETY__STRUCT_HPP_
