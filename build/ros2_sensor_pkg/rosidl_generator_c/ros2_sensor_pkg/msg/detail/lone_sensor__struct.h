// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros2_sensor_pkg:msg/LoneSensor.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ros2_sensor_pkg/msg/lone_sensor.h"


#ifndef ROS2_SENSOR_PKG__MSG__DETAIL__LONE_SENSOR__STRUCT_H_
#define ROS2_SENSOR_PKG__MSG__DETAIL__LONE_SENSOR__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/LoneSensor in the package ros2_sensor_pkg.
typedef struct ros2_sensor_pkg__msg__LoneSensor
{
  int8_t id;
  int64_t fx;
  int64_t fy;
  int64_t fz;
  double abs;
  double yaw;
  double pitch;
  bool is_present;
  bool is_3d;
} ros2_sensor_pkg__msg__LoneSensor;

// Struct for a sequence of ros2_sensor_pkg__msg__LoneSensor.
typedef struct ros2_sensor_pkg__msg__LoneSensor__Sequence
{
  ros2_sensor_pkg__msg__LoneSensor * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_sensor_pkg__msg__LoneSensor__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS2_SENSOR_PKG__MSG__DETAIL__LONE_SENSOR__STRUCT_H_
