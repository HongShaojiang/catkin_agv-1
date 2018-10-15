;; Auto-generated. Do not edit!


(when (boundp 'dgvmsg::String)
  (if (not (find-package "DGVMSG"))
    (make-package "DGVMSG"))
  (shadow 'String (find-package "DGVMSG")))
(unless (find-package "DGVMSG::STRING")
  (make-package "DGVMSG::STRING"))

(in-package "ROS")
;;//! \htmlinclude String.msg.html


(defclass dgvmsg::String
  :super ros::object
  :slots (_data ))

(defmethod dgvmsg::String
  (:init
   (&key
    ((:data __data) "")
    )
   (send-super :init)
   (setq _data (string __data))
   self)
  (:data
   (&optional __data)
   (if __data (setq _data __data)) _data)
  (:serialization-length
   ()
   (+
    ;; string _data
    4 (length _data)
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; string _data
       (write-long (length _data) s) (princ _data s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; string _data
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _data (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;;
   self)
  )

(setf (get dgvmsg::String :md5sum-) "992ce8a1687cec8c8bd883ec73ca41d1")
(setf (get dgvmsg::String :datatype-) "dgvmsg/String")
(setf (get dgvmsg::String :definition-)
      "string data

")



(provide :dgvmsg/String "992ce8a1687cec8c8bd883ec73ca41d1")


