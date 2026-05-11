#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "ros2_sensor_pkg__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__ros2_sensor_pkg__msg__LoneSensor() -> *const std::ffi::c_void;
}

#[link(name = "ros2_sensor_pkg__rosidl_generator_c")]
extern "C" {
    fn ros2_sensor_pkg__msg__LoneSensor__init(msg: *mut LoneSensor) -> bool;
    fn ros2_sensor_pkg__msg__LoneSensor__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<LoneSensor>, size: usize) -> bool;
    fn ros2_sensor_pkg__msg__LoneSensor__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<LoneSensor>);
    fn ros2_sensor_pkg__msg__LoneSensor__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<LoneSensor>, out_seq: *mut rosidl_runtime_rs::Sequence<LoneSensor>) -> bool;
}

// Corresponds to ros2_sensor_pkg__msg__LoneSensor
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct LoneSensor {

    // This member is not documented.
    #[allow(missing_docs)]
    pub id: i8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub fx: i64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub fy: i64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub fz: i64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub abs: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub yaw: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub pitch: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub is_present: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub is_3d: bool,

}



impl Default for LoneSensor {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !ros2_sensor_pkg__msg__LoneSensor__init(&mut msg as *mut _) {
        panic!("Call to ros2_sensor_pkg__msg__LoneSensor__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for LoneSensor {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { ros2_sensor_pkg__msg__LoneSensor__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { ros2_sensor_pkg__msg__LoneSensor__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { ros2_sensor_pkg__msg__LoneSensor__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for LoneSensor {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for LoneSensor where Self: Sized {
  const TYPE_NAME: &'static str = "ros2_sensor_pkg/msg/LoneSensor";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__ros2_sensor_pkg__msg__LoneSensor() }
  }
}


#[link(name = "ros2_sensor_pkg__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__ros2_sensor_pkg__msg__AllSensors() -> *const std::ffi::c_void;
}

#[link(name = "ros2_sensor_pkg__rosidl_generator_c")]
extern "C" {
    fn ros2_sensor_pkg__msg__AllSensors__init(msg: *mut AllSensors) -> bool;
    fn ros2_sensor_pkg__msg__AllSensors__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<AllSensors>, size: usize) -> bool;
    fn ros2_sensor_pkg__msg__AllSensors__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<AllSensors>);
    fn ros2_sensor_pkg__msg__AllSensors__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<AllSensors>, out_seq: *mut rosidl_runtime_rs::Sequence<AllSensors>) -> bool;
}

// Corresponds to ros2_sensor_pkg__msg__AllSensors
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct AllSensors {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub length: i8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub data: rosidl_runtime_rs::Sequence<super::super::msg::rmw::LoneSensor>,

}



impl Default for AllSensors {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !ros2_sensor_pkg__msg__AllSensors__init(&mut msg as *mut _) {
        panic!("Call to ros2_sensor_pkg__msg__AllSensors__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for AllSensors {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { ros2_sensor_pkg__msg__AllSensors__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { ros2_sensor_pkg__msg__AllSensors__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { ros2_sensor_pkg__msg__AllSensors__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for AllSensors {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for AllSensors where Self: Sized {
  const TYPE_NAME: &'static str = "ros2_sensor_pkg/msg/AllSensors";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__ros2_sensor_pkg__msg__AllSensors() }
  }
}


#[link(name = "ros2_sensor_pkg__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__ros2_sensor_pkg__msg__SensorUserCommand() -> *const std::ffi::c_void;
}

#[link(name = "ros2_sensor_pkg__rosidl_generator_c")]
extern "C" {
    fn ros2_sensor_pkg__msg__SensorUserCommand__init(msg: *mut SensorUserCommand) -> bool;
    fn ros2_sensor_pkg__msg__SensorUserCommand__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SensorUserCommand>, size: usize) -> bool;
    fn ros2_sensor_pkg__msg__SensorUserCommand__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SensorUserCommand>);
    fn ros2_sensor_pkg__msg__SensorUserCommand__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SensorUserCommand>, out_seq: *mut rosidl_runtime_rs::Sequence<SensorUserCommand>) -> bool;
}

// Corresponds to ros2_sensor_pkg__msg__SensorUserCommand
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SensorUserCommand {

    // This member is not documented.
    #[allow(missing_docs)]
    pub calibrate: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub setepoch: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub epoch_sec: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub epoch_msec: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub diagnosis_request: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub set_frequency: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub frequency: i8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub raw_string: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub raw: rosidl_runtime_rs::String,

}



impl Default for SensorUserCommand {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !ros2_sensor_pkg__msg__SensorUserCommand__init(&mut msg as *mut _) {
        panic!("Call to ros2_sensor_pkg__msg__SensorUserCommand__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SensorUserCommand {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { ros2_sensor_pkg__msg__SensorUserCommand__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { ros2_sensor_pkg__msg__SensorUserCommand__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { ros2_sensor_pkg__msg__SensorUserCommand__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SensorUserCommand {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SensorUserCommand where Self: Sized {
  const TYPE_NAME: &'static str = "ros2_sensor_pkg/msg/SensorUserCommand";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__ros2_sensor_pkg__msg__SensorUserCommand() }
  }
}


