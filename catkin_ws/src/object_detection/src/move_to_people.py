#!/usr/bin/env python3

import time
import ros_numpy
import rospy
from sensor_msgs.msg import Image
from geometry_msgs.msg import Twist
from ultralytics import YOLO

# Initialize YOLO models
detection_model = YOLO("yolo11n.pt")
segmentation_model = YOLO("yolo11n-seg.pt")

# Initialize the ROS node
rospy.init_node("ultralytics")
time.sleep(1)

# Publishers for annotated images
det_image_pub = rospy.Publisher("/ultralytics/detection/image", Image, queue_size=1)
seg_image_pub = rospy.Publisher("/ultralytics/segmentation/image", Image, queue_size=1)

# Publisher for robot movement commands
cmd_vel_pub = rospy.Publisher("/jackal_velocity_controller/cmd_vel", Twist, queue_size=10)

def callback(data):
    """Callback function to process image and publish annotated images."""
    array = ros_numpy.numpify(data)
    
    if det_image_pub.get_num_connections():
        det_result = detection_model(array)
        det_annotated = det_result[0].plot(show=False)
        det_image_pub.publish(ros_numpy.msgify(Image, det_annotated, encoding="rgb8"))
        
        print("Detection result boxes data:", det_result[0].boxes.data)
        
        # Check if any detections exist and if they have labels
        if det_result and len(det_result[0].boxes.data) > 0:
            for detection in det_result[0].boxes.data:
            
                class_label = int(detection[-1])
                
                if class_label == 0:
                    move_forward(cmd_vel_pub, 0.5, 0.5)
                    print("PERSON DETECTED")
                    break
                 
    if seg_image_pub.get_num_connections():
        seg_result = segmentation_model(array)
        seg_annotated = seg_result[0].plot(show=False)
        seg_image_pub.publish(ros_numpy.msgify(Image, seg_annotated, encoding="rgb8"))

def move_forward(pub, speed, duration):
    print("I AM GOING TO MOVE")
    vel_msg = Twist()
    vel_msg.linear.x = speed  # Move forward
    vel_msg.angular.z = 0.0   # No rotation

    start_time = rospy.Time.now().to_sec()
    while rospy.Time.now().to_sec() - start_time < duration:
        pub.publish(vel_msg)
        print("PUBLSIHED")
        rospy.sleep(0.1)


# def move_forward():
#     """Function to publish a command to move the robot forward."""
#     move_cmd = Twist()
#     move_cmd.linear.x = 0.2  # Adjust speed as needed
#     move_cmd.angular.z = 0.0  # Move straight forward
    
#     end_time = time.time() + 0.5
#     while time.time() < end_time:
#         cmd_vel_pub.publish(move_cmd)
#         rospy.sleep(0.1)

# Subscriber for the camera image topic
rospy.Subscriber("/camera/image_color", Image, callback)

# Keep the node running
rospy.spin()
