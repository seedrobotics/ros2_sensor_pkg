// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from ros2_sensor_pkg:msg/LoneSensor.idl
// generated code does not contain a copyright notice
#ifndef ROS2_SENSOR_PKG__MSG__DETAIL__LONE_SENSOR__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define ROS2_SENSOR_PKG__MSG__DETAIL__LONE_SENSOR__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "ros2_sensor_pkg/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "ros2_sensor_pkg/msg/detail/lone_sensor__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ros2_sensor_pkg
bool cdr_serialize_ros2_sensor_pkg__msg__LoneSensor(
  const ros2_sensor_pkg__msg__LoneSensor * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ros2_sensor_pkg
bool cdr_deserialize_ros2_sensor_pkg__msg__LoneSensor(
  eprosima::fastcdr::Cdr &,
  ros2_sensor_pkg__msg__LoneSensor * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ros2_sensor_pkg
size_t get_serialized_size_ros2_sensor_pkg__msg__LoneSensor(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ros2_sensor_pkg
size_t max_serialized_size_ros2_sensor_pkg__msg__LoneSensor(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ros2_sensor_pkg
bool cdr_serialize_key_ros2_sensor_pkg__msg__LoneSensor(
  const ros2_sensor_pkg__msg__LoneSensor * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ros2_sensor_pkg
size_t get_serialized_size_key_ros2_sensor_pkg__msg__LoneSensor(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ros2_sensor_pkg
size_t max_serialized_size_key_ros2_sensor_pkg__msg__LoneSensor(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ros2_sensor_pkg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ros2_sensor_pkg, msg, LoneSensor)();

#ifdef __cplusplus
}
#endif

#endif  // ROS2_SENSOR_PKG__MSG__DETAIL__LONE_SENSOR__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
