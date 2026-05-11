// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros2_sensor_pkg:msg/SensorUserCommand.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ros2_sensor_pkg/msg/sensor_user_command.hpp"


#ifndef ROS2_SENSOR_PKG__MSG__DETAIL__SENSOR_USER_COMMAND__BUILDER_HPP_
#define ROS2_SENSOR_PKG__MSG__DETAIL__SENSOR_USER_COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros2_sensor_pkg/msg/detail/sensor_user_command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros2_sensor_pkg
{

namespace msg
{

namespace builder
{

class Init_SensorUserCommand_raw
{
public:
  explicit Init_SensorUserCommand_raw(::ros2_sensor_pkg::msg::SensorUserCommand & msg)
  : msg_(msg)
  {}
  ::ros2_sensor_pkg::msg::SensorUserCommand raw(::ros2_sensor_pkg::msg::SensorUserCommand::_raw_type arg)
  {
    msg_.raw = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_sensor_pkg::msg::SensorUserCommand msg_;
};

class Init_SensorUserCommand_raw_string
{
public:
  explicit Init_SensorUserCommand_raw_string(::ros2_sensor_pkg::msg::SensorUserCommand & msg)
  : msg_(msg)
  {}
  Init_SensorUserCommand_raw raw_string(::ros2_sensor_pkg::msg::SensorUserCommand::_raw_string_type arg)
  {
    msg_.raw_string = std::move(arg);
    return Init_SensorUserCommand_raw(msg_);
  }

private:
  ::ros2_sensor_pkg::msg::SensorUserCommand msg_;
};

class Init_SensorUserCommand_frequency
{
public:
  explicit Init_SensorUserCommand_frequency(::ros2_sensor_pkg::msg::SensorUserCommand & msg)
  : msg_(msg)
  {}
  Init_SensorUserCommand_raw_string frequency(::ros2_sensor_pkg::msg::SensorUserCommand::_frequency_type arg)
  {
    msg_.frequency = std::move(arg);
    return Init_SensorUserCommand_raw_string(msg_);
  }

private:
  ::ros2_sensor_pkg::msg::SensorUserCommand msg_;
};

class Init_SensorUserCommand_set_frequency
{
public:
  explicit Init_SensorUserCommand_set_frequency(::ros2_sensor_pkg::msg::SensorUserCommand & msg)
  : msg_(msg)
  {}
  Init_SensorUserCommand_frequency set_frequency(::ros2_sensor_pkg::msg::SensorUserCommand::_set_frequency_type arg)
  {
    msg_.set_frequency = std::move(arg);
    return Init_SensorUserCommand_frequency(msg_);
  }

private:
  ::ros2_sensor_pkg::msg::SensorUserCommand msg_;
};

class Init_SensorUserCommand_diagnosis_request
{
public:
  explicit Init_SensorUserCommand_diagnosis_request(::ros2_sensor_pkg::msg::SensorUserCommand & msg)
  : msg_(msg)
  {}
  Init_SensorUserCommand_set_frequency diagnosis_request(::ros2_sensor_pkg::msg::SensorUserCommand::_diagnosis_request_type arg)
  {
    msg_.diagnosis_request = std::move(arg);
    return Init_SensorUserCommand_set_frequency(msg_);
  }

private:
  ::ros2_sensor_pkg::msg::SensorUserCommand msg_;
};

class Init_SensorUserCommand_epoch_msec
{
public:
  explicit Init_SensorUserCommand_epoch_msec(::ros2_sensor_pkg::msg::SensorUserCommand & msg)
  : msg_(msg)
  {}
  Init_SensorUserCommand_diagnosis_request epoch_msec(::ros2_sensor_pkg::msg::SensorUserCommand::_epoch_msec_type arg)
  {
    msg_.epoch_msec = std::move(arg);
    return Init_SensorUserCommand_diagnosis_request(msg_);
  }

private:
  ::ros2_sensor_pkg::msg::SensorUserCommand msg_;
};

class Init_SensorUserCommand_epoch_sec
{
public:
  explicit Init_SensorUserCommand_epoch_sec(::ros2_sensor_pkg::msg::SensorUserCommand & msg)
  : msg_(msg)
  {}
  Init_SensorUserCommand_epoch_msec epoch_sec(::ros2_sensor_pkg::msg::SensorUserCommand::_epoch_sec_type arg)
  {
    msg_.epoch_sec = std::move(arg);
    return Init_SensorUserCommand_epoch_msec(msg_);
  }

private:
  ::ros2_sensor_pkg::msg::SensorUserCommand msg_;
};

class Init_SensorUserCommand_setepoch
{
public:
  explicit Init_SensorUserCommand_setepoch(::ros2_sensor_pkg::msg::SensorUserCommand & msg)
  : msg_(msg)
  {}
  Init_SensorUserCommand_epoch_sec setepoch(::ros2_sensor_pkg::msg::SensorUserCommand::_setepoch_type arg)
  {
    msg_.setepoch = std::move(arg);
    return Init_SensorUserCommand_epoch_sec(msg_);
  }

private:
  ::ros2_sensor_pkg::msg::SensorUserCommand msg_;
};

class Init_SensorUserCommand_calibrate
{
public:
  Init_SensorUserCommand_calibrate()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SensorUserCommand_setepoch calibrate(::ros2_sensor_pkg::msg::SensorUserCommand::_calibrate_type arg)
  {
    msg_.calibrate = std::move(arg);
    return Init_SensorUserCommand_setepoch(msg_);
  }

private:
  ::ros2_sensor_pkg::msg::SensorUserCommand msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_sensor_pkg::msg::SensorUserCommand>()
{
  return ros2_sensor_pkg::msg::builder::Init_SensorUserCommand_calibrate();
}

}  // namespace ros2_sensor_pkg

#endif  // ROS2_SENSOR_PKG__MSG__DETAIL__SENSOR_USER_COMMAND__BUILDER_HPP_
