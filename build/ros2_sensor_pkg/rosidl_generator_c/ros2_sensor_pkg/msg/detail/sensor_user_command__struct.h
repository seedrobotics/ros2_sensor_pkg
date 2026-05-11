// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros2_sensor_pkg:msg/SensorUserCommand.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ros2_sensor_pkg/msg/sensor_user_command.h"


#ifndef ROS2_SENSOR_PKG__MSG__DETAIL__SENSOR_USER_COMMAND__STRUCT_H_
#define ROS2_SENSOR_PKG__MSG__DETAIL__SENSOR_USER_COMMAND__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'epoch_sec'
// Member 'epoch_msec'
// Member 'raw'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/SensorUserCommand in the package ros2_sensor_pkg.
typedef struct ros2_sensor_pkg__msg__SensorUserCommand
{
  bool calibrate;
  bool setepoch;
  rosidl_runtime_c__String epoch_sec;
  rosidl_runtime_c__String epoch_msec;
  bool diagnosis_request;
  bool set_frequency;
  int8_t frequency;
  bool raw_string;
  rosidl_runtime_c__String raw;
} ros2_sensor_pkg__msg__SensorUserCommand;

// Struct for a sequence of ros2_sensor_pkg__msg__SensorUserCommand.
typedef struct ros2_sensor_pkg__msg__SensorUserCommand__Sequence
{
  ros2_sensor_pkg__msg__SensorUserCommand * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_sensor_pkg__msg__SensorUserCommand__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS2_SENSOR_PKG__MSG__DETAIL__SENSOR_USER_COMMAND__STRUCT_H_
