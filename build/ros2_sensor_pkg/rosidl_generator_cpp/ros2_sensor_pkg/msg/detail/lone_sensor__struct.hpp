// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ros2_sensor_pkg:msg/LoneSensor.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ros2_sensor_pkg/msg/lone_sensor.hpp"


#ifndef ROS2_SENSOR_PKG__MSG__DETAIL__LONE_SENSOR__STRUCT_HPP_
#define ROS2_SENSOR_PKG__MSG__DETAIL__LONE_SENSOR__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__ros2_sensor_pkg__msg__LoneSensor __attribute__((deprecated))
#else
# define DEPRECATED__ros2_sensor_pkg__msg__LoneSensor __declspec(deprecated)
#endif

namespace ros2_sensor_pkg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LoneSensor_
{
  using Type = LoneSensor_<ContainerAllocator>;

  explicit LoneSensor_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0;
      this->fx = 0ll;
      this->fy = 0ll;
      this->fz = 0ll;
      this->abs = 0.0;
      this->yaw = 0.0;
      this->pitch = 0.0;
      this->is_present = false;
      this->is_3d = false;
    }
  }

  explicit LoneSensor_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0;
      this->fx = 0ll;
      this->fy = 0ll;
      this->fz = 0ll;
      this->abs = 0.0;
      this->yaw = 0.0;
      this->pitch = 0.0;
      this->is_present = false;
      this->is_3d = false;
    }
  }

  // field types and members
  using _id_type =
    int8_t;
  _id_type id;
  using _fx_type =
    int64_t;
  _fx_type fx;
  using _fy_type =
    int64_t;
  _fy_type fy;
  using _fz_type =
    int64_t;
  _fz_type fz;
  using _abs_type =
    double;
  _abs_type abs;
  using _yaw_type =
    double;
  _yaw_type yaw;
  using _pitch_type =
    double;
  _pitch_type pitch;
  using _is_present_type =
    bool;
  _is_present_type is_present;
  using _is_3d_type =
    bool;
  _is_3d_type is_3d;

  // setters for named parameter idiom
  Type & set__id(
    const int8_t & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__fx(
    const int64_t & _arg)
  {
    this->fx = _arg;
    return *this;
  }
  Type & set__fy(
    const int64_t & _arg)
  {
    this->fy = _arg;
    return *this;
  }
  Type & set__fz(
    const int64_t & _arg)
  {
    this->fz = _arg;
    return *this;
  }
  Type & set__abs(
    const double & _arg)
  {
    this->abs = _arg;
    return *this;
  }
  Type & set__yaw(
    const double & _arg)
  {
    this->yaw = _arg;
    return *this;
  }
  Type & set__pitch(
    const double & _arg)
  {
    this->pitch = _arg;
    return *this;
  }
  Type & set__is_present(
    const bool & _arg)
  {
    this->is_present = _arg;
    return *this;
  }
  Type & set__is_3d(
    const bool & _arg)
  {
    this->is_3d = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros2_sensor_pkg::msg::LoneSensor_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros2_sensor_pkg::msg::LoneSensor_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros2_sensor_pkg::msg::LoneSensor_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros2_sensor_pkg::msg::LoneSensor_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros2_sensor_pkg::msg::LoneSensor_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros2_sensor_pkg::msg::LoneSensor_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros2_sensor_pkg::msg::LoneSensor_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros2_sensor_pkg::msg::LoneSensor_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros2_sensor_pkg::msg::LoneSensor_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros2_sensor_pkg::msg::LoneSensor_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros2_sensor_pkg__msg__LoneSensor
    std::shared_ptr<ros2_sensor_pkg::msg::LoneSensor_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros2_sensor_pkg__msg__LoneSensor
    std::shared_ptr<ros2_sensor_pkg::msg::LoneSensor_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LoneSensor_ & other) const
  {
    if (this->id != other.id) {
      return false;
    }
    if (this->fx != other.fx) {
      return false;
    }
    if (this->fy != other.fy) {
      return false;
    }
    if (this->fz != other.fz) {
      return false;
    }
    if (this->abs != other.abs) {
      return false;
    }
    if (this->yaw != other.yaw) {
      return false;
    }
    if (this->pitch != other.pitch) {
      return false;
    }
    if (this->is_present != other.is_present) {
      return false;
    }
    if (this->is_3d != other.is_3d) {
      return false;
    }
    return true;
  }
  bool operator!=(const LoneSensor_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LoneSensor_

// alias to use template instance with default allocator
using LoneSensor =
  ros2_sensor_pkg::msg::LoneSensor_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ros2_sensor_pkg

#endif  // ROS2_SENSOR_PKG__MSG__DETAIL__LONE_SENSOR__STRUCT_HPP_
