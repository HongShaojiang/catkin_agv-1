;; Auto-generated. Do not edit!


(when (boundp 'dgvmsg::Encounter)
  (if (not (find-package "DGVMSG"))
    (make-package "DGVMSG"))
  (shadow 'Encounter (find-package "DGVMSG")))
(unless (find-package "DGVMSG::ENCOUNTER")
  (make-package "DGVMSG::ENCOUNTER"))

(in-package "ROS")
;;//! \htmlinclude Encounter.msg.html
(if (not (find-package "STD_MSGS"))
  (ros::roseus-add-msgs "std_msgs"))


(defclass dgvmsg::Encounter
  :super ros::object
  :slots (_header _devadd _now _encounter ))

(defmethod dgvmsg::Encounter
  (:init
   (&key
    ((:header __header) (instance std_msgs::Header :init))
    ((:devadd __devadd) 0)
    ((:now __now) (instance ros::time :init))
    ((:encounter __encounter) 0)
    )
   (send-super :init)
   (setq _header __header)
   (setq _devadd (round __devadd))
   (setq _now __now)
   (setq _encounter (round __encounter))
   self)
  (:header
   (&rest __header)
   (if (keywordp (car __header))
       (send* _header __header)
     (progn
       (if __header (setq _header (car __header)))
       _header)))
  (:devadd
   (&optional __devadd)
   (if __devadd (setq _devadd __devadd)) _devadd)
  (:now
   (&optional __now)
   (if __now (setq _now __now)) _now)
  (:encounter
   (&optional __encounter)
   (if __encounter (setq _encounter __encounter)) _encounter)
  (:serialization-length
   ()
   (+
    ;; std_msgs/Header _header
    (send _header :serialization-length)
    ;; int32 _devadd
    4
    ;; time _now
    8
    ;; uint32 _encounter
    4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; std_msgs/Header _header
       (send _header :serialize s)
     ;; int32 _devadd
       (write-long _devadd s)
     ;; time _now
       (write-long (send _now :sec) s) (write-long (send _now :nsec) s)
     ;; uint32 _encounter
       (write-long _encounter s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; std_msgs/Header _header
     (send _header :deserialize buf ptr-) (incf ptr- (send _header :serialization-length))
   ;; int32 _devadd
     (setq _devadd (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;; time _now
     (send _now :sec (sys::peek buf ptr- :integer)) (incf ptr- 4)  (send _now :nsec (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;; uint32 _encounter
     (setq _encounter (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;;
   self)
  )

(setf (get dgvmsg::Encounter :md5sum-) "297ccc212aebf37b07c8d983c849a391")
(setf (get dgvmsg::Encounter :datatype-) "dgvmsg/Encounter")
(setf (get dgvmsg::Encounter :definition-)
      "# This is a message to hold data from an IMU (Inertial Measurement Unit)
#
# Accelerations should be in m/s^2 (not in g's), and rotational velocity should be in rad/sec
#
# If the covariance of the measurement is known, it should be filled in (if all you know is the 
# variance of each measurement, e.g. from the datasheet, just put those along the diagonal)
# A covariance matrix of all zeros will be interpreted as \"covariance unknown\", and to use the
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

")



(provide :dgvmsg/Encounter "297ccc212aebf37b07c8d983c849a391")


