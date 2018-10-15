# Install script for directory: /home/nvidia/catkin_agv/src/dgvmsg

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/nvidia/catkin_agv/install")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Debug")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/dgvmsg/msg" TYPE FILE FILES
    "/home/nvidia/catkin_agv/src/dgvmsg/msg/ctrl_ModeMessage.msg"
    "/home/nvidia/catkin_agv/src/dgvmsg/msg/Imu.msg"
    "/home/nvidia/catkin_agv/src/dgvmsg/msg/Joy.msg"
    "/home/nvidia/catkin_agv/src/dgvmsg/msg/String.msg"
    "/home/nvidia/catkin_agv/src/dgvmsg/msg/Twist.msg"
    "/home/nvidia/catkin_agv/src/dgvmsg/msg/Vector3.msg"
    "/home/nvidia/catkin_agv/src/dgvmsg/msg/LaserScan.msg"
    "/home/nvidia/catkin_agv/src/dgvmsg/msg/LaserEcho.msg"
    "/home/nvidia/catkin_agv/src/dgvmsg/msg/JoyFeedbackArray.msg"
    "/home/nvidia/catkin_agv/src/dgvmsg/msg/JoyFeedback.msg"
    "/home/nvidia/catkin_agv/src/dgvmsg/msg/DriverNode.msg"
    "/home/nvidia/catkin_agv/src/dgvmsg/msg/DriverVelocity.msg"
    "/home/nvidia/catkin_agv/src/dgvmsg/msg/Encounter.msg"
    "/home/nvidia/catkin_agv/src/dgvmsg/msg/EncounterV.msg"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/dgvmsg/cmake" TYPE FILE FILES "/home/nvidia/catkin_agv/build/dgvmsg/catkin_generated/installspace/dgvmsg-msg-paths.cmake")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE DIRECTORY FILES "/home/nvidia/catkin_agv/devel/include/dgvmsg")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/roseus/ros" TYPE DIRECTORY FILES "/home/nvidia/catkin_agv/devel/share/roseus/ros/dgvmsg")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/common-lisp/ros" TYPE DIRECTORY FILES "/home/nvidia/catkin_agv/devel/share/common-lisp/ros/dgvmsg")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/gennodejs/ros" TYPE DIRECTORY FILES "/home/nvidia/catkin_agv/devel/share/gennodejs/ros/dgvmsg")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  execute_process(COMMAND "/usr/bin/python" -m compileall "/home/nvidia/catkin_agv/devel/lib/python2.7/dist-packages/dgvmsg")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python2.7/dist-packages" TYPE DIRECTORY FILES "/home/nvidia/catkin_agv/devel/lib/python2.7/dist-packages/dgvmsg")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES "/home/nvidia/catkin_agv/build/dgvmsg/catkin_generated/installspace/dgvmsg.pc")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/dgvmsg/cmake" TYPE FILE FILES "/home/nvidia/catkin_agv/build/dgvmsg/catkin_generated/installspace/dgvmsg-msg-extras.cmake")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/dgvmsg/cmake" TYPE FILE FILES
    "/home/nvidia/catkin_agv/build/dgvmsg/catkin_generated/installspace/dgvmsgConfig.cmake"
    "/home/nvidia/catkin_agv/build/dgvmsg/catkin_generated/installspace/dgvmsgConfig-version.cmake"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/dgvmsg" TYPE FILE FILES "/home/nvidia/catkin_agv/src/dgvmsg/package.xml")
endif()

