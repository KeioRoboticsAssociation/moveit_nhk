# NHK ロボット起動手順（`nhk_launch`）

このワークスペースは、`nhk_launch` パッケージの launch 1本で必要ノードを一括起動できます。

## 起動

```bash
cd /home/a/ws_nhk
source /opt/ros/humble/setup.bash
source /home/a/ws_nhk/install/setup.bash
ros2 launch nhk_launch nhk.launch.py
```

上記で次を同時起動します。

- `ros2 launch a_r2_trajectory_viz a_r2_trajectory_viz.launch.py`
- `ros2 run r2_odrive rtz_to_joint_trajectory --ros-args -p duration_sec:=2.0`
- `ros2 run r2_odrive odrive_controller_node`
- `ros2 run rogidrive rogidrive --ros-args -p config_path:=/home/a/ws_nhk/src/r2_odrive/config/odrive_config.json`
- `ros2 launch rogilink_flex_gui gui.launch.py config_path:=/home/a/ws_nhk/src/r2_odrive/config/config.json`
- `ros2 run nhk_bt path_index_action_server`
- `ros2 launch nhk_bt path_index_gui.launch.py`

## launch引数

`config_path`（rogilink_flex_gui用）と`rogidrive_config_path`（rogidrive用）を上書きできます。

```bash
ros2 launch nhk_launch nhk.launch.py \
  config_path:=/path/to/gui_config.json \
  rogidrive_config_path:=/path/to/odrive_config.json
```

## Action通信の試験

`path_index` は `0..5` を受け付けます。

```bash
ros2 action send_goal --feedback /path_index nhk_action_interfaces/action/PathIndex "{path_index: 3}"
```

## path_index と /arm_cmd の対応

`nhk_bt/path_index_action_server` のデフォルト対応（`[Slider 4, Revolute 2, Revolute 5]`）:

- `0 -> [0.0, 1.9545, 0.0]` 右下
- `1 -> [0.0, 1.7505, 0.0]` 右中央
- `2 -> [0.0, 1.5303, 0.0]` 右上
- `3 -> [0.0, -1.5303, 0.0]` 左上
- `4 -> [0.0, -1.7505, 0.0]` 左中央
- `5 -> [0.0, -1.9545, 0.0]` 左下

## 停止時の注意

`Ctrl+C` 後にトピックが残って見える場合は daemon キャッシュの可能性があります。

```bash
ros2 topic list --no-daemon
ros2 daemon stop
ros2 daemon start
```
