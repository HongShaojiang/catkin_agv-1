;; Auto-generated. Do not edit!


(when (boundp 'dgvmsg::EncounterV)
  (if (not (find-package "DGVMSG"))
    (make-package "DGVMSG"))
  (shadow 'EncounterV (find-package "DGVMSG")))
(unless (find-package "DGVMSG::ENCOUNTERV")
  (make-package "DGVMSG::ENCOUNTERV"))

(in-package "ROS")
;;//! \htmlinclude EncounterV.msg.html


(defclass dgvmsg::EncounterV
  :super ros::object
  :slots (_cnt ))

(defmethod dgvmsg::EncounterV
  (:init
   (&key
    ((:cnt __cnt) (let (r) (dotimes (i 0) (push (instance dgvmsg::Encounter :init) r)) r))
    )
   (send-super :init)
   (setq _cnt __cnt)
   self)
  (:cnt
   (&rest __cnt)
   (if (keywordp (car __cnt))
       (send* _cnt __cnt)
     (progn
       (if __cnt (setq _cnt (car __cnt)))
       _cnt)))
  (:serialization-length
   ()
   (+
    ;; dgvmsg/Encounter[] _cnt
    (apply #'+ (send-all _cnt :serialization-length)) 4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; dgvmsg/Encounter[] _cnt
     (write-long (length _cnt) s)
     (dolist (elem _cnt)
       (send elem :serialize s)
       )
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; dgvmsg/Encounter[] _cnt
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _cnt (let (r) (dotimes (i n) (push (instance dgvmsg::Encounter :init) r)) r))
     (dolist (elem- _cnt)
     (send elem- :deserialize buf ptr-) (incf ptr- (send elem- :serialization-length))
     ))
   ;;
   self)
  )

(setf (get dgvmsg::EncounterV :md5sum-) "7c4fe66bdf34f3810baffb53223c0c09")
(setf (get dgvmsg::EncounterV :datatype-) "dgvmsg/EncounterV")
(setf (get dgvmsg::EncounterV :definition-)
      "Encounter[] cnt
================================================================================
MSG: dgvmsg/Encounter
# This is a message to hold data from an IMU (Inertial Measurement Unit)
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



(provide :dgvmsg/EncounterV "7c4fe66bdf34f3810baffb53223c0c09")


