# nhk_bt - リモコン制御ビヘイビアツリー

リモコンのボタン入力でシーケンスを制御するBehaviorTree.CPPベースのROS2パッケージ

## 機能

- **丸ボタン**: シーケンスを開始
- **×ボタン**: シーケンスを中断し、初期状態に戻る

## 動作フロー

```
1. 丸ボタン待機
   ↓
2. シーケンス実行 (Step1 → Step2 → Step3)
   - ×ボタンが押されたら即座に中断
   ↓
3. 完了後、再び丸ボタン待機に戻る
```

## ビルド

```bash
cd /home/a/ws_nhk
colcon build --packages-select nhk_bt
source install/setup.bash
```

## 実行方法

### 1. Joyノードの起動

PS4コントローラーを使用する場合:

```bash
ros2 launch ps4_controller ps4_controller.launch.py
# または
ros2 run joy joy_node
```

### 2. BehaviorTreeノードの起動

```bash
ros2 launch nhk_bt remote_control_bt.launch.py
```

カスタムボタンマッピング:

```bash
ros2 launch nhk_bt remote_control_bt.launch.py \
  circle_button_index:=1 \
  cross_button_index:=0
```

## ファイル構成

```
nhk_bt/
├── config/
│   └── remote_control_sequence.xml    # BehaviorTreeの定義
├── include/nhk_bt/
│   └── remote_control_nodes.hpp       # カスタムノードの実装
├── src/
│   └── remote_control_bt_node.cpp     # メインプログラム
├── launch/
│   └── remote_control_bt.launch.py    # Launchファイル
├── CMakeLists.txt
└── package.xml
```

## BehaviorTree構造

```xml
<Repeat>                               <!-- 永続ループ -->
  <Sequence>
    <Condition ID="WaitForCircleButton"/>    <!-- 丸ボタン待機 -->

    <ReactiveSequence>                       <!-- ×で中断可能 -->
      <Inverter>
        <Condition ID="IsCrossButtonPressed"/>  <!-- ×ボタンチェック -->
      </Inverter>

      <Sequence>
        <Action ID="ResetSequenceState"/>    <!-- 初期化 -->
        <Action ID="Step1"/>                 <!-- ステップ1 -->
        <Action ID="Step2"/>                 <!-- ステップ2 -->
        <Action ID="Step3"/>                 <!-- ステップ3 -->
      </Sequence>
    </ReactiveSequence>
  </Sequence>
</Repeat>
```

## カスタマイズ

### シーケンスステップの変更

`config/remote_control_sequence.xml`を編集:

```xml
<Action ID="Step1" name="ステップ1" target_position="0.5"/>
<Action ID="Step2" name="ステップ2" target_position="1.0"/>
<Action ID="Step3" name="ステップ3" target_position="0.0"/>
```

### 実際のロボット制御との統合

`include/nhk_bt/remote_control_nodes.hpp`の`SequenceStep`クラスを編集:

```cpp
BT::NodeStatus onStart() override
{
  auto target_pos = getInput<double>("target_position");

  // ここにMoveIt2やDynamixelへの指令を追加
  // 例: moveit_interface_->planAndExecute(target_pos);

  return BT::NodeStatus::RUNNING;
}

BT::NodeStatus onRunning() override
{
  // 動作完了チェック
  // 例: if (moveit_interface_->isExecutionComplete()) { ... }

  return BT::NodeStatus::RUNNING;
}
```

## デバッグ

詳細なログを表示:

```bash
ros2 launch nhk_bt remote_control_bt.launch.py --ros-args --log-level debug
```

## トラブルシューティング

### Joyトピックが来ない

```bash
# Joyトピックの確認
ros2 topic echo /joy

# コントローラーの接続確認
ls /dev/input/js*
```

### BehaviorTreeがロードできない

- `bt_xml_path`パラメータが正しいか確認
- XMLファイルの文法エラーをチェック

## 依存パッケージ

- `rclcpp`
- `sensor_msgs`
- `behaviortree_cpp`

## PS4コントローラーのボタンマッピング

デフォルト設定:
- 丸ボタン: インデックス 1
- ×ボタン: インデックス 0

コントローラーによって異なる場合は、`joy`トピックを確認:

```bash
ros2 topic echo /joy
```
