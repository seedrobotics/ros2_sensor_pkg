// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ros2_sensor_pkg:msg/SensorUserCommand.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ros2_sensor_pkg/msg/sensor_user_command.hpp"


#ifndef ROS2_SENSOR_PKG__MSG__DETAIL__SENSOR_USER_COMMAND__STRUCT_HPP_
#define ROS2_SENSOR_PKG__MSG__DETAIL__SENSOR_USER_COMMAND__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__ros2_sensor_pkg__msg__SensorUserCommand __attribute__((deprecated))
#else
# define DEPRECATED__ros2_sensor_pkg__msg__SensorUserCommand __declspec(deprecated)
#endif

namespace ros2_sensor_pkg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SensorUserCommand_
{
  using Type = SensorUserCommand_<ContainerAllocator>;

  explicit SensorUserCommand_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->calibrate = false;
      this->setepoch = false;
      this->epoch_sec = "";
      this->epoch_msec = "";
      this->diagnosis_request = false;
      this->set_frequency = false;
      this->frequency = 0;
      this->raw_string = false;
      this->raw = "";
    }
  }

  explicit SensorUserCommand_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : epoch_sec(_alloc),
    epoch_msec(_alloc),
    raw(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->calibrate = false;
      this->setepoch = false;
      this->epoch_sec = "";
      this->epoch_msec = "";
      this->diagnosis_request = false;
      this->set_frequency = false;
      this->frequency = 0;
      this->raw_string = false;
      this->raw = "";
    }
  }

  // field types and members
  using _calibrate_type =
    bool;
  _calibrate_type calibrate;
  using _setepoch_type =
    bool;
  _setepoch_type setepoch;
  using _epoch_sec_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _epoch_sec_type epoch_sec;
  using _epoch_msec_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _epoch_msec_type epoch_msec;
  using _diagnosis_request_type =
    bool;
  _diagnosis_request_type diagnosis_request;
  using _set_frequency_type =
    bool;
  _set_frequency_type set_frequency;
  using _frequency_type =
    int8_t;
  _frequency_type frequency;
  using _raw_string_type =
    bool;
  _raw_string_type raw_string;
  using _raw_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _raw_type raw;

  // setters for named parameter idiom
  Type & set__calibrate(
    const bool & _arg)
  {
    this->calibrate = _arg;
    return *this;
  }
  Type & set__setepoch(
    const bool & _arg)
  {
    this->setepoch = _arg;
    return *this;
  }
  Type & set__epoch_sec(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->epoch_sec = _arg;
    return *this;
  }
  Type & set__epoch_msec(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->epoch_msec = _arg;
    return *this;
  }
  Type & set__diagnosis_request(
    const bool & _arg)
  {
    this->diagnosis_request = _arg;
    return *this;
  }
  Type & set__set_frequency(
    const bool & _arg)
  {
    this->set_frequency = _arg;
    return *this;
  }
  Type & set__frequency(
    const int8_t & _arg)
  {
    this->frequency = _arg;
    return *this;
  }
  Type & set__raw_string(
    const bool & _arg)
  {
    this->raw_string = _arg;
    return *this;
  }
  Type & set__raw(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->raw = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros2_sensor_pkg::msg::SensorUserCommand_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros2_sensor_pkg::msg::SensorUserCommand_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros2_sensor_pkg::msg::SensorUserCommand_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros2_sensor_pkg::msg::SensorUserCommand_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros2_sensor_pkg::msg::SensorUserCommand_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros2_sensor_pkg::msg::SensorUserCommand_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros2_sensor_pkg::msg::SensorUserCommand_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros2_sensor_pkg::msg::SensorUserCommand_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros2_sensor_pkg::msg::SensorUserCommand_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros2_sensor_pkg::msg::SensorUserCommand_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros2_sensor_pkg__msg__SensorUserCommand
    std::shared_ptr<ros2_sensor_pkg::msg::SensorUserCommand_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros2_sensor_pkg__msg__SensorUserCommand
    std::shared_ptr<ros2_sensor_pkg::msg::SensorUserCommand_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SensorUserCommand_ & other) const
  {
    if (this->calibrate != other.calibrate) {
      return false;
    }
    if (this->setepoch != other.setepoch) {
      return false;
    }
    if (this->epoch_sec != other.epoch_sec) {
      return false;
    }
    if (this->epoch_msec != other.epoch_msec) {
      return false;
    }
    if (this->diagnosis_request != other.diagnosis_request) {
      return false;
    }
    if (this->set_frequency != other.set_frequency) {
      return false;
    }
    if (this->frequency != other.frequency) {
      return false;
    }
    if (this->raw_string != other.raw_string) {
      return false;
    }
    if (this->raw != other.raw) {
      return false;
    }
    return true;
  }
  bool operator!=(const SensorUserCommand_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SensorUserCommand_

// alias to use template instance with default allocator
using SensorUserCommand =
  ros2_sensor_pkg::msg::SensorUserCommand_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ros2_sensor_pkg

#endif  // ROS2_SENSOR_PKG__MSG__DETAIL__SENSOR_USER_COMMAND__STRUCT_HPP_
