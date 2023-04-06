// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from wauto_perception_msgs:msg/Roi.idl
// generated code does not contain a copyright notice

#ifndef WAUTO_PERCEPTION_MSGS__MSG__DETAIL__ROI__STRUCT_HPP_
#define WAUTO_PERCEPTION_MSGS__MSG__DETAIL__ROI__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'classification'
#include "wauto_perception_msgs/msg/detail/object_classification__struct.hpp"
// Member 'bottom_left'
// Member 'top_right'
#include "geometry_msgs/msg/detail/point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__wauto_perception_msgs__msg__Roi __attribute__((deprecated))
#else
# define DEPRECATED__wauto_perception_msgs__msg__Roi __declspec(deprecated)
#endif

namespace wauto_perception_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Roi_
{
  using Type = Roi_<ContainerAllocator>;

  explicit Roi_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : classification(_init),
    bottom_left(_init),
    top_right(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->id = 0;
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->id = 0;
    }
  }

  explicit Roi_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : classification(_alloc, _init),
    bottom_left(_alloc, _init),
    top_right(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->id = 0;
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->id = 0;
    }
  }

  // field types and members
  using _id_type =
    uint8_t;
  _id_type id;
  using _classification_type =
    wauto_perception_msgs::msg::ObjectClassification_<ContainerAllocator>;
  _classification_type classification;
  using _bottom_left_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _bottom_left_type bottom_left;
  using _top_right_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _top_right_type top_right;

  // setters for named parameter idiom
  Type & set__id(
    const uint8_t & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__classification(
    const wauto_perception_msgs::msg::ObjectClassification_<ContainerAllocator> & _arg)
  {
    this->classification = _arg;
    return *this;
  }
  Type & set__bottom_left(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->bottom_left = _arg;
    return *this;
  }
  Type & set__top_right(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->top_right = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    wauto_perception_msgs::msg::Roi_<ContainerAllocator> *;
  using ConstRawPtr =
    const wauto_perception_msgs::msg::Roi_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<wauto_perception_msgs::msg::Roi_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<wauto_perception_msgs::msg::Roi_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      wauto_perception_msgs::msg::Roi_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<wauto_perception_msgs::msg::Roi_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      wauto_perception_msgs::msg::Roi_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<wauto_perception_msgs::msg::Roi_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<wauto_perception_msgs::msg::Roi_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<wauto_perception_msgs::msg::Roi_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__wauto_perception_msgs__msg__Roi
    std::shared_ptr<wauto_perception_msgs::msg::Roi_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__wauto_perception_msgs__msg__Roi
    std::shared_ptr<wauto_perception_msgs::msg::Roi_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Roi_ & other) const
  {
    if (this->id != other.id) {
      return false;
    }
    if (this->classification != other.classification) {
      return false;
    }
    if (this->bottom_left != other.bottom_left) {
      return false;
    }
    if (this->top_right != other.top_right) {
      return false;
    }
    return true;
  }
  bool operator!=(const Roi_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Roi_

// alias to use template instance with default allocator
using Roi =
  wauto_perception_msgs::msg::Roi_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace wauto_perception_msgs

#endif  // WAUTO_PERCEPTION_MSGS__MSG__DETAIL__ROI__STRUCT_HPP_
