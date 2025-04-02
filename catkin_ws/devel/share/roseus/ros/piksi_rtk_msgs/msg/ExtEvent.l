;; Auto-generated. Do not edit!


(when (boundp 'piksi_rtk_msgs::ExtEvent)
  (if (not (find-package "PIKSI_RTK_MSGS"))
    (make-package "PIKSI_RTK_MSGS"))
  (shadow 'ExtEvent (find-package "PIKSI_RTK_MSGS")))
(unless (find-package "PIKSI_RTK_MSGS::EXTEVENT")
  (make-package "PIKSI_RTK_MSGS::EXTEVENT"))

(in-package "ROS")
;;//! \htmlinclude ExtEvent.msg.html
(if (not (find-package "STD_MSGS"))
  (ros::roseus-add-msgs "std_msgs"))


(intern "*PIN_VALUE_LOW*" (find-package "PIKSI_RTK_MSGS::EXTEVENT"))
(shadow '*PIN_VALUE_LOW* (find-package "PIKSI_RTK_MSGS::EXTEVENT"))
(defconstant piksi_rtk_msgs::ExtEvent::*PIN_VALUE_LOW* 0)
(intern "*PIN_VALUE_HIGH*" (find-package "PIKSI_RTK_MSGS::EXTEVENT"))
(shadow '*PIN_VALUE_HIGH* (find-package "PIKSI_RTK_MSGS::EXTEVENT"))
(defconstant piksi_rtk_msgs::ExtEvent::*PIN_VALUE_HIGH* 1)
(intern "*QUALITY_UNKNOWN*" (find-package "PIKSI_RTK_MSGS::EXTEVENT"))
(shadow '*QUALITY_UNKNOWN* (find-package "PIKSI_RTK_MSGS::EXTEVENT"))
(defconstant piksi_rtk_msgs::ExtEvent::*QUALITY_UNKNOWN* 0)
(intern "*QUALITY_GOOD*" (find-package "PIKSI_RTK_MSGS::EXTEVENT"))
(shadow '*QUALITY_GOOD* (find-package "PIKSI_RTK_MSGS::EXTEVENT"))
(defconstant piksi_rtk_msgs::ExtEvent::*QUALITY_GOOD* 1)

(defun piksi_rtk_msgs::ExtEvent-to-symbol (const)
  (cond
        ((= const 0) 'piksi_rtk_msgs::ExtEvent::*PIN_VALUE_LOW*)
        ((= const 1) 'piksi_rtk_msgs::ExtEvent::*PIN_VALUE_HIGH*)
        ((= const 0) 'piksi_rtk_msgs::ExtEvent::*QUALITY_UNKNOWN*)
        ((= const 1) 'piksi_rtk_msgs::ExtEvent::*QUALITY_GOOD*)
        (t nil)))

(defclass piksi_rtk_msgs::ExtEvent
  :super ros::object
  :slots (_stamp _pin_value _quality _pin ))

(defmethod piksi_rtk_msgs::ExtEvent
  (:init
   (&key
    ((:stamp __stamp) (instance std_msgs::Time :init))
    ((:pin_value __pin_value) (instance std_msgs::Bool :init))
    ((:quality __quality) (instance std_msgs::Bool :init))
    ((:pin __pin) (instance std_msgs::UInt8 :init))
    )
   (send-super :init)
   (setq _stamp __stamp)
   (setq _pin_value __pin_value)
   (setq _quality __quality)
   (setq _pin __pin)
   self)
  (:stamp
   (&rest __stamp)
   (if (keywordp (car __stamp))
       (send* _stamp __stamp)
     (progn
       (if __stamp (setq _stamp (car __stamp)))
       _stamp)))
  (:pin_value
   (&rest __pin_value)
   (if (keywordp (car __pin_value))
       (send* _pin_value __pin_value)
     (progn
       (if __pin_value (setq _pin_value (car __pin_value)))
       _pin_value)))
  (:quality
   (&rest __quality)
   (if (keywordp (car __quality))
       (send* _quality __quality)
     (progn
       (if __quality (setq _quality (car __quality)))
       _quality)))
  (:pin
   (&rest __pin)
   (if (keywordp (car __pin))
       (send* _pin __pin)
     (progn
       (if __pin (setq _pin (car __pin)))
       _pin)))
  (:serialization-length
   ()
   (+
    ;; std_msgs/Time _stamp
    (send _stamp :serialization-length)
    ;; std_msgs/Bool _pin_value
    (send _pin_value :serialization-length)
    ;; std_msgs/Bool _quality
    (send _quality :serialization-length)
    ;; std_msgs/UInt8 _pin
    (send _pin :serialization-length)
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; std_msgs/Time _stamp
       (send _stamp :serialize s)
     ;; std_msgs/Bool _pin_value
       (send _pin_value :serialize s)
     ;; std_msgs/Bool _quality
       (send _quality :serialize s)
     ;; std_msgs/UInt8 _pin
       (send _pin :serialize s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; std_msgs/Time _stamp
     (send _stamp :deserialize buf ptr-) (incf ptr- (send _stamp :serialization-length))
   ;; std_msgs/Bool _pin_value
     (send _pin_value :deserialize buf ptr-) (incf ptr- (send _pin_value :serialization-length))
   ;; std_msgs/Bool _quality
     (send _quality :deserialize buf ptr-) (incf ptr- (send _quality :serialization-length))
   ;; std_msgs/UInt8 _pin
     (send _pin :deserialize buf ptr-) (incf ptr- (send _pin :serialization-length))
   ;;
   self)
  )

(setf (get piksi_rtk_msgs::ExtEvent :md5sum-) "4b77a4cb8a0330d533a2dba6cb090edf")
(setf (get piksi_rtk_msgs::ExtEvent :datatype-) "piksi_rtk_msgs/ExtEvent")
(setf (get piksi_rtk_msgs::ExtEvent :definition-)
      "# Reports detection of an external event, the GPS time it occurred, which pin it
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

")



(provide :piksi_rtk_msgs/ExtEvent "4b77a4cb8a0330d533a2dba6cb090edf")


