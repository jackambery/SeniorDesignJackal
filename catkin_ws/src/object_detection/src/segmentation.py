#!/usr/bin/env python3

import time

import ros_numpy
import rospy
from sensor_msgs.msg import Image

from ultralytics import YOLO

detection_model = YOLO("yolo11n.pt")
segmentation_model = YOLO("yolo11n-seg.pt")
rospy.init_node("ultralytics")
time.sleep(1)

det_image_pub = rospy.Publisher("/ultralytics/detection/image", Image, queue_size=5)
seg_image_pub = rospy.Publisher("/ultralytics/segmentation/image", Image, queue_size=5)


def callback(data):
    """Callback function to process image and publish annotated images."""
    array = ros_numpy.numpify(data)
    if det_image_pub.get_num_connections():
        det_result = detection_model(array)
        det_annotated = det_result[0].plot(show=False)
        det_image_pub.publish(ros_numpy.msgify(Image, det_annotated, encoding="rgb8"))

    if seg_image_pub.get_num_connections():
        seg_result = segmentation_model(array)
        seg_annotated = seg_result[0].plot(show=False)
        seg_image_pub.publish(ros_numpy.msgify(Image, seg_annotated, encoding="rgb8"))


rospy.Subscriber("/camera/image_color", Image, callback)

while True:
    rospy.spin()
