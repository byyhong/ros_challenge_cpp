// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from wauto_perception_msgs:msg/LaneMarking.idl
// generated code does not contain a copyright notice

#ifndef WAUTO_PERCEPTION_MSGS__MSG__DETAIL__LANE_MARKING__STRUCT_HPP_
#define WAUTO_PERCEPTION_MSGS__MSG__DETAIL__LANE_MARKING__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__wauto_perception_msgs__msg__LaneMarking __attribute__((deprecated))
#else
# define DEPRECATED__wauto_perception_msgs__msg__LaneMarking __declspec(deprecated)
#endif

namespace wauto_perception_msgs
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
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->id = 0l;
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->id = 0l;
      this->distance = 0;
      this->type = 0;
      this->color = 0;
    }
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->distance = 0;
      this->type = 0;
      this->color = 0;
    }
  }

  explicit LaneMarking_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->id = 0l;
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->id = 0l;
      this->distance = 0;
      this->type = 0;
      this->color = 0;
    }
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->distance = 0;
      this->type = 0;
      this->color = 0;
    }
  }

  // field types and members
  using _id_type =
    int32_t;
  _id_type id;
  using _distance_type =
    int8_t;
  _distance_type distance;
  using _type_type =
    uint8_t;
  _type_type type;
  using _color_type =
    uint8_t;
  _color_type color;

  // setters for named parameter idiom
  Type & set__id(
    const int32_t & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__distance(
    const int8_t & _arg)
  {
    this->distance = _arg;
    return *this;
  }
  Type & set__type(
    const uint8_t & _arg)
  {
    this->type = _arg;
    return *this;
  }
  Type & set__color(
    const uint8_t & _arg)
  {
    this->color = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t WA_LANE_MARKING_TYPE_UNKNOWN =
    0u;
  static constexpr uint8_t WA_LANE_MARKING_TYPE_SOLID =
    1u;
  static constexpr uint8_t WA_LANE_MARKING_TYPE_DASHED =
    2u;
  static constexpr uint8_t WA_LANE_MARKING_TYPE_DOTTED =
    3u;
  static constexpr uint8_t WA_LANE_MARKING_TYPE_BOTTS_DOTS =
    4u;
  static constexpr uint8_t WA_LANE_MARKING_TYPE_DOUBLE =
    5u;
  static constexpr uint8_t WA_LANE_MARKING_TYPE_ROAD_EDGE =
    6u;
  static constexpr uint8_t WA_LANE_MARKING_COLOR_UNKNOWN =
    0u;
  static constexpr uint8_t WA_LANE_MARKING_COLOR_WHITE =
    1u;
  static constexpr uint8_t WA_LANE_MARKING_COLOR_YELLOW =
    2u;
  static constexpr uint8_t WA_LANE_MARKING_COLOR_OTHER =
    3u;

  // pointer types
  using RawPtr =
    wauto_perception_msgs::msg::LaneMarking_<ContainerAllocator> *;
  using ConstRawPtr =
    const wauto_perception_msgs::msg::LaneMarking_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<wauto_perception_msgs::msg::LaneMarking_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<wauto_perception_msgs::msg::LaneMarking_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      wauto_perception_msgs::msg::LaneMarking_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<wauto_perception_msgs::msg::LaneMarking_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      wauto_perception_msgs::msg::LaneMarking_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<wauto_perception_msgs::msg::LaneMarking_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<wauto_perception_msgs::msg::LaneMarking_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<wauto_perception_msgs::msg::LaneMarking_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__wauto_perception_msgs__msg__LaneMarking
    std::shared_ptr<wauto_perception_msgs::msg::LaneMarking_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__wauto_perception_msgs__msg__LaneMarking
    std::shared_ptr<wauto_perception_msgs::msg::LaneMarking_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LaneMarking_ & other) const
  {
    if (this->id != other.id) {
      return false;
    }
    if (this->distance != other.distance) {
      return false;
    }
    if (this->type != other.type) {
      return false;
    }
    if (this->color != other.color) {
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
  wauto_perception_msgs::msg::LaneMarking_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t LaneMarking_<ContainerAllocator>::WA_LANE_MARKING_TYPE_UNKNOWN;
template<typename ContainerAllocator>
constexpr uint8_t LaneMarking_<ContainerAllocator>::WA_LANE_MARKING_TYPE_SOLID;
template<typename ContainerAllocator>
constexpr uint8_t LaneMarking_<ContainerAllocator>::WA_LANE_MARKING_TYPE_DASHED;
template<typename ContainerAllocator>
constexpr uint8_t LaneMarking_<ContainerAllocator>::WA_LANE_MARKING_TYPE_DOTTED;
template<typename ContainerAllocator>
constexpr uint8_t LaneMarking_<ContainerAllocator>::WA_LANE_MARKING_TYPE_BOTTS_DOTS;
template<typename ContainerAllocator>
constexpr uint8_t LaneMarking_<ContainerAllocator>::WA_LANE_MARKING_TYPE_DOUBLE;
template<typename ContainerAllocator>
constexpr uint8_t LaneMarking_<ContainerAllocator>::WA_LANE_MARKING_TYPE_ROAD_EDGE;
template<typename ContainerAllocator>
constexpr uint8_t LaneMarking_<ContainerAllocator>::WA_LANE_MARKING_COLOR_UNKNOWN;
template<typename ContainerAllocator>
constexpr uint8_t LaneMarking_<ContainerAllocator>::WA_LANE_MARKING_COLOR_WHITE;
template<typename ContainerAllocator>
constexpr uint8_t LaneMarking_<ContainerAllocator>::WA_LANE_MARKING_COLOR_YELLOW;
template<typename ContainerAllocator>
constexpr uint8_t LaneMarking_<ContainerAllocator>::WA_LANE_MARKING_COLOR_OTHER;

}  // namespace msg

}  // namespace wauto_perception_msgs

#endif  // WAUTO_PERCEPTION_MSGS__MSG__DETAIL__LANE_MARKING__STRUCT_HPP_
