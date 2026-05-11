// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ros2_sensor_pkg:msg/LoneSensor.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ros2_sensor_pkg/msg/lone_sensor.hpp"


#ifndef ROS2_SENSOR_PKG__MSG__DETAIL__LONE_SENSOR__TRAITS_HPP_
#define ROS2_SENSOR_PKG__MSG__DETAIL__LONE_SENSOR__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ros2_sensor_pkg/msg/detail/lone_sensor__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace ros2_sensor_pkg
{

namespace msg
{

inline void to_flow_style_yaml(
  const LoneSensor & msg,
  std::ostream & out)
{
  out << "{";
  // member: id
  {
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << ", ";
  }

  // member: fx
  {
    out << "fx: ";
    rosidl_generator_traits::value_to_yaml(msg.fx, out);
    out << ", ";
  }

  // member: fy
  {
    out << "fy: ";
    rosidl_generator_traits::value_to_yaml(msg.fy, out);
    out << ", ";
  }

  // member: fz
  {
    out << "fz: ";
    rosidl_generator_traits::value_to_yaml(msg.fz, out);
    out << ", ";
  }

  // member: abs
  {
    out << "abs: ";
    rosidl_generator_traits::value_to_yaml(msg.abs, out);
    out << ", ";
  }

  // member: yaw
  {
    out << "yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw, out);
    out << ", ";
  }

  // member: pitch
  {
    out << "pitch: ";
    rosidl_generator_traits::value_to_yaml(msg.pitch, out);
    out << ", ";
  }

  // member: is_present
  {
    out << "is_present: ";
    rosidl_generator_traits::value_to_yaml(msg.is_present, out);
    out << ", ";
  }

  // member: is_3d
  {
    out << "is_3d: ";
    rosidl_generator_traits::value_to_yaml(msg.is_3d, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const LoneSensor & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << "\n";
  }

  // member: fx
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fx: ";
    rosidl_generator_traits::value_to_yaml(msg.fx, out);
    out << "\n";
  }

  // member: fy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fy: ";
    rosidl_generator_traits::value_to_yaml(msg.fy, out);
    out << "\n";
  }

  // member: fz
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fz: ";
    rosidl_generator_traits::value_to_yaml(msg.fz, out);
    out << "\n";
  }

  // member: abs
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "abs: ";
    rosidl_generator_traits::value_to_yaml(msg.abs, out);
    out << "\n";
  }

  // member: yaw
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw, out);
    out << "\n";
  }

  // member: pitch
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pitch: ";
    rosidl_generator_traits::value_to_yaml(msg.pitch, out);
    out << "\n";
  }

  // member: is_present
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_present: ";
    rosidl_generator_traits::value_to_yaml(msg.is_present, out);
    out << "\n";
  }

  // member: is_3d
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_3d: ";
    rosidl_generator_traits::value_to_yaml(msg.is_3d, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LoneSensor & msg, bool use_flow_style = false)
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
  const ros2_sensor_pkg::msg::LoneSensor & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros2_sensor_pkg::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros2_sensor_pkg::msg::to_yaml() instead")]]
inline std::string to_yaml(const ros2_sensor_pkg::msg::LoneSensor & msg)
{
  return ros2_sensor_pkg::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ros2_sensor_pkg::msg::LoneSensor>()
{
  return "ros2_sensor_pkg::msg::LoneSensor";
}

template<>
inline const char * name<ros2_sensor_pkg::msg::LoneSensor>()
{
  return "ros2_sensor_pkg/msg/LoneSensor";
}

template<>
struct has_fixed_size<ros2_sensor_pkg::msg::LoneSensor>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<ros2_sensor_pkg::msg::LoneSensor>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<ros2_sensor_pkg::msg::LoneSensor>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROS2_SENSOR_PKG__MSG__DETAIL__LONE_SENSOR__TRAITS_HPP_
