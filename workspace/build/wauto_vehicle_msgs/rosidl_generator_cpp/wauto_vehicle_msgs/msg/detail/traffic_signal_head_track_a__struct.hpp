// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from wauto_vehicle_msgs:msg/TrafficSignalHeadTrackA.idl
// generated code does not contain a copyright notice

#ifndef WAUTO_VEHICLE_MSGS__MSG__DETAIL__TRAFFIC_SIGNAL_HEAD_TRACK_A__STRUCT_HPP_
#define WAUTO_VEHICLE_MSGS__MSG__DETAIL__TRAFFIC_SIGNAL_HEAD_TRACK_A__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__wauto_vehicle_msgs__msg__TrafficSignalHeadTrackA __attribute__((deprecated))
#else
# define DEPRECATED__wauto_vehicle_msgs__msg__TrafficSignalHeadTrackA __declspec(deprecated)
#endif

namespace wauto_vehicle_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TrafficSignalHeadTrackA_
{
  using Type = TrafficSignalHeadTrackA_<ContainerAllocator>;

  explicit TrafficSignalHeadTrackA_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->rolling_count = 0;
      this->signalobjectid = 0;
      this->height_above_ground = 0;
      this->longpos = 0;
      this->latpos = 0;
      this->confidence = 0;
      this->signal_head_type = 0;
      this->illumltnone = 0;
      this->illumltredball = 0;
      this->illumltyellowball = 0;
      this->illumltgreenball = 0;
      this->illumltflshngredball = 0;
      this->illumltflshngyellowball = 0;
      this->illumltredleftarrow = 0;
      this->illumltyellowleftarrow = 0;
      this->illumltgreenleftarrow = 0;
      this->illumltflshngredleftarrow = 0;
      this->illumltflshngyellowleftarrow = 0;
      this->illumltredrightarrow = 0;
      this->illumltyellowrightarrow = 0;
      this->illumltgreenrightarrow = 0;
      this->illumltflshngredrightarrow = 0;
      this->illumltflshngyellowrightarrow = 0;
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->rolling_count = 0;
      this->signalobjectid = 0;
      this->height_above_ground = 0;
      this->longpos = 0;
      this->latpos = 0;
      this->confidence = 0;
      this->signal_head_type = 0;
      this->illumltnone = 0;
      this->illumltredball = 0;
      this->illumltyellowball = 0;
      this->illumltgreenball = 0;
      this->illumltflshngredball = 0;
      this->illumltflshngyellowball = 0;
      this->illumltredleftarrow = 0;
      this->illumltyellowleftarrow = 0;
      this->illumltgreenleftarrow = 0;
      this->illumltflshngredleftarrow = 0;
      this->illumltflshngyellowleftarrow = 0;
      this->illumltredrightarrow = 0;
      this->illumltyellowrightarrow = 0;
      this->illumltgreenrightarrow = 0;
      this->illumltflshngredrightarrow = 0;
      this->illumltflshngyellowrightarrow = 0;
    }
  }

  explicit TrafficSignalHeadTrackA_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->rolling_count = 0;
      this->signalobjectid = 0;
      this->height_above_ground = 0;
      this->longpos = 0;
      this->latpos = 0;
      this->confidence = 0;
      this->signal_head_type = 0;
      this->illumltnone = 0;
      this->illumltredball = 0;
      this->illumltyellowball = 0;
      this->illumltgreenball = 0;
      this->illumltflshngredball = 0;
      this->illumltflshngyellowball = 0;
      this->illumltredleftarrow = 0;
      this->illumltyellowleftarrow = 0;
      this->illumltgreenleftarrow = 0;
      this->illumltflshngredleftarrow = 0;
      this->illumltflshngyellowleftarrow = 0;
      this->illumltredrightarrow = 0;
      this->illumltyellowrightarrow = 0;
      this->illumltgreenrightarrow = 0;
      this->illumltflshngredrightarrow = 0;
      this->illumltflshngyellowrightarrow = 0;
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->rolling_count = 0;
      this->signalobjectid = 0;
      this->height_above_ground = 0;
      this->longpos = 0;
      this->latpos = 0;
      this->confidence = 0;
      this->signal_head_type = 0;
      this->illumltnone = 0;
      this->illumltredball = 0;
      this->illumltyellowball = 0;
      this->illumltgreenball = 0;
      this->illumltflshngredball = 0;
      this->illumltflshngyellowball = 0;
      this->illumltredleftarrow = 0;
      this->illumltyellowleftarrow = 0;
      this->illumltgreenleftarrow = 0;
      this->illumltflshngredleftarrow = 0;
      this->illumltflshngyellowleftarrow = 0;
      this->illumltredrightarrow = 0;
      this->illumltyellowrightarrow = 0;
      this->illumltgreenrightarrow = 0;
      this->illumltflshngredrightarrow = 0;
      this->illumltflshngyellowrightarrow = 0;
    }
  }

  // field types and members
  using _rolling_count_type =
    uint8_t;
  _rolling_count_type rolling_count;
  using _signalobjectid_type =
    uint8_t;
  _signalobjectid_type signalobjectid;
  using _height_above_ground_type =
    uint8_t;
  _height_above_ground_type height_above_ground;
  using _longpos_type =
    int16_t;
  _longpos_type longpos;
  using _latpos_type =
    int16_t;
  _latpos_type latpos;
  using _confidence_type =
    uint8_t;
  _confidence_type confidence;
  using _signal_head_type_type =
    uint8_t;
  _signal_head_type_type signal_head_type;
  using _illumltnone_type =
    uint8_t;
  _illumltnone_type illumltnone;
  using _illumltredball_type =
    uint8_t;
  _illumltredball_type illumltredball;
  using _illumltyellowball_type =
    uint8_t;
  _illumltyellowball_type illumltyellowball;
  using _illumltgreenball_type =
    uint8_t;
  _illumltgreenball_type illumltgreenball;
  using _illumltflshngredball_type =
    uint8_t;
  _illumltflshngredball_type illumltflshngredball;
  using _illumltflshngyellowball_type =
    uint8_t;
  _illumltflshngyellowball_type illumltflshngyellowball;
  using _illumltredleftarrow_type =
    uint8_t;
  _illumltredleftarrow_type illumltredleftarrow;
  using _illumltyellowleftarrow_type =
    uint8_t;
  _illumltyellowleftarrow_type illumltyellowleftarrow;
  using _illumltgreenleftarrow_type =
    uint8_t;
  _illumltgreenleftarrow_type illumltgreenleftarrow;
  using _illumltflshngredleftarrow_type =
    uint8_t;
  _illumltflshngredleftarrow_type illumltflshngredleftarrow;
  using _illumltflshngyellowleftarrow_type =
    uint8_t;
  _illumltflshngyellowleftarrow_type illumltflshngyellowleftarrow;
  using _illumltredrightarrow_type =
    uint8_t;
  _illumltredrightarrow_type illumltredrightarrow;
  using _illumltyellowrightarrow_type =
    uint8_t;
  _illumltyellowrightarrow_type illumltyellowrightarrow;
  using _illumltgreenrightarrow_type =
    uint8_t;
  _illumltgreenrightarrow_type illumltgreenrightarrow;
  using _illumltflshngredrightarrow_type =
    uint8_t;
  _illumltflshngredrightarrow_type illumltflshngredrightarrow;
  using _illumltflshngyellowrightarrow_type =
    uint8_t;
  _illumltflshngyellowrightarrow_type illumltflshngyellowrightarrow;

  // setters for named parameter idiom
  Type & set__rolling_count(
    const uint8_t & _arg)
  {
    this->rolling_count = _arg;
    return *this;
  }
  Type & set__signalobjectid(
    const uint8_t & _arg)
  {
    this->signalobjectid = _arg;
    return *this;
  }
  Type & set__height_above_ground(
    const uint8_t & _arg)
  {
    this->height_above_ground = _arg;
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
  Type & set__confidence(
    const uint8_t & _arg)
  {
    this->confidence = _arg;
    return *this;
  }
  Type & set__signal_head_type(
    const uint8_t & _arg)
  {
    this->signal_head_type = _arg;
    return *this;
  }
  Type & set__illumltnone(
    const uint8_t & _arg)
  {
    this->illumltnone = _arg;
    return *this;
  }
  Type & set__illumltredball(
    const uint8_t & _arg)
  {
    this->illumltredball = _arg;
    return *this;
  }
  Type & set__illumltyellowball(
    const uint8_t & _arg)
  {
    this->illumltyellowball = _arg;
    return *this;
  }
  Type & set__illumltgreenball(
    const uint8_t & _arg)
  {
    this->illumltgreenball = _arg;
    return *this;
  }
  Type & set__illumltflshngredball(
    const uint8_t & _arg)
  {
    this->illumltflshngredball = _arg;
    return *this;
  }
  Type & set__illumltflshngyellowball(
    const uint8_t & _arg)
  {
    this->illumltflshngyellowball = _arg;
    return *this;
  }
  Type & set__illumltredleftarrow(
    const uint8_t & _arg)
  {
    this->illumltredleftarrow = _arg;
    return *this;
  }
  Type & set__illumltyellowleftarrow(
    const uint8_t & _arg)
  {
    this->illumltyellowleftarrow = _arg;
    return *this;
  }
  Type & set__illumltgreenleftarrow(
    const uint8_t & _arg)
  {
    this->illumltgreenleftarrow = _arg;
    return *this;
  }
  Type & set__illumltflshngredleftarrow(
    const uint8_t & _arg)
  {
    this->illumltflshngredleftarrow = _arg;
    return *this;
  }
  Type & set__illumltflshngyellowleftarrow(
    const uint8_t & _arg)
  {
    this->illumltflshngyellowleftarrow = _arg;
    return *this;
  }
  Type & set__illumltredrightarrow(
    const uint8_t & _arg)
  {
    this->illumltredrightarrow = _arg;
    return *this;
  }
  Type & set__illumltyellowrightarrow(
    const uint8_t & _arg)
  {
    this->illumltyellowrightarrow = _arg;
    return *this;
  }
  Type & set__illumltgreenrightarrow(
    const uint8_t & _arg)
  {
    this->illumltgreenrightarrow = _arg;
    return *this;
  }
  Type & set__illumltflshngredrightarrow(
    const uint8_t & _arg)
  {
    this->illumltflshngredrightarrow = _arg;
    return *this;
  }
  Type & set__illumltflshngyellowrightarrow(
    const uint8_t & _arg)
  {
    this->illumltflshngyellowrightarrow = _arg;
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
  static constexpr uint8_t SIGNAL_HEAD_TYPE_0 =
    0u;
  static constexpr uint8_t SIGNAL_HEAD_TYPE_1 =
    1u;
  static constexpr uint8_t SIGNAL_HEAD_TYPE_2 =
    2u;
  static constexpr uint8_t SIGNAL_HEAD_TYPE_3 =
    3u;
  static constexpr uint8_t SIGNAL_HEAD_TYPE_4 =
    4u;
  static constexpr uint8_t SIGNAL_HEAD_TYPE_5 =
    5u;

  // pointer types
  using RawPtr =
    wauto_vehicle_msgs::msg::TrafficSignalHeadTrackA_<ContainerAllocator> *;
  using ConstRawPtr =
    const wauto_vehicle_msgs::msg::TrafficSignalHeadTrackA_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<wauto_vehicle_msgs::msg::TrafficSignalHeadTrackA_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<wauto_vehicle_msgs::msg::TrafficSignalHeadTrackA_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      wauto_vehicle_msgs::msg::TrafficSignalHeadTrackA_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<wauto_vehicle_msgs::msg::TrafficSignalHeadTrackA_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      wauto_vehicle_msgs::msg::TrafficSignalHeadTrackA_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<wauto_vehicle_msgs::msg::TrafficSignalHeadTrackA_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<wauto_vehicle_msgs::msg::TrafficSignalHeadTrackA_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<wauto_vehicle_msgs::msg::TrafficSignalHeadTrackA_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__wauto_vehicle_msgs__msg__TrafficSignalHeadTrackA
    std::shared_ptr<wauto_vehicle_msgs::msg::TrafficSignalHeadTrackA_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__wauto_vehicle_msgs__msg__TrafficSignalHeadTrackA
    std::shared_ptr<wauto_vehicle_msgs::msg::TrafficSignalHeadTrackA_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TrafficSignalHeadTrackA_ & other) const
  {
    if (this->rolling_count != other.rolling_count) {
      return false;
    }
    if (this->signalobjectid != other.signalobjectid) {
      return false;
    }
    if (this->height_above_ground != other.height_above_ground) {
      return false;
    }
    if (this->longpos != other.longpos) {
      return false;
    }
    if (this->latpos != other.latpos) {
      return false;
    }
    if (this->confidence != other.confidence) {
      return false;
    }
    if (this->signal_head_type != other.signal_head_type) {
      return false;
    }
    if (this->illumltnone != other.illumltnone) {
      return false;
    }
    if (this->illumltredball != other.illumltredball) {
      return false;
    }
    if (this->illumltyellowball != other.illumltyellowball) {
      return false;
    }
    if (this->illumltgreenball != other.illumltgreenball) {
      return false;
    }
    if (this->illumltflshngredball != other.illumltflshngredball) {
      return false;
    }
    if (this->illumltflshngyellowball != other.illumltflshngyellowball) {
      return false;
    }
    if (this->illumltredleftarrow != other.illumltredleftarrow) {
      return false;
    }
    if (this->illumltyellowleftarrow != other.illumltyellowleftarrow) {
      return false;
    }
    if (this->illumltgreenleftarrow != other.illumltgreenleftarrow) {
      return false;
    }
    if (this->illumltflshngredleftarrow != other.illumltflshngredleftarrow) {
      return false;
    }
    if (this->illumltflshngyellowleftarrow != other.illumltflshngyellowleftarrow) {
      return false;
    }
    if (this->illumltredrightarrow != other.illumltredrightarrow) {
      return false;
    }
    if (this->illumltyellowrightarrow != other.illumltyellowrightarrow) {
      return false;
    }
    if (this->illumltgreenrightarrow != other.illumltgreenrightarrow) {
      return false;
    }
    if (this->illumltflshngredrightarrow != other.illumltflshngredrightarrow) {
      return false;
    }
    if (this->illumltflshngyellowrightarrow != other.illumltflshngyellowrightarrow) {
      return false;
    }
    return true;
  }
  bool operator!=(const TrafficSignalHeadTrackA_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TrafficSignalHeadTrackA_

// alias to use template instance with default allocator
using TrafficSignalHeadTrackA =
  wauto_vehicle_msgs::msg::TrafficSignalHeadTrackA_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
TrafficSignalHeadTrackA_<ContainerAllocator>::NAME = "TrafficSignalHead_TrackA";
template<typename ContainerAllocator>
constexpr uint8_t TrafficSignalHeadTrackA_<ContainerAllocator>::CONFIDENCE_3;
template<typename ContainerAllocator>
constexpr uint8_t TrafficSignalHeadTrackA_<ContainerAllocator>::CONFIDENCE_2;
template<typename ContainerAllocator>
constexpr uint8_t TrafficSignalHeadTrackA_<ContainerAllocator>::CONFIDENCE_1;
template<typename ContainerAllocator>
constexpr uint8_t TrafficSignalHeadTrackA_<ContainerAllocator>::CONFIDENCE_0;
template<typename ContainerAllocator>
constexpr uint8_t TrafficSignalHeadTrackA_<ContainerAllocator>::SIGNAL_HEAD_TYPE_0;
template<typename ContainerAllocator>
constexpr uint8_t TrafficSignalHeadTrackA_<ContainerAllocator>::SIGNAL_HEAD_TYPE_1;
template<typename ContainerAllocator>
constexpr uint8_t TrafficSignalHeadTrackA_<ContainerAllocator>::SIGNAL_HEAD_TYPE_2;
template<typename ContainerAllocator>
constexpr uint8_t TrafficSignalHeadTrackA_<ContainerAllocator>::SIGNAL_HEAD_TYPE_3;
template<typename ContainerAllocator>
constexpr uint8_t TrafficSignalHeadTrackA_<ContainerAllocator>::SIGNAL_HEAD_TYPE_4;
template<typename ContainerAllocator>
constexpr uint8_t TrafficSignalHeadTrackA_<ContainerAllocator>::SIGNAL_HEAD_TYPE_5;

}  // namespace msg

}  // namespace wauto_vehicle_msgs

#endif  // WAUTO_VEHICLE_MSGS__MSG__DETAIL__TRAFFIC_SIGNAL_HEAD_TRACK_A__STRUCT_HPP_
