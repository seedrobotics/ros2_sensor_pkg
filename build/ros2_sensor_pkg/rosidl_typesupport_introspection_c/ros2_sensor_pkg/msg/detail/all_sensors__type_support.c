// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ros2_sensor_pkg:msg/AllSensors.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ros2_sensor_pkg/msg/detail/all_sensors__rosidl_typesupport_introspection_c.h"
#include "ros2_sensor_pkg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ros2_sensor_pkg/msg/detail/all_sensors__functions.h"
#include "ros2_sensor_pkg/msg/detail/all_sensors__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `data`
#include "ros2_sensor_pkg/msg/lone_sensor.h"
// Member `data`
#include "ros2_sensor_pkg/msg/detail/lone_sensor__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ros2_sensor_pkg__msg__AllSensors__rosidl_typesupport_introspection_c__AllSensors_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ros2_sensor_pkg__msg__AllSensors__init(message_memory);
}

void ros2_sensor_pkg__msg__AllSensors__rosidl_typesupport_introspection_c__AllSensors_fini_function(void * message_memory)
{
  ros2_sensor_pkg__msg__AllSensors__fini(message_memory);
}

size_t ros2_sensor_pkg__msg__AllSensors__rosidl_typesupport_introspection_c__size_function__AllSensors__data(
  const void * untyped_member)
{
  const ros2_sensor_pkg__msg__LoneSensor__Sequence * member =
    (const ros2_sensor_pkg__msg__LoneSensor__Sequence *)(untyped_member);
  return member->size;
}

const void * ros2_sensor_pkg__msg__AllSensors__rosidl_typesupport_introspection_c__get_const_function__AllSensors__data(
  const void * untyped_member, size_t index)
{
  const ros2_sensor_pkg__msg__LoneSensor__Sequence * member =
    (const ros2_sensor_pkg__msg__LoneSensor__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ros2_sensor_pkg__msg__AllSensors__rosidl_typesupport_introspection_c__get_function__AllSensors__data(
  void * untyped_member, size_t index)
{
  ros2_sensor_pkg__msg__LoneSensor__Sequence * member =
    (ros2_sensor_pkg__msg__LoneSensor__Sequence *)(untyped_member);
  return &member->data[index];
}

void ros2_sensor_pkg__msg__AllSensors__rosidl_typesupport_introspection_c__fetch_function__AllSensors__data(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const ros2_sensor_pkg__msg__LoneSensor * item =
    ((const ros2_sensor_pkg__msg__LoneSensor *)
    ros2_sensor_pkg__msg__AllSensors__rosidl_typesupport_introspection_c__get_const_function__AllSensors__data(untyped_member, index));
  ros2_sensor_pkg__msg__LoneSensor * value =
    (ros2_sensor_pkg__msg__LoneSensor *)(untyped_value);
  *value = *item;
}

void ros2_sensor_pkg__msg__AllSensors__rosidl_typesupport_introspection_c__assign_function__AllSensors__data(
  void * untyped_member, size_t index, const void * untyped_value)
{
  ros2_sensor_pkg__msg__LoneSensor * item =
    ((ros2_sensor_pkg__msg__LoneSensor *)
    ros2_sensor_pkg__msg__AllSensors__rosidl_typesupport_introspection_c__get_function__AllSensors__data(untyped_member, index));
  const ros2_sensor_pkg__msg__LoneSensor * value =
    (const ros2_sensor_pkg__msg__LoneSensor *)(untyped_value);
  *item = *value;
}

bool ros2_sensor_pkg__msg__AllSensors__rosidl_typesupport_introspection_c__resize_function__AllSensors__data(
  void * untyped_member, size_t size)
{
  ros2_sensor_pkg__msg__LoneSensor__Sequence * member =
    (ros2_sensor_pkg__msg__LoneSensor__Sequence *)(untyped_member);
  ros2_sensor_pkg__msg__LoneSensor__Sequence__fini(member);
  return ros2_sensor_pkg__msg__LoneSensor__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember ros2_sensor_pkg__msg__AllSensors__rosidl_typesupport_introspection_c__AllSensors_message_member_array[3] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_sensor_pkg__msg__AllSensors, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "length",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_sensor_pkg__msg__AllSensors, length),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2_sensor_pkg__msg__AllSensors, data),  // bytes offset in struct
    NULL,  // default value
    ros2_sensor_pkg__msg__AllSensors__rosidl_typesupport_introspection_c__size_function__AllSensors__data,  // size() function pointer
    ros2_sensor_pkg__msg__AllSensors__rosidl_typesupport_introspection_c__get_const_function__AllSensors__data,  // get_const(index) function pointer
    ros2_sensor_pkg__msg__AllSensors__rosidl_typesupport_introspection_c__get_function__AllSensors__data,  // get(index) function pointer
    ros2_sensor_pkg__msg__AllSensors__rosidl_typesupport_introspection_c__fetch_function__AllSensors__data,  // fetch(index, &value) function pointer
    ros2_sensor_pkg__msg__AllSensors__rosidl_typesupport_introspection_c__assign_function__AllSensors__data,  // assign(index, value) function pointer
    ros2_sensor_pkg__msg__AllSensors__rosidl_typesupport_introspection_c__resize_function__AllSensors__data  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ros2_sensor_pkg__msg__AllSensors__rosidl_typesupport_introspection_c__AllSensors_message_members = {
  "ros2_sensor_pkg__msg",  // message namespace
  "AllSensors",  // message name
  3,  // number of fields
  sizeof(ros2_sensor_pkg__msg__AllSensors),
  false,  // has_any_key_member_
  ros2_sensor_pkg__msg__AllSensors__rosidl_typesupport_introspection_c__AllSensors_message_member_array,  // message members
  ros2_sensor_pkg__msg__AllSensors__rosidl_typesupport_introspection_c__AllSensors_init_function,  // function to initialize message memory (memory has to be allocated)
  ros2_sensor_pkg__msg__AllSensors__rosidl_typesupport_introspection_c__AllSensors_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ros2_sensor_pkg__msg__AllSensors__rosidl_typesupport_introspection_c__AllSensors_message_type_support_handle = {
  0,
  &ros2_sensor_pkg__msg__AllSensors__rosidl_typesupport_introspection_c__AllSensors_message_members,
  get_message_typesupport_handle_function,
  &ros2_sensor_pkg__msg__AllSensors__get_type_hash,
  &ros2_sensor_pkg__msg__AllSensors__get_type_description,
  &ros2_sensor_pkg__msg__AllSensors__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ros2_sensor_pkg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2_sensor_pkg, msg, AllSensors)() {
  ros2_sensor_pkg__msg__AllSensors__rosidl_typesupport_introspection_c__AllSensors_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  ros2_sensor_pkg__msg__AllSensors__rosidl_typesupport_introspection_c__AllSensors_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2_sensor_pkg, msg, LoneSensor)();
  if (!ros2_sensor_pkg__msg__AllSensors__rosidl_typesupport_introspection_c__AllSensors_message_type_support_handle.typesupport_identifier) {
    ros2_sensor_pkg__msg__AllSensors__rosidl_typesupport_introspection_c__AllSensors_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ros2_sensor_pkg__msg__AllSensors__rosidl_typesupport_introspection_c__AllSensors_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
