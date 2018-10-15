;; Auto-generated. Do not edit!


(when (boundp 'dgvmsg::DriverVelocity)
  (if (not (find-package "DGVMSG"))
    (make-package "DGVMSG"))
  (shadow 'DriverVelocity (find-package "DGVMSG")))
(unless (find-package "DGVMSG::DRIVERVELOCITY")
  (make-package "DGVMSG::DRIVERVELOCITY"))

(in-package "ROS")
;;//! \htmlinclude DriverVelocity.msg.html


(defclass dgvmsg::DriverVelocity
  :super ros::object
  :slots (_driver ))

(defmethod dgvmsg::DriverVelocity
  (:init
   (&key
    ((:driver __driver) (let (r) (dotimes (i 0) (push (instance dgvmsg::DriverNode :init) r)) r))
    )
   (send-super :init)
   (setq _driver __driver)
   self)
  (:driver
   (&rest __driver)
   (if (keywordp (car __driver))
       (send* _driver __driver)
     (progn
       (if __driver (setq _driver (car __driver)))
       _driver)))
  (:serialization-length
   ()
   (+
    ;; dgvmsg/DriverNode[] _driver
    (apply #'+ (send-all _driver :serialization-length)) 4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; dgvmsg/DriverNode[] _driver
     (write-long (length _driver) s)
     (dolist (elem _driver)
       (send elem :serialize s)
       )
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; dgvmsg/DriverNode[] _driver
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _driver (let (r) (dotimes (i n) (push (instance dgvmsg::DriverNode :init) r)) r))
     (dolist (elem- _driver)
     (send elem- :deserialize buf ptr-) (incf ptr- (send elem- :serialization-length))
     ))
   ;;
   self)
  )

(setf (get dgvmsg::DriverVelocity :md5sum-) "97330beae4312907dc78de56d0603bd5")
(setf (get dgvmsg::DriverVelocity :datatype-) "dgvmsg/DriverVelocity")
(setf (get dgvmsg::DriverVelocity :definition-)
      "# This expresses velocity in free space broken into its linear and angular parts.

DriverNode[] driver
================================================================================
MSG: dgvmsg/DriverNode
# This represents a vector in free space. 
# It is only meant to represent a direction. Therefore, it does not
# make sense to apply a translation to it (e.g., when applying a 
# generic rigid transformation to a Vector3, tf2 will only apply the
# rotation). If you want your data to be translatable too, use the

string name
int32 add
int32 VRPM
float64 Vspeed

")



(provide :dgvmsg/DriverVelocity "97330beae4312907dc78de56d0603bd5")


