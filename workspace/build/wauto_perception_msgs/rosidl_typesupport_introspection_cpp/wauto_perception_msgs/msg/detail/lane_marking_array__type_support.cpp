// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from wauto_perception_msgs:msg/LaneMarkingArray.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "wauto_perception_msgs/msg/detail/lane_marking_array__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace wauto_perception_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void LaneMarkingArray_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) wauto_perception_msgs::msg::LaneMarkingArray(_init);
}

void LaneMarkingArray_fini_function(void * message_memory)
{
  auto typed_message = static_cast<wauto_perception_msgs::msg::LaneMarkingArray *>(message_memory);
  typed_message->~LaneMarkingArray();
}

size_t size_function__LaneMarkingArray__lane_markings(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<wauto_perception_msgs::msg::LaneMarking> *>(untyped_member);
  return member->size();
}

const void * get_const_function__LaneMarkingArray__lane_markings(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<wauto_perception_msgs::msg::LaneMarking> *>(untyped_member);
  return &member[index];
}

void * get_function__LaneMarkingArray__lane_markings(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<wauto_perception_msgs::msg::LaneMarking> *>(untyped_member);
  return &member[index];
}

void fetch_function__LaneMarkingArray__lane_markings(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const wauto_perception_msgs::msg::LaneMarking *>(
    get_const_function__LaneMarkingArray__lane_markings(untyped_member, index));
  auto & value = *reinterpret_cast<wauto_perception_msgs::msg::LaneMarking *>(untyped_value);
  value = item;
}

void assign_function__LaneMarkingArray__lane_markings(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<wauto_perception_msgs::msg::LaneMarking *>(
    get_function__LaneMarkingArray__lane_markings(untyped_member, index));
  const auto & value = *reinterpret_cast<const wauto_perception_msgs::msg::LaneMarking *>(untyped_value);
  item = value;
}

void resize_function__LaneMarkingArray__lane_markings(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<wauto_perception_msgs::msg::LaneMarking> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember LaneMarkingArray_message_member_array[2] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(wauto_perception_msgs::msg::LaneMarkingArray, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "lane_markings",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<wauto_perception_msgs::msg::LaneMarking>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(wauto_perception_msgs::msg::LaneMarkingArray, lane_markings),  // bytes offset in struct
    nullptr,  // default value
    size_function__LaneMarkingArray__lane_markings,  // size() function pointer
    get_const_function__LaneMarkingArray__lane_markings,  // get_const(index) function pointer
    get_function__LaneMarkingArray__lane_markings,  // get(index) function pointer
    fetch_function__LaneMarkingArray__lane_markings,  // fetch(index, &value) function pointer
    assign_function__LaneMarkingArray__lane_markings,  // assign(index, value) function pointer
    resize_function__LaneMarkingArray__lane_markings  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers LaneMarkingArray_message_members = {
  "wauto_perception_msgs::msg",  // message namespace
  "LaneMarkingArray",  // message name
  2,  // number of fields
  sizeof(wauto_perception_msgs::msg::LaneMarkingArray),
  LaneMarkingArray_message_member_array,  // message members
  LaneMarkingArray_init_function,  // function to initialize message memory (memory has to be allocated)
  LaneMarkingArray_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t LaneMarkingArray_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &LaneMarkingArray_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace wauto_perception_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<wauto_perception_msgs::msg::LaneMarkingArray>()
{
  return &::wauto_perception_msgs::msg::rosidl_typesupport_introspection_cpp::LaneMarkingArray_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, wauto_perception_msgs, msg, LaneMarkingArray)() {
  return &::wauto_perception_msgs::msg::rosidl_typesupport_introspection_cpp::LaneMarkingArray_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
