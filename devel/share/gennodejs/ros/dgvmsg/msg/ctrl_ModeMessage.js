// Auto-generated. Do not edit!

// (in-package dgvmsg.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;
let Twist = require('./Twist.js');
let std_msgs = _finder('std_msgs');

//-----------------------------------------------------------

class ctrl_ModeMessage {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.header = null;
      this.online = null;
      this.strcmd = null;
      this.twist = null;
    }
    else {
      if (initObj.hasOwnProperty('header')) {
        this.header = initObj.header
      }
      else {
        this.header = new std_msgs.msg.Header();
      }
      if (initObj.hasOwnProperty('online')) {
        this.online = initObj.online
      }
      else {
        this.online = 0;
      }
      if (initObj.hasOwnProperty('strcmd')) {
        this.strcmd = initObj.strcmd
      }
      else {
        this.strcmd = '';
      }
      if (initObj.hasOwnProperty('twist')) {
        this.twist = initObj.twist
      }
      else {
        this.twist = new Twist();
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type ctrl_ModeMessage
    // Serialize message field [header]
    bufferOffset = std_msgs.msg.Header.serialize(obj.header, buffer, bufferOffset);
    // Serialize message field [online]
    bufferOffset = _serializer.int16(obj.online, buffer, bufferOffset);
    // Serialize message field [strcmd]
    bufferOffset = _serializer.string(obj.strcmd, buffer, bufferOffset);
    // Serialize message field [twist]
    bufferOffset = Twist.serialize(obj.twist, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type ctrl_ModeMessage
    let len;
    let data = new ctrl_ModeMessage(null);
    // Deserialize message field [header]
    data.header = std_msgs.msg.Header.deserialize(buffer, bufferOffset);
    // Deserialize message field [online]
    data.online = _deserializer.int16(buffer, bufferOffset);
    // Deserialize message field [strcmd]
    data.strcmd = _deserializer.string(buffer, bufferOffset);
    // Deserialize message field [twist]
    data.twist = Twist.deserialize(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += std_msgs.msg.Header.getMessageSize(object.header);
    length += object.strcmd.length;
    return length + 54;
  }

  static datatype() {
    // Returns string type for a message object
    return 'dgvmsg/ctrl_ModeMessage';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '08e7a508ef56ae0b7efc413d569a0ccc';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    # This expresses velocity in free space with uncertainty.
    # (x, y, z, rotation about X axis, rotation about Y axis, rotation about Z axis)
    
    Header header
    int16 online
    string strcmd
    Twist twist
    
    
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
    
    ================================================================================
    MSG: dgvmsg/Twist
    # This expresses velocity in free space broken into its linear and angular parts.
    Vector3  linear
    Vector3  angular
    
    ================================================================================
    MSG: dgvmsg/Vector3
    # This represents a vector in free space. 
    # It is only meant to represent a direction. Therefore, it does not
    # make sense to apply a translation to it (e.g., when applying a 
    # generic rigid transformation to a Vector3, tf2 will only apply the
    # rotation). If you want your data to be translatable too, use the
    # geometry_msgs/Point message instead.
    
    float64 x
    float64 y
    float64 z
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new ctrl_ModeMessage(null);
    if (msg.header !== undefined) {
      resolved.header = std_msgs.msg.Header.Resolve(msg.header)
    }
    else {
      resolved.header = new std_msgs.msg.Header()
    }

    if (msg.online !== undefined) {
      resolved.online = msg.online;
    }
    else {
      resolved.online = 0
    }

    if (msg.strcmd !== undefined) {
      resolved.strcmd = msg.strcmd;
    }
    else {
      resolved.strcmd = ''
    }

    if (msg.twist !== undefined) {
      resolved.twist = Twist.Resolve(msg.twist)
    }
    else {
      resolved.twist = new Twist()
    }

    return resolved;
    }
};

module.exports = ctrl_ModeMessage;
