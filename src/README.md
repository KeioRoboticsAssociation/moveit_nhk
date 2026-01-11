# R2 ODrive 立ち上げ手順（MoveIt + Rogidrive）

このワークスペースでは MoveIt が `JointTrajectory` を出力し、
`r2_odrive` が `RogidriveMessage` に変換して `rogidrive` が ODrive を駆動します。

## クイックスタート

各コマンドは別ターミナルで実行してください。

```bash
# ターミナル1: MoveIt デモ（/arm_controller/joint_trajectory と /joint_states を提供）
ros2 launch moveit_r2_config demo.launch.py
```

```bash
# ターミナル2: r/t/z -> JointTrajectory
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

## 注意点

- `rogidrive` は JSON を直接読みます。`r2_odrive/config/odrive_config.json` の
  モータ名が、`odrive_controller_node` が出す `RogidriveMessage.name` と一致している必要があります。
- `odrive_controller_node` は `joint_names` パラメータで送出対象を決めます。
  デフォルトには `Revolute 2` が含まれますが、JSON 側は `Slider 1` と `Slider 4` のみです。
  モータ未登録のエラーが出る場合は名前を揃えてください。
- MoveIt デモは `mock_components/GenericSystem` を使うため、実機用ドライバではありません。
  実機連動を前提にする場合は別途 ros2_control 実機構成が必要です。
- `/odrive_cmd` を流す前に `rogidrive` を起動して校正が完了していることを推奨します。

## パラメータ（任意）

`odrive_controller_node`:

```bash
ros2 run r2_odrive odrive_controller_node --ros-args \
  -p joint_state_topic:=/joint_states \
  -p odrive_cmd_topic:=/odrive_cmd \
  -p joint_names:="[Slider 1, Slider 4]" \
  -p default_mode:=3
```

`rtz_to_joint_trajectory`:

```bash
ros2 run r2_odrive rtz_to_joint_trajectory --ros-args \
  -p input_topic:=/r_cmd \
  -p output_topic:=/arm_controller/joint_trajectory \
  -p joint_names:="[Slider 1, Revolute 2, Revolute 3, Slider 4, Slider 5]"
```

## テスト用の r コマンド送信

`rtz_to_joint_trajectory` は `std_msgs/msg/Float32` を購読します。
テスト用に `/r_cmd` を手動で送る例は以下です。

```bash
# 1回だけ送信
ros2 topic pub --once /r_cmd std_msgs/msg/Float32 "{data: 0.1}"
```

```bash
# 10 Hz で連続送信
ros2 topic pub -r 10 /r_cmd std_msgs/msg/Float32 "{data: 0.1}"
```
