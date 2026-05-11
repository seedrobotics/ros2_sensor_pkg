// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from ros2_sensor_pkg:msg/AllSensors.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "ros2_sensor_pkg/msg/detail/all_sensors__functions.h"
#include "ros2_sensor_pkg/msg/detail/all_sensors__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace ros2_sensor_pkg
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void AllSensors_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) ros2_sensor_pkg::msg::AllSensors(_init);
}

void AllSensors_fini_function(void * message_memory)
{
  auto typed_message = static_cast<ros2_sensor_pkg::msg::AllSensors *>(message_memory);
  typed_message->~AllSensors();
}

size_t size_function__AllSensors__data(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<ros2_sensor_pkg::msg::LoneSensor> *>(untyped_member);
  return member->size();
}

const void * get_const_function__AllSensors__data(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<ros2_sensor_pkg::msg::LoneSensor> *>(untyped_member);
  return &member[index];
}

void * get_function__AllSensors__data(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<ros2_sensor_pkg::msg::LoneSensor> *>(untyped_member);
  return &member[index];
}

void fetch_function__AllSensors__data(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const ros2_sensor_pkg::msg::LoneSensor *>(
    get_const_function__AllSensors__data(untyped_member, index));
  auto & value = *reinterpret_cast<ros2_sensor_pkg::msg::LoneSensor *>(untyped_value);
  value = item;
}

void assign_function__AllSensors__data(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<ros2_sensor_pkg::msg::LoneSensor *>(
    get_function__AllSensors__data(untyped_member, index));
  const auto & value = *reinterpret_cast<const ros2_sensor_pkg::msg::LoneSensor *>(untyped_value);
  item = value;
}

void resize_function__AllSensors__data(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<ros2_sensor_pkg::msg::LoneSensor> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember AllSensors_message_member_array[3] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_sensor_pkg::msg::AllSensors, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "length",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_sensor_pkg::msg::AllSensors, length),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "data",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<ros2_sensor_pkg::msg::LoneSensor>(),  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_sensor_pkg::msg::AllSensors, data),  // bytes offset in struct
    nullptr,  // default value
    size_function__AllSensors__data,  // size() function pointer
    get_const_function__AllSensors__data,  // get_const(index) function pointer
    get_function__AllSensors__data,  // get(index) function pointer
    fetch_function__AllSensors__data,  // fetch(index, &value) function pointer
    assign_function__AllSensors__data,  // assign(index, value) function pointer
    resize_function__AllSensors__data  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers AllSensors_message_members = {
  "ros2_sensor_pkg::msg",  // message namespace
  "AllSensors",  // message name
  3,  // number of fields
  sizeof(ros2_sensor_pkg::msg::AllSensors),
  false,  // has_any_key_member_
  AllSensors_message_member_array,  // message members
  AllSensors_init_function,  // function to initialize message memory (memory has to be allocated)
  AllSensors_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t AllSensors_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &AllSensors_message_members,
  get_message_typesupport_handle_function,
  &ros2_sensor_pkg__msg__AllSensors__get_type_hash,
  &ros2_sensor_pkg__msg__AllSensors__get_type_description,
  &ros2_sensor_pkg__msg__AllSensors__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace ros2_sensor_pkg


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ros2_sensor_pkg::msg::AllSensors>()
{
  return &::ros2_sensor_pkg::msg::rosidl_typesupport_introspection_cpp::AllSensors_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ros2_sensor_pkg, msg, AllSensors)() {
  return &::ros2_sensor_pkg::msg::rosidl_typesupport_introspection_cpp::AllSensors_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
