// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ros2_sensor_pkg:msg/SensorUserCommand.idl
// generated code does not contain a copyright notice
#include "ros2_sensor_pkg/msg/detail/sensor_user_command__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `epoch_sec`
// Member `epoch_msec`
// Member `raw`
#include "rosidl_runtime_c/string_functions.h"

bool
ros2_sensor_pkg__msg__SensorUserCommand__init(ros2_sensor_pkg__msg__SensorUserCommand * msg)
{
  if (!msg) {
    return false;
  }
  // calibrate
  // setepoch
  // epoch_sec
  if (!rosidl_runtime_c__String__init(&msg->epoch_sec)) {
    ros2_sensor_pkg__msg__SensorUserCommand__fini(msg);
    return false;
  }
  // epoch_msec
  if (!rosidl_runtime_c__String__init(&msg->epoch_msec)) {
    ros2_sensor_pkg__msg__SensorUserCommand__fini(msg);
    return false;
  }
  // diagnosis_request
  // set_frequency
  // frequency
  // raw_string
  // raw
  if (!rosidl_runtime_c__String__init(&msg->raw)) {
    ros2_sensor_pkg__msg__SensorUserCommand__fini(msg);
    return false;
  }
  return true;
}

void
ros2_sensor_pkg__msg__SensorUserCommand__fini(ros2_sensor_pkg__msg__SensorUserCommand * msg)
{
  if (!msg) {
    return;
  }
  // calibrate
  // setepoch
  // epoch_sec
  rosidl_runtime_c__String__fini(&msg->epoch_sec);
  // epoch_msec
  rosidl_runtime_c__String__fini(&msg->epoch_msec);
  // diagnosis_request
  // set_frequency
  // frequency
  // raw_string
  // raw
  rosidl_runtime_c__String__fini(&msg->raw);
}

bool
ros2_sensor_pkg__msg__SensorUserCommand__are_equal(const ros2_sensor_pkg__msg__SensorUserCommand * lhs, const ros2_sensor_pkg__msg__SensorUserCommand * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // calibrate
  if (lhs->calibrate != rhs->calibrate) {
    return false;
  }
  // setepoch
  if (lhs->setepoch != rhs->setepoch) {
    return false;
  }
  // epoch_sec
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->epoch_sec), &(rhs->epoch_sec)))
  {
    return false;
  }
  // epoch_msec
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->epoch_msec), &(rhs->epoch_msec)))
  {
    return false;
  }
  // diagnosis_request
  if (lhs->diagnosis_request != rhs->diagnosis_request) {
    return false;
  }
  // set_frequency
  if (lhs->set_frequency != rhs->set_frequency) {
    return false;
  }
  // frequency
  if (lhs->frequency != rhs->frequency) {
    return false;
  }
  // raw_string
  if (lhs->raw_string != rhs->raw_string) {
    return false;
  }
  // raw
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->raw), &(rhs->raw)))
  {
    return false;
  }
  return true;
}

bool
ros2_sensor_pkg__msg__SensorUserCommand__copy(
  const ros2_sensor_pkg__msg__SensorUserCommand * input,
  ros2_sensor_pkg__msg__SensorUserCommand * output)
{
  if (!input || !output) {
    return false;
  }
  // calibrate
  output->calibrate = input->calibrate;
  // setepoch
  output->setepoch = input->setepoch;
  // epoch_sec
  if (!rosidl_runtime_c__String__copy(
      &(input->epoch_sec), &(output->epoch_sec)))
  {
    return false;
  }
  // epoch_msec
  if (!rosidl_runtime_c__String__copy(
      &(input->epoch_msec), &(output->epoch_msec)))
  {
    return false;
  }
  // diagnosis_request
  output->diagnosis_request = input->diagnosis_request;
  // set_frequency
  output->set_frequency = input->set_frequency;
  // frequency
  output->frequency = input->frequency;
  // raw_string
  output->raw_string = input->raw_string;
  // raw
  if (!rosidl_runtime_c__String__copy(
      &(input->raw), &(output->raw)))
  {
    return false;
  }
  return true;
}

ros2_sensor_pkg__msg__SensorUserCommand *
ros2_sensor_pkg__msg__SensorUserCommand__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_sensor_pkg__msg__SensorUserCommand * msg = (ros2_sensor_pkg__msg__SensorUserCommand *)allocator.allocate(sizeof(ros2_sensor_pkg__msg__SensorUserCommand), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros2_sensor_pkg__msg__SensorUserCommand));
  bool success = ros2_sensor_pkg__msg__SensorUserCommand__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ros2_sensor_pkg__msg__SensorUserCommand__destroy(ros2_sensor_pkg__msg__SensorUserCommand * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ros2_sensor_pkg__msg__SensorUserCommand__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ros2_sensor_pkg__msg__SensorUserCommand__Sequence__init(ros2_sensor_pkg__msg__SensorUserCommand__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_sensor_pkg__msg__SensorUserCommand * data = NULL;

  if (size) {
    data = (ros2_sensor_pkg__msg__SensorUserCommand *)allocator.zero_allocate(size, sizeof(ros2_sensor_pkg__msg__SensorUserCommand), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros2_sensor_pkg__msg__SensorUserCommand__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros2_sensor_pkg__msg__SensorUserCommand__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
ros2_sensor_pkg__msg__SensorUserCommand__Sequence__fini(ros2_sensor_pkg__msg__SensorUserCommand__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      ros2_sensor_pkg__msg__SensorUserCommand__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

ros2_sensor_pkg__msg__SensorUserCommand__Sequence *
ros2_sensor_pkg__msg__SensorUserCommand__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_sensor_pkg__msg__SensorUserCommand__Sequence * array = (ros2_sensor_pkg__msg__SensorUserCommand__Sequence *)allocator.allocate(sizeof(ros2_sensor_pkg__msg__SensorUserCommand__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ros2_sensor_pkg__msg__SensorUserCommand__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ros2_sensor_pkg__msg__SensorUserCommand__Sequence__destroy(ros2_sensor_pkg__msg__SensorUserCommand__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ros2_sensor_pkg__msg__SensorUserCommand__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ros2_sensor_pkg__msg__SensorUserCommand__Sequence__are_equal(const ros2_sensor_pkg__msg__SensorUserCommand__Sequence * lhs, const ros2_sensor_pkg__msg__SensorUserCommand__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ros2_sensor_pkg__msg__SensorUserCommand__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ros2_sensor_pkg__msg__SensorUserCommand__Sequence__copy(
  const ros2_sensor_pkg__msg__SensorUserCommand__Sequence * input,
  ros2_sensor_pkg__msg__SensorUserCommand__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ros2_sensor_pkg__msg__SensorUserCommand);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ros2_sensor_pkg__msg__SensorUserCommand * data =
      (ros2_sensor_pkg__msg__SensorUserCommand *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ros2_sensor_pkg__msg__SensorUserCommand__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ros2_sensor_pkg__msg__SensorUserCommand__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ros2_sensor_pkg__msg__SensorUserCommand__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
