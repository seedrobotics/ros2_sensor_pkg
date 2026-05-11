// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ros2_sensor_pkg:msg/SensorUserCommand.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ros2_sensor_pkg/msg/sensor_user_command.hpp"


#ifndef ROS2_SENSOR_PKG__MSG__DETAIL__SENSOR_USER_COMMAND__TRAITS_HPP_
#define ROS2_SENSOR_PKG__MSG__DETAIL__SENSOR_USER_COMMAND__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ros2_sensor_pkg/msg/detail/sensor_user_command__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace ros2_sensor_pkg
{

namespace msg
{

inline void to_flow_style_yaml(
  const SensorUserCommand & msg,
  std::ostream & out)
{
  out << "{";
  // member: calibrate
  {
    out << "calibrate: ";
    rosidl_generator_traits::value_to_yaml(msg.calibrate, out);
    out << ", ";
  }

  // member: setepoch
  {
    out << "setepoch: ";
    rosidl_generator_traits::value_to_yaml(msg.setepoch, out);
    out << ", ";
  }

  // member: epoch_sec
  {
    out << "epoch_sec: ";
    rosidl_generator_traits::value_to_yaml(msg.epoch_sec, out);
    out << ", ";
  }

  // member: epoch_msec
  {
    out << "epoch_msec: ";
    rosidl_generator_traits::value_to_yaml(msg.epoch_msec, out);
    out << ", ";
  }

  // member: diagnosis_request
  {
    out << "diagnosis_request: ";
    rosidl_generator_traits::value_to_yaml(msg.diagnosis_request, out);
    out << ", ";
  }

  // member: set_frequency
  {
    out << "set_frequency: ";
    rosidl_generator_traits::value_to_yaml(msg.set_frequency, out);
    out << ", ";
  }

  // member: frequency
  {
    out << "frequency: ";
    rosidl_generator_traits::value_to_yaml(msg.frequency, out);
    out << ", ";
  }

  // member: raw_string
  {
    out << "raw_string: ";
    rosidl_generator_traits::value_to_yaml(msg.raw_string, out);
    out << ", ";
  }

  // member: raw
  {
    out << "raw: ";
    rosidl_generator_traits::value_to_yaml(msg.raw, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SensorUserCommand & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: calibrate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "calibrate: ";
    rosidl_generator_traits::value_to_yaml(msg.calibrate, out);
    out << "\n";
  }

  // member: setepoch
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "setepoch: ";
    rosidl_generator_traits::value_to_yaml(msg.setepoch, out);
    out << "\n";
  }

  // member: epoch_sec
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "epoch_sec: ";
    rosidl_generator_traits::value_to_yaml(msg.epoch_sec, out);
    out << "\n";
  }

  // member: epoch_msec
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "epoch_msec: ";
    rosidl_generator_traits::value_to_yaml(msg.epoch_msec, out);
    out << "\n";
  }

  // member: diagnosis_request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "diagnosis_request: ";
    rosidl_generator_traits::value_to_yaml(msg.diagnosis_request, out);
    out << "\n";
  }

  // member: set_frequency
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "set_frequency: ";
    rosidl_generator_traits::value_to_yaml(msg.set_frequency, out);
    out << "\n";
  }

  // member: frequency
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "frequency: ";
    rosidl_generator_traits::value_to_yaml(msg.frequency, out);
    out << "\n";
  }

  // member: raw_string
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "raw_string: ";
    rosidl_generator_traits::value_to_yaml(msg.raw_string, out);
    out << "\n";
  }

  // member: raw
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "raw: ";
    rosidl_generator_traits::value_to_yaml(msg.raw, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SensorUserCommand & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace ros2_sensor_pkg

namespace rosidl_generator_traits
{

[[deprecated("use ros2_sensor_pkg::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ros2_sensor_pkg::msg::SensorUserCommand & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros2_sensor_pkg::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros2_sensor_pkg::msg::to_yaml() instead")]]
inline std::string to_yaml(const ros2_sensor_pkg::msg::SensorUserCommand & msg)
{
  return ros2_sensor_pkg::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ros2_sensor_pkg::msg::SensorUserCommand>()
{
  return "ros2_sensor_pkg::msg::SensorUserCommand";
}

template<>
inline const char * name<ros2_sensor_pkg::msg::SensorUserCommand>()
{
  return "ros2_sensor_pkg/msg/SensorUserCommand";
}

template<>
struct has_fixed_size<ros2_sensor_pkg::msg::SensorUserCommand>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ros2_sensor_pkg::msg::SensorUserCommand>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ros2_sensor_pkg::msg::SensorUserCommand>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROS2_SENSOR_PKG__MSG__DETAIL__SENSOR_USER_COMMAND__TRAITS_HPP_
