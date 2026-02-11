# a_r2_trajectory_viz

`a_r2.urdf` を RViz に表示し、`trajectory_msgs/msg/JointTrajectory` を受信して `/joint_states` を配信する ROS2 パッケージです。

## 起動

```bash
ros2 launch a_r2_trajectory_viz a_r2_trajectory_viz.launch.py
```

RViz設定を上書きする場合:

```bash
ros2 launch a_r2_trajectory_viz a_r2_trajectory_viz.launch.py \
  rviz_config:=/opt/ros/humble/share/urdf_launch/config/urdf.rviz
```

## Trajectory 送信例

```bash
ros2 topic pub --once /joint_trajectory trajectory_msgs/msg/JointTrajectory "
joint_names: ['Slider 1', 'Revolute 2', 'Revolute 3', 'Slider 4', 'Revolute 5', 'Slider 6']
points:
- positions: [0.05, 0.0, 0.0, 0.1, 0.0, 0.0]
  time_from_start: {sec: 1}
- positions: [0.10, 0.4, 0.6, 0.2, 0.3, 0.03]
  time_from_start: {sec: 3}
"
```
