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

### 3. PathIndex GUI の起動

`/path_index` Action に index を送る 3x2 GUI です。

- 左上: index 2
- 左真ん中: index 1
- 左下: index 0
- 右上: index 3
- 右真ん中: index 4
- 右下: index 5

```bash
ros2 launch nhk_bt path_index_gui.launch.py
```

`Push` / `Back` ボタンで `/joint_trajectory` に `Slider 6` の目標位置を送信し、Slider 6 を前後させられます。
必要なら launch 引数で調整します。

```bash
ros2 launch nhk_bt path_index_gui.launch.py \
  trajectory_topic:=/joint_trajectory \
  slider6_joint_name:="Slider 6" \
  push_value:=0.05 \
  back_value:=-0.05 \
  move_duration_sec:=0.2
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

## Groot2でビジュアライズ

### Groot2のインストール

```bash
sudo apt install -y ros-humble-groot2
```

または公式サイトからダウンロード:
https://www.behaviortree.dev/groot/

### XMLファイルを開く

```bash
groot2
```

Groot2のGUIで:
1. File → Load Tree
2. `/home/a/ws_nhk/src/nhk_bt/config/remote_control_sequence.xml` を選択

または直接指定:

```bash
groot2 /home/a/ws_nhk/install/nhk_bt/share/nhk_bt/config/remote_control_sequence.xml
```

### リアルタイムモニタリング

実行中のBTを監視する場合は、ノードでZMQパブリッシャーを有効にする必要があります。

## デバッグ

詳細なログを表示:

```bash
ros2 launch nhk_bt remote_control_bt.launch.py --ros-args --log-level debug
```

## トラブルシューティング

### Groot2で木構造が表示されない

1. **TreeNodesModelが含まれているか確認**
   - XMLファイルに`<TreeNodesModel>`セクションが必要
   - 本パッケージのXMLには既に含まれています

2. **XMLの文法エラー確認**
   ```bash
   xmllint --noout /home/a/ws_nhk/src/nhk_bt/config/remote_control_sequence.xml
   ```

3. **Groot2のバージョン確認**
   - BehaviorTree.CPP v4形式に対応したGroot2が必要
   - `BTCPP_format="4"`を使用

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
- インストール後のパスを確認: `share/nhk_bt/config/remote_control_sequence.xml`

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
