# SEN0592 (GL5350 ToF) Sensor Node

This directory contains the ESPHome configuration for the DFRobot SEN0592 ToF distance sensor.

## ROS 2 Node
The corresponding ROS 2 node for this sensor is `sen0592_node`. It polls the ESPHome web server to retrieve distance measurements and publishes them as a `sensor_msgs/Range` message.

- **Default IP:** `192.168.105.65`
- **ESPHome Endpoint:** `/sensor/distance_sensor`
- **Output Topic:** `/sen0592/distance` (Range in meters)
- **Frame ID:** `sen0592_link`

### Usage
Run the node using:
```bash
source /mnt/c/KM/ROS2-Sensor-Nodes-RVZ/install/setup.bash
ros2 run rovozci_glsensor sen0592_node --ros-args -p sensor_ip:="192.168.105.65"
```
