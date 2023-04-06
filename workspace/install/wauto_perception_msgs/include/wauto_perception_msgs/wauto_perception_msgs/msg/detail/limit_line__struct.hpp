// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from wauto_perception_msgs:msg/LimitLine.idl
// generated code does not contain a copyright notice

#ifndef WAUTO_PERCEPTION_MSGS__MSG__DETAIL__LIMIT_LINE__STRUCT_HPP_
#define WAUTO_PERCEPTION_MSGS__MSG__DETAIL__LIMIT_LINE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'position'
#include "geometry_msgs/msg/detail/vector3__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__wauto_perception_msgs__msg__LimitLine __attribute__((deprecated))
#else
# define DEPRECATED__wauto_perception_msgs__msg__LimitLine __declspec(deprecated)
#endif

namespace wauto_perception_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LimitLine_
{
  using Type = LimitLine_<ContainerAllocator>;

  explicit LimitLine_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : position(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->id = 0l;
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->id = 0l;
      this->confidence = 0.0f;
      this->assignment = 0;
    }
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->confidence = 0.0f;
      this->assignment = 0;
    }
  }

  explicit LimitLine_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : position(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->id = 0l;
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->id = 0l;
      this->confidence = 0.0f;
      this->assignment = 0;
    }
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->confidence = 0.0f;
      this->assignment = 0;
    }
  }

  // field types and members
  using _id_type =
    int32_t;
  _id_type id;
  using _confidence_type =
    float;
  _confidence_type confidence;
  using _position_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _position_type position;
  using _assignment_type =
    uint8_t;
  _assignment_type assignment;

  // setters for named parameter idiom
  Type & set__id(
    const int32_t & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__confidence(
    const float & _arg)
  {
    this->confidence = _arg;
    return *this;
  }
  Type & set__position(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->position = _arg;
    return *this;
  }
  Type & set__assignment(
    const uint8_t & _arg)
  {
    this->assignment = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t WA_LIMIT_LINE_ASSIGN_UNKNOWN =
    0u;
  static constexpr uint8_t WA_LIMIT_LINE_ASSIGN_HOST_LANE =
    1u;
  static constexpr uint8_t WA_LIMIT_LINE_ASSIGN_LEFT_SHOULDER =
    2u;
  static constexpr uint8_t WA_LIMIT_LINE_ASSIGN_LEFT_LANE =
    3u;
  static constexpr uint8_t WA_LIMIT_LINE_ASSIGN_RIGHT_LANE =
    4u;
  static constexpr uint8_t WA_LIMIT_LINE_ASSIGN_RIGHT_SHOULDER =
    5u;
  static constexpr uint8_t WA_LIMIT_LINE_ASSIGN_OVERHEAD =
    6u;

  // pointer types
  using RawPtr =
    wauto_perception_msgs::msg::LimitLine_<ContainerAllocator> *;
  using ConstRawPtr =
    const wauto_perception_msgs::msg::LimitLine_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<wauto_perception_msgs::msg::LimitLine_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<wauto_perception_msgs::msg::LimitLine_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      wauto_perception_msgs::msg::LimitLine_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<wauto_perception_msgs::msg::LimitLine_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      wauto_perception_msgs::msg::LimitLine_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<wauto_perception_msgs::msg::LimitLine_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<wauto_perception_msgs::msg::LimitLine_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<wauto_perception_msgs::msg::LimitLine_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__wauto_perception_msgs__msg__LimitLine
    std::shared_ptr<wauto_perception_msgs::msg::LimitLine_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__wauto_perception_msgs__msg__LimitLine
    std::shared_ptr<wauto_perception_msgs::msg::LimitLine_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LimitLine_ & other) const
  {
    if (this->id != other.id) {
      return false;
    }
    if (this->confidence != other.confidence) {
      return false;
    }
    if (this->position != other.position) {
      return false;
    }
    if (this->assignment != other.assignment) {
      return false;
    }
    return true;
  }
  bool operator!=(const LimitLine_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LimitLine_

// alias to use template instance with default allocator
using LimitLine =
  wauto_perception_msgs::msg::LimitLine_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t LimitLine_<ContainerAllocator>::WA_LIMIT_LINE_ASSIGN_UNKNOWN;
template<typename ContainerAllocator>
constexpr uint8_t LimitLine_<ContainerAllocator>::WA_LIMIT_LINE_ASSIGN_HOST_LANE;
template<typename ContainerAllocator>
constexpr uint8_t LimitLine_<ContainerAllocator>::WA_LIMIT_LINE_ASSIGN_LEFT_SHOULDER;
template<typename ContainerAllocator>
constexpr uint8_t LimitLine_<ContainerAllocator>::WA_LIMIT_LINE_ASSIGN_LEFT_LANE;
template<typename ContainerAllocator>
constexpr uint8_t LimitLine_<ContainerAllocator>::WA_LIMIT_LINE_ASSIGN_RIGHT_LANE;
template<typename ContainerAllocator>
constexpr uint8_t LimitLine_<ContainerAllocator>::WA_LIMIT_LINE_ASSIGN_RIGHT_SHOULDER;
template<typename ContainerAllocator>
constexpr uint8_t LimitLine_<ContainerAllocator>::WA_LIMIT_LINE_ASSIGN_OVERHEAD;

}  // namespace msg

}  // namespace wauto_perception_msgs

#endif  // WAUTO_PERCEPTION_MSGS__MSG__DETAIL__LIMIT_LINE__STRUCT_HPP_
