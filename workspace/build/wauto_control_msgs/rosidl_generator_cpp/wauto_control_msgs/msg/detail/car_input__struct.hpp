// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from wauto_control_msgs:msg/CarInput.idl
// generated code does not contain a copyright notice

#ifndef WAUTO_CONTROL_MSGS__MSG__DETAIL__CAR_INPUT__STRUCT_HPP_
#define WAUTO_CONTROL_MSGS__MSG__DETAIL__CAR_INPUT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__wauto_control_msgs__msg__CarInput __attribute__((deprecated))
#else
# define DEPRECATED__wauto_control_msgs__msg__CarInput __declspec(deprecated)
#endif

namespace wauto_control_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CarInput_
{
  using Type = CarInput_<ContainerAllocator>;

  explicit CarInput_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->v_dot = 0.0;
      this->psi_dot = 0.0;
      this->gamma = 0.0;
    }
  }

  explicit CarInput_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->v_dot = 0.0;
      this->psi_dot = 0.0;
      this->gamma = 0.0;
    }
  }

  // field types and members
  using _v_dot_type =
    double;
  _v_dot_type v_dot;
  using _psi_dot_type =
    double;
  _psi_dot_type psi_dot;
  using _gamma_type =
    double;
  _gamma_type gamma;

  // setters for named parameter idiom
  Type & set__v_dot(
    const double & _arg)
  {
    this->v_dot = _arg;
    return *this;
  }
  Type & set__psi_dot(
    const double & _arg)
  {
    this->psi_dot = _arg;
    return *this;
  }
  Type & set__gamma(
    const double & _arg)
  {
    this->gamma = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    wauto_control_msgs::msg::CarInput_<ContainerAllocator> *;
  using ConstRawPtr =
    const wauto_control_msgs::msg::CarInput_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<wauto_control_msgs::msg::CarInput_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<wauto_control_msgs::msg::CarInput_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      wauto_control_msgs::msg::CarInput_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<wauto_control_msgs::msg::CarInput_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      wauto_control_msgs::msg::CarInput_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<wauto_control_msgs::msg::CarInput_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<wauto_control_msgs::msg::CarInput_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<wauto_control_msgs::msg::CarInput_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__wauto_control_msgs__msg__CarInput
    std::shared_ptr<wauto_control_msgs::msg::CarInput_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__wauto_control_msgs__msg__CarInput
    std::shared_ptr<wauto_control_msgs::msg::CarInput_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CarInput_ & other) const
  {
    if (this->v_dot != other.v_dot) {
      return false;
    }
    if (this->psi_dot != other.psi_dot) {
      return false;
    }
    if (this->gamma != other.gamma) {
      return false;
    }
    return true;
  }
  bool operator!=(const CarInput_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CarInput_

// alias to use template instance with default allocator
using CarInput =
  wauto_control_msgs::msg::CarInput_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace wauto_control_msgs

#endif  // WAUTO_CONTROL_MSGS__MSG__DETAIL__CAR_INPUT__STRUCT_HPP_
