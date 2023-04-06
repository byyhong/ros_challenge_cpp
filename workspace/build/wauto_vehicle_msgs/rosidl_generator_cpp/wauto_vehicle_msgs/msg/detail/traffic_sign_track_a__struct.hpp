// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from wauto_vehicle_msgs:msg/TrafficSignTrackA.idl
// generated code does not contain a copyright notice

#ifndef WAUTO_VEHICLE_MSGS__MSG__DETAIL__TRAFFIC_SIGN_TRACK_A__STRUCT_HPP_
#define WAUTO_VEHICLE_MSGS__MSG__DETAIL__TRAFFIC_SIGN_TRACK_A__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__wauto_vehicle_msgs__msg__TrafficSignTrackA __attribute__((deprecated))
#else
# define DEPRECATED__wauto_vehicle_msgs__msg__TrafficSignTrackA __declspec(deprecated)
#endif

namespace wauto_vehicle_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TrafficSignTrackA_
{
  using Type = TrafficSignTrackA_<ContainerAllocator>;

  explicit TrafficSignTrackA_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->rolling_count = 0;
      this->signobjectid = 0;
      this->confidence = 0;
      this->longpos = 0;
      this->height_above_ground = 0;
      this->latpos = 0;
      this->sign_type = 0;
      this->sign_value = 0;
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->rolling_count = 0;
      this->signobjectid = 0;
      this->confidence = 0;
      this->longpos = 0;
      this->height_above_ground = 0;
      this->latpos = 0;
      this->sign_type = 0;
      this->sign_value = 0;
    }
  }

  explicit TrafficSignTrackA_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->rolling_count = 0;
      this->signobjectid = 0;
      this->confidence = 0;
      this->longpos = 0;
      this->height_above_ground = 0;
      this->latpos = 0;
      this->sign_type = 0;
      this->sign_value = 0;
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->rolling_count = 0;
      this->signobjectid = 0;
      this->confidence = 0;
      this->longpos = 0;
      this->height_above_ground = 0;
      this->latpos = 0;
      this->sign_type = 0;
      this->sign_value = 0;
    }
  }

  // field types and members
  using _rolling_count_type =
    uint8_t;
  _rolling_count_type rolling_count;
  using _signobjectid_type =
    uint8_t;
  _signobjectid_type signobjectid;
  using _confidence_type =
    uint8_t;
  _confidence_type confidence;
  using _longpos_type =
    int16_t;
  _longpos_type longpos;
  using _height_above_ground_type =
    uint8_t;
  _height_above_ground_type height_above_ground;
  using _latpos_type =
    int16_t;
  _latpos_type latpos;
  using _sign_type_type =
    uint8_t;
  _sign_type_type sign_type;
  using _sign_value_type =
    uint8_t;
  _sign_value_type sign_value;

  // setters for named parameter idiom
  Type & set__rolling_count(
    const uint8_t & _arg)
  {
    this->rolling_count = _arg;
    return *this;
  }
  Type & set__signobjectid(
    const uint8_t & _arg)
  {
    this->signobjectid = _arg;
    return *this;
  }
  Type & set__confidence(
    const uint8_t & _arg)
  {
    this->confidence = _arg;
    return *this;
  }
  Type & set__longpos(
    const int16_t & _arg)
  {
    this->longpos = _arg;
    return *this;
  }
  Type & set__height_above_ground(
    const uint8_t & _arg)
  {
    this->height_above_ground = _arg;
    return *this;
  }
  Type & set__latpos(
    const int16_t & _arg)
  {
    this->latpos = _arg;
    return *this;
  }
  Type & set__sign_type(
    const uint8_t & _arg)
  {
    this->sign_type = _arg;
    return *this;
  }
  Type & set__sign_value(
    const uint8_t & _arg)
  {
    this->sign_value = _arg;
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
  static constexpr uint8_t SIGN_TYPE_0 =
    0u;
  static constexpr uint8_t SIGN_TYPE_1 =
    1u;
  static constexpr uint8_t SIGN_TYPE_2 =
    2u;
  static constexpr uint8_t SIGN_TYPE_3 =
    3u;
  static constexpr uint8_t SIGN_TYPE_4 =
    4u;
  static constexpr uint8_t SIGN_TYPE_5 =
    5u;
  static constexpr uint8_t SIGN_TYPE_6 =
    6u;
  static constexpr uint8_t SIGN_TYPE_7 =
    7u;
  static constexpr uint8_t SIGN_TYPE_8 =
    8u;
  static constexpr uint8_t SIGN_TYPE_9 =
    9u;
  static constexpr uint8_t SIGN_TYPE_10 =
    10u;
  static constexpr uint8_t SIGN_TYPE_11 =
    11u;
  static constexpr uint8_t SIGN_TYPE_12 =
    12u;
  static constexpr uint8_t SIGN_TYPE_13 =
    13u;
  static constexpr uint8_t SIGN_TYPE_14 =
    14u;
  static constexpr uint8_t SIGN_TYPE_15 =
    15u;
  static constexpr uint8_t SIGN_TYPE_16 =
    16u;
  static constexpr uint8_t SIGN_TYPE_17 =
    17u;

  // pointer types
  using RawPtr =
    wauto_vehicle_msgs::msg::TrafficSignTrackA_<ContainerAllocator> *;
  using ConstRawPtr =
    const wauto_vehicle_msgs::msg::TrafficSignTrackA_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<wauto_vehicle_msgs::msg::TrafficSignTrackA_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<wauto_vehicle_msgs::msg::TrafficSignTrackA_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      wauto_vehicle_msgs::msg::TrafficSignTrackA_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<wauto_vehicle_msgs::msg::TrafficSignTrackA_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      wauto_vehicle_msgs::msg::TrafficSignTrackA_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<wauto_vehicle_msgs::msg::TrafficSignTrackA_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<wauto_vehicle_msgs::msg::TrafficSignTrackA_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<wauto_vehicle_msgs::msg::TrafficSignTrackA_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__wauto_vehicle_msgs__msg__TrafficSignTrackA
    std::shared_ptr<wauto_vehicle_msgs::msg::TrafficSignTrackA_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__wauto_vehicle_msgs__msg__TrafficSignTrackA
    std::shared_ptr<wauto_vehicle_msgs::msg::TrafficSignTrackA_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TrafficSignTrackA_ & other) const
  {
    if (this->rolling_count != other.rolling_count) {
      return false;
    }
    if (this->signobjectid != other.signobjectid) {
      return false;
    }
    if (this->confidence != other.confidence) {
      return false;
    }
    if (this->longpos != other.longpos) {
      return false;
    }
    if (this->height_above_ground != other.height_above_ground) {
      return false;
    }
    if (this->latpos != other.latpos) {
      return false;
    }
    if (this->sign_type != other.sign_type) {
      return false;
    }
    if (this->sign_value != other.sign_value) {
      return false;
    }
    return true;
  }
  bool operator!=(const TrafficSignTrackA_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TrafficSignTrackA_

// alias to use template instance with default allocator
using TrafficSignTrackA =
  wauto_vehicle_msgs::msg::TrafficSignTrackA_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
TrafficSignTrackA_<ContainerAllocator>::NAME = "TrafficSign_TrackA";
template<typename ContainerAllocator>
constexpr uint8_t TrafficSignTrackA_<ContainerAllocator>::CONFIDENCE_3;
template<typename ContainerAllocator>
constexpr uint8_t TrafficSignTrackA_<ContainerAllocator>::CONFIDENCE_2;
template<typename ContainerAllocator>
constexpr uint8_t TrafficSignTrackA_<ContainerAllocator>::CONFIDENCE_1;
template<typename ContainerAllocator>
constexpr uint8_t TrafficSignTrackA_<ContainerAllocator>::CONFIDENCE_0;
template<typename ContainerAllocator>
constexpr uint8_t TrafficSignTrackA_<ContainerAllocator>::SIGN_TYPE_0;
template<typename ContainerAllocator>
constexpr uint8_t TrafficSignTrackA_<ContainerAllocator>::SIGN_TYPE_1;
template<typename ContainerAllocator>
constexpr uint8_t TrafficSignTrackA_<ContainerAllocator>::SIGN_TYPE_2;
template<typename ContainerAllocator>
constexpr uint8_t TrafficSignTrackA_<ContainerAllocator>::SIGN_TYPE_3;
template<typename ContainerAllocator>
constexpr uint8_t TrafficSignTrackA_<ContainerAllocator>::SIGN_TYPE_4;
template<typename ContainerAllocator>
constexpr uint8_t TrafficSignTrackA_<ContainerAllocator>::SIGN_TYPE_5;
template<typename ContainerAllocator>
constexpr uint8_t TrafficSignTrackA_<ContainerAllocator>::SIGN_TYPE_6;
template<typename ContainerAllocator>
constexpr uint8_t TrafficSignTrackA_<ContainerAllocator>::SIGN_TYPE_7;
template<typename ContainerAllocator>
constexpr uint8_t TrafficSignTrackA_<ContainerAllocator>::SIGN_TYPE_8;
template<typename ContainerAllocator>
constexpr uint8_t TrafficSignTrackA_<ContainerAllocator>::SIGN_TYPE_9;
template<typename ContainerAllocator>
constexpr uint8_t TrafficSignTrackA_<ContainerAllocator>::SIGN_TYPE_10;
template<typename ContainerAllocator>
constexpr uint8_t TrafficSignTrackA_<ContainerAllocator>::SIGN_TYPE_11;
template<typename ContainerAllocator>
constexpr uint8_t TrafficSignTrackA_<ContainerAllocator>::SIGN_TYPE_12;
template<typename ContainerAllocator>
constexpr uint8_t TrafficSignTrackA_<ContainerAllocator>::SIGN_TYPE_13;
template<typename ContainerAllocator>
constexpr uint8_t TrafficSignTrackA_<ContainerAllocator>::SIGN_TYPE_14;
template<typename ContainerAllocator>
constexpr uint8_t TrafficSignTrackA_<ContainerAllocator>::SIGN_TYPE_15;
template<typename ContainerAllocator>
constexpr uint8_t TrafficSignTrackA_<ContainerAllocator>::SIGN_TYPE_16;
template<typename ContainerAllocator>
constexpr uint8_t TrafficSignTrackA_<ContainerAllocator>::SIGN_TYPE_17;

}  // namespace msg

}  // namespace wauto_vehicle_msgs

#endif  // WAUTO_VEHICLE_MSGS__MSG__DETAIL__TRAFFIC_SIGN_TRACK_A__STRUCT_HPP_
