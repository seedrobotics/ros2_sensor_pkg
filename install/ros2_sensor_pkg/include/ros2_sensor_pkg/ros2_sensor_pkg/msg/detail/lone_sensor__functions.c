// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ros2_sensor_pkg:msg/LoneSensor.idl
// generated code does not contain a copyright notice
#include "ros2_sensor_pkg/msg/detail/lone_sensor__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
ros2_sensor_pkg__msg__LoneSensor__init(ros2_sensor_pkg__msg__LoneSensor * msg)
{
  if (!msg) {
    return false;
  }
  // id
  // fx
  // fy
  // fz
  // abs
  // yaw
  // pitch
  // is_present
  // is_3d
  return true;
}

void
ros2_sensor_pkg__msg__LoneSensor__fini(ros2_sensor_pkg__msg__LoneSensor * msg)
{
  if (!msg) {
    return;
  }
  // id
  // fx
  // fy
  // fz
  // abs
  // yaw
  // pitch
  // is_present
  // is_3d
}

bool
ros2_sensor_pkg__msg__LoneSensor__are_equal(const ros2_sensor_pkg__msg__LoneSensor * lhs, const ros2_sensor_pkg__msg__LoneSensor * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // id
  if (lhs->id != rhs->id) {
    return false;
  }
  // fx
  if (lhs->fx != rhs->fx) {
    return false;
  }
  // fy
  if (lhs->fy != rhs->fy) {
    return false;
  }
  // fz
  if (lhs->fz != rhs->fz) {
    return false;
  }
  // abs
  if (lhs->abs != rhs->abs) {
    return false;
  }
  // yaw
  if (lhs->yaw != rhs->yaw) {
    return false;
  }
  // pitch
  if (lhs->pitch != rhs->pitch) {
    return false;
  }
  // is_present
  if (lhs->is_present != rhs->is_present) {
    return false;
  }
  // is_3d
  if (lhs->is_3d != rhs->is_3d) {
    return false;
  }
  return true;
}

bool
ros2_sensor_pkg__msg__LoneSensor__copy(
  const ros2_sensor_pkg__msg__LoneSensor * input,
  ros2_sensor_pkg__msg__LoneSensor * output)
{
  if (!input || !output) {
    return false;
  }
  // id
  output->id = input->id;
  // fx
  output->fx = input->fx;
  // fy
  output->fy = input->fy;
  // fz
  output->fz = input->fz;
  // abs
  output->abs = input->abs;
  // yaw
  output->yaw = input->yaw;
  // pitch
  output->pitch = input->pitch;
  // is_present
  output->is_present = input->is_present;
  // is_3d
  output->is_3d = input->is_3d;
  return true;
}

ros2_sensor_pkg__msg__LoneSensor *
ros2_sensor_pkg__msg__LoneSensor__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_sensor_pkg__msg__LoneSensor * msg = (ros2_sensor_pkg__msg__LoneSensor *)allocator.allocate(sizeof(ros2_sensor_pkg__msg__LoneSensor), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros2_sensor_pkg__msg__LoneSensor));
  bool success = ros2_sensor_pkg__msg__LoneSensor__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ros2_sensor_pkg__msg__LoneSensor__destroy(ros2_sensor_pkg__msg__LoneSensor * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ros2_sensor_pkg__msg__LoneSensor__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ros2_sensor_pkg__msg__LoneSensor__Sequence__init(ros2_sensor_pkg__msg__LoneSensor__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_sensor_pkg__msg__LoneSensor * data = NULL;

  if (size) {
    data = (ros2_sensor_pkg__msg__LoneSensor *)allocator.zero_allocate(size, sizeof(ros2_sensor_pkg__msg__LoneSensor), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros2_sensor_pkg__msg__LoneSensor__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros2_sensor_pkg__msg__LoneSensor__fini(&data[i - 1]);
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
ros2_sensor_pkg__msg__LoneSensor__Sequence__fini(ros2_sensor_pkg__msg__LoneSensor__Sequence * array)
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
      ros2_sensor_pkg__msg__LoneSensor__fini(&array->data[i]);
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

ros2_sensor_pkg__msg__LoneSensor__Sequence *
ros2_sensor_pkg__msg__LoneSensor__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_sensor_pkg__msg__LoneSensor__Sequence * array = (ros2_sensor_pkg__msg__LoneSensor__Sequence *)allocator.allocate(sizeof(ros2_sensor_pkg__msg__LoneSensor__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ros2_sensor_pkg__msg__LoneSensor__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ros2_sensor_pkg__msg__LoneSensor__Sequence__destroy(ros2_sensor_pkg__msg__LoneSensor__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ros2_sensor_pkg__msg__LoneSensor__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ros2_sensor_pkg__msg__LoneSensor__Sequence__are_equal(const ros2_sensor_pkg__msg__LoneSensor__Sequence * lhs, const ros2_sensor_pkg__msg__LoneSensor__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ros2_sensor_pkg__msg__LoneSensor__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ros2_sensor_pkg__msg__LoneSensor__Sequence__copy(
  const ros2_sensor_pkg__msg__LoneSensor__Sequence * input,
  ros2_sensor_pkg__msg__LoneSensor__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ros2_sensor_pkg__msg__LoneSensor);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ros2_sensor_pkg__msg__LoneSensor * data =
      (ros2_sensor_pkg__msg__LoneSensor *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ros2_sensor_pkg__msg__LoneSensor__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ros2_sensor_pkg__msg__LoneSensor__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ros2_sensor_pkg__msg__LoneSensor__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
