// Auto-generated. Do not edit!

// (in-package piksi_rtk_msgs.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;
let std_msgs = _finder('std_msgs');

//-----------------------------------------------------------

class ExtEvent {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.stamp = null;
      this.pin_value = null;
      this.quality = null;
      this.pin = null;
    }
    else {
      if (initObj.hasOwnProperty('stamp')) {
        this.stamp = initObj.stamp
      }
      else {
        this.stamp = new std_msgs.msg.Time();
      }
      if (initObj.hasOwnProperty('pin_value')) {
        this.pin_value = initObj.pin_value
      }
      else {
        this.pin_value = new std_msgs.msg.Bool();
      }
      if (initObj.hasOwnProperty('quality')) {
        this.quality = initObj.quality
      }
      else {
        this.quality = new std_msgs.msg.Bool();
      }
      if (initObj.hasOwnProperty('pin')) {
        this.pin = initObj.pin
      }
      else {
        this.pin = new std_msgs.msg.UInt8();
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type ExtEvent
    // Serialize message field [stamp]
    bufferOffset = std_msgs.msg.Time.serialize(obj.stamp, buffer, bufferOffset);
    // Serialize message field [pin_value]
    bufferOffset = std_msgs.msg.Bool.serialize(obj.pin_value, buffer, bufferOffset);
    // Serialize message field [quality]
    bufferOffset = std_msgs.msg.Bool.serialize(obj.quality, buffer, bufferOffset);
    // Serialize message field [pin]
    bufferOffset = std_msgs.msg.UInt8.serialize(obj.pin, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type ExtEvent
    let len;
    let data = new ExtEvent(null);
    // Deserialize message field [stamp]
    data.stamp = std_msgs.msg.Time.deserialize(buffer, bufferOffset);
    // Deserialize message field [pin_value]
    data.pin_value = std_msgs.msg.Bool.deserialize(buffer, bufferOffset);
    // Deserialize message field [quality]
    data.quality = std_msgs.msg.Bool.deserialize(buffer, bufferOffset);
    // Deserialize message field [pin]
    data.pin = std_msgs.msg.UInt8.deserialize(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    return 11;
  }

  static datatype() {
    // Returns string type for a message object
    return 'piksi_rtk_msgs/ExtEvent';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '4b77a4cb8a0330d533a2dba6cb090edf';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    # Reports detection of an external event, the GPS time it occurred, which pin it
    # was and whether it was rising or falling.
    
    # Modified to contain ROS time.
    
    std_msgs/Time stamp
    std_msgs/Bool pin_value
    std_msgs/Bool quality
    std_msgs/UInt8 pin
    
    uint8 PIN_VALUE_LOW   = 0   # Falling edge.
    uint8 PIN_VALUE_HIGH  = 1   # Rising edge
    uint8 QUALITY_UNKNOWN = 0   # No NAV solution.
    uint8 QUALITY_GOOD    = 1   # 1 Microsecond accuracy.
    
    ================================================================================
    MSG: std_msgs/Time
    time data
    
    ================================================================================
    MSG: std_msgs/Bool
    bool data
    ================================================================================
    MSG: std_msgs/UInt8
    uint8 data
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new ExtEvent(null);
    if (msg.stamp !== undefined) {
      resolved.stamp = std_msgs.msg.Time.Resolve(msg.stamp)
    }
    else {
      resolved.stamp = new std_msgs.msg.Time()
    }

    if (msg.pin_value !== undefined) {
      resolved.pin_value = std_msgs.msg.Bool.Resolve(msg.pin_value)
    }
    else {
      resolved.pin_value = new std_msgs.msg.Bool()
    }

    if (msg.quality !== undefined) {
      resolved.quality = std_msgs.msg.Bool.Resolve(msg.quality)
    }
    else {
      resolved.quality = new std_msgs.msg.Bool()
    }

    if (msg.pin !== undefined) {
      resolved.pin = std_msgs.msg.UInt8.Resolve(msg.pin)
    }
    else {
      resolved.pin = new std_msgs.msg.UInt8()
    }

    return resolved;
    }
};

// Constants for message
ExtEvent.Constants = {
  PIN_VALUE_LOW: 0,
  PIN_VALUE_HIGH: 1,
  QUALITY_UNKNOWN: 0,
  QUALITY_GOOD: 1,
}

module.exports = ExtEvent;
