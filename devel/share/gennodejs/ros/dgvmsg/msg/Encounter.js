// Auto-generated. Do not edit!

// (in-package dgvmsg.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;
let std_msgs = _finder('std_msgs');

//-----------------------------------------------------------

class Encounter {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.header = null;
      this.devadd = null;
      this.now = null;
      this.encounter = null;
    }
    else {
      if (initObj.hasOwnProperty('header')) {
        this.header = initObj.header
      }
      else {
        this.header = new std_msgs.msg.Header();
      }
      if (initObj.hasOwnProperty('devadd')) {
        this.devadd = initObj.devadd
      }
      else {
        this.devadd = 0;
      }
      if (initObj.hasOwnProperty('now')) {
        this.now = initObj.now
      }
      else {
        this.now = {secs: 0, nsecs: 0};
      }
      if (initObj.hasOwnProperty('encounter')) {
        this.encounter = initObj.encounter
      }
      else {
        this.encounter = 0;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type Encounter
    // Serialize message field [header]
    bufferOffset = std_msgs.msg.Header.serialize(obj.header, buffer, bufferOffset);
    // Serialize message field [devadd]
    bufferOffset = _serializer.int32(obj.devadd, buffer, bufferOffset);
    // Serialize message field [now]
    bufferOffset = _serializer.time(obj.now, buffer, bufferOffset);
    // Serialize message field [encounter]
    bufferOffset = _serializer.uint32(obj.encounter, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type Encounter
    let len;
    let data = new Encounter(null);
    // Deserialize message field [header]
    data.header = std_msgs.msg.Header.deserialize(buffer, bufferOffset);
    // Deserialize message field [devadd]
    data.devadd = _deserializer.int32(buffer, bufferOffset);
    // Deserialize message field [now]
    data.now = _deserializer.time(buffer, bufferOffset);
    // Deserialize message field [encounter]
    data.encounter = _deserializer.uint32(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += std_msgs.msg.Header.getMessageSize(object.header);
    return length + 16;
  }

  static datatype() {
    // Returns string type for a message object
    return 'dgvmsg/Encounter';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '297ccc212aebf37b07c8d983c849a391';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
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
    const resolved = new Encounter(null);
    if (msg.header !== undefined) {
      resolved.header = std_msgs.msg.Header.Resolve(msg.header)
    }
    else {
      resolved.header = new std_msgs.msg.Header()
    }

    if (msg.devadd !== undefined) {
      resolved.devadd = msg.devadd;
    }
    else {
      resolved.devadd = 0
    }

    if (msg.now !== undefined) {
      resolved.now = msg.now;
    }
    else {
      resolved.now = {secs: 0, nsecs: 0}
    }

    if (msg.encounter !== undefined) {
      resolved.encounter = msg.encounter;
    }
    else {
      resolved.encounter = 0
    }

    return resolved;
    }
};

module.exports = Encounter;
