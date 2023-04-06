// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from wauto_vehicle_msgs:msg/LaneMarkingTrackA.idl
// generated code does not contain a copyright notice

#ifndef WAUTO_VEHICLE_MSGS__MSG__DETAIL__LANE_MARKING_TRACK_A__STRUCT_HPP_
#define WAUTO_VEHICLE_MSGS__MSG__DETAIL__LANE_MARKING_TRACK_A__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__wauto_vehicle_msgs__msg__LaneMarkingTrackA __attribute__((deprecated))
#else
# define DEPRECATED__wauto_vehicle_msgs__msg__LaneMarkingTrackA __declspec(deprecated)
#endif

namespace wauto_vehicle_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LaneMarkingTrackA_
{
  using Type = LaneMarkingTrackA_<ContainerAllocator>;

  explicit LaneMarkingTrackA_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->rolling_count = 0;
      this->lanemarkingid = 0;
      this->lanemarkinglnhdngtngtv = 0;
      this->lanemarkinglnhdngtngt = 0;
      this->lanemarkinglndstv = 0;
      this->lanemarkinglndst = 0;
      this->lanemarkinglncrvtv = 0;
      this->lanemarkinglncrvtgradv = 0;
      this->lanemarkinglncrvtgrad = 0;
      this->lanemarkinglncrvt = 0;
      this->lanemarkinglnqltyconflvl = 0;
      this->lanemarkinglnmrkrtyp = 0;
      this->lanemarkingcolor = 0;
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->rolling_count = 0;
      this->lanemarkingid = 0;
      this->lanemarkinglnhdngtngtv = 0;
      this->lanemarkinglnhdngtngt = 0;
      this->lanemarkinglndstv = 0;
      this->lanemarkinglndst = 0;
      this->lanemarkinglncrvtv = 0;
      this->lanemarkinglncrvtgradv = 0;
      this->lanemarkinglncrvtgrad = 0;
      this->lanemarkinglncrvt = 0;
      this->lanemarkinglnqltyconflvl = 0;
      this->lanemarkinglnmrkrtyp = 0;
      this->lanemarkingcolor = 0;
    }
  }

  explicit LaneMarkingTrackA_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->rolling_count = 0;
      this->lanemarkingid = 0;
      this->lanemarkinglnhdngtngtv = 0;
      this->lanemarkinglnhdngtngt = 0;
      this->lanemarkinglndstv = 0;
      this->lanemarkinglndst = 0;
      this->lanemarkinglncrvtv = 0;
      this->lanemarkinglncrvtgradv = 0;
      this->lanemarkinglncrvtgrad = 0;
      this->lanemarkinglncrvt = 0;
      this->lanemarkinglnqltyconflvl = 0;
      this->lanemarkinglnmrkrtyp = 0;
      this->lanemarkingcolor = 0;
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->rolling_count = 0;
      this->lanemarkingid = 0;
      this->lanemarkinglnhdngtngtv = 0;
      this->lanemarkinglnhdngtngt = 0;
      this->lanemarkinglndstv = 0;
      this->lanemarkinglndst = 0;
      this->lanemarkinglncrvtv = 0;
      this->lanemarkinglncrvtgradv = 0;
      this->lanemarkinglncrvtgrad = 0;
      this->lanemarkinglncrvt = 0;
      this->lanemarkinglnqltyconflvl = 0;
      this->lanemarkinglnmrkrtyp = 0;
      this->lanemarkingcolor = 0;
    }
  }

  // field types and members
  using _rolling_count_type =
    uint8_t;
  _rolling_count_type rolling_count;
  using _lanemarkingid_type =
    uint8_t;
  _lanemarkingid_type lanemarkingid;
  using _lanemarkinglnhdngtngtv_type =
    uint8_t;
  _lanemarkinglnhdngtngtv_type lanemarkinglnhdngtngtv;
  using _lanemarkinglnhdngtngt_type =
    int8_t;
  _lanemarkinglnhdngtngt_type lanemarkinglnhdngtngt;
  using _lanemarkinglndstv_type =
    uint8_t;
  _lanemarkinglndstv_type lanemarkinglndstv;
  using _lanemarkinglndst_type =
    int8_t;
  _lanemarkinglndst_type lanemarkinglndst;
  using _lanemarkinglncrvtv_type =
    uint8_t;
  _lanemarkinglncrvtv_type lanemarkinglncrvtv;
  using _lanemarkinglncrvtgradv_type =
    uint8_t;
  _lanemarkinglncrvtgradv_type lanemarkinglncrvtgradv;
  using _lanemarkinglncrvtgrad_type =
    int16_t;
  _lanemarkinglncrvtgrad_type lanemarkinglncrvtgrad;
  using _lanemarkinglncrvt_type =
    int16_t;
  _lanemarkinglncrvt_type lanemarkinglncrvt;
  using _lanemarkinglnqltyconflvl_type =
    uint8_t;
  _lanemarkinglnqltyconflvl_type lanemarkinglnqltyconflvl;
  using _lanemarkinglnmrkrtyp_type =
    uint8_t;
  _lanemarkinglnmrkrtyp_type lanemarkinglnmrkrtyp;
  using _lanemarkingcolor_type =
    uint8_t;
  _lanemarkingcolor_type lanemarkingcolor;

  // setters for named parameter idiom
  Type & set__rolling_count(
    const uint8_t & _arg)
  {
    this->rolling_count = _arg;
    return *this;
  }
  Type & set__lanemarkingid(
    const uint8_t & _arg)
  {
    this->lanemarkingid = _arg;
    return *this;
  }
  Type & set__lanemarkinglnhdngtngtv(
    const uint8_t & _arg)
  {
    this->lanemarkinglnhdngtngtv = _arg;
    return *this;
  }
  Type & set__lanemarkinglnhdngtngt(
    const int8_t & _arg)
  {
    this->lanemarkinglnhdngtngt = _arg;
    return *this;
  }
  Type & set__lanemarkinglndstv(
    const uint8_t & _arg)
  {
    this->lanemarkinglndstv = _arg;
    return *this;
  }
  Type & set__lanemarkinglndst(
    const int8_t & _arg)
  {
    this->lanemarkinglndst = _arg;
    return *this;
  }
  Type & set__lanemarkinglncrvtv(
    const uint8_t & _arg)
  {
    this->lanemarkinglncrvtv = _arg;
    return *this;
  }
  Type & set__lanemarkinglncrvtgradv(
    const uint8_t & _arg)
  {
    this->lanemarkinglncrvtgradv = _arg;
    return *this;
  }
  Type & set__lanemarkinglncrvtgrad(
    const int16_t & _arg)
  {
    this->lanemarkinglncrvtgrad = _arg;
    return *this;
  }
  Type & set__lanemarkinglncrvt(
    const int16_t & _arg)
  {
    this->lanemarkinglncrvt = _arg;
    return *this;
  }
  Type & set__lanemarkinglnqltyconflvl(
    const uint8_t & _arg)
  {
    this->lanemarkinglnqltyconflvl = _arg;
    return *this;
  }
  Type & set__lanemarkinglnmrkrtyp(
    const uint8_t & _arg)
  {
    this->lanemarkinglnmrkrtyp = _arg;
    return *this;
  }
  Type & set__lanemarkingcolor(
    const uint8_t & _arg)
  {
    this->lanemarkingcolor = _arg;
    return *this;
  }

  // constant declarations
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> NAME;
  static constexpr uint8_t LANEMARKINGLNHDNGTNGTV_1 =
    1u;
  static constexpr uint8_t LANEMARKINGLNHDNGTNGTV_0 =
    0u;
  static constexpr uint8_t LANEMARKINGLNDSTV_1 =
    1u;
  static constexpr uint8_t LANEMARKINGLNDSTV_0 =
    0u;
  static constexpr uint8_t LANEMARKINGLNCRVTV_1 =
    1u;
  static constexpr uint8_t LANEMARKINGLNCRVTV_0 =
    0u;
  static constexpr uint8_t LANEMARKINGLNCRVTGRADV_1 =
    1u;
  static constexpr uint8_t LANEMARKINGLNCRVTGRADV_0 =
    0u;
  static constexpr uint8_t LANEMARKINGLNMRKRTYP_0 =
    0u;
  static constexpr uint8_t LANEMARKINGLNMRKRTYP_1 =
    1u;
  static constexpr uint8_t LANEMARKINGLNMRKRTYP_2 =
    2u;
  static constexpr uint8_t LANEMARKINGLNMRKRTYP_3 =
    3u;
  static constexpr uint8_t LANEMARKINGLNMRKRTYP_4 =
    4u;
  static constexpr uint8_t LANEMARKINGLNMRKRTYP_5 =
    5u;
  static constexpr uint8_t LANEMARKINGLNMRKRTYP_6 =
    6u;
  static constexpr uint8_t LANEMARKINGCOLOR_0 =
    0u;
  static constexpr uint8_t LANEMARKINGCOLOR_1 =
    1u;
  static constexpr uint8_t LANEMARKINGCOLOR_2 =
    2u;
  static constexpr uint8_t LANEMARKINGCOLOR_3 =
    3u;

  // pointer types
  using RawPtr =
    wauto_vehicle_msgs::msg::LaneMarkingTrackA_<ContainerAllocator> *;
  using ConstRawPtr =
    const wauto_vehicle_msgs::msg::LaneMarkingTrackA_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<wauto_vehicle_msgs::msg::LaneMarkingTrackA_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<wauto_vehicle_msgs::msg::LaneMarkingTrackA_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      wauto_vehicle_msgs::msg::LaneMarkingTrackA_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<wauto_vehicle_msgs::msg::LaneMarkingTrackA_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      wauto_vehicle_msgs::msg::LaneMarkingTrackA_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<wauto_vehicle_msgs::msg::LaneMarkingTrackA_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<wauto_vehicle_msgs::msg::LaneMarkingTrackA_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<wauto_vehicle_msgs::msg::LaneMarkingTrackA_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__wauto_vehicle_msgs__msg__LaneMarkingTrackA
    std::shared_ptr<wauto_vehicle_msgs::msg::LaneMarkingTrackA_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__wauto_vehicle_msgs__msg__LaneMarkingTrackA
    std::shared_ptr<wauto_vehicle_msgs::msg::LaneMarkingTrackA_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LaneMarkingTrackA_ & other) const
  {
    if (this->rolling_count != other.rolling_count) {
      return false;
    }
    if (this->lanemarkingid != other.lanemarkingid) {
      return false;
    }
    if (this->lanemarkinglnhdngtngtv != other.lanemarkinglnhdngtngtv) {
      return false;
    }
    if (this->lanemarkinglnhdngtngt != other.lanemarkinglnhdngtngt) {
      return false;
    }
    if (this->lanemarkinglndstv != other.lanemarkinglndstv) {
      return false;
    }
    if (this->lanemarkinglndst != other.lanemarkinglndst) {
      return false;
    }
    if (this->lanemarkinglncrvtv != other.lanemarkinglncrvtv) {
      return false;
    }
    if (this->lanemarkinglncrvtgradv != other.lanemarkinglncrvtgradv) {
      return false;
    }
    if (this->lanemarkinglncrvtgrad != other.lanemarkinglncrvtgrad) {
      return false;
    }
    if (this->lanemarkinglncrvt != other.lanemarkinglncrvt) {
      return false;
    }
    if (this->lanemarkinglnqltyconflvl != other.lanemarkinglnqltyconflvl) {
      return false;
    }
    if (this->lanemarkinglnmrkrtyp != other.lanemarkinglnmrkrtyp) {
      return false;
    }
    if (this->lanemarkingcolor != other.lanemarkingcolor) {
      return false;
    }
    return true;
  }
  bool operator!=(const LaneMarkingTrackA_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LaneMarkingTrackA_

// alias to use template instance with default allocator
using LaneMarkingTrackA =
  wauto_vehicle_msgs::msg::LaneMarkingTrackA_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
LaneMarkingTrackA_<ContainerAllocator>::NAME = "LaneMarking_TrackA";
template<typename ContainerAllocator>
constexpr uint8_t LaneMarkingTrackA_<ContainerAllocator>::LANEMARKINGLNHDNGTNGTV_1;
template<typename ContainerAllocator>
constexpr uint8_t LaneMarkingTrackA_<ContainerAllocator>::LANEMARKINGLNHDNGTNGTV_0;
template<typename ContainerAllocator>
constexpr uint8_t LaneMarkingTrackA_<ContainerAllocator>::LANEMARKINGLNDSTV_1;
template<typename ContainerAllocator>
constexpr uint8_t LaneMarkingTrackA_<ContainerAllocator>::LANEMARKINGLNDSTV_0;
template<typename ContainerAllocator>
constexpr uint8_t LaneMarkingTrackA_<ContainerAllocator>::LANEMARKINGLNCRVTV_1;
template<typename ContainerAllocator>
constexpr uint8_t LaneMarkingTrackA_<ContainerAllocator>::LANEMARKINGLNCRVTV_0;
template<typename ContainerAllocator>
constexpr uint8_t LaneMarkingTrackA_<ContainerAllocator>::LANEMARKINGLNCRVTGRADV_1;
template<typename ContainerAllocator>
constexpr uint8_t LaneMarkingTrackA_<ContainerAllocator>::LANEMARKINGLNCRVTGRADV_0;
template<typename ContainerAllocator>
constexpr uint8_t LaneMarkingTrackA_<ContainerAllocator>::LANEMARKINGLNMRKRTYP_0;
template<typename ContainerAllocator>
constexpr uint8_t LaneMarkingTrackA_<ContainerAllocator>::LANEMARKINGLNMRKRTYP_1;
template<typename ContainerAllocator>
constexpr uint8_t LaneMarkingTrackA_<ContainerAllocator>::LANEMARKINGLNMRKRTYP_2;
template<typename ContainerAllocator>
constexpr uint8_t LaneMarkingTrackA_<ContainerAllocator>::LANEMARKINGLNMRKRTYP_3;
template<typename ContainerAllocator>
constexpr uint8_t LaneMarkingTrackA_<ContainerAllocator>::LANEMARKINGLNMRKRTYP_4;
template<typename ContainerAllocator>
constexpr uint8_t LaneMarkingTrackA_<ContainerAllocator>::LANEMARKINGLNMRKRTYP_5;
template<typename ContainerAllocator>
constexpr uint8_t LaneMarkingTrackA_<ContainerAllocator>::LANEMARKINGLNMRKRTYP_6;
template<typename ContainerAllocator>
constexpr uint8_t LaneMarkingTrackA_<ContainerAllocator>::LANEMARKINGCOLOR_0;
template<typename ContainerAllocator>
constexpr uint8_t LaneMarkingTrackA_<ContainerAllocator>::LANEMARKINGCOLOR_1;
template<typename ContainerAllocator>
constexpr uint8_t LaneMarkingTrackA_<ContainerAllocator>::LANEMARKINGCOLOR_2;
template<typename ContainerAllocator>
constexpr uint8_t LaneMarkingTrackA_<ContainerAllocator>::LANEMARKINGCOLOR_3;

}  // namespace msg

}  // namespace wauto_vehicle_msgs

#endif  // WAUTO_VEHICLE_MSGS__MSG__DETAIL__LANE_MARKING_TRACK_A__STRUCT_HPP_
