// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from wauto_vehicle_msgs:msg/ObjectTrackB.idl
// generated code does not contain a copyright notice

#ifndef WAUTO_VEHICLE_MSGS__MSG__DETAIL__OBJECT_TRACK_B__STRUCT_HPP_
#define WAUTO_VEHICLE_MSGS__MSG__DETAIL__OBJECT_TRACK_B__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__wauto_vehicle_msgs__msg__ObjectTrackB __attribute__((deprecated))
#else
# define DEPRECATED__wauto_vehicle_msgs__msg__ObjectTrackB __declspec(deprecated)
#endif

namespace wauto_vehicle_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ObjectTrackB_
{
  using Type = ObjectTrackB_<ContainerAllocator>;

  explicit ObjectTrackB_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->rolling_count = 0;
      this->objobjectid = 0;
      this->width = 0;
      this->height = 0;
      this->object_relative_orientation = 0;
      this->rellnposition = 0;
      this->object_source_camera = 0;
      this->object_source_radar = 0;
      this->object_source_ultrasonic = 0;
      this->object_source_v2x = 0;
      this->object_source_lidar = 0;
      this->object_source_other = 0;
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->rolling_count = 0;
      this->objobjectid = 0;
      this->width = 0;
      this->height = 0;
      this->object_relative_orientation = 0;
      this->rellnposition = 0;
      this->object_source_camera = 0;
      this->object_source_radar = 0;
      this->object_source_ultrasonic = 0;
      this->object_source_v2x = 0;
      this->object_source_lidar = 0;
      this->object_source_other = 0;
    }
  }

  explicit ObjectTrackB_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->rolling_count = 0;
      this->objobjectid = 0;
      this->width = 0;
      this->height = 0;
      this->object_relative_orientation = 0;
      this->rellnposition = 0;
      this->object_source_camera = 0;
      this->object_source_radar = 0;
      this->object_source_ultrasonic = 0;
      this->object_source_v2x = 0;
      this->object_source_lidar = 0;
      this->object_source_other = 0;
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->rolling_count = 0;
      this->objobjectid = 0;
      this->width = 0;
      this->height = 0;
      this->object_relative_orientation = 0;
      this->rellnposition = 0;
      this->object_source_camera = 0;
      this->object_source_radar = 0;
      this->object_source_ultrasonic = 0;
      this->object_source_v2x = 0;
      this->object_source_lidar = 0;
      this->object_source_other = 0;
    }
  }

  // field types and members
  using _rolling_count_type =
    uint8_t;
  _rolling_count_type rolling_count;
  using _objobjectid_type =
    uint8_t;
  _objobjectid_type objobjectid;
  using _width_type =
    uint8_t;
  _width_type width;
  using _height_type =
    uint8_t;
  _height_type height;
  using _object_relative_orientation_type =
    uint8_t;
  _object_relative_orientation_type object_relative_orientation;
  using _rellnposition_type =
    int8_t;
  _rellnposition_type rellnposition;
  using _object_source_camera_type =
    uint8_t;
  _object_source_camera_type object_source_camera;
  using _object_source_radar_type =
    uint8_t;
  _object_source_radar_type object_source_radar;
  using _object_source_ultrasonic_type =
    uint8_t;
  _object_source_ultrasonic_type object_source_ultrasonic;
  using _object_source_v2x_type =
    uint8_t;
  _object_source_v2x_type object_source_v2x;
  using _object_source_lidar_type =
    uint8_t;
  _object_source_lidar_type object_source_lidar;
  using _object_source_other_type =
    uint8_t;
  _object_source_other_type object_source_other;

  // setters for named parameter idiom
  Type & set__rolling_count(
    const uint8_t & _arg)
  {
    this->rolling_count = _arg;
    return *this;
  }
  Type & set__objobjectid(
    const uint8_t & _arg)
  {
    this->objobjectid = _arg;
    return *this;
  }
  Type & set__width(
    const uint8_t & _arg)
  {
    this->width = _arg;
    return *this;
  }
  Type & set__height(
    const uint8_t & _arg)
  {
    this->height = _arg;
    return *this;
  }
  Type & set__object_relative_orientation(
    const uint8_t & _arg)
  {
    this->object_relative_orientation = _arg;
    return *this;
  }
  Type & set__rellnposition(
    const int8_t & _arg)
  {
    this->rellnposition = _arg;
    return *this;
  }
  Type & set__object_source_camera(
    const uint8_t & _arg)
  {
    this->object_source_camera = _arg;
    return *this;
  }
  Type & set__object_source_radar(
    const uint8_t & _arg)
  {
    this->object_source_radar = _arg;
    return *this;
  }
  Type & set__object_source_ultrasonic(
    const uint8_t & _arg)
  {
    this->object_source_ultrasonic = _arg;
    return *this;
  }
  Type & set__object_source_v2x(
    const uint8_t & _arg)
  {
    this->object_source_v2x = _arg;
    return *this;
  }
  Type & set__object_source_lidar(
    const uint8_t & _arg)
  {
    this->object_source_lidar = _arg;
    return *this;
  }
  Type & set__object_source_other(
    const uint8_t & _arg)
  {
    this->object_source_other = _arg;
    return *this;
  }

  // constant declarations
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> NAME;
  static constexpr uint8_t OBJECT_SOURCE_CAMERA_1 =
    1u;
  static constexpr uint8_t OBJECT_SOURCE_CAMERA_0 =
    0u;
  static constexpr uint8_t OBJECT_SOURCE_RADAR_1 =
    1u;
  static constexpr uint8_t OBJECT_SOURCE_RADAR_0 =
    0u;
  static constexpr uint8_t OBJECT_SOURCE_ULTRASONIC_1 =
    1u;
  static constexpr uint8_t OBJECT_SOURCE_ULTRASONIC_0 =
    0u;
  static constexpr uint8_t OBJECT_SOURCE_V2X_1 =
    1u;
  static constexpr uint8_t OBJECT_SOURCE_V2X_0 =
    0u;
  static constexpr uint8_t OBJECT_SOURCE_LIDAR_1 =
    1u;
  static constexpr uint8_t OBJECT_SOURCE_LIDAR_0 =
    0u;
  static constexpr uint8_t OBJECT_SOURCE_OTHER_1 =
    1u;
  static constexpr uint8_t OBJECT_SOURCE_OTHER_0 =
    0u;

  // pointer types
  using RawPtr =
    wauto_vehicle_msgs::msg::ObjectTrackB_<ContainerAllocator> *;
  using ConstRawPtr =
    const wauto_vehicle_msgs::msg::ObjectTrackB_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<wauto_vehicle_msgs::msg::ObjectTrackB_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<wauto_vehicle_msgs::msg::ObjectTrackB_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      wauto_vehicle_msgs::msg::ObjectTrackB_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<wauto_vehicle_msgs::msg::ObjectTrackB_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      wauto_vehicle_msgs::msg::ObjectTrackB_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<wauto_vehicle_msgs::msg::ObjectTrackB_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<wauto_vehicle_msgs::msg::ObjectTrackB_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<wauto_vehicle_msgs::msg::ObjectTrackB_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__wauto_vehicle_msgs__msg__ObjectTrackB
    std::shared_ptr<wauto_vehicle_msgs::msg::ObjectTrackB_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__wauto_vehicle_msgs__msg__ObjectTrackB
    std::shared_ptr<wauto_vehicle_msgs::msg::ObjectTrackB_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ObjectTrackB_ & other) const
  {
    if (this->rolling_count != other.rolling_count) {
      return false;
    }
    if (this->objobjectid != other.objobjectid) {
      return false;
    }
    if (this->width != other.width) {
      return false;
    }
    if (this->height != other.height) {
      return false;
    }
    if (this->object_relative_orientation != other.object_relative_orientation) {
      return false;
    }
    if (this->rellnposition != other.rellnposition) {
      return false;
    }
    if (this->object_source_camera != other.object_source_camera) {
      return false;
    }
    if (this->object_source_radar != other.object_source_radar) {
      return false;
    }
    if (this->object_source_ultrasonic != other.object_source_ultrasonic) {
      return false;
    }
    if (this->object_source_v2x != other.object_source_v2x) {
      return false;
    }
    if (this->object_source_lidar != other.object_source_lidar) {
      return false;
    }
    if (this->object_source_other != other.object_source_other) {
      return false;
    }
    return true;
  }
  bool operator!=(const ObjectTrackB_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ObjectTrackB_

// alias to use template instance with default allocator
using ObjectTrackB =
  wauto_vehicle_msgs::msg::ObjectTrackB_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
ObjectTrackB_<ContainerAllocator>::NAME = "Object_TrackB";
template<typename ContainerAllocator>
constexpr uint8_t ObjectTrackB_<ContainerAllocator>::OBJECT_SOURCE_CAMERA_1;
template<typename ContainerAllocator>
constexpr uint8_t ObjectTrackB_<ContainerAllocator>::OBJECT_SOURCE_CAMERA_0;
template<typename ContainerAllocator>
constexpr uint8_t ObjectTrackB_<ContainerAllocator>::OBJECT_SOURCE_RADAR_1;
template<typename ContainerAllocator>
constexpr uint8_t ObjectTrackB_<ContainerAllocator>::OBJECT_SOURCE_RADAR_0;
template<typename ContainerAllocator>
constexpr uint8_t ObjectTrackB_<ContainerAllocator>::OBJECT_SOURCE_ULTRASONIC_1;
template<typename ContainerAllocator>
constexpr uint8_t ObjectTrackB_<ContainerAllocator>::OBJECT_SOURCE_ULTRASONIC_0;
template<typename ContainerAllocator>
constexpr uint8_t ObjectTrackB_<ContainerAllocator>::OBJECT_SOURCE_V2X_1;
template<typename ContainerAllocator>
constexpr uint8_t ObjectTrackB_<ContainerAllocator>::OBJECT_SOURCE_V2X_0;
template<typename ContainerAllocator>
constexpr uint8_t ObjectTrackB_<ContainerAllocator>::OBJECT_SOURCE_LIDAR_1;
template<typename ContainerAllocator>
constexpr uint8_t ObjectTrackB_<ContainerAllocator>::OBJECT_SOURCE_LIDAR_0;
template<typename ContainerAllocator>
constexpr uint8_t ObjectTrackB_<ContainerAllocator>::OBJECT_SOURCE_OTHER_1;
template<typename ContainerAllocator>
constexpr uint8_t ObjectTrackB_<ContainerAllocator>::OBJECT_SOURCE_OTHER_0;

}  // namespace msg

}  // namespace wauto_vehicle_msgs

#endif  // WAUTO_VEHICLE_MSGS__MSG__DETAIL__OBJECT_TRACK_B__STRUCT_HPP_
