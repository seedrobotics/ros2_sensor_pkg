// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ros2_sensor_pkg:msg/AllSensors.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ros2_sensor_pkg/msg/all_sensors.hpp"


#ifndef ROS2_SENSOR_PKG__MSG__DETAIL__ALL_SENSORS__TRAITS_HPP_
#define ROS2_SENSOR_PKG__MSG__DETAIL__ALL_SENSORS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ros2_sensor_pkg/msg/detail/all_sensors__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'data'
#include "ros2_sensor_pkg/msg/detail/lone_sensor__traits.hpp"

namespace ros2_sensor_pkg
{

namespace msg
{

inline void to_flow_style_yaml(
  const AllSensors & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: length
  {
    out << "length: ";
    rosidl_generator_traits::value_to_yaml(msg.length, out);
    out << ", ";
  }

  // member: data
  {
    if (msg.data.size() == 0) {
      out << "data: []";
    } else {
      out << "data: [";
      size_t pending_items = msg.data.size();
      for (auto item : msg.data) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AllSensors & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: length
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "length: ";
    rosidl_generator_traits::value_to_yaml(msg.length, out);
    out << "\n";
  }

  // member: data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.data.size() == 0) {
      out << "data: []\n";
    } else {
      out << "data:\n";
      for (auto item : msg.data) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AllSensors & msg, bool use_flow_style = false)
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
  const ros2_sensor_pkg::msg::AllSensors & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros2_sensor_pkg::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros2_sensor_pkg::msg::to_yaml() instead")]]
inline std::string to_yaml(const ros2_sensor_pkg::msg::AllSensors & msg)
{
  return ros2_sensor_pkg::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ros2_sensor_pkg::msg::AllSensors>()
{
  return "ros2_sensor_pkg::msg::AllSensors";
}

template<>
inline const char * name<ros2_sensor_pkg::msg::AllSensors>()
{
  return "ros2_sensor_pkg/msg/AllSensors";
}

template<>
struct has_fixed_size<ros2_sensor_pkg::msg::AllSensors>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ros2_sensor_pkg::msg::AllSensors>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ros2_sensor_pkg::msg::AllSensors>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROS2_SENSOR_PKG__MSG__DETAIL__ALL_SENSORS__TRAITS_HPP_
