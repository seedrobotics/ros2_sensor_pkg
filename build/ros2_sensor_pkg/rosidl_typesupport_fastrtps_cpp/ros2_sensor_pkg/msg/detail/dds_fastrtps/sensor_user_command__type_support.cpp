// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from ros2_sensor_pkg:msg/SensorUserCommand.idl
// generated code does not contain a copyright notice
#include "ros2_sensor_pkg/msg/detail/sensor_user_command__rosidl_typesupport_fastrtps_cpp.hpp"
#include "ros2_sensor_pkg/msg/detail/sensor_user_command__functions.h"
#include "ros2_sensor_pkg/msg/detail/sensor_user_command__struct.hpp"

#include <cstddef>
#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace ros2_sensor_pkg
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{


bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ros2_sensor_pkg
cdr_serialize(
  const ros2_sensor_pkg::msg::SensorUserCommand & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: calibrate
  cdr << (ros_message.calibrate ? true : false);

  // Member: setepoch
  cdr << (ros_message.setepoch ? true : false);

  // Member: epoch_sec
  cdr << ros_message.epoch_sec;

  // Member: epoch_msec
  cdr << ros_message.epoch_msec;

  // Member: diagnosis_request
  cdr << (ros_message.diagnosis_request ? true : false);

  // Member: set_frequency
  cdr << (ros_message.set_frequency ? true : false);

  // Member: frequency
  cdr << ros_message.frequency;

  // Member: raw_string
  cdr << (ros_message.raw_string ? true : false);

  // Member: raw
  cdr << ros_message.raw;

  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ros2_sensor_pkg
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  ros2_sensor_pkg::msg::SensorUserCommand & ros_message)
{
  // Member: calibrate
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.calibrate = tmp ? true : false;
  }

  // Member: setepoch
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.setepoch = tmp ? true : false;
  }

  // Member: epoch_sec
  cdr >> ros_message.epoch_sec;

  // Member: epoch_msec
  cdr >> ros_message.epoch_msec;

  // Member: diagnosis_request
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.diagnosis_request = tmp ? true : false;
  }

  // Member: set_frequency
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.set_frequency = tmp ? true : false;
  }

  // Member: frequency
  cdr >> ros_message.frequency;

  // Member: raw_string
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.raw_string = tmp ? true : false;
  }

  // Member: raw
  cdr >> ros_message.raw;

  return true;
}  // NOLINT(readability/fn_size)


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ros2_sensor_pkg
get_serialized_size(
  const ros2_sensor_pkg::msg::SensorUserCommand & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: calibrate
  {
    size_t item_size = sizeof(ros_message.calibrate);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: setepoch
  {
    size_t item_size = sizeof(ros_message.setepoch);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: epoch_sec
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.epoch_sec.size() + 1);

  // Member: epoch_msec
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.epoch_msec.size() + 1);

  // Member: diagnosis_request
  {
    size_t item_size = sizeof(ros_message.diagnosis_request);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: set_frequency
  {
    size_t item_size = sizeof(ros_message.set_frequency);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: frequency
  {
    size_t item_size = sizeof(ros_message.frequency);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: raw_string
  {
    size_t item_size = sizeof(ros_message.raw_string);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: raw
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.raw.size() + 1);

  return current_alignment - initial_alignment;
}


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ros2_sensor_pkg
max_serialized_size_SensorUserCommand(
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

  // Member: calibrate
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: setepoch
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: epoch_sec
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
  // Member: epoch_msec
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
  // Member: diagnosis_request
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: set_frequency
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: frequency
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: raw_string
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: raw
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
    using DataType = ros2_sensor_pkg::msg::SensorUserCommand;
    is_plain =
      (
      offsetof(DataType, raw) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ros2_sensor_pkg
cdr_serialize_key(
  const ros2_sensor_pkg::msg::SensorUserCommand & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: calibrate
  cdr << (ros_message.calibrate ? true : false);

  // Member: setepoch
  cdr << (ros_message.setepoch ? true : false);

  // Member: epoch_sec
  cdr << ros_message.epoch_sec;

  // Member: epoch_msec
  cdr << ros_message.epoch_msec;

  // Member: diagnosis_request
  cdr << (ros_message.diagnosis_request ? true : false);

  // Member: set_frequency
  cdr << (ros_message.set_frequency ? true : false);

  // Member: frequency
  cdr << ros_message.frequency;

  // Member: raw_string
  cdr << (ros_message.raw_string ? true : false);

  // Member: raw
  cdr << ros_message.raw;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ros2_sensor_pkg
get_serialized_size_key(
  const ros2_sensor_pkg::msg::SensorUserCommand & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: calibrate
  {
    size_t item_size = sizeof(ros_message.calibrate);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: setepoch
  {
    size_t item_size = sizeof(ros_message.setepoch);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: epoch_sec
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.epoch_sec.size() + 1);

  // Member: epoch_msec
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.epoch_msec.size() + 1);

  // Member: diagnosis_request
  {
    size_t item_size = sizeof(ros_message.diagnosis_request);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: set_frequency
  {
    size_t item_size = sizeof(ros_message.set_frequency);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: frequency
  {
    size_t item_size = sizeof(ros_message.frequency);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: raw_string
  {
    size_t item_size = sizeof(ros_message.raw_string);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: raw
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.raw.size() + 1);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ros2_sensor_pkg
max_serialized_size_key_SensorUserCommand(
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

  // Member: calibrate
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: setepoch
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: epoch_sec
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

  // Member: epoch_msec
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

  // Member: diagnosis_request
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: set_frequency
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: frequency
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: raw_string
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: raw
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
    using DataType = ros2_sensor_pkg::msg::SensorUserCommand;
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
  auto typed_message =
    static_cast<const ros2_sensor_pkg::msg::SensorUserCommand *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _SensorUserCommand__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<ros2_sensor_pkg::msg::SensorUserCommand *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _SensorUserCommand__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const ros2_sensor_pkg::msg::SensorUserCommand *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _SensorUserCommand__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_SensorUserCommand(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _SensorUserCommand__callbacks = {
  "ros2_sensor_pkg::msg",
  "SensorUserCommand",
  _SensorUserCommand__cdr_serialize,
  _SensorUserCommand__cdr_deserialize,
  _SensorUserCommand__get_serialized_size,
  _SensorUserCommand__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _SensorUserCommand__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_SensorUserCommand__callbacks,
  get_message_typesupport_handle_function,
  &ros2_sensor_pkg__msg__SensorUserCommand__get_type_hash,
  &ros2_sensor_pkg__msg__SensorUserCommand__get_type_description,
  &ros2_sensor_pkg__msg__SensorUserCommand__get_type_description_sources,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace ros2_sensor_pkg

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_ros2_sensor_pkg
const rosidl_message_type_support_t *
get_message_type_support_handle<ros2_sensor_pkg::msg::SensorUserCommand>()
{
  return &ros2_sensor_pkg::msg::typesupport_fastrtps_cpp::_SensorUserCommand__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ros2_sensor_pkg, msg, SensorUserCommand)() {
  return &ros2_sensor_pkg::msg::typesupport_fastrtps_cpp::_SensorUserCommand__handle;
}

#ifdef __cplusplus
}
#endif
