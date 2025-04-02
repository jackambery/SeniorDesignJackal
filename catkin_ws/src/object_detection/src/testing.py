#!/usr/bin/env python3

import rospy
from geometry_msgs.msg import Twist

rospy.init_node('move_jackal')
pub = rospy.Publisher('/jackal_velocity_controller/cmd_vel', Twist, queue_size=10)
rate = rospy.Rate(10) # 10 Hz

move_cmd = Twist()
move_cmd.linear.x = 0.5 # Forward velocity
move_cmd.angular.z = 0.2 # Rotation velocity

while not rospy.is_shutdown():
    pub.publish(move_cmd)
    rate.sleep()
