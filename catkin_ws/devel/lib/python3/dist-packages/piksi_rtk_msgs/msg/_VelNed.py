# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from piksi_rtk_msgs/VelNed.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import std_msgs.msg

class VelNed(genpy.Message):
  _md5sum = "d181eb2c9a6abff7c97c58dc9f4c0a7f"
  _type = "piksi_rtk_msgs/VelNed"
  _has_header = True  # flag to mark the presence of a Header object
  _full_text = """# This message reports the velocity in local North East Down (NED) coordinates. The NED coordinate
# system is defined as the local WGS84 tangent plane centered at the current position. The full GPS time
# is given by the preceding MSG GPS TIME with the matching time-of-week (tow).

Header header

uint32 tow          # GPS Time of Week.
int32 n             # Velocity North coordinate [mm/s].
int32 e             # Velocity East coordinate [mm/s].
int32 d             # Velocity Down coordinate [mm/s].
uint16 h_accuracy   # Horizontal velocity accuracy estimate (not implemented). Defaults to 0.
uint16 v_accuracy   # Vertical velocity accuracy estimate (not implemented). Defaults to 0.
uint8 n_sats        # Number of satellites used in solution.
uint8 flags         # Status flags (reserved), see MSG_VEL_ECEF message description in SBP documentation.

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
string frame_id
"""
  __slots__ = ['header','tow','n','e','d','h_accuracy','v_accuracy','n_sats','flags']
  _slot_types = ['std_msgs/Header','uint32','int32','int32','int32','uint16','uint16','uint8','uint8']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       header,tow,n,e,d,h_accuracy,v_accuracy,n_sats,flags

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(VelNed, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.header is None:
        self.header = std_msgs.msg.Header()
      if self.tow is None:
        self.tow = 0
      if self.n is None:
        self.n = 0
      if self.e is None:
        self.e = 0
      if self.d is None:
        self.d = 0
      if self.h_accuracy is None:
        self.h_accuracy = 0
      if self.v_accuracy is None:
        self.v_accuracy = 0
      if self.n_sats is None:
        self.n_sats = 0
      if self.flags is None:
        self.flags = 0
    else:
      self.header = std_msgs.msg.Header()
      self.tow = 0
      self.n = 0
      self.e = 0
      self.d = 0
      self.h_accuracy = 0
      self.v_accuracy = 0
      self.n_sats = 0
      self.flags = 0

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      _x = self
      buff.write(_get_struct_3I().pack(_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs))
      _x = self.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      _x = self
      buff.write(_get_struct_I3i2H2B().pack(_x.tow, _x.n, _x.e, _x.d, _x.h_accuracy, _x.v_accuracy, _x.n_sats, _x.flags))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    if python3:
      codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      if self.header is None:
        self.header = std_msgs.msg.Header()
      end = 0
      _x = self
      start = end
      end += 12
      (_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs,) = _get_struct_3I().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.header.frame_id = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.header.frame_id = str[start:end]
      _x = self
      start = end
      end += 22
      (_x.tow, _x.n, _x.e, _x.d, _x.h_accuracy, _x.v_accuracy, _x.n_sats, _x.flags,) = _get_struct_I3i2H2B().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self
      buff.write(_get_struct_3I().pack(_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs))
      _x = self.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      _x = self
      buff.write(_get_struct_I3i2H2B().pack(_x.tow, _x.n, _x.e, _x.d, _x.h_accuracy, _x.v_accuracy, _x.n_sats, _x.flags))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    if python3:
      codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      if self.header is None:
        self.header = std_msgs.msg.Header()
      end = 0
      _x = self
      start = end
      end += 12
      (_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs,) = _get_struct_3I().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.header.frame_id = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.header.frame_id = str[start:end]
      _x = self
      start = end
      end += 22
      (_x.tow, _x.n, _x.e, _x.d, _x.h_accuracy, _x.v_accuracy, _x.n_sats, _x.flags,) = _get_struct_I3i2H2B().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_3I = None
def _get_struct_3I():
    global _struct_3I
    if _struct_3I is None:
        _struct_3I = struct.Struct("<3I")
    return _struct_3I
_struct_I3i2H2B = None
def _get_struct_I3i2H2B():
    global _struct_I3i2H2B
    if _struct_I3i2H2B is None:
        _struct_I3i2H2B = struct.Struct("<I3i2H2B")
    return _struct_I3i2H2B
