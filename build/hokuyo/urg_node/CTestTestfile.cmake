# CMake generated Testfile for 
# Source directory: /home/nvidia/catkin_agv/src/hokuyo/urg_node
# Build directory: /home/nvidia/catkin_agv/build/hokuyo/urg_node
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(_ctest_urg_node_roslint_package "/home/nvidia/catkin_agv/build/catkin_generated/env_cached.sh" "/usr/bin/python" "/opt/ros/kinetic/share/catkin/cmake/test/run_tests.py" "/home/nvidia/catkin_agv/build/test_results/urg_node/roslint-urg_node.xml" "--working-dir" "/home/nvidia/catkin_agv/build/hokuyo/urg_node" "--return-code" "/opt/ros/kinetic/share/roslint/cmake/../../../lib/roslint/test_wrapper /home/nvidia/catkin_agv/build/test_results/urg_node/roslint-urg_node.xml make roslint_urg_node")
add_test(_ctest_urg_node_roslaunch-check_launch_urg_lidar.launch "/home/nvidia/catkin_agv/build/catkin_generated/env_cached.sh" "/usr/bin/python" "/opt/ros/kinetic/share/catkin/cmake/test/run_tests.py" "/home/nvidia/catkin_agv/build/test_results/urg_node/roslaunch-check_launch_urg_lidar.launch.xml" "--return-code" "/usr/bin/cmake -E make_directory /home/nvidia/catkin_agv/build/test_results/urg_node" "/opt/ros/kinetic/share/roslaunch/cmake/../scripts/roslaunch-check -o '/home/nvidia/catkin_agv/build/test_results/urg_node/roslaunch-check_launch_urg_lidar.launch.xml' '/home/nvidia/catkin_agv/src/hokuyo/urg_node/launch/urg_lidar.launch' ")
