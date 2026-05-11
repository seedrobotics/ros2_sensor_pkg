// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ros2_sensor_pkg:msg/AllSensors.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ros2_sensor_pkg/msg/all_sensors.hpp"


#ifndef ROS2_SENSOR_PKG__MSG__DETAIL__ALL_SENSORS__STRUCT_HPP_
#define ROS2_SENSOR_PKG__MSG__DETAIL__ALL_SENSORS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"
// Member 'data'
#include "ros2_sensor_pkg/msg/detail/lone_sensor__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ros2_sensor_pkg__msg__AllSensors __attribute__((deprecated))
#else
# define DEPRECATED__ros2_sensor_pkg__msg__AllSensors __declspec(deprecated)
#endif

namespace ros2_sensor_pkg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct AllSensors_
{
  using Type = AllSensors_<ContainerAllocator>;

  explicit AllSensors_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->length = 0;
    }
  }

  explicit AllSensors_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->length = 0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _length_type =
    int8_t;
  _length_type length;
  using _data_type =
    std::vector<ros2_sensor_pkg::msg::LoneSensor_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ros2_sensor_pkg::msg::LoneSensor_<ContainerAllocator>>>;
  _data_type data;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__length(
    const int8_t & _arg)
  {
    this->length = _arg;
    return *this;
  }
  Type & set__data(
    const std::vector<ros2_sensor_pkg::msg::LoneSensor_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ros2_sensor_pkg::msg::LoneSensor_<ContainerAllocator>>> & _arg)
  {
    this->data = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros2_sensor_pkg::msg::AllSensors_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros2_sensor_pkg::msg::AllSensors_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros2_sensor_pkg::msg::AllSensors_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros2_sensor_pkg::msg::AllSensors_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros2_sensor_pkg::msg::AllSensors_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros2_sensor_pkg::msg::AllSensors_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros2_sensor_pkg::msg::AllSensors_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros2_sensor_pkg::msg::AllSensors_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros2_sensor_pkg::msg::AllSensors_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros2_sensor_pkg::msg::AllSensors_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros2_sensor_pkg__msg__AllSensors
    std::shared_ptr<ros2_sensor_pkg::msg::AllSensors_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros2_sensor_pkg__msg__AllSensors
    std::shared_ptr<ros2_sensor_pkg::msg::AllSensors_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AllSensors_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->length != other.length) {
      return false;
    }
    if (this->data != other.data) {
      return false;
    }
    return true;
  }
  bool operator!=(const AllSensors_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AllSensors_

// alias to use template instance with default allocator
using AllSensors =
  ros2_sensor_pkg::msg::AllSensors_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ros2_sensor_pkg

#endif  // ROS2_SENSOR_PKG__MSG__DETAIL__ALL_SENSORS__STRUCT_HPP_
