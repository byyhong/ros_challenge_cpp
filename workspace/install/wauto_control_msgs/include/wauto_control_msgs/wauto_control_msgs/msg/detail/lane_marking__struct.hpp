// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from wauto_control_msgs:msg/LaneMarking.idl
// generated code does not contain a copyright notice

#ifndef WAUTO_CONTROL_MSGS__MSG__DETAIL__LANE_MARKING__STRUCT_HPP_
#define WAUTO_CONTROL_MSGS__MSG__DETAIL__LANE_MARKING__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__wauto_control_msgs__msg__LaneMarking __attribute__((deprecated))
#else
# define DEPRECATED__wauto_control_msgs__msg__LaneMarking __declspec(deprecated)
#endif

namespace wauto_control_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LaneMarking_
{
  using Type = LaneMarking_<ContainerAllocator>;

  explicit LaneMarking_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->boundary_type = 0;
      this->lateral_offset = 0.0;
      this->heading_angle = 0.0;
      std::fill<typename std::array<double, 20>::iterator, double>(this->coordinates_x.begin(), this->coordinates_x.end(), 0.0);
      std::fill<typename std::array<double, 20>::iterator, double>(this->coordinates_y.begin(), this->coordinates_y.end(), 0.0);
    }
  }

  explicit LaneMarking_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : coordinates_x(_alloc),
    coordinates_y(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->boundary_type = 0;
      this->lateral_offset = 0.0;
      this->heading_angle = 0.0;
      std::fill<typename std::array<double, 20>::iterator, double>(this->coordinates_x.begin(), this->coordinates_x.end(), 0.0);
      std::fill<typename std::array<double, 20>::iterator, double>(this->coordinates_y.begin(), this->coordinates_y.end(), 0.0);
    }
  }

  // field types and members
  using _boundary_type_type =
    uint8_t;
  _boundary_type_type boundary_type;
  using _lateral_offset_type =
    double;
  _lateral_offset_type lateral_offset;
  using _heading_angle_type =
    double;
  _heading_angle_type heading_angle;
  using _coordinates_x_type =
    std::array<double, 20>;
  _coordinates_x_type coordinates_x;
  using _coordinates_y_type =
    std::array<double, 20>;
  _coordinates_y_type coordinates_y;

  // setters for named parameter idiom
  Type & set__boundary_type(
    const uint8_t & _arg)
  {
    this->boundary_type = _arg;
    return *this;
  }
  Type & set__lateral_offset(
    const double & _arg)
  {
    this->lateral_offset = _arg;
    return *this;
  }
  Type & set__heading_angle(
    const double & _arg)
  {
    this->heading_angle = _arg;
    return *this;
  }
  Type & set__coordinates_x(
    const std::array<double, 20> & _arg)
  {
    this->coordinates_x = _arg;
    return *this;
  }
  Type & set__coordinates_y(
    const std::array<double, 20> & _arg)
  {
    this->coordinates_y = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t UNMARKED =
    0u;
  static constexpr uint8_t SOLID =
    1u;
  static constexpr uint8_t DASHED =
    2u;
  static constexpr uint8_t DOUBLESOLID =
    3u;
  static constexpr uint8_t DOUBLEDASHED =
    4u;
  static constexpr uint8_t SOLIDDASHED =
    5u;
  static constexpr uint8_t DASHEDSOLID =
    6u;

  // pointer types
  using RawPtr =
    wauto_control_msgs::msg::LaneMarking_<ContainerAllocator> *;
  using ConstRawPtr =
    const wauto_control_msgs::msg::LaneMarking_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<wauto_control_msgs::msg::LaneMarking_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<wauto_control_msgs::msg::LaneMarking_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      wauto_control_msgs::msg::LaneMarking_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<wauto_control_msgs::msg::LaneMarking_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      wauto_control_msgs::msg::LaneMarking_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<wauto_control_msgs::msg::LaneMarking_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<wauto_control_msgs::msg::LaneMarking_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<wauto_control_msgs::msg::LaneMarking_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__wauto_control_msgs__msg__LaneMarking
    std::shared_ptr<wauto_control_msgs::msg::LaneMarking_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__wauto_control_msgs__msg__LaneMarking
    std::shared_ptr<wauto_control_msgs::msg::LaneMarking_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LaneMarking_ & other) const
  {
    if (this->boundary_type != other.boundary_type) {
      return false;
    }
    if (this->lateral_offset != other.lateral_offset) {
      return false;
    }
    if (this->heading_angle != other.heading_angle) {
      return false;
    }
    if (this->coordinates_x != other.coordinates_x) {
      return false;
    }
    if (this->coordinates_y != other.coordinates_y) {
      return false;
    }
    return true;
  }
  bool operator!=(const LaneMarking_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LaneMarking_

// alias to use template instance with default allocator
using LaneMarking =
  wauto_control_msgs::msg::LaneMarking_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t LaneMarking_<ContainerAllocator>::UNMARKED;
template<typename ContainerAllocator>
constexpr uint8_t LaneMarking_<ContainerAllocator>::SOLID;
template<typename ContainerAllocator>
constexpr uint8_t LaneMarking_<ContainerAllocator>::DASHED;
template<typename ContainerAllocator>
constexpr uint8_t LaneMarking_<ContainerAllocator>::DOUBLESOLID;
template<typename ContainerAllocator>
constexpr uint8_t LaneMarking_<ContainerAllocator>::DOUBLEDASHED;
template<typename ContainerAllocator>
constexpr uint8_t LaneMarking_<ContainerAllocator>::SOLIDDASHED;
template<typename ContainerAllocator>
constexpr uint8_t LaneMarking_<ContainerAllocator>::DASHEDSOLID;

}  // namespace msg

}  // namespace wauto_control_msgs

#endif  // WAUTO_CONTROL_MSGS__MSG__DETAIL__LANE_MARKING__STRUCT_HPP_
