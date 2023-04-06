# Run the folloing commands:
  	
	cd workspace
	colcon build --packages-select merge_arrays
	ros2 run merge_arrays merge_arrays_node
	ros2 topic pub /input/array1  std_msgs/msg/Int32MultiArray "{data: [3,9,18,20,30], layout: {dim:[]}}"
	ros2 topic pub /input/array2  std_msgs/msg/Int32MultiArray "{data: [1,4,8,12,36], layout: {dim:[]}}"
