;; Auto-generated. Do not edit!


(when (boundp 'dgvmsg::Twist)
  (if (not (find-package "DGVMSG"))
    (make-package "DGVMSG"))
  (shadow 'Twist (find-package "DGVMSG")))
(unless (find-package "DGVMSG::TWIST")
  (make-package "DGVMSG::TWIST"))

(in-package "ROS")
;;//! \htmlinclude Twist.msg.html


(defclass dgvmsg::Twist
  :super ros::object
  :slots (_linear _angular ))

(defmethod dgvmsg::Twist
  (:init
   (&key
    ((:linear __linear) (instance dgvmsg::Vector3 :init))
    ((:angular __angular) (instance dgvmsg::Vector3 :init))
    )
   (send-super :init)
   (setq _linear __linear)
   (setq _angular __angular)
   self)
  (:linear
   (&rest __linear)
   (if (keywordp (car __linear))
       (send* _linear __linear)
     (progn
       (if __linear (setq _linear (car __linear)))
       _linear)))
  (:angular
   (&rest __angular)
   (if (keywordp (car __angular))
       (send* _angular __angular)
     (progn
       (if __angular (setq _angular (car __angular)))
       _angular)))
  (:serialization-length
   ()
   (+
    ;; dgvmsg/Vector3 _linear
    (send _linear :serialization-length)
    ;; dgvmsg/Vector3 _angular
    (send _angular :serialization-length)
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; dgvmsg/Vector3 _linear
       (send _linear :serialize s)
     ;; dgvmsg/Vector3 _angular
       (send _angular :serialize s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; dgvmsg/Vector3 _linear
     (send _linear :deserialize buf ptr-) (incf ptr- (send _linear :serialization-length))
   ;; dgvmsg/Vector3 _angular
     (send _angular :deserialize buf ptr-) (incf ptr- (send _angular :serialization-length))
   ;;
   self)
  )

(setf (get dgvmsg::Twist :md5sum-) "9f195f881246fdfa2798d1d3eebca84a")
(setf (get dgvmsg::Twist :datatype-) "dgvmsg/Twist")
(setf (get dgvmsg::Twist :definition-)
      "# This expresses velocity in free space broken into its linear and angular parts.
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



(provide :dgvmsg/Twist "9f195f881246fdfa2798d1d3eebca84a")


