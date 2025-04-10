;; Auto-generated. Do not edit!


(when (boundp 'piksi_rtk_msgs::PosLlhMulti)
  (if (not (find-package "PIKSI_RTK_MSGS"))
    (make-package "PIKSI_RTK_MSGS"))
  (shadow 'PosLlhMulti (find-package "PIKSI_RTK_MSGS")))
(unless (find-package "PIKSI_RTK_MSGS::POSLLHMULTI")
  (make-package "PIKSI_RTK_MSGS::POSLLHMULTI"))

(in-package "ROS")
;;//! \htmlinclude PosLlhMulti.msg.html
(if (not (find-package "STD_MSGS"))
  (ros::roseus-add-msgs "std_msgs"))


(intern "*FIX_MODE_INVALID*" (find-package "PIKSI_RTK_MSGS::POSLLHMULTI"))
(shadow '*FIX_MODE_INVALID* (find-package "PIKSI_RTK_MSGS::POSLLHMULTI"))
(defconstant piksi_rtk_msgs::PosLlhMulti::*FIX_MODE_INVALID* 0)
(intern "*FIX_MODE_SPP*" (find-package "PIKSI_RTK_MSGS::POSLLHMULTI"))
(shadow '*FIX_MODE_SPP* (find-package "PIKSI_RTK_MSGS::POSLLHMULTI"))
(defconstant piksi_rtk_msgs::PosLlhMulti::*FIX_MODE_SPP* 1)
(intern "*FIX_MODE_DGNSS*" (find-package "PIKSI_RTK_MSGS::POSLLHMULTI"))
(shadow '*FIX_MODE_DGNSS* (find-package "PIKSI_RTK_MSGS::POSLLHMULTI"))
(defconstant piksi_rtk_msgs::PosLlhMulti::*FIX_MODE_DGNSS* 2)
(intern "*FIX_MODE_FLOAT_RTK*" (find-package "PIKSI_RTK_MSGS::POSLLHMULTI"))
(shadow '*FIX_MODE_FLOAT_RTK* (find-package "PIKSI_RTK_MSGS::POSLLHMULTI"))
(defconstant piksi_rtk_msgs::PosLlhMulti::*FIX_MODE_FLOAT_RTK* 3)
(intern "*FIX_MODE_FIX_RTK*" (find-package "PIKSI_RTK_MSGS::POSLLHMULTI"))
(shadow '*FIX_MODE_FIX_RTK* (find-package "PIKSI_RTK_MSGS::POSLLHMULTI"))
(defconstant piksi_rtk_msgs::PosLlhMulti::*FIX_MODE_FIX_RTK* 4)
(intern "*FIX_MODE_DEAD_RECKONING*" (find-package "PIKSI_RTK_MSGS::POSLLHMULTI"))
(shadow '*FIX_MODE_DEAD_RECKONING* (find-package "PIKSI_RTK_MSGS::POSLLHMULTI"))
(defconstant piksi_rtk_msgs::PosLlhMulti::*FIX_MODE_DEAD_RECKONING* 5)
(intern "*FIX_MODE_SBAS*" (find-package "PIKSI_RTK_MSGS::POSLLHMULTI"))
(shadow '*FIX_MODE_SBAS* (find-package "PIKSI_RTK_MSGS::POSLLHMULTI"))
(defconstant piksi_rtk_msgs::PosLlhMulti::*FIX_MODE_SBAS* 6)

(defun piksi_rtk_msgs::PosLlhMulti-to-symbol (const)
  (cond
        ((= const 0) 'piksi_rtk_msgs::PosLlhMulti::*FIX_MODE_INVALID*)
        ((= const 1) 'piksi_rtk_msgs::PosLlhMulti::*FIX_MODE_SPP*)
        ((= const 2) 'piksi_rtk_msgs::PosLlhMulti::*FIX_MODE_DGNSS*)
        ((= const 3) 'piksi_rtk_msgs::PosLlhMulti::*FIX_MODE_FLOAT_RTK*)
        ((= const 4) 'piksi_rtk_msgs::PosLlhMulti::*FIX_MODE_FIX_RTK*)
        ((= const 5) 'piksi_rtk_msgs::PosLlhMulti::*FIX_MODE_DEAD_RECKONING*)
        ((= const 6) 'piksi_rtk_msgs::PosLlhMulti::*FIX_MODE_SBAS*)
        (t nil)))

(defclass piksi_rtk_msgs::PosLlhMulti
  :super ros::object
  :slots (_header _tow _lat _lon _height _h_accuracy _v_accuracy _n_sats _flags ))

(defmethod piksi_rtk_msgs::PosLlhMulti
  (:init
   (&key
    ((:header __header) (instance std_msgs::Header :init))
    ((:tow __tow) 0)
    ((:lat __lat) 0.0)
    ((:lon __lon) 0.0)
    ((:height __height) 0.0)
    ((:h_accuracy __h_accuracy) 0)
    ((:v_accuracy __v_accuracy) 0)
    ((:n_sats __n_sats) 0)
    ((:flags __flags) 0)
    )
   (send-super :init)
   (setq _header __header)
   (setq _tow (round __tow))
   (setq _lat (float __lat))
   (setq _lon (float __lon))
   (setq _height (float __height))
   (setq _h_accuracy (round __h_accuracy))
   (setq _v_accuracy (round __v_accuracy))
   (setq _n_sats (round __n_sats))
   (setq _flags (round __flags))
   self)
  (:header
   (&rest __header)
   (if (keywordp (car __header))
       (send* _header __header)
     (progn
       (if __header (setq _header (car __header)))
       _header)))
  (:tow
   (&optional __tow)
   (if __tow (setq _tow __tow)) _tow)
  (:lat
   (&optional __lat)
   (if __lat (setq _lat __lat)) _lat)
  (:lon
   (&optional __lon)
   (if __lon (setq _lon __lon)) _lon)
  (:height
   (&optional __height)
   (if __height (setq _height __height)) _height)
  (:h_accuracy
   (&optional __h_accuracy)
   (if __h_accuracy (setq _h_accuracy __h_accuracy)) _h_accuracy)
  (:v_accuracy
   (&optional __v_accuracy)
   (if __v_accuracy (setq _v_accuracy __v_accuracy)) _v_accuracy)
  (:n_sats
   (&optional __n_sats)
   (if __n_sats (setq _n_sats __n_sats)) _n_sats)
  (:flags
   (&optional __flags)
   (if __flags (setq _flags __flags)) _flags)
  (:serialization-length
   ()
   (+
    ;; std_msgs/Header _header
    (send _header :serialization-length)
    ;; uint32 _tow
    4
    ;; float64 _lat
    8
    ;; float64 _lon
    8
    ;; float64 _height
    8
    ;; uint16 _h_accuracy
    2
    ;; uint16 _v_accuracy
    2
    ;; uint8 _n_sats
    1
    ;; uint8 _flags
    1
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; std_msgs/Header _header
       (send _header :serialize s)
     ;; uint32 _tow
       (write-long _tow s)
     ;; float64 _lat
       (sys::poke _lat (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _lon
       (sys::poke _lon (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _height
       (sys::poke _height (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; uint16 _h_accuracy
       (write-word _h_accuracy s)
     ;; uint16 _v_accuracy
       (write-word _v_accuracy s)
     ;; uint8 _n_sats
       (write-byte _n_sats s)
     ;; uint8 _flags
       (write-byte _flags s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; std_msgs/Header _header
     (send _header :deserialize buf ptr-) (incf ptr- (send _header :serialization-length))
   ;; uint32 _tow
     (setq _tow (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;; float64 _lat
     (setq _lat (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _lon
     (setq _lon (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _height
     (setq _height (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; uint16 _h_accuracy
     (setq _h_accuracy (sys::peek buf ptr- :short)) (incf ptr- 2)
   ;; uint16 _v_accuracy
     (setq _v_accuracy (sys::peek buf ptr- :short)) (incf ptr- 2)
   ;; uint8 _n_sats
     (setq _n_sats (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; uint8 _flags
     (setq _flags (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;;
   self)
  )

(setf (get piksi_rtk_msgs::PosLlhMulti :md5sum-) "1432cd112c82b49dde4ea610842825ea")
(setf (get piksi_rtk_msgs::PosLlhMulti :datatype-) "piksi_rtk_msgs/PosLlhMulti")
(setf (get piksi_rtk_msgs::PosLlhMulti :definition-)
      "# This position solution message reports the absolute geodetic coordinates and the status (single point
# vs pseudo-absolute RTK) of the position solution. If the rover receiver knows the surveyed position of
# the base station and has an RTK solution, this reports a pseudo-absolute position solution using the
# base station position and the rover's RTK baseline vector. The full GPS time is given by the preceding
# MSG GPS TIME with the matching time-of-week (tow).

Header header

uint32 tow          # GPS Time of Week [ms].
float64 lat         # Latitude [deg].
float64 lon         # Longitude [deg].
float64 height      # Height [deg].
uint16 h_accuracy   # Horizontal position accuracy estimate.
uint16 v_accuracy   # Vertical position accuracy estimate.
uint8 n_sats        # Number of satellites used in solution.
uint8 flags         # Status flags, see MSG_POS_LLH message description in SBP documentation.

uint8 FIX_MODE_INVALID = 0
uint8 FIX_MODE_SPP = 1
uint8 FIX_MODE_DGNSS = 2
uint8 FIX_MODE_FLOAT_RTK = 3
uint8 FIX_MODE_FIX_RTK = 4
uint8 FIX_MODE_DEAD_RECKONING = 5
uint8 FIX_MODE_SBAS = 6

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

")



(provide :piksi_rtk_msgs/PosLlhMulti "1432cd112c82b49dde4ea610842825ea")


