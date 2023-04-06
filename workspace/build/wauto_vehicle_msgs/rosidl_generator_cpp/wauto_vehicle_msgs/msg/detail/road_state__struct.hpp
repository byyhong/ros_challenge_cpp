// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from wauto_vehicle_msgs:msg/RoadState.idl
// generated code does not contain a copyright notice

#ifndef WAUTO_VEHICLE_MSGS__MSG__DETAIL__ROAD_STATE__STRUCT_HPP_
#define WAUTO_VEHICLE_MSGS__MSG__DETAIL__ROAD_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__wauto_vehicle_msgs__msg__RoadState __attribute__((deprecated))
#else
# define DEPRECATED__wauto_vehicle_msgs__msg__RoadState __declspec(deprecated)
#endif

namespace wauto_vehicle_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RoadState_
{
  using Type = RoadState_<ContainerAllocator>;

  explicit RoadState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->rolling_count = 0;
      this->active_traffic_signal_head_id = 0;
      this->current_observed_speed_limit = 0;
      this->next_observed_speed_limit = 0;
      this->next_observed_speed_limit_longit = 0;
      this->active_lane_number = 0;
      this->left_lane_marking_id = 0;
      this->right_lane_marking_id = 0;
      this->llndistancevalid = 0;
      this->disttollnedge = 0;
      this->rlndistancevalid = 0;
      this->disttorlnedge = 0;
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->rolling_count = 0;
      this->active_traffic_signal_head_id = 0;
      this->current_observed_speed_limit = 0;
      this->next_observed_speed_limit = 0;
      this->next_observed_speed_limit_longit = 0;
      this->active_lane_number = 0;
      this->left_lane_marking_id = 0;
      this->right_lane_marking_id = 0;
      this->llndistancevalid = 0;
      this->disttollnedge = 0;
      this->rlndistancevalid = 0;
      this->disttorlnedge = 0;
    }
  }

  explicit RoadState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->rolling_count = 0;
      this->active_traffic_signal_head_id = 0;
      this->current_observed_speed_limit = 0;
      this->next_observed_speed_limit = 0;
      this->next_observed_speed_limit_longit = 0;
      this->active_lane_number = 0;
      this->left_lane_marking_id = 0;
      this->right_lane_marking_id = 0;
      this->llndistancevalid = 0;
      this->disttollnedge = 0;
      this->rlndistancevalid = 0;
      this->disttorlnedge = 0;
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->rolling_count = 0;
      this->active_traffic_signal_head_id = 0;
      this->current_observed_speed_limit = 0;
      this->next_observed_speed_limit = 0;
      this->next_observed_speed_limit_longit = 0;
      this->active_lane_number = 0;
      this->left_lane_marking_id = 0;
      this->right_lane_marking_id = 0;
      this->llndistancevalid = 0;
      this->disttollnedge = 0;
      this->rlndistancevalid = 0;
      this->disttorlnedge = 0;
    }
  }

  // field types and members
  using _rolling_count_type =
    uint8_t;
  _rolling_count_type rolling_count;
  using _active_traffic_signal_head_id_type =
    uint8_t;
  _active_traffic_signal_head_id_type active_traffic_signal_head_id;
  using _current_observed_speed_limit_type =
    uint8_t;
  _current_observed_speed_limit_type current_observed_speed_limit;
  using _next_observed_speed_limit_type =
    uint8_t;
  _next_observed_speed_limit_type next_observed_speed_limit;
  using _next_observed_speed_limit_longit_type =
    uint8_t;
  _next_observed_speed_limit_longit_type next_observed_speed_limit_longit;
  using _active_lane_number_type =
    uint8_t;
  _active_lane_number_type active_lane_number;
  using _left_lane_marking_id_type =
    uint8_t;
  _left_lane_marking_id_type left_lane_marking_id;
  using _right_lane_marking_id_type =
    uint8_t;
  _right_lane_marking_id_type right_lane_marking_id;
  using _llndistancevalid_type =
    uint8_t;
  _llndistancevalid_type llndistancevalid;
  using _disttollnedge_type =
    uint8_t;
  _disttollnedge_type disttollnedge;
  using _rlndistancevalid_type =
    uint8_t;
  _rlndistancevalid_type rlndistancevalid;
  using _disttorlnedge_type =
    uint8_t;
  _disttorlnedge_type disttorlnedge;

  // setters for named parameter idiom
  Type & set__rolling_count(
    const uint8_t & _arg)
  {
    this->rolling_count = _arg;
    return *this;
  }
  Type & set__active_traffic_signal_head_id(
    const uint8_t & _arg)
  {
    this->active_traffic_signal_head_id = _arg;
    return *this;
  }
  Type & set__current_observed_speed_limit(
    const uint8_t & _arg)
  {
    this->current_observed_speed_limit = _arg;
    return *this;
  }
  Type & set__next_observed_speed_limit(
    const uint8_t & _arg)
  {
    this->next_observed_speed_limit = _arg;
    return *this;
  }
  Type & set__next_observed_speed_limit_longit(
    const uint8_t & _arg)
  {
    this->next_observed_speed_limit_longit = _arg;
    return *this;
  }
  Type & set__active_lane_number(
    const uint8_t & _arg)
  {
    this->active_lane_number = _arg;
    return *this;
  }
  Type & set__left_lane_marking_id(
    const uint8_t & _arg)
  {
    this->left_lane_marking_id = _arg;
    return *this;
  }
  Type & set__right_lane_marking_id(
    const uint8_t & _arg)
  {
    this->right_lane_marking_id = _arg;
    return *this;
  }
  Type & set__llndistancevalid(
    const uint8_t & _arg)
  {
    this->llndistancevalid = _arg;
    return *this;
  }
  Type & set__disttollnedge(
    const uint8_t & _arg)
  {
    this->disttollnedge = _arg;
    return *this;
  }
  Type & set__rlndistancevalid(
    const uint8_t & _arg)
  {
    this->rlndistancevalid = _arg;
    return *this;
  }
  Type & set__disttorlnedge(
    const uint8_t & _arg)
  {
    this->disttorlnedge = _arg;
    return *this;
  }

  // constant declarations
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> NAME;
  static constexpr uint8_t LLNDISTANCEVALID_1 =
    1u;
  static constexpr uint8_t LLNDISTANCEVALID_0 =
    0u;
  static constexpr uint8_t RLNDISTANCEVALID_1 =
    1u;
  static constexpr uint8_t RLNDISTANCEVALID_0 =
    0u;

  // pointer types
  using RawPtr =
    wauto_vehicle_msgs::msg::RoadState_<ContainerAllocator> *;
  using ConstRawPtr =
    const wauto_vehicle_msgs::msg::RoadState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<wauto_vehicle_msgs::msg::RoadState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<wauto_vehicle_msgs::msg::RoadState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      wauto_vehicle_msgs::msg::RoadState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<wauto_vehicle_msgs::msg::RoadState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      wauto_vehicle_msgs::msg::RoadState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<wauto_vehicle_msgs::msg::RoadState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<wauto_vehicle_msgs::msg::RoadState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<wauto_vehicle_msgs::msg::RoadState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__wauto_vehicle_msgs__msg__RoadState
    std::shared_ptr<wauto_vehicle_msgs::msg::RoadState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__wauto_vehicle_msgs__msg__RoadState
    std::shared_ptr<wauto_vehicle_msgs::msg::RoadState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RoadState_ & other) const
  {
    if (this->rolling_count != other.rolling_count) {
      return false;
    }
    if (this->active_traffic_signal_head_id != other.active_traffic_signal_head_id) {
      return false;
    }
    if (this->current_observed_speed_limit != other.current_observed_speed_limit) {
      return false;
    }
    if (this->next_observed_speed_limit != other.next_observed_speed_limit) {
      return false;
    }
    if (this->next_observed_speed_limit_longit != other.next_observed_speed_limit_longit) {
      return false;
    }
    if (this->active_lane_number != other.active_lane_number) {
      return false;
    }
    if (this->left_lane_marking_id != other.left_lane_marking_id) {
      return false;
    }
    if (this->right_lane_marking_id != other.right_lane_marking_id) {
      return false;
    }
    if (this->llndistancevalid != other.llndistancevalid) {
      return false;
    }
    if (this->disttollnedge != other.disttollnedge) {
      return false;
    }
    if (this->rlndistancevalid != other.rlndistancevalid) {
      return false;
    }
    if (this->disttorlnedge != other.disttorlnedge) {
      return false;
    }
    return true;
  }
  bool operator!=(const RoadState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RoadState_

// alias to use template instance with default allocator
using RoadState =
  wauto_vehicle_msgs::msg::RoadState_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
RoadState_<ContainerAllocator>::NAME = "RoadState";
template<typename ContainerAllocator>
constexpr uint8_t RoadState_<ContainerAllocator>::LLNDISTANCEVALID_1;
template<typename ContainerAllocator>
constexpr uint8_t RoadState_<ContainerAllocator>::LLNDISTANCEVALID_0;
template<typename ContainerAllocator>
constexpr uint8_t RoadState_<ContainerAllocator>::RLNDISTANCEVALID_1;
template<typename ContainerAllocator>
constexpr uint8_t RoadState_<ContainerAllocator>::RLNDISTANCEVALID_0;

}  // namespace msg

}  // namespace wauto_vehicle_msgs

#endif  // WAUTO_VEHICLE_MSGS__MSG__DETAIL__ROAD_STATE__STRUCT_HPP_
