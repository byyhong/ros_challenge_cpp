// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from wauto_control_msgs:msg/CarFlatData.idl
// generated code does not contain a copyright notice

#ifndef WAUTO_CONTROL_MSGS__MSG__DETAIL__CAR_FLAT_DATA__STRUCT_HPP_
#define WAUTO_CONTROL_MSGS__MSG__DETAIL__CAR_FLAT_DATA__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'x'
#include "wauto_control_msgs/msg/detail/car_state__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__wauto_control_msgs__msg__CarFlatData __attribute__((deprecated))
#else
# define DEPRECATED__wauto_control_msgs__msg__CarFlatData __declspec(deprecated)
#endif

namespace wauto_control_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CarFlatData_
{
  using Type = CarFlatData_<ContainerAllocator>;

  explicit CarFlatData_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : x(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->l = 0.0;
      this->nu = 0.0;
      this->gamma_max = 0.0;
      this->a_max = 0.0;
      this->v_max = 0.0;
    }
  }

  explicit CarFlatData_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : x(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->l = 0.0;
      this->nu = 0.0;
      this->gamma_max = 0.0;
      this->a_max = 0.0;
      this->v_max = 0.0;
    }
  }

  // field types and members
  using _l_type =
    double;
  _l_type l;
  using _nu_type =
    double;
  _nu_type nu;
  using _gamma_max_type =
    double;
  _gamma_max_type gamma_max;
  using _a_max_type =
    double;
  _a_max_type a_max;
  using _v_max_type =
    double;
  _v_max_type v_max;
  using _x_type =
    wauto_control_msgs::msg::CarState_<ContainerAllocator>;
  _x_type x;

  // setters for named parameter idiom
  Type & set__l(
    const double & _arg)
  {
    this->l = _arg;
    return *this;
  }
  Type & set__nu(
    const double & _arg)
  {
    this->nu = _arg;
    return *this;
  }
  Type & set__gamma_max(
    const double & _arg)
  {
    this->gamma_max = _arg;
    return *this;
  }
  Type & set__a_max(
    const double & _arg)
  {
    this->a_max = _arg;
    return *this;
  }
  Type & set__v_max(
    const double & _arg)
  {
    this->v_max = _arg;
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
    wauto_control_msgs::msg::CarFlatData_<ContainerAllocator> *;
  using ConstRawPtr =
    const wauto_control_msgs::msg::CarFlatData_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<wauto_control_msgs::msg::CarFlatData_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<wauto_control_msgs::msg::CarFlatData_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      wauto_control_msgs::msg::CarFlatData_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<wauto_control_msgs::msg::CarFlatData_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      wauto_control_msgs::msg::CarFlatData_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<wauto_control_msgs::msg::CarFlatData_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<wauto_control_msgs::msg::CarFlatData_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<wauto_control_msgs::msg::CarFlatData_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__wauto_control_msgs__msg__CarFlatData
    std::shared_ptr<wauto_control_msgs::msg::CarFlatData_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__wauto_control_msgs__msg__CarFlatData
    std::shared_ptr<wauto_control_msgs::msg::CarFlatData_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CarFlatData_ & other) const
  {
    if (this->l != other.l) {
      return false;
    }
    if (this->nu != other.nu) {
      return false;
    }
    if (this->gamma_max != other.gamma_max) {
      return false;
    }
    if (this->a_max != other.a_max) {
      return false;
    }
    if (this->v_max != other.v_max) {
      return false;
    }
    if (this->x != other.x) {
      return false;
    }
    return true;
  }
  bool operator!=(const CarFlatData_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CarFlatData_

// alias to use template instance with default allocator
using CarFlatData =
  wauto_control_msgs::msg::CarFlatData_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace wauto_control_msgs

#endif  // WAUTO_CONTROL_MSGS__MSG__DETAIL__CAR_FLAT_DATA__STRUCT_HPP_
