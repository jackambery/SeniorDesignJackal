;; Auto-generated. Do not edit!


(when (boundp 'piksi_rtk_msgs::TrackingState_V2_3_15)
  (if (not (find-package "PIKSI_RTK_MSGS"))
    (make-package "PIKSI_RTK_MSGS"))
  (shadow 'TrackingState_V2_3_15 (find-package "PIKSI_RTK_MSGS")))
(unless (find-package "PIKSI_RTK_MSGS::TRACKINGSTATE_V2_3_15")
  (make-package "PIKSI_RTK_MSGS::TRACKINGSTATE_V2_3_15"))

(in-package "ROS")
;;//! \htmlinclude TrackingState_V2_3_15.msg.html
(if (not (find-package "STD_MSGS"))
  (ros::roseus-add-msgs "std_msgs"))


(intern "*CODE_GPS_L1CA*" (find-package "PIKSI_RTK_MSGS::TRACKINGSTATE_V2_3_15"))
(shadow '*CODE_GPS_L1CA* (find-package "PIKSI_RTK_MSGS::TRACKINGSTATE_V2_3_15"))
(defconstant piksi_rtk_msgs::TrackingState_V2_3_15::*CODE_GPS_L1CA* 0)
(intern "*CODE_GPS_L2CM*" (find-package "PIKSI_RTK_MSGS::TRACKINGSTATE_V2_3_15"))
(shadow '*CODE_GPS_L2CM* (find-package "PIKSI_RTK_MSGS::TRACKINGSTATE_V2_3_15"))
(defconstant piksi_rtk_msgs::TrackingState_V2_3_15::*CODE_GPS_L2CM* 1)
(intern "*CODE_SBAS_L1CA*" (find-package "PIKSI_RTK_MSGS::TRACKINGSTATE_V2_3_15"))
(shadow '*CODE_SBAS_L1CA* (find-package "PIKSI_RTK_MSGS::TRACKINGSTATE_V2_3_15"))
(defconstant piksi_rtk_msgs::TrackingState_V2_3_15::*CODE_SBAS_L1CA* 2)
(intern "*CODE_GLO_L1CA*" (find-package "PIKSI_RTK_MSGS::TRACKINGSTATE_V2_3_15"))
(shadow '*CODE_GLO_L1CA* (find-package "PIKSI_RTK_MSGS::TRACKINGSTATE_V2_3_15"))
(defconstant piksi_rtk_msgs::TrackingState_V2_3_15::*CODE_GLO_L1CA* 3)
(intern "*CODE_GLO_L2CA*" (find-package "PIKSI_RTK_MSGS::TRACKINGSTATE_V2_3_15"))
(shadow '*CODE_GLO_L2CA* (find-package "PIKSI_RTK_MSGS::TRACKINGSTATE_V2_3_15"))
(defconstant piksi_rtk_msgs::TrackingState_V2_3_15::*CODE_GLO_L2CA* 4)
(intern "*CODE_GPS_L1P*" (find-package "PIKSI_RTK_MSGS::TRACKINGSTATE_V2_3_15"))
(shadow '*CODE_GPS_L1P* (find-package "PIKSI_RTK_MSGS::TRACKINGSTATE_V2_3_15"))
(defconstant piksi_rtk_msgs::TrackingState_V2_3_15::*CODE_GPS_L1P* 5)
(intern "*CODE_GPS_L2P*" (find-package "PIKSI_RTK_MSGS::TRACKINGSTATE_V2_3_15"))
(shadow '*CODE_GPS_L2P* (find-package "PIKSI_RTK_MSGS::TRACKINGSTATE_V2_3_15"))
(defconstant piksi_rtk_msgs::TrackingState_V2_3_15::*CODE_GPS_L2P* 6)

(defun piksi_rtk_msgs::TrackingState_V2_3_15-to-symbol (const)
  (cond
        ((= const 0) 'piksi_rtk_msgs::TrackingState_V2_3_15::*CODE_GPS_L1CA*)
        ((= const 1) 'piksi_rtk_msgs::TrackingState_V2_3_15::*CODE_GPS_L2CM*)
        ((= const 2) 'piksi_rtk_msgs::TrackingState_V2_3_15::*CODE_SBAS_L1CA*)
        ((= const 3) 'piksi_rtk_msgs::TrackingState_V2_3_15::*CODE_GLO_L1CA*)
        ((= const 4) 'piksi_rtk_msgs::TrackingState_V2_3_15::*CODE_GLO_L2CA*)
        ((= const 5) 'piksi_rtk_msgs::TrackingState_V2_3_15::*CODE_GPS_L1P*)
        ((= const 6) 'piksi_rtk_msgs::TrackingState_V2_3_15::*CODE_GPS_L2P*)
        (t nil)))

(defclass piksi_rtk_msgs::TrackingState_V2_3_15
  :super ros::object
  :slots (_header _sat _code _fcn _cn0 ))

(defmethod piksi_rtk_msgs::TrackingState_V2_3_15
  (:init
   (&key
    ((:header __header) (instance std_msgs::Header :init))
    ((:sat __sat) (make-array 0 :initial-element 0 :element-type :char))
    ((:code __code) (make-array 0 :initial-element 0 :element-type :char))
    ((:fcn __fcn) (make-array 0 :initial-element 0 :element-type :char))
    ((:cn0 __cn0) (make-array 0 :initial-element 0 :element-type :char))
    )
   (send-super :init)
   (setq _header __header)
   (setq _sat __sat)
   (setq _code __code)
   (setq _fcn __fcn)
   (setq _cn0 __cn0)
   self)
  (:header
   (&rest __header)
   (if (keywordp (car __header))
       (send* _header __header)
     (progn
       (if __header (setq _header (car __header)))
       _header)))
  (:sat
   (&optional __sat)
   (if __sat (setq _sat __sat)) _sat)
  (:code
   (&optional __code)
   (if __code (setq _code __code)) _code)
  (:fcn
   (&optional __fcn)
   (if __fcn (setq _fcn __fcn)) _fcn)
  (:cn0
   (&optional __cn0)
   (if __cn0 (setq _cn0 __cn0)) _cn0)
  (:serialization-length
   ()
   (+
    ;; std_msgs/Header _header
    (send _header :serialization-length)
    ;; uint8[] _sat
    (* 1    (length _sat)) 4
    ;; uint8[] _code
    (* 1    (length _code)) 4
    ;; uint8[] _fcn
    (* 1    (length _fcn)) 4
    ;; uint8[] _cn0
    (* 1    (length _cn0)) 4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; std_msgs/Header _header
       (send _header :serialize s)
     ;; uint8[] _sat
     (write-long (length _sat) s)
     (princ _sat s)
     ;; uint8[] _code
     (write-long (length _code) s)
     (princ _code s)
     ;; uint8[] _fcn
     (write-long (length _fcn) s)
     (princ _fcn s)
     ;; uint8[] _cn0
     (write-long (length _cn0) s)
     (princ _cn0 s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; std_msgs/Header _header
     (send _header :deserialize buf ptr-) (incf ptr- (send _header :serialization-length))
   ;; uint8[] _sat
   (let ((n (sys::peek buf ptr- :integer))) (incf ptr- 4)
     (setq _sat (make-array n :element-type :char))
     (replace _sat buf :start2 ptr-) (incf ptr- n))
   ;; uint8[] _code
   (let ((n (sys::peek buf ptr- :integer))) (incf ptr- 4)
     (setq _code (make-array n :element-type :char))
     (replace _code buf :start2 ptr-) (incf ptr- n))
   ;; uint8[] _fcn
   (let ((n (sys::peek buf ptr- :integer))) (incf ptr- 4)
     (setq _fcn (make-array n :element-type :char))
     (replace _fcn buf :start2 ptr-) (incf ptr- n))
   ;; uint8[] _cn0
   (let ((n (sys::peek buf ptr- :integer))) (incf ptr- 4)
     (setq _cn0 (make-array n :element-type :char))
     (replace _cn0 buf :start2 ptr-) (incf ptr- n))
   ;;
   self)
  )

(setf (get piksi_rtk_msgs::TrackingState_V2_3_15 :md5sum-) "0a051c9934e022ee2abf2e31fc142ed2")
(setf (get piksi_rtk_msgs::TrackingState_V2_3_15 :datatype-) "piksi_rtk_msgs/TrackingState_V2_3_15")
(setf (get piksi_rtk_msgs::TrackingState_V2_3_15 :definition-)
      "# The tracking message returns a variable-length array of tracking channel states. It reports status and
# carrier-to-noise density measurements for all tracked satellites.

# Message definition based on libsbp v2.3.15

Header header

uint8[] sat     # Constellation-specific satellite identifier.
uint8[] code    # Signal constellation, band and code.
uint8[] fcn     # Frequency channel number (GLONASS only).
uint8[] cn0     # Carrier-to-Noise density. Zero implies invalid cn0 [dB Hz / 4].


uint8 CODE_GPS_L1CA     = 0
uint8 CODE_GPS_L2CM     = 1
uint8 CODE_SBAS_L1CA    = 2
uint8 CODE_GLO_L1CA     = 3
uint8 CODE_GLO_L2CA     = 4
uint8 CODE_GPS_L1P      = 5
uint8 CODE_GPS_L2P      = 6

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



(provide :piksi_rtk_msgs/TrackingState_V2_3_15 "0a051c9934e022ee2abf2e31fc142ed2")


