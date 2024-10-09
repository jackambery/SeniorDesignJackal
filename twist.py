#!/usr/bin/env python3

import rospy
from geometry_msgs.msg import Twist
import time

def move_straight(pub, speed, duration):
    vel_msg = Twist()
    vel_msg.linear.x = speed  # Move forward
    vel_msg.angular.z = 0.0   # No rotation

    start_time = rospy.Time.now().to_sec()
    while rospy.Time.now().to_sec() - start_time < duration:
        pub.publish(vel_msg)
        rospy.sleep(0.1)

    # Stop the robot after moving straight
    vel_msg.linear.x = 0.0
    pub.publish(vel_msg)

def turn_90_degrees(pub, angular_speed, duration):
    vel_msg = Twist()
    vel_msg.linear.x = 0.0    # No forward movement
    vel_msg.angular.z = angular_speed  # Turn

    start_time = rospy.Time.now().to_sec()
    while rospy.Time.now().to_sec() - start_time < duration:
        pub.publish(vel_msg)
        rospy.sleep(0.1)

    # Stop the robot after the turn
    vel_msg.angular.z = 0.0
    pub.publish(vel_msg)

def move_in_box():
    rospy.init_node('jackal_box_motion', anonymous=True)
    pub = rospy.Publisher('/cmd_vel', Twist, queue_size=10)

    rate = rospy.Rate(10)  # 10 Hz

    # Set speeds and durations
    linear_speed = 0.5  # Move at 0.5 m/s
    angular_speed = 0.5  # Rotate at 0.5 rad/s
    straight_duration = 4  # Move straight for 4 seconds
    turn_duration = 1.57 / angular_speed  # 90 degree turn duration (π/2 rad)

    # Loop through 4 sides of the box
    for _ in range(4):
        move_straight(pub, linear_speed, straight_duration)
        rospy.sleep(1)  # Pause for a moment
        turn_90_degrees(pub, angular_speed, turn_duration)
        rospy.sleep(1)  # Pause after turning

if __name__ == '__main__':
    try:
        move_in_box()
    except rospy.ROSInterruptException:
        pass
