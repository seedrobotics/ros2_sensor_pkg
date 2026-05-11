#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



// Corresponds to ros2_sensor_pkg__msg__LoneSensor

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::LoneSensor::default())
  }
}

impl rosidl_runtime_rs::Message for LoneSensor {
  type RmwMsg = super::msg::rmw::LoneSensor;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        id: msg.id,
        fx: msg.fx,
        fy: msg.fy,
        fz: msg.fz,
        abs: msg.abs,
        yaw: msg.yaw,
        pitch: msg.pitch,
        is_present: msg.is_present,
        is_3d: msg.is_3d,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      id: msg.id,
      fx: msg.fx,
      fy: msg.fy,
      fz: msg.fz,
      abs: msg.abs,
      yaw: msg.yaw,
      pitch: msg.pitch,
      is_present: msg.is_present,
      is_3d: msg.is_3d,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      id: msg.id,
      fx: msg.fx,
      fy: msg.fy,
      fz: msg.fz,
      abs: msg.abs,
      yaw: msg.yaw,
      pitch: msg.pitch,
      is_present: msg.is_present,
      is_3d: msg.is_3d,
    }
  }
}


// Corresponds to ros2_sensor_pkg__msg__AllSensors

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct AllSensors {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub length: i8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub data: Vec<super::msg::LoneSensor>,

}



impl Default for AllSensors {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::AllSensors::default())
  }
}

impl rosidl_runtime_rs::Message for AllSensors {
  type RmwMsg = super::msg::rmw::AllSensors;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        length: msg.length,
        data: msg.data
          .into_iter()
          .map(|elem| super::msg::LoneSensor::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      length: msg.length,
        data: msg.data
          .iter()
          .map(|elem| super::msg::LoneSensor::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      length: msg.length,
      data: msg.data
          .into_iter()
          .map(super::msg::LoneSensor::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to ros2_sensor_pkg__msg__SensorUserCommand

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    pub epoch_sec: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub epoch_msec: std::string::String,


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
    pub raw: std::string::String,

}



impl Default for SensorUserCommand {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::SensorUserCommand::default())
  }
}

impl rosidl_runtime_rs::Message for SensorUserCommand {
  type RmwMsg = super::msg::rmw::SensorUserCommand;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        calibrate: msg.calibrate,
        setepoch: msg.setepoch,
        epoch_sec: msg.epoch_sec.as_str().into(),
        epoch_msec: msg.epoch_msec.as_str().into(),
        diagnosis_request: msg.diagnosis_request,
        set_frequency: msg.set_frequency,
        frequency: msg.frequency,
        raw_string: msg.raw_string,
        raw: msg.raw.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      calibrate: msg.calibrate,
      setepoch: msg.setepoch,
        epoch_sec: msg.epoch_sec.as_str().into(),
        epoch_msec: msg.epoch_msec.as_str().into(),
      diagnosis_request: msg.diagnosis_request,
      set_frequency: msg.set_frequency,
      frequency: msg.frequency,
      raw_string: msg.raw_string,
        raw: msg.raw.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      calibrate: msg.calibrate,
      setepoch: msg.setepoch,
      epoch_sec: msg.epoch_sec.to_string(),
      epoch_msec: msg.epoch_msec.to_string(),
      diagnosis_request: msg.diagnosis_request,
      set_frequency: msg.set_frequency,
      frequency: msg.frequency,
      raw_string: msg.raw_string,
      raw: msg.raw.to_string(),
    }
  }
}


