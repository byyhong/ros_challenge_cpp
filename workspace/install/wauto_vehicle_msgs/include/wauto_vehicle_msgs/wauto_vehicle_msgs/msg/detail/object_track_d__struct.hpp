// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from wauto_vehicle_msgs:msg/ObjectTrackD.idl
// generated code does not contain a copyright notice

#ifndef WAUTO_VEHICLE_MSGS__MSG__DETAIL__OBJECT_TRACK_D__STRUCT_HPP_
#define WAUTO_VEHICLE_MSGS__MSG__DETAIL__OBJECT_TRACK_D__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__wauto_vehicle_msgs__msg__ObjectTrackD __attribute__((deprecated))
#else
# define DEPRECATED__wauto_vehicle_msgs__msg__ObjectTrackD __declspec(deprecated)
#endif

namespace wauto_vehicle_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ObjectTrackD_
{
  using Type = ObjectTrackD_<ContainerAllocator>;

  explicit ObjectTrackD_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->rolling_count = 0;
      this->objobjectid = 0;
      this->object_longitude = 0l;
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->rolling_count = 0;
      this->objobjectid = 0;
      this->object_longitude = 0l;
    }
  }

  explicit ObjectTrackD_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->rolling_count = 0;
      this->objobjectid = 0;
      this->object_longitude = 0l;
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->rolling_count = 0;
      this->objobjectid = 0;
      this->object_longitude = 0l;
    }
  }

  // field types and members
  using _rolling_count_type =
    uint8_t;
  _rolling_count_type rolling_count;
  using _objobjectid_type =
    uint8_t;
  _objobjectid_type objobjectid;
  using _object_longitude_type =
    int32_t;
  _object_longitude_type object_longitude;

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
  Type & set__object_longitude(
    const int32_t & _arg)
  {
    this->object_longitude = _arg;
    return *this;
  }

  // constant declarations
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> NAME;

  // pointer types
  using RawPtr =
    wauto_vehicle_msgs::msg::ObjectTrackD_<ContainerAllocator> *;
  using ConstRawPtr =
    const wauto_vehicle_msgs::msg::ObjectTrackD_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<wauto_vehicle_msgs::msg::ObjectTrackD_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<wauto_vehicle_msgs::msg::ObjectTrackD_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      wauto_vehicle_msgs::msg::ObjectTrackD_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<wauto_vehicle_msgs::msg::ObjectTrackD_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      wauto_vehicle_msgs::msg::ObjectTrackD_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<wauto_vehicle_msgs::msg::ObjectTrackD_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<wauto_vehicle_msgs::msg::ObjectTrackD_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<wauto_vehicle_msgs::msg::ObjectTrackD_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__wauto_vehicle_msgs__msg__ObjectTrackD
    std::shared_ptr<wauto_vehicle_msgs::msg::ObjectTrackD_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__wauto_vehicle_msgs__msg__ObjectTrackD
    std::shared_ptr<wauto_vehicle_msgs::msg::ObjectTrackD_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ObjectTrackD_ & other) const
  {
    if (this->rolling_count != other.rolling_count) {
      return false;
    }
    if (this->objobjectid != other.objobjectid) {
      return false;
    }
    if (this->object_longitude != other.object_longitude) {
      return false;
    }
    return true;
  }
  bool operator!=(const ObjectTrackD_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ObjectTrackD_

// alias to use template instance with default allocator
using ObjectTrackD =
  wauto_vehicle_msgs::msg::ObjectTrackD_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
ObjectTrackD_<ContainerAllocator>::NAME = "Object_TrackD";

}  // namespace msg

}  // namespace wauto_vehicle_msgs

#endif  // WAUTO_VEHICLE_MSGS__MSG__DETAIL__OBJECT_TRACK_D__STRUCT_HPP_
