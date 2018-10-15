;; Auto-generated. Do not edit!


(when (boundp 'dgvmsg::DriverNode)
  (if (not (find-package "DGVMSG"))
    (make-package "DGVMSG"))
  (shadow 'DriverNode (find-package "DGVMSG")))
(unless (find-package "DGVMSG::DRIVERNODE")
  (make-package "DGVMSG::DRIVERNODE"))

(in-package "ROS")
;;//! \htmlinclude DriverNode.msg.html


(defclass dgvmsg::DriverNode
  :super ros::object
  :slots (_name _add _VRPM _Vspeed ))

(defmethod dgvmsg::DriverNode
  (:init
   (&key
    ((:name __name) "")
    ((:add __add) 0)
    ((:VRPM __VRPM) 0)
    ((:Vspeed __Vspeed) 0.0)
    )
   (send-super :init)
   (setq _name (string __name))
   (setq _add (round __add))
   (setq _VRPM (round __VRPM))
   (setq _Vspeed (float __Vspeed))
   self)
  (:name
   (&optional __name)
   (if __name (setq _name __name)) _name)
  (:add
   (&optional __add)
   (if __add (setq _add __add)) _add)
  (:VRPM
   (&optional __VRPM)
   (if __VRPM (setq _VRPM __VRPM)) _VRPM)
  (:Vspeed
   (&optional __Vspeed)
   (if __Vspeed (setq _Vspeed __Vspeed)) _Vspeed)
  (:serialization-length
   ()
   (+
    ;; string _name
    4 (length _name)
    ;; int32 _add
    4
    ;; int32 _VRPM
    4
    ;; float64 _Vspeed
    8
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; string _name
       (write-long (length _name) s) (princ _name s)
     ;; int32 _add
       (write-long _add s)
     ;; int32 _VRPM
       (write-long _VRPM s)
     ;; float64 _Vspeed
       (sys::poke _Vspeed (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; string _name
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _name (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;; int32 _add
     (setq _add (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;; int32 _VRPM
     (setq _VRPM (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;; float64 _Vspeed
     (setq _Vspeed (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;;
   self)
  )

(setf (get dgvmsg::DriverNode :md5sum-) "97dea7a29a79ed3e3ede5691994f3c14")
(setf (get dgvmsg::DriverNode :datatype-) "dgvmsg/DriverNode")
(setf (get dgvmsg::DriverNode :definition-)
      "# This represents a vector in free space. 
# It is only meant to represent a direction. Therefore, it does not
# make sense to apply a translation to it (e.g., when applying a 
# generic rigid transformation to a Vector3, tf2 will only apply the
# rotation). If you want your data to be translatable too, use the

string name
int32 add
int32 VRPM
float64 Vspeed

")



(provide :dgvmsg/DriverNode "97dea7a29a79ed3e3ede5691994f3c14")


