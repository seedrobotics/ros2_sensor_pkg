// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros2_sensor_pkg:msg/AllSensors.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ros2_sensor_pkg/msg/all_sensors.h"


#ifndef ROS2_SENSOR_PKG__MSG__DETAIL__ALL_SENSORS__STRUCT_H_
#define ROS2_SENSOR_PKG__MSG__DETAIL__ALL_SENSORS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'data'
#include "ros2_sensor_pkg/msg/detail/lone_sensor__struct.h"

/// Struct defined in msg/AllSensors in the package ros2_sensor_pkg.
typedef struct ros2_sensor_pkg__msg__AllSensors
{
  std_msgs__msg__Header header;
  int8_t length;
  ros2_sensor_pkg__msg__LoneSensor__Sequence data;
} ros2_sensor_pkg__msg__AllSensors;

// Struct for a sequence of ros2_sensor_pkg__msg__AllSensors.
typedef struct ros2_sensor_pkg__msg__AllSensors__Sequence
{
  ros2_sensor_pkg__msg__AllSensors * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_sensor_pkg__msg__AllSensors__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS2_SENSOR_PKG__MSG__DETAIL__ALL_SENSORS__STRUCT_H_
