// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from wauto_vehicle_msgs:msg/LimitLineTrackA.idl
// generated code does not contain a copyright notice

#ifndef WAUTO_VEHICLE_MSGS__MSG__DETAIL__LIMIT_LINE_TRACK_A__STRUCT_HPP_
#define WAUTO_VEHICLE_MSGS__MSG__DETAIL__LIMIT_LINE_TRACK_A__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__wauto_vehicle_msgs__msg__LimitLineTrackA __attribute__((deprecated))
#else
# define DEPRECATED__wauto_vehicle_msgs__msg__LimitLineTrackA __declspec(deprecated)
#endif

namespace wauto_vehicle_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LimitLineTrackA_
{
  using Type = LimitLineTrackA_<ContainerAllocator>;

  explicit LimitLineTrackA_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->rolling_count = 0;
      this->lineobjectid = 0;
      this->confidence = 0;
      this->longitudinal_length = 0;
      this->width = 0;
      this->longpos = 0;
      this->latpos = 0;
      this->relative_lane = 0;
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->rolling_count = 0;
      this->lineobjectid = 0;
      this->confidence = 0;
      this->longitudinal_length = 0;
      this->width = 0;
      this->longpos = 0;
      this->latpos = 0;
      this->relative_lane = 0;
    }
  }

  explicit LimitLineTrackA_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->rolling_count = 0;
      this->lineobjectid = 0;
      this->confidence = 0;
      this->longitudinal_length = 0;
      this->width = 0;
      this->longpos = 0;
      this->latpos = 0;
      this->relative_lane = 0;
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->rolling_count = 0;
      this->lineobjectid = 0;
      this->confidence = 0;
      this->longitudinal_length = 0;
      this->width = 0;
      this->longpos = 0;
      this->latpos = 0;
      this->relative_lane = 0;
    }
  }

  // field types and members
  using _rolling_count_type =
    uint8_t;
  _rolling_count_type rolling_count;
  using _lineobjectid_type =
    uint8_t;
  _lineobjectid_type lineobjectid;
  using _confidence_type =
    uint8_t;
  _confidence_type confidence;
  using _longitudinal_length_type =
    uint8_t;
  _longitudinal_length_type longitudinal_length;
  using _width_type =
    uint8_t;
  _width_type width;
  using _longpos_type =
    int16_t;
  _longpos_type longpos;
  using _latpos_type =
    int16_t;
  _latpos_type latpos;
  using _relative_lane_type =
    uint8_t;
  _relative_lane_type relative_lane;

  // setters for named parameter idiom
  Type & set__rolling_count(
    const uint8_t & _arg)
  {
    this->rolling_count = _arg;
    return *this;
  }
  Type & set__lineobjectid(
    const uint8_t & _arg)
  {
    this->lineobjectid = _arg;
    return *this;
  }
  Type & set__confidence(
    const uint8_t & _arg)
  {
    this->confidence = _arg;
    return *this;
  }
  Type & set__longitudinal_length(
    const uint8_t & _arg)
  {
    this->longitudinal_length = _arg;
    return *this;
  }
  Type & set__width(
    const uint8_t & _arg)
  {
    this->width = _arg;
    return *this;
  }
  Type & set__longpos(
    const int16_t & _arg)
  {
    this->longpos = _arg;
    return *this;
  }
  Type & set__latpos(
    const int16_t & _arg)
  {
    this->latpos = _arg;
    return *this;
  }
  Type & set__relative_lane(
    const uint8_t & _arg)
  {
    this->relative_lane = _arg;
    return *this;
  }

  // constant declarations
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> NAME;
  static constexpr uint8_t CONFIDENCE_3 =
    3u;
  static constexpr uint8_t CONFIDENCE_2 =
    2u;
  static constexpr uint8_t CONFIDENCE_1 =
    1u;
  static constexpr uint8_t CONFIDENCE_0 =
    0u;
  static constexpr uint8_t RELATIVE_LANE_0 =
    0u;
  static constexpr uint8_t RELATIVE_LANE_1 =
    1u;
  static constexpr uint8_t RELATIVE_LANE_3 =
    3u;
  static constexpr uint8_t RELATIVE_LANE_4 =
    4u;
  static constexpr uint8_t RELATIVE_LANE_5 =
    5u;
  static constexpr uint8_t RELATIVE_LANE_6 =
    6u;
  static constexpr uint8_t RELATIVE_LANE_7 =
    7u;

  // pointer types
  using RawPtr =
    wauto_vehicle_msgs::msg::LimitLineTrackA_<ContainerAllocator> *;
  using ConstRawPtr =
    const wauto_vehicle_msgs::msg::LimitLineTrackA_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<wauto_vehicle_msgs::msg::LimitLineTrackA_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<wauto_vehicle_msgs::msg::LimitLineTrackA_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      wauto_vehicle_msgs::msg::LimitLineTrackA_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<wauto_vehicle_msgs::msg::LimitLineTrackA_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      wauto_vehicle_msgs::msg::LimitLineTrackA_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<wauto_vehicle_msgs::msg::LimitLineTrackA_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<wauto_vehicle_msgs::msg::LimitLineTrackA_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<wauto_vehicle_msgs::msg::LimitLineTrackA_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__wauto_vehicle_msgs__msg__LimitLineTrackA
    std::shared_ptr<wauto_vehicle_msgs::msg::LimitLineTrackA_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__wauto_vehicle_msgs__msg__LimitLineTrackA
    std::shared_ptr<wauto_vehicle_msgs::msg::LimitLineTrackA_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LimitLineTrackA_ & other) const
  {
    if (this->rolling_count != other.rolling_count) {
      return false;
    }
    if (this->lineobjectid != other.lineobjectid) {
      return false;
    }
    if (this->confidence != other.confidence) {
      return false;
    }
    if (this->longitudinal_length != other.longitudinal_length) {
      return false;
    }
    if (this->width != other.width) {
      return false;
    }
    if (this->longpos != other.longpos) {
      return false;
    }
    if (this->latpos != other.latpos) {
      return false;
    }
    if (this->relative_lane != other.relative_lane) {
      return false;
    }
    return true;
  }
  bool operator!=(const LimitLineTrackA_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LimitLineTrackA_

// alias to use template instance with default allocator
using LimitLineTrackA =
  wauto_vehicle_msgs::msg::LimitLineTrackA_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
LimitLineTrackA_<ContainerAllocator>::NAME = "LimitLine_TrackA";
template<typename ContainerAllocator>
constexpr uint8_t LimitLineTrackA_<ContainerAllocator>::CONFIDENCE_3;
template<typename ContainerAllocator>
constexpr uint8_t LimitLineTrackA_<ContainerAllocator>::CONFIDENCE_2;
template<typename ContainerAllocator>
constexpr uint8_t LimitLineTrackA_<ContainerAllocator>::CONFIDENCE_1;
template<typename ContainerAllocator>
constexpr uint8_t LimitLineTrackA_<ContainerAllocator>::CONFIDENCE_0;
template<typename ContainerAllocator>
constexpr uint8_t LimitLineTrackA_<ContainerAllocator>::RELATIVE_LANE_0;
template<typename ContainerAllocator>
constexpr uint8_t LimitLineTrackA_<ContainerAllocator>::RELATIVE_LANE_1;
template<typename ContainerAllocator>
constexpr uint8_t LimitLineTrackA_<ContainerAllocator>::RELATIVE_LANE_3;
template<typename ContainerAllocator>
constexpr uint8_t LimitLineTrackA_<ContainerAllocator>::RELATIVE_LANE_4;
template<typename ContainerAllocator>
constexpr uint8_t LimitLineTrackA_<ContainerAllocator>::RELATIVE_LANE_5;
template<typename ContainerAllocator>
constexpr uint8_t LimitLineTrackA_<ContainerAllocator>::RELATIVE_LANE_6;
template<typename ContainerAllocator>
constexpr uint8_t LimitLineTrackA_<ContainerAllocator>::RELATIVE_LANE_7;

}  // namespace msg

}  // namespace wauto_vehicle_msgs

#endif  // WAUTO_VEHICLE_MSGS__MSG__DETAIL__LIMIT_LINE_TRACK_A__STRUCT_HPP_
