# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from piksi_rtk_msgs/UartState.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import std_msgs.msg

class UartState(genpy.Message):
  _md5sum = "b8a9b74f69bcd0dbe0830dfb13841e63"
  _type = "piksi_rtk_msgs/UartState"
  _has_header = True  # flag to mark the presence of a Header object
  _full_text = """# The UART message reports data latency and throughput of the UART channels providing SBP I/O.
# On the default Piksi configuration, UARTs A and B are used for telemetry radios, but can also be host
# access ports for embedded hosts, or other interfaces in future. The reported percentage values must
# be normalized. Observations latency and period can be used to assess the health of the differential
# corrections link. Latency provides the timeliness of received base observations while the period indicates
# their likelihood of transmission.

Header header

float64 uart_a_tx_throughput      # UART transmit throughput [kB/s].
float64 uart_a_rx_throughput      # UART transmit throughput [kB/s].
uint16 uart_a_crc_error_count     # UART CRC error count.
uint16 uart_a_io_error_count      # UART IO error count.
uint8 uart_a_tx_buffer_level      # UART transmit buffer percentage utilization (ranges from 0 to 255).
uint8 uart_a_rx_buffer_level      # UART transmit buffer percentage utilization (ranges from 0 to 255).

float64 uart_b_tx_throughput      # UART transmit throughput [kB/s].
float64 uart_b_rx_throughput      # UART transmit throughput [kB/s].
uint16 uart_b_crc_error_count     # UART CRC error count.
uint16 uart_b_io_error_count      # UART IO error count.
uint8 uart_b_tx_buffer_level      # UART transmit buffer percentage utilization (ranges from 0 to 255).
uint8 uart_b_rx_buffer_level      # UART transmit buffer percentage utilization (ranges from 0 to 255).

float64 uart_ftdi_tx_throughput   # UART transmit throughput [kB/s].
float64 uart_ftdi_rx_throughput   # UART receive throughput [kB/s].
uint16 uart_ftdi_crc_error_count  # UART CRC error count.
uint16 uart_ftdi_io_error_count   # UART IO error count.
uint8 uart_ftdi_tx_buffer_level   # UART transmit buffer percentage utilization (ranges from 0 to 255).
uint8 uart_ftdi_rx_buffer_level   # UART receive buffer percentage utilization (ranges from 0 to 255).

int32 latency_avg                 # Average latency [ms].
int32 latency_lmin                # Minimum latency [ms].
int32 latency_lmax                # Maximum latency [ms].
int32 latency_current             # Smoothed estimate of the current latency [ms].

int32 obs_period_avg              # Average period [ms].
int32 obs_period_pmin             # Minimum period [ms].
int32 obs_period_pmax             # Maximum period [ms].
int32 obs_period_current          # Smoothed estimate of the current period [ms].

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
  __slots__ = ['header','uart_a_tx_throughput','uart_a_rx_throughput','uart_a_crc_error_count','uart_a_io_error_count','uart_a_tx_buffer_level','uart_a_rx_buffer_level','uart_b_tx_throughput','uart_b_rx_throughput','uart_b_crc_error_count','uart_b_io_error_count','uart_b_tx_buffer_level','uart_b_rx_buffer_level','uart_ftdi_tx_throughput','uart_ftdi_rx_throughput','uart_ftdi_crc_error_count','uart_ftdi_io_error_count','uart_ftdi_tx_buffer_level','uart_ftdi_rx_buffer_level','latency_avg','latency_lmin','latency_lmax','latency_current','obs_period_avg','obs_period_pmin','obs_period_pmax','obs_period_current']
  _slot_types = ['std_msgs/Header','float64','float64','uint16','uint16','uint8','uint8','float64','float64','uint16','uint16','uint8','uint8','float64','float64','uint16','uint16','uint8','uint8','int32','int32','int32','int32','int32','int32','int32','int32']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       header,uart_a_tx_throughput,uart_a_rx_throughput,uart_a_crc_error_count,uart_a_io_error_count,uart_a_tx_buffer_level,uart_a_rx_buffer_level,uart_b_tx_throughput,uart_b_rx_throughput,uart_b_crc_error_count,uart_b_io_error_count,uart_b_tx_buffer_level,uart_b_rx_buffer_level,uart_ftdi_tx_throughput,uart_ftdi_rx_throughput,uart_ftdi_crc_error_count,uart_ftdi_io_error_count,uart_ftdi_tx_buffer_level,uart_ftdi_rx_buffer_level,latency_avg,latency_lmin,latency_lmax,latency_current,obs_period_avg,obs_period_pmin,obs_period_pmax,obs_period_current

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(UartState, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.header is None:
        self.header = std_msgs.msg.Header()
      if self.uart_a_tx_throughput is None:
        self.uart_a_tx_throughput = 0.
      if self.uart_a_rx_throughput is None:
        self.uart_a_rx_throughput = 0.
      if self.uart_a_crc_error_count is None:
        self.uart_a_crc_error_count = 0
      if self.uart_a_io_error_count is None:
        self.uart_a_io_error_count = 0
      if self.uart_a_tx_buffer_level is None:
        self.uart_a_tx_buffer_level = 0
      if self.uart_a_rx_buffer_level is None:
        self.uart_a_rx_buffer_level = 0
      if self.uart_b_tx_throughput is None:
        self.uart_b_tx_throughput = 0.
      if self.uart_b_rx_throughput is None:
        self.uart_b_rx_throughput = 0.
      if self.uart_b_crc_error_count is None:
        self.uart_b_crc_error_count = 0
      if self.uart_b_io_error_count is None:
        self.uart_b_io_error_count = 0
      if self.uart_b_tx_buffer_level is None:
        self.uart_b_tx_buffer_level = 0
      if self.uart_b_rx_buffer_level is None:
        self.uart_b_rx_buffer_level = 0
      if self.uart_ftdi_tx_throughput is None:
        self.uart_ftdi_tx_throughput = 0.
      if self.uart_ftdi_rx_throughput is None:
        self.uart_ftdi_rx_throughput = 0.
      if self.uart_ftdi_crc_error_count is None:
        self.uart_ftdi_crc_error_count = 0
      if self.uart_ftdi_io_error_count is None:
        self.uart_ftdi_io_error_count = 0
      if self.uart_ftdi_tx_buffer_level is None:
        self.uart_ftdi_tx_buffer_level = 0
      if self.uart_ftdi_rx_buffer_level is None:
        self.uart_ftdi_rx_buffer_level = 0
      if self.latency_avg is None:
        self.latency_avg = 0
      if self.latency_lmin is None:
        self.latency_lmin = 0
      if self.latency_lmax is None:
        self.latency_lmax = 0
      if self.latency_current is None:
        self.latency_current = 0
      if self.obs_period_avg is None:
        self.obs_period_avg = 0
      if self.obs_period_pmin is None:
        self.obs_period_pmin = 0
      if self.obs_period_pmax is None:
        self.obs_period_pmax = 0
      if self.obs_period_current is None:
        self.obs_period_current = 0
    else:
      self.header = std_msgs.msg.Header()
      self.uart_a_tx_throughput = 0.
      self.uart_a_rx_throughput = 0.
      self.uart_a_crc_error_count = 0
      self.uart_a_io_error_count = 0
      self.uart_a_tx_buffer_level = 0
      self.uart_a_rx_buffer_level = 0
      self.uart_b_tx_throughput = 0.
      self.uart_b_rx_throughput = 0.
      self.uart_b_crc_error_count = 0
      self.uart_b_io_error_count = 0
      self.uart_b_tx_buffer_level = 0
      self.uart_b_rx_buffer_level = 0
      self.uart_ftdi_tx_throughput = 0.
      self.uart_ftdi_rx_throughput = 0.
      self.uart_ftdi_crc_error_count = 0
      self.uart_ftdi_io_error_count = 0
      self.uart_ftdi_tx_buffer_level = 0
      self.uart_ftdi_rx_buffer_level = 0
      self.latency_avg = 0
      self.latency_lmin = 0
      self.latency_lmax = 0
      self.latency_current = 0
      self.obs_period_avg = 0
      self.obs_period_pmin = 0
      self.obs_period_pmax = 0
      self.obs_period_current = 0

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
      buff.write(_get_struct_2d2H2B2d2H2B2d2H2B8i().pack(_x.uart_a_tx_throughput, _x.uart_a_rx_throughput, _x.uart_a_crc_error_count, _x.uart_a_io_error_count, _x.uart_a_tx_buffer_level, _x.uart_a_rx_buffer_level, _x.uart_b_tx_throughput, _x.uart_b_rx_throughput, _x.uart_b_crc_error_count, _x.uart_b_io_error_count, _x.uart_b_tx_buffer_level, _x.uart_b_rx_buffer_level, _x.uart_ftdi_tx_throughput, _x.uart_ftdi_rx_throughput, _x.uart_ftdi_crc_error_count, _x.uart_ftdi_io_error_count, _x.uart_ftdi_tx_buffer_level, _x.uart_ftdi_rx_buffer_level, _x.latency_avg, _x.latency_lmin, _x.latency_lmax, _x.latency_current, _x.obs_period_avg, _x.obs_period_pmin, _x.obs_period_pmax, _x.obs_period_current))
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
      end += 98
      (_x.uart_a_tx_throughput, _x.uart_a_rx_throughput, _x.uart_a_crc_error_count, _x.uart_a_io_error_count, _x.uart_a_tx_buffer_level, _x.uart_a_rx_buffer_level, _x.uart_b_tx_throughput, _x.uart_b_rx_throughput, _x.uart_b_crc_error_count, _x.uart_b_io_error_count, _x.uart_b_tx_buffer_level, _x.uart_b_rx_buffer_level, _x.uart_ftdi_tx_throughput, _x.uart_ftdi_rx_throughput, _x.uart_ftdi_crc_error_count, _x.uart_ftdi_io_error_count, _x.uart_ftdi_tx_buffer_level, _x.uart_ftdi_rx_buffer_level, _x.latency_avg, _x.latency_lmin, _x.latency_lmax, _x.latency_current, _x.obs_period_avg, _x.obs_period_pmin, _x.obs_period_pmax, _x.obs_period_current,) = _get_struct_2d2H2B2d2H2B2d2H2B8i().unpack(str[start:end])
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
      buff.write(_get_struct_2d2H2B2d2H2B2d2H2B8i().pack(_x.uart_a_tx_throughput, _x.uart_a_rx_throughput, _x.uart_a_crc_error_count, _x.uart_a_io_error_count, _x.uart_a_tx_buffer_level, _x.uart_a_rx_buffer_level, _x.uart_b_tx_throughput, _x.uart_b_rx_throughput, _x.uart_b_crc_error_count, _x.uart_b_io_error_count, _x.uart_b_tx_buffer_level, _x.uart_b_rx_buffer_level, _x.uart_ftdi_tx_throughput, _x.uart_ftdi_rx_throughput, _x.uart_ftdi_crc_error_count, _x.uart_ftdi_io_error_count, _x.uart_ftdi_tx_buffer_level, _x.uart_ftdi_rx_buffer_level, _x.latency_avg, _x.latency_lmin, _x.latency_lmax, _x.latency_current, _x.obs_period_avg, _x.obs_period_pmin, _x.obs_period_pmax, _x.obs_period_current))
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
      end += 98
      (_x.uart_a_tx_throughput, _x.uart_a_rx_throughput, _x.uart_a_crc_error_count, _x.uart_a_io_error_count, _x.uart_a_tx_buffer_level, _x.uart_a_rx_buffer_level, _x.uart_b_tx_throughput, _x.uart_b_rx_throughput, _x.uart_b_crc_error_count, _x.uart_b_io_error_count, _x.uart_b_tx_buffer_level, _x.uart_b_rx_buffer_level, _x.uart_ftdi_tx_throughput, _x.uart_ftdi_rx_throughput, _x.uart_ftdi_crc_error_count, _x.uart_ftdi_io_error_count, _x.uart_ftdi_tx_buffer_level, _x.uart_ftdi_rx_buffer_level, _x.latency_avg, _x.latency_lmin, _x.latency_lmax, _x.latency_current, _x.obs_period_avg, _x.obs_period_pmin, _x.obs_period_pmax, _x.obs_period_current,) = _get_struct_2d2H2B2d2H2B2d2H2B8i().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_2d2H2B2d2H2B2d2H2B8i = None
def _get_struct_2d2H2B2d2H2B2d2H2B8i():
    global _struct_2d2H2B2d2H2B2d2H2B8i
    if _struct_2d2H2B2d2H2B2d2H2B8i is None:
        _struct_2d2H2B2d2H2B2d2H2B8i = struct.Struct("<2d2H2B2d2H2B2d2H2B8i")
    return _struct_2d2H2B2d2H2B2d2H2B8i
_struct_3I = None
def _get_struct_3I():
    global _struct_3I
    if _struct_3I is None:
        _struct_3I = struct.Struct("<3I")
    return _struct_3I
