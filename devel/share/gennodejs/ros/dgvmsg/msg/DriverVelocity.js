// Auto-generated. Do not edit!

// (in-package dgvmsg.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;
let DriverNode = require('./DriverNode.js');

//-----------------------------------------------------------

class DriverVelocity {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.driver = null;
    }
    else {
      if (initObj.hasOwnProperty('driver')) {
        this.driver = initObj.driver
      }
      else {
        this.driver = [];
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type DriverVelocity
    // Serialize message field [driver]
    // Serialize the length for message field [driver]
    bufferOffset = _serializer.uint32(obj.driver.length, buffer, bufferOffset);
    obj.driver.forEach((val) => {
      bufferOffset = DriverNode.serialize(val, buffer, bufferOffset);
    });
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type DriverVelocity
    let len;
    let data = new DriverVelocity(null);
    // Deserialize message field [driver]
    // Deserialize array length for message field [driver]
    len = _deserializer.uint32(buffer, bufferOffset);
    data.driver = new Array(len);
    for (let i = 0; i < len; ++i) {
      data.driver[i] = DriverNode.deserialize(buffer, bufferOffset)
    }
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    object.driver.forEach((val) => {
      length += DriverNode.getMessageSize(val);
    });
    return length + 4;
  }

  static datatype() {
    // Returns string type for a message object
    return 'dgvmsg/DriverVelocity';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '97330beae4312907dc78de56d0603bd5';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    # This expresses velocity in free space broken into its linear and angular parts.
    
    DriverNode[] driver
    ================================================================================
    MSG: dgvmsg/DriverNode
    # This represents a vector in free space. 
    # It is only meant to represent a direction. Therefore, it does not
    # make sense to apply a translation to it (e.g., when applying a 
    # generic rigid transformation to a Vector3, tf2 will only apply the
    # rotation). If you want your data to be translatable too, use the
    
    string name
    int32 add
    int32 VRPM
    float64 Vspeed
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new DriverVelocity(null);
    if (msg.driver !== undefined) {
      resolved.driver = new Array(msg.driver.length);
      for (let i = 0; i < resolved.driver.length; ++i) {
        resolved.driver[i] = DriverNode.Resolve(msg.driver[i]);
      }
    }
    else {
      resolved.driver = []
    }

    return resolved;
    }
};

module.exports = DriverVelocity;
