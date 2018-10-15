// Auto-generated. Do not edit!

// (in-package dgvmsg.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;
let Encounter = require('./Encounter.js');

//-----------------------------------------------------------

class EncounterV {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.cnt = null;
    }
    else {
      if (initObj.hasOwnProperty('cnt')) {
        this.cnt = initObj.cnt
      }
      else {
        this.cnt = [];
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type EncounterV
    // Serialize message field [cnt]
    // Serialize the length for message field [cnt]
    bufferOffset = _serializer.uint32(obj.cnt.length, buffer, bufferOffset);
    obj.cnt.forEach((val) => {
      bufferOffset = Encounter.serialize(val, buffer, bufferOffset);
    });
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type EncounterV
    let len;
    let data = new EncounterV(null);
    // Deserialize message field [cnt]
    // Deserialize array length for message field [cnt]
    len = _deserializer.uint32(buffer, bufferOffset);
    data.cnt = new Array(len);
    for (let i = 0; i < len; ++i) {
      data.cnt[i] = Encounter.deserialize(buffer, bufferOffset)
    }
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    object.cnt.forEach((val) => {
      length += Encounter.getMessageSize(val);
    });
    return length + 4;
  }

  static datatype() {
    // Returns string type for a message object
    return 'dgvmsg/EncounterV';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '7c4fe66bdf34f3810baffb53223c0c09';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    Encounter[] cnt
    ================================================================================
    MSG: dgvmsg/Encounter
    # This is a message to hold data from an IMU (Inertial Measurement Unit)
    #
    # Accelerations should be in m/s^2 (not in g's), and rotational velocity should be in rad/sec
    #
    # If the covariance of the measurement is known, it should be filled in (if all you know is the 
    # variance of each measurement, e.g. from the datasheet, just put those along the diagonal)
    # A covariance matrix of all zeros will be interpreted as "covariance unknown", and to use the
    # data a covariance will have to be assumed or gotten from some other source
    #
    # If you have no estimate for one of the data elements (e.g. your IMU doesn't produce an orientation 
    # estimate), please set element 0 of the associated covariance matrix to -1
    # If you are interpreting this message, please check for a value of -1 in the first element of each 
    # covariance matrix, and disregard the associated estimate.
    
    Header header
    
    int32 devadd
    time now
    uint32 encounter
    ================================================================================
    MSG: std_msgs/Header
    # Standard metadata for higher-level stamped data types.
    # This is generally used to communicate timestamped data 
    # in a particular coordinate frame.
    # 
    # sequence ID: consecutively increasing ID 
    uint32 seq
    #Two-integer timestamp that is expressed as:
    # * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')
    # * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')
    # time-handling sugar is provided by the client library
    time stamp
    #Frame this data is associated with
    # 0: no frame
    # 1: global frame
    string frame_id
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new EncounterV(null);
    if (msg.cnt !== undefined) {
      resolved.cnt = new Array(msg.cnt.length);
      for (let i = 0; i < resolved.cnt.length; ++i) {
        resolved.cnt[i] = Encounter.Resolve(msg.cnt[i]);
      }
    }
    else {
      resolved.cnt = []
    }

    return resolved;
    }
};

module.exports = EncounterV;
