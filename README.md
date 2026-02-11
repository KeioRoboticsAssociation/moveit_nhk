# R2 arm 立ち上げ手順（Action通信）

このワークスペースでは、`PathIndex` Action を使って `path_index` を送ると、
`nhk_bt/path_index_action_server` が `/arm_cmd` を publish し、
`r2_odrive/rtz_to_joint_trajectory` が `JointTrajectory` に変換します。

## クイックスタート

各コマンドは別ターミナルで実行してください。

```bash
# ターミナル1: デモ
ros2 launch a_r2_trajectory_viz a_r2_trajectory_viz.launch.py
```

```bash
# ターミナル2: /arm_cmd -> JointTrajectory 変換
ros2 run r2_odrive rtz_to_joint_trajectory
```

```bash
# ターミナル3: JointState -> RogidriveMessage
ros2 run r2_odrive odrive_controller_node
```

```bash
# ターミナル4: ODrive ドライバ（JSON 設定が必須）
ros2 run rogidrive rogidrive --ros-args -p config_path:='/home/a/ws_nhk/src/r2_odrive/config/odrive_config.json'
```

```bash
# ターミナル5: PathIndex Action Server
ros2 run nhk_bt path_index_action_server
```

## Action通信の試験

`path_index` は `0..5` を受け付けます。

```bash
# 例: path_index=3 を送信
ros2 action send_goal --feedback /path_index nhk_action_interfaces/action/PathIndex "{path_index: 3}"
```

## path_index と /arm_cmd の対応

デフォルトは `nhk_bt/path_index_action_server` 内で次の対応です。`[Slider 4, Revolute 2, Revolute 5]`

- `0 -> [0.0, 1.9545, 0.0] 右下` 
- `1 -> [0.0, 1.7505, 0.0] 右中央`
- `2 -> [0.0, 1.5303, 0.0] 右上`
- `3 -> [0.0, -1.5303, 0.0] 左上`
- `4 -> [0.0, -1.7505, 0.0] 左中央`
- `5 -> [0.0, -1.9545, 0.0] 左下`

