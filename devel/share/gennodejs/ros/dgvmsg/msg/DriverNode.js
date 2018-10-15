// Auto-generated. Do not edit!

// (in-package dgvmsg.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;

//-----------------------------------------------------------

class DriverNode {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.name = null;
      this.add = null;
      this.VRPM = null;
      this.Vspeed = null;
    }
    else {
      if (initObj.hasOwnProperty('name')) {
        this.name = initObj.name
      }
      else {
        this.name = '';
      }
      if (initObj.hasOwnProperty('add')) {
        this.add = initObj.add
      }
      else {
        this.add = 0;
      }
      if (initObj.hasOwnProperty('VRPM')) {
        this.VRPM = initObj.VRPM
      }
      else {
        this.VRPM = 0;
      }
      if (initObj.hasOwnProperty('Vspeed')) {
        this.Vspeed = initObj.Vspeed
      }
      else {
        this.Vspeed = 0.0;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type DriverNode
    // Serialize message field [name]
    bufferOffset = _serializer.string(obj.name, buffer, bufferOffset);
    // Serialize message field [add]
    bufferOffset = _serializer.int32(obj.add, buffer, bufferOffset);
    // Serialize message field [VRPM]
    bufferOffset = _serializer.int32(obj.VRPM, buffer, bufferOffset);
    // Serialize message field [Vspeed]
    bufferOffset = _serializer.float64(obj.Vspeed, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type DriverNode
    let len;
    let data = new DriverNode(null);
    // Deserialize message field [name]
    data.name = _deserializer.string(buffer, bufferOffset);
    // Deserialize message field [add]
    data.add = _deserializer.int32(buffer, bufferOffset);
    // Deserialize message field [VRPM]
    data.VRPM = _deserializer.int32(buffer, bufferOffset);
    // Deserialize message field [Vspeed]
    data.Vspeed = _deserializer.float64(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += object.name.length;
    return length + 20;
  }

  static datatype() {
    // Returns string type for a message object
    return 'dgvmsg/DriverNode';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '97dea7a29a79ed3e3ede5691994f3c14';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
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
    const resolved = new DriverNode(null);
    if (msg.name !== undefined) {
      resolved.name = msg.name;
    }
    else {
      resolved.name = ''
    }

    if (msg.add !== undefined) {
      resolved.add = msg.add;
    }
    else {
      resolved.add = 0
    }

    if (msg.VRPM !== undefined) {
      resolved.VRPM = msg.VRPM;
    }
    else {
      resolved.VRPM = 0
    }

    if (msg.Vspeed !== undefined) {
      resolved.Vspeed = msg.Vspeed;
    }
    else {
      resolved.Vspeed = 0.0
    }

    return resolved;
    }
};

module.exports = DriverNode;
