;; Auto-generated. Do not edit!


(when (boundp 'dgvmsg::ctrl_ModeMessage)
  (if (not (find-package "DGVMSG"))
    (make-package "DGVMSG"))
  (shadow 'ctrl_ModeMessage (find-package "DGVMSG")))
(unless (find-package "DGVMSG::CTRL_MODEMESSAGE")
  (make-package "DGVMSG::CTRL_MODEMESSAGE"))

(in-package "ROS")
;;//! \htmlinclude ctrl_ModeMessage.msg.html
(if (not (find-package "STD_MSGS"))
  (ros::roseus-add-msgs "std_msgs"))


(defclass dgvmsg::ctrl_ModeMessage
  :super ros::object
  :slots (_header _online _strcmd _twist ))

(defmethod dgvmsg::ctrl_ModeMessage
  (:init
   (&key
    ((:header __header) (instance std_msgs::Header :init))
    ((:online __online) 0)
    ((:strcmd __strcmd) "")
    ((:twist __twist) (instance dgvmsg::Twist :init))
    )
   (send-super :init)
   (setq _header __header)
   (setq _online (round __online))
   (setq _strcmd (string __strcmd))
   (setq _twist __twist)
   self)
  (:header
   (&rest __header)
   (if (keywordp (car __header))
       (send* _header __header)
     (progn
       (if __header (setq _header (car __header)))
       _header)))
  (:online
   (&optional __online)
   (if __online (setq _online __online)) _online)
  (:strcmd
   (&optional __strcmd)
   (if __strcmd (setq _strcmd __strcmd)) _strcmd)
  (:twist
   (&rest __twist)
   (if (keywordp (car __twist))
       (send* _twist __twist)
     (progn
       (if __twist (setq _twist (car __twist)))
       _twist)))
  (:serialization-length
   ()
   (+
    ;; std_msgs/Header _header
    (send _header :serialization-length)
    ;; int16 _online
    2
    ;; string _strcmd
    4 (length _strcmd)
    ;; dgvmsg/Twist _twist
    (send _twist :serialization-length)
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; std_msgs/Header _header
       (send _header :serialize s)
     ;; int16 _online
       (write-word _online s)
     ;; string _strcmd
       (write-long (length _strcmd) s) (princ _strcmd s)
     ;; dgvmsg/Twist _twist
       (send _twist :serialize s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; std_msgs/Header _header
     (send _header :deserialize buf ptr-) (incf ptr- (send _header :serialization-length))
   ;; int16 _online
     (setq _online (sys::peek buf ptr- :short)) (incf ptr- 2)
   ;; string _strcmd
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _strcmd (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;; dgvmsg/Twist _twist
     (send _twist :deserialize buf ptr-) (incf ptr- (send _twist :serialization-length))
   ;;
   self)
  )

(setf (get dgvmsg::ctrl_ModeMessage :md5sum-) "08e7a508ef56ae0b7efc413d569a0ccc")
(setf (get dgvmsg::ctrl_ModeMessage :datatype-) "dgvmsg/ctrl_ModeMessage")
(setf (get dgvmsg::ctrl_ModeMessage :definition-)
      "# This expresses velocity in free space with uncertainty.
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
")



(provide :dgvmsg/ctrl_ModeMessage "08e7a508ef56ae0b7efc413d569a0ccc")


