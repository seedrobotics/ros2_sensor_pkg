// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ros2_sensor_pkg:msg/SensorUserCommand.idl
// generated code does not contain a copyright notice

#include "ros2_sensor_pkg/msg/detail/sensor_user_command__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ros2_sensor_pkg
const rosidl_type_hash_t *
ros2_sensor_pkg__msg__SensorUserCommand__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xb5, 0xaf, 0x90, 0x4b, 0xed, 0xd7, 0x9a, 0x97,
      0x8e, 0xa4, 0x4d, 0x55, 0x66, 0x07, 0xb3, 0xc5,
      0x80, 0x2d, 0xac, 0x17, 0x89, 0xf9, 0x3e, 0x9b,
      0x35, 0xad, 0xc3, 0x9a, 0x10, 0x23, 0xdb, 0xbb,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char ros2_sensor_pkg__msg__SensorUserCommand__TYPE_NAME[] = "ros2_sensor_pkg/msg/SensorUserCommand";

// Define type names, field names, and default values
static char ros2_sensor_pkg__msg__SensorUserCommand__FIELD_NAME__calibrate[] = "calibrate";
static char ros2_sensor_pkg__msg__SensorUserCommand__FIELD_NAME__setepoch[] = "setepoch";
static char ros2_sensor_pkg__msg__SensorUserCommand__FIELD_NAME__epoch_sec[] = "epoch_sec";
static char ros2_sensor_pkg__msg__SensorUserCommand__FIELD_NAME__epoch_msec[] = "epoch_msec";
static char ros2_sensor_pkg__msg__SensorUserCommand__FIELD_NAME__diagnosis_request[] = "diagnosis_request";
static char ros2_sensor_pkg__msg__SensorUserCommand__FIELD_NAME__set_frequency[] = "set_frequency";
static char ros2_sensor_pkg__msg__SensorUserCommand__FIELD_NAME__frequency[] = "frequency";
static char ros2_sensor_pkg__msg__SensorUserCommand__FIELD_NAME__raw_string[] = "raw_string";
static char ros2_sensor_pkg__msg__SensorUserCommand__FIELD_NAME__raw[] = "raw";

static rosidl_runtime_c__type_description__Field ros2_sensor_pkg__msg__SensorUserCommand__FIELDS[] = {
  {
    {ros2_sensor_pkg__msg__SensorUserCommand__FIELD_NAME__calibrate, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ros2_sensor_pkg__msg__SensorUserCommand__FIELD_NAME__setepoch, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ros2_sensor_pkg__msg__SensorUserCommand__FIELD_NAME__epoch_sec, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ros2_sensor_pkg__msg__SensorUserCommand__FIELD_NAME__epoch_msec, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ros2_sensor_pkg__msg__SensorUserCommand__FIELD_NAME__diagnosis_request, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ros2_sensor_pkg__msg__SensorUserCommand__FIELD_NAME__set_frequency, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ros2_sensor_pkg__msg__SensorUserCommand__FIELD_NAME__frequency, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ros2_sensor_pkg__msg__SensorUserCommand__FIELD_NAME__raw_string, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ros2_sensor_pkg__msg__SensorUserCommand__FIELD_NAME__raw, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
ros2_sensor_pkg__msg__SensorUserCommand__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ros2_sensor_pkg__msg__SensorUserCommand__TYPE_NAME, 37, 37},
      {ros2_sensor_pkg__msg__SensorUserCommand__FIELDS, 9, 9},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "bool calibrate\n"
  "bool setepoch\n"
  "string epoch_sec\n"
  "string epoch_msec\n"
  "bool diagnosis_request\n"
  "bool set_frequency\n"
  "int8 frequency\n"
  "bool raw_string\n"
  "string raw";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ros2_sensor_pkg__msg__SensorUserCommand__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ros2_sensor_pkg__msg__SensorUserCommand__TYPE_NAME, 37, 37},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 148, 148},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ros2_sensor_pkg__msg__SensorUserCommand__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ros2_sensor_pkg__msg__SensorUserCommand__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
