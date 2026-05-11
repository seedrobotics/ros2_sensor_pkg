// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from ros2_sensor_pkg:msg/SensorUserCommand.idl
// generated code does not contain a copyright notice
#include "ros2_sensor_pkg/msg/detail/sensor_user_command__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "ros2_sensor_pkg/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "ros2_sensor_pkg/msg/detail/sensor_user_command__struct.h"
#include "ros2_sensor_pkg/msg/detail/sensor_user_command__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/string.h"  // epoch_msec, epoch_sec, raw
#include "rosidl_runtime_c/string_functions.h"  // epoch_msec, epoch_sec, raw

// forward declare type support functions


using _SensorUserCommand__ros_msg_type = ros2_sensor_pkg__msg__SensorUserCommand;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ros2_sensor_pkg
bool cdr_serialize_ros2_sensor_pkg__msg__SensorUserCommand(
  const ros2_sensor_pkg__msg__SensorUserCommand * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: calibrate
  {
    cdr << (ros_message->calibrate ? true : false);
  }

  // Field name: setepoch
  {
    cdr << (ros_message->setepoch ? true : false);
  }

  // Field name: epoch_sec
  {
    const rosidl_runtime_c__String * str = &ros_message->epoch_sec;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: epoch_msec
  {
    const rosidl_runtime_c__String * str = &ros_message->epoch_msec;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: diagnosis_request
  {
    cdr << (ros_message->diagnosis_request ? true : false);
  }

  // Field name: set_frequency
  {
    cdr << (ros_message->set_frequency ? true : false);
  }

  // Field name: frequency
  {
    cdr << ros_message->frequency;
  }

  // Field name: raw_string
  {
    cdr << (ros_message->raw_string ? true : false);
  }

  // Field name: raw
  {
    const rosidl_runtime_c__String * str = &ros_message->raw;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ros2_sensor_pkg
bool cdr_deserialize_ros2_sensor_pkg__msg__SensorUserCommand(
  eprosima::fastcdr::Cdr & cdr,
  ros2_sensor_pkg__msg__SensorUserCommand * ros_message)
{
  // Field name: calibrate
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->calibrate = tmp ? true : false;
  }

  // Field name: setepoch
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->setepoch = tmp ? true : false;
  }

  // Field name: epoch_sec
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->epoch_sec.data) {
      rosidl_runtime_c__String__init(&ros_message->epoch_sec);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->epoch_sec,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'epoch_sec'\n");
      return false;
    }
  }

  // Field name: epoch_msec
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->epoch_msec.data) {
      rosidl_runtime_c__String__init(&ros_message->epoch_msec);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->epoch_msec,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'epoch_msec'\n");
      return false;
    }
  }

  // Field name: diagnosis_request
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->diagnosis_request = tmp ? true : false;
  }

  // Field name: set_frequency
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->set_frequency = tmp ? true : false;
  }

  // Field name: frequency
  {
    cdr >> ros_message->frequency;
  }

  // Field name: raw_string
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->raw_string = tmp ? true : false;
  }

  // Field name: raw
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->raw.data) {
      rosidl_runtime_c__String__init(&ros_message->raw);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->raw,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'raw'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ros2_sensor_pkg
size_t get_serialized_size_ros2_sensor_pkg__msg__SensorUserCommand(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SensorUserCommand__ros_msg_type * ros_message = static_cast<const _SensorUserCommand__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: calibrate
  {
    size_t item_size = sizeof(ros_message->calibrate);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: setepoch
  {
    size_t item_size = sizeof(ros_message->setepoch);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: epoch_sec
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->epoch_sec.size + 1);

  // Field name: epoch_msec
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->epoch_msec.size + 1);

  // Field name: diagnosis_request
  {
    size_t item_size = sizeof(ros_message->diagnosis_request);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: set_frequency
  {
    size_t item_size = sizeof(ros_message->set_frequency);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: frequency
  {
    size_t item_size = sizeof(ros_message->frequency);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: raw_string
  {
    size_t item_size = sizeof(ros_message->raw_string);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: raw
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->raw.size + 1);

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ros2_sensor_pkg
size_t max_serialized_size_ros2_sensor_pkg__msg__SensorUserCommand(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Field name: calibrate
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: setepoch
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: epoch_sec
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Field name: epoch_msec
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Field name: diagnosis_request
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: set_frequency
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: frequency
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: raw_string
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: raw
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = ros2_sensor_pkg__msg__SensorUserCommand;
    is_plain =
      (
      offsetof(DataType, raw) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ros2_sensor_pkg
bool cdr_serialize_key_ros2_sensor_pkg__msg__SensorUserCommand(
  const ros2_sensor_pkg__msg__SensorUserCommand * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: calibrate
  {
    cdr << (ros_message->calibrate ? true : false);
  }

  // Field name: setepoch
  {
    cdr << (ros_message->setepoch ? true : false);
  }

  // Field name: epoch_sec
  {
    const rosidl_runtime_c__String * str = &ros_message->epoch_sec;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: epoch_msec
  {
    const rosidl_runtime_c__String * str = &ros_message->epoch_msec;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: diagnosis_request
  {
    cdr << (ros_message->diagnosis_request ? true : false);
  }

  // Field name: set_frequency
  {
    cdr << (ros_message->set_frequency ? true : false);
  }

  // Field name: frequency
  {
    cdr << ros_message->frequency;
  }

  // Field name: raw_string
  {
    cdr << (ros_message->raw_string ? true : false);
  }

  // Field name: raw
  {
    const rosidl_runtime_c__String * str = &ros_message->raw;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ros2_sensor_pkg
size_t get_serialized_size_key_ros2_sensor_pkg__msg__SensorUserCommand(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SensorUserCommand__ros_msg_type * ros_message = static_cast<const _SensorUserCommand__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: calibrate
  {
    size_t item_size = sizeof(ros_message->calibrate);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: setepoch
  {
    size_t item_size = sizeof(ros_message->setepoch);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: epoch_sec
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->epoch_sec.size + 1);

  // Field name: epoch_msec
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->epoch_msec.size + 1);

  // Field name: diagnosis_request
  {
    size_t item_size = sizeof(ros_message->diagnosis_request);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: set_frequency
  {
    size_t item_size = sizeof(ros_message->set_frequency);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: frequency
  {
    size_t item_size = sizeof(ros_message->frequency);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: raw_string
  {
    size_t item_size = sizeof(ros_message->raw_string);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: raw
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->raw.size + 1);

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ros2_sensor_pkg
size_t max_serialized_size_key_ros2_sensor_pkg__msg__SensorUserCommand(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;
  // Field name: calibrate
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: setepoch
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: epoch_sec
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Field name: epoch_msec
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Field name: diagnosis_request
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: set_frequency
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: frequency
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: raw_string
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: raw
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = ros2_sensor_pkg__msg__SensorUserCommand;
    is_plain =
      (
      offsetof(DataType, raw) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _SensorUserCommand__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const ros2_sensor_pkg__msg__SensorUserCommand * ros_message = static_cast<const ros2_sensor_pkg__msg__SensorUserCommand *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_ros2_sensor_pkg__msg__SensorUserCommand(ros_message, cdr);
}

static bool _SensorUserCommand__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  ros2_sensor_pkg__msg__SensorUserCommand * ros_message = static_cast<ros2_sensor_pkg__msg__SensorUserCommand *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_ros2_sensor_pkg__msg__SensorUserCommand(cdr, ros_message);
}

static uint32_t _SensorUserCommand__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_ros2_sensor_pkg__msg__SensorUserCommand(
      untyped_ros_message, 0));
}

static size_t _SensorUserCommand__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_ros2_sensor_pkg__msg__SensorUserCommand(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_SensorUserCommand = {
  "ros2_sensor_pkg::msg",
  "SensorUserCommand",
  _SensorUserCommand__cdr_serialize,
  _SensorUserCommand__cdr_deserialize,
  _SensorUserCommand__get_serialized_size,
  _SensorUserCommand__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _SensorUserCommand__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SensorUserCommand,
  get_message_typesupport_handle_function,
  &ros2_sensor_pkg__msg__SensorUserCommand__get_type_hash,
  &ros2_sensor_pkg__msg__SensorUserCommand__get_type_description,
  &ros2_sensor_pkg__msg__SensorUserCommand__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ros2_sensor_pkg, msg, SensorUserCommand)() {
  return &_SensorUserCommand__type_support;
}

#if defined(__cplusplus)
}
#endif
