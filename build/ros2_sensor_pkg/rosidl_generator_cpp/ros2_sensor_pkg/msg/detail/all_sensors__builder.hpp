// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros2_sensor_pkg:msg/AllSensors.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ros2_sensor_pkg/msg/all_sensors.hpp"


#ifndef ROS2_SENSOR_PKG__MSG__DETAIL__ALL_SENSORS__BUILDER_HPP_
#define ROS2_SENSOR_PKG__MSG__DETAIL__ALL_SENSORS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros2_sensor_pkg/msg/detail/all_sensors__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros2_sensor_pkg
{

namespace msg
{

namespace builder
{

class Init_AllSensors_data
{
public:
  explicit Init_AllSensors_data(::ros2_sensor_pkg::msg::AllSensors & msg)
  : msg_(msg)
  {}
  ::ros2_sensor_pkg::msg::AllSensors data(::ros2_sensor_pkg::msg::AllSensors::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_sensor_pkg::msg::AllSensors msg_;
};

class Init_AllSensors_length
{
public:
  explicit Init_AllSensors_length(::ros2_sensor_pkg::msg::AllSensors & msg)
  : msg_(msg)
  {}
  Init_AllSensors_data length(::ros2_sensor_pkg::msg::AllSensors::_length_type arg)
  {
    msg_.length = std::move(arg);
    return Init_AllSensors_data(msg_);
  }

private:
  ::ros2_sensor_pkg::msg::AllSensors msg_;
};

class Init_AllSensors_header
{
public:
  Init_AllSensors_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AllSensors_length header(::ros2_sensor_pkg::msg::AllSensors::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_AllSensors_length(msg_);
  }

private:
  ::ros2_sensor_pkg::msg::AllSensors msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_sensor_pkg::msg::AllSensors>()
{
  return ros2_sensor_pkg::msg::builder::Init_AllSensors_header();
}

}  // namespace ros2_sensor_pkg

#endif  // ROS2_SENSOR_PKG__MSG__DETAIL__ALL_SENSORS__BUILDER_HPP_
