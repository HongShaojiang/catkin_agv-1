;; Auto-generated. Do not edit!


(when (boundp 'dgvmsg::LaserEcho)
  (if (not (find-package "DGVMSG"))
    (make-package "DGVMSG"))
  (shadow 'LaserEcho (find-package "DGVMSG")))
(unless (find-package "DGVMSG::LASERECHO")
  (make-package "DGVMSG::LASERECHO"))

(in-package "ROS")
;;//! \htmlinclude LaserEcho.msg.html


(defclass dgvmsg::LaserEcho
  :super ros::object
  :slots (_echoes ))

(defmethod dgvmsg::LaserEcho
  (:init
   (&key
    ((:echoes __echoes) (make-array 0 :initial-element 0.0 :element-type :float))
    )
   (send-super :init)
   (setq _echoes __echoes)
   self)
  (:echoes
   (&optional __echoes)
   (if __echoes (setq _echoes __echoes)) _echoes)
  (:serialization-length
   ()
   (+
    ;; float32[] _echoes
    (* 4    (length _echoes)) 4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; float32[] _echoes
     (write-long (length _echoes) s)
     (dotimes (i (length _echoes))
       (sys::poke (elt _echoes i) (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
       )
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; float32[] _echoes
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _echoes (instantiate float-vector n))
     (dotimes (i n)
     (setf (elt _echoes i) (sys::peek buf ptr- :float)) (incf ptr- 4)
     ))
   ;;
   self)
  )

(setf (get dgvmsg::LaserEcho :md5sum-) "8bc5ae449b200fba4d552b4225586696")
(setf (get dgvmsg::LaserEcho :datatype-) "dgvmsg/LaserEcho")
(setf (get dgvmsg::LaserEcho :definition-)
      "# This message is a submessage of MultiEchoLaserScan and is not intended
# to be used separately.

float32[] echoes  # Multiple values of ranges or intensities.
                  # Each array represents data from the same angle increment.
")



(provide :dgvmsg/LaserEcho "8bc5ae449b200fba4d552b4225586696")


