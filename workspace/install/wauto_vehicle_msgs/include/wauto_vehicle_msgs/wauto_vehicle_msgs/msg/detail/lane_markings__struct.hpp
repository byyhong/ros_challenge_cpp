// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from wauto_vehicle_msgs:msg/LaneMarkings.idl
// generated code does not contain a copyright notice

#ifndef WAUTO_VEHICLE_MSGS__MSG__DETAIL__LANE_MARKINGS__STRUCT_HPP_
#define WAUTO_VEHICLE_MSGS__MSG__DETAIL__LANE_MARKINGS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__wauto_vehicle_msgs__msg__LaneMarkings __attribute__((deprecated))
#else
# define DEPRECATED__wauto_vehicle_msgs__msg__LaneMarkings __declspec(deprecated)
#endif

namespace wauto_vehicle_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LaneMarkings_
{
  using Type = LaneMarkings_<ContainerAllocator>;

  explicit LaneMarkings_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->rolling_count = 0;
      this->currentlanemarkingcount = 0;
      this->observation_time_of_hour = 0;
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->rolling_count = 0;
      this->currentlanemarkingcount = 0;
      this->observation_time_of_hour = 0;
    }
  }

  explicit LaneMarkings_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->rolling_count = 0;
      this->currentlanemarkingcount = 0;
      this->observation_time_of_hour = 0;
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->rolling_count = 0;
      this->currentlanemarkingcount = 0;
      this->observation_time_of_hour = 0;
    }
  }

  // field types and members
  using _rolling_count_type =
    uint8_t;
  _rolling_count_type rolling_count;
  using _currentlanemarkingcount_type =
    uint8_t;
  _currentlanemarkingcount_type currentlanemarkingcount;
  using _observation_time_of_hour_type =
    uint16_t;
  _observation_time_of_hour_type observation_time_of_hour;

  // setters for named parameter idiom
  Type & set__rolling_count(
    const uint8_t & _arg)
  {
    this->rolling_count = _arg;
    return *this;
  }
  Type & set__currentlanemarkingcount(
    const uint8_t & _arg)
  {
    this->currentlanemarkingcount = _arg;
    return *this;
  }
  Type & set__observation_time_of_hour(
    const uint16_t & _arg)
  {
    this->observation_time_of_hour = _arg;
    return *this;
  }

  // constant declarations
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> NAME;

  // pointer types
  using RawPtr =
    wauto_vehicle_msgs::msg::LaneMarkings_<ContainerAllocator> *;
  using ConstRawPtr =
    const wauto_vehicle_msgs::msg::LaneMarkings_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<wauto_vehicle_msgs::msg::LaneMarkings_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<wauto_vehicle_msgs::msg::LaneMarkings_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      wauto_vehicle_msgs::msg::LaneMarkings_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<wauto_vehicle_msgs::msg::LaneMarkings_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      wauto_vehicle_msgs::msg::LaneMarkings_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<wauto_vehicle_msgs::msg::LaneMarkings_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<wauto_vehicle_msgs::msg::LaneMarkings_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<wauto_vehicle_msgs::msg::LaneMarkings_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__wauto_vehicle_msgs__msg__LaneMarkings
    std::shared_ptr<wauto_vehicle_msgs::msg::LaneMarkings_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__wauto_vehicle_msgs__msg__LaneMarkings
    std::shared_ptr<wauto_vehicle_msgs::msg::LaneMarkings_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LaneMarkings_ & other) const
  {
    if (this->rolling_count != other.rolling_count) {
      return false;
    }
    if (this->currentlanemarkingcount != other.currentlanemarkingcount) {
      return false;
    }
    if (this->observation_time_of_hour != other.observation_time_of_hour) {
      return false;
    }
    return true;
  }
  bool operator!=(const LaneMarkings_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LaneMarkings_

// alias to use template instance with default allocator
using LaneMarkings =
  wauto_vehicle_msgs::msg::LaneMarkings_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
LaneMarkings_<ContainerAllocator>::NAME = "LaneMarkings";

}  // namespace msg

}  // namespace wauto_vehicle_msgs

#endif  // WAUTO_VEHICLE_MSGS__MSG__DETAIL__LANE_MARKINGS__STRUCT_HPP_
