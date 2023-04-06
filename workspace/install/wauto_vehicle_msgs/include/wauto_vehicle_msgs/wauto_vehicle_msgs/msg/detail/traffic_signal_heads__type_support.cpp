// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from wauto_vehicle_msgs:msg/TrafficSignalHeads.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "wauto_vehicle_msgs/msg/detail/traffic_signal_heads__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace wauto_vehicle_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void TrafficSignalHeads_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) wauto_vehicle_msgs::msg::TrafficSignalHeads(_init);
}

void TrafficSignalHeads_fini_function(void * message_memory)
{
  auto typed_message = static_cast<wauto_vehicle_msgs::msg::TrafficSignalHeads *>(message_memory);
  typed_message->~TrafficSignalHeads();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember TrafficSignalHeads_message_member_array[3] = {
  {
    "rolling_count",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(wauto_vehicle_msgs::msg::TrafficSignalHeads, rolling_count),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "current_signal_head_count",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(wauto_vehicle_msgs::msg::TrafficSignalHeads, current_signal_head_count),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "observation_time_of_hour",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(wauto_vehicle_msgs::msg::TrafficSignalHeads, observation_time_of_hour),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers TrafficSignalHeads_message_members = {
  "wauto_vehicle_msgs::msg",  // message namespace
  "TrafficSignalHeads",  // message name
  3,  // number of fields
  sizeof(wauto_vehicle_msgs::msg::TrafficSignalHeads),
  TrafficSignalHeads_message_member_array,  // message members
  TrafficSignalHeads_init_function,  // function to initialize message memory (memory has to be allocated)
  TrafficSignalHeads_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t TrafficSignalHeads_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &TrafficSignalHeads_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace wauto_vehicle_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<wauto_vehicle_msgs::msg::TrafficSignalHeads>()
{
  return &::wauto_vehicle_msgs::msg::rosidl_typesupport_introspection_cpp::TrafficSignalHeads_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, wauto_vehicle_msgs, msg, TrafficSignalHeads)() {
  return &::wauto_vehicle_msgs::msg::rosidl_typesupport_introspection_cpp::TrafficSignalHeads_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
