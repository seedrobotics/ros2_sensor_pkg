// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros2_sensor_pkg:msg/LoneSensor.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ros2_sensor_pkg/msg/lone_sensor.hpp"


#ifndef ROS2_SENSOR_PKG__MSG__DETAIL__LONE_SENSOR__BUILDER_HPP_
#define ROS2_SENSOR_PKG__MSG__DETAIL__LONE_SENSOR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros2_sensor_pkg/msg/detail/lone_sensor__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros2_sensor_pkg
{

namespace msg
{

namespace builder
{

class Init_LoneSensor_is_3d
{
public:
  explicit Init_LoneSensor_is_3d(::ros2_sensor_pkg::msg::LoneSensor & msg)
  : msg_(msg)
  {}
  ::ros2_sensor_pkg::msg::LoneSensor is_3d(::ros2_sensor_pkg::msg::LoneSensor::_is_3d_type arg)
  {
    msg_.is_3d = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_sensor_pkg::msg::LoneSensor msg_;
};

class Init_LoneSensor_is_present
{
public:
  explicit Init_LoneSensor_is_present(::ros2_sensor_pkg::msg::LoneSensor & msg)
  : msg_(msg)
  {}
  Init_LoneSensor_is_3d is_present(::ros2_sensor_pkg::msg::LoneSensor::_is_present_type arg)
  {
    msg_.is_present = std::move(arg);
    return Init_LoneSensor_is_3d(msg_);
  }

private:
  ::ros2_sensor_pkg::msg::LoneSensor msg_;
};

class Init_LoneSensor_pitch
{
public:
  explicit Init_LoneSensor_pitch(::ros2_sensor_pkg::msg::LoneSensor & msg)
  : msg_(msg)
  {}
  Init_LoneSensor_is_present pitch(::ros2_sensor_pkg::msg::LoneSensor::_pitch_type arg)
  {
    msg_.pitch = std::move(arg);
    return Init_LoneSensor_is_present(msg_);
  }

private:
  ::ros2_sensor_pkg::msg::LoneSensor msg_;
};

class Init_LoneSensor_yaw
{
public:
  explicit Init_LoneSensor_yaw(::ros2_sensor_pkg::msg::LoneSensor & msg)
  : msg_(msg)
  {}
  Init_LoneSensor_pitch yaw(::ros2_sensor_pkg::msg::LoneSensor::_yaw_type arg)
  {
    msg_.yaw = std::move(arg);
    return Init_LoneSensor_pitch(msg_);
  }

private:
  ::ros2_sensor_pkg::msg::LoneSensor msg_;
};

class Init_LoneSensor_abs
{
public:
  explicit Init_LoneSensor_abs(::ros2_sensor_pkg::msg::LoneSensor & msg)
  : msg_(msg)
  {}
  Init_LoneSensor_yaw abs(::ros2_sensor_pkg::msg::LoneSensor::_abs_type arg)
  {
    msg_.abs = std::move(arg);
    return Init_LoneSensor_yaw(msg_);
  }

private:
  ::ros2_sensor_pkg::msg::LoneSensor msg_;
};

class Init_LoneSensor_fz
{
public:
  explicit Init_LoneSensor_fz(::ros2_sensor_pkg::msg::LoneSensor & msg)
  : msg_(msg)
  {}
  Init_LoneSensor_abs fz(::ros2_sensor_pkg::msg::LoneSensor::_fz_type arg)
  {
    msg_.fz = std::move(arg);
    return Init_LoneSensor_abs(msg_);
  }

private:
  ::ros2_sensor_pkg::msg::LoneSensor msg_;
};

class Init_LoneSensor_fy
{
public:
  explicit Init_LoneSensor_fy(::ros2_sensor_pkg::msg::LoneSensor & msg)
  : msg_(msg)
  {}
  Init_LoneSensor_fz fy(::ros2_sensor_pkg::msg::LoneSensor::_fy_type arg)
  {
    msg_.fy = std::move(arg);
    return Init_LoneSensor_fz(msg_);
  }

private:
  ::ros2_sensor_pkg::msg::LoneSensor msg_;
};

class Init_LoneSensor_fx
{
public:
  explicit Init_LoneSensor_fx(::ros2_sensor_pkg::msg::LoneSensor & msg)
  : msg_(msg)
  {}
  Init_LoneSensor_fy fx(::ros2_sensor_pkg::msg::LoneSensor::_fx_type arg)
  {
    msg_.fx = std::move(arg);
    return Init_LoneSensor_fy(msg_);
  }

private:
  ::ros2_sensor_pkg::msg::LoneSensor msg_;
};

class Init_LoneSensor_id
{
public:
  Init_LoneSensor_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LoneSensor_fx id(::ros2_sensor_pkg::msg::LoneSensor::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_LoneSensor_fx(msg_);
  }

private:
  ::ros2_sensor_pkg::msg::LoneSensor msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_sensor_pkg::msg::LoneSensor>()
{
  return ros2_sensor_pkg::msg::builder::Init_LoneSensor_id();
}

}  // namespace ros2_sensor_pkg

#endif  // ROS2_SENSOR_PKG__MSG__DETAIL__LONE_SENSOR__BUILDER_HPP_
