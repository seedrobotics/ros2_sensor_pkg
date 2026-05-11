// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ros2_sensor_pkg:msg/LoneSensor.idl
// generated code does not contain a copyright notice

#include "ros2_sensor_pkg/msg/detail/lone_sensor__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ros2_sensor_pkg
const rosidl_type_hash_t *
ros2_sensor_pkg__msg__LoneSensor__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xf7, 0xb2, 0x29, 0x83, 0x13, 0x06, 0x59, 0xe9,
      0xba, 0xf1, 0x39, 0x16, 0xf5, 0xa5, 0x65, 0x99,
      0xa1, 0x3d, 0xd7, 0xbb, 0x27, 0xaa, 0x60, 0x6f,
      0x5d, 0x0d, 0xfd, 0x05, 0x4d, 0x36, 0x6c, 0xf1,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char ros2_sensor_pkg__msg__LoneSensor__TYPE_NAME[] = "ros2_sensor_pkg/msg/LoneSensor";

// Define type names, field names, and default values
static char ros2_sensor_pkg__msg__LoneSensor__FIELD_NAME__id[] = "id";
static char ros2_sensor_pkg__msg__LoneSensor__FIELD_NAME__fx[] = "fx";
static char ros2_sensor_pkg__msg__LoneSensor__FIELD_NAME__fy[] = "fy";
static char ros2_sensor_pkg__msg__LoneSensor__FIELD_NAME__fz[] = "fz";
static char ros2_sensor_pkg__msg__LoneSensor__FIELD_NAME__abs[] = "abs";
static char ros2_sensor_pkg__msg__LoneSensor__FIELD_NAME__yaw[] = "yaw";
static char ros2_sensor_pkg__msg__LoneSensor__FIELD_NAME__pitch[] = "pitch";
static char ros2_sensor_pkg__msg__LoneSensor__FIELD_NAME__is_present[] = "is_present";
static char ros2_sensor_pkg__msg__LoneSensor__FIELD_NAME__is_3d[] = "is_3d";

static rosidl_runtime_c__type_description__Field ros2_sensor_pkg__msg__LoneSensor__FIELDS[] = {
  {
    {ros2_sensor_pkg__msg__LoneSensor__FIELD_NAME__id, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ros2_sensor_pkg__msg__LoneSensor__FIELD_NAME__fx, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ros2_sensor_pkg__msg__LoneSensor__FIELD_NAME__fy, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ros2_sensor_pkg__msg__LoneSensor__FIELD_NAME__fz, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ros2_sensor_pkg__msg__LoneSensor__FIELD_NAME__abs, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ros2_sensor_pkg__msg__LoneSensor__FIELD_NAME__yaw, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ros2_sensor_pkg__msg__LoneSensor__FIELD_NAME__pitch, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ros2_sensor_pkg__msg__LoneSensor__FIELD_NAME__is_present, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ros2_sensor_pkg__msg__LoneSensor__FIELD_NAME__is_3d, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
ros2_sensor_pkg__msg__LoneSensor__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ros2_sensor_pkg__msg__LoneSensor__TYPE_NAME, 30, 30},
      {ros2_sensor_pkg__msg__LoneSensor__FIELDS, 9, 9},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "int8 id\n"
  "int64 fx\n"
  "int64 fy\n"
  "int64 fz\n"
  "float64 abs\n"
  "float64 yaw\n"
  "float64 pitch\n"
  "bool is_present\n"
  "bool is_3d";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ros2_sensor_pkg__msg__LoneSensor__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ros2_sensor_pkg__msg__LoneSensor__TYPE_NAME, 30, 30},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 100, 100},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ros2_sensor_pkg__msg__LoneSensor__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ros2_sensor_pkg__msg__LoneSensor__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
