execute_process(COMMAND "/home/ailabadmins/catkin_ws/build/ethz_piksi_ros/piksi_multi_rtk_ros/catkin_generated/python_distutils_install.sh" RESULT_VARIABLE res)

if(NOT res EQUAL 0)
  message(FATAL_ERROR "execute_process(/home/ailabadmins/catkin_ws/build/ethz_piksi_ros/piksi_multi_rtk_ros/catkin_generated/python_distutils_install.sh) returned error code ")
endif()
