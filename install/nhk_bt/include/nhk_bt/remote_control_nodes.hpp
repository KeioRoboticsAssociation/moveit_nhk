#ifndef NHK_BT__REMOTE_CONTROL_NODES_HPP_
#define NHK_BT__REMOTE_CONTROL_NODES_HPP_

#include <behaviortree_cpp/behavior_tree.h>
#include <rclcpp/rclcpp.hpp>
#include <sensor_msgs/msg/joy.hpp>
#include <memory>
#include <atomic>

namespace nhk_bt
{

// リモコン入力を管理するシングルトンクラス
class RemoteControlManager
{
public:
  static RemoteControlManager& getInstance()
  {
    static RemoteControlManager instance;
    return instance;
  }

  void setCircleButtonPressed(bool pressed) { circle_button_pressed_ = pressed; }
  void setCrossButtonPressed(bool pressed) { cross_button_pressed_ = pressed; }
  void setDpadLeftPressed(bool pressed) { dpad_left_pressed_ = pressed; }
  void setDpadUpPressed(bool pressed) { dpad_up_pressed_ = pressed; }
  void setDpadRightPressed(bool pressed) { dpad_right_pressed_ = pressed; }
  void setDpadDownPressed(bool pressed) { dpad_down_pressed_ = pressed; }

  bool isCircleButtonPressed() const { return circle_button_pressed_; }
  bool isCrossButtonPressed() const { return cross_button_pressed_; }
  bool isDpadLeftPressed() const { return dpad_left_pressed_; }
  bool isDpadUpPressed() const { return dpad_up_pressed_; }
  bool isDpadRightPressed() const { return dpad_right_pressed_; }
  bool isDpadDownPressed() const { return dpad_down_pressed_; }

private:
  RemoteControlManager()
    : circle_button_pressed_(false), cross_button_pressed_(false),
      dpad_left_pressed_(false), dpad_up_pressed_(false),
      dpad_right_pressed_(false), dpad_down_pressed_(false) {}

  std::atomic<bool> circle_button_pressed_;
  std::atomic<bool> cross_button_pressed_;
  std::atomic<bool> dpad_left_pressed_;
  std::atomic<bool> dpad_up_pressed_;
  std::atomic<bool> dpad_right_pressed_;
  std::atomic<bool> dpad_down_pressed_;
};

// 丸ボタン待機Conditionノード
class WaitForCircleButton : public BT::ConditionNode
{
public:
  WaitForCircleButton(const std::string& name, const BT::NodeConfig& config)
    : BT::ConditionNode(name, config)
  {
  }

  static BT::PortsList providedPorts()
  {
    return {};
  }

  BT::NodeStatus tick() override
  {
    auto& manager = RemoteControlManager::getInstance();

    if (manager.isCircleButtonPressed()) {
      RCLCPP_INFO(rclcpp::get_logger("WaitForCircleButton"), "丸ボタンが押されました - シーケンス開始");
      // ボタンをリセット（1回押したら次のプレスまで待つ）
      manager.setCircleButtonPressed(false);
      return BT::NodeStatus::SUCCESS;
    }

    // まだ押されていない場合はRUNNINGを返す
    return BT::NodeStatus::RUNNING;
  }
};

// ×ボタンチェックConditionノード
class IsCrossButtonPressed : public BT::ConditionNode
{
public:
  IsCrossButtonPressed(const std::string& name, const BT::NodeConfig& config)
    : BT::ConditionNode(name, config)
  {
  }

  static BT::PortsList providedPorts()
  {
    return {};
  }

  BT::NodeStatus tick() override
  {
    auto& manager = RemoteControlManager::getInstance();

    if (manager.isCrossButtonPressed()) {
      RCLCPP_WARN(rclcpp::get_logger("IsCrossButtonPressed"), "×ボタンが押されました - シーケンス中断");
      // ボタンをリセット
      manager.setCrossButtonPressed(false);
      return BT::NodeStatus::SUCCESS;
    }

    return BT::NodeStatus::FAILURE;
  }
};

// シーケンス初期化Actionノード
class ResetSequenceState : public BT::SyncActionNode
{
public:
  ResetSequenceState(const std::string& name, const BT::NodeConfig& config)
    : BT::SyncActionNode(name, config)
  {
  }

  static BT::PortsList providedPorts()
  {
    return {};
  }

  BT::NodeStatus tick() override
  {
    RCLCPP_INFO(rclcpp::get_logger("ResetSequenceState"), "シーケンス状態を初期化");

    // ここで必要な初期化処理を実装
    // 例: ロボットの状態をリセット、変数をクリアなど

    return BT::NodeStatus::SUCCESS;
  }
};

// 汎用ステップActionノード
class SequenceStep : public BT::StatefulActionNode
{
public:
  SequenceStep(const std::string& name, const BT::NodeConfig& config)
    : BT::StatefulActionNode(name, config)
  {
  }

  static BT::PortsList providedPorts()
  {
    return {
      BT::InputPort<double>("target_position", "目標位置"),
      BT::InputPort<std::string>("step_name", "ステップ名")
    };
  }

  BT::NodeStatus onStart() override
  {
    auto target_pos = getInput<double>("target_position");
    auto step_name = getInput<std::string>("step_name");

    std::string name_str = step_name.value_or("不明");
    double pos = target_pos.value_or(0.0);

    RCLCPP_INFO(
      rclcpp::get_logger("SequenceStep"),
      "[%s] 開始 - 目標位置: %.2f",
      name_str.c_str(), pos
    );

    // ここで実際の動作を開始
    // 例: moveit2のプランニング、dynamixelへの指令送信など

    start_time_ = std::chrono::steady_clock::now();
    return BT::NodeStatus::RUNNING;
  }

  BT::NodeStatus onRunning() override
  {
    // 動作完了チェック
    auto elapsed = std::chrono::duration_cast<std::chrono::milliseconds>(
      std::chrono::steady_clock::now() - start_time_
    ).count();

    // 例: 2秒で完了とする（実際の実装では動作完了フラグをチェック）
    if (elapsed > 2000) {
      RCLCPP_INFO(rclcpp::get_logger("SequenceStep"), "ステップ完了");
      return BT::NodeStatus::SUCCESS;
    }

    return BT::NodeStatus::RUNNING;
  }

  void onHalted() override
  {
    RCLCPP_WARN(rclcpp::get_logger("SequenceStep"), "ステップが中断されました");
    // 動作を停止する処理
  }

private:
  std::chrono::steady_clock::time_point start_time_;
};

// dpad左ボタンチェックConditionノード
class IsDpadLeftPressed : public BT::ConditionNode
{
public:
  IsDpadLeftPressed(const std::string& name, const BT::NodeConfig& config)
    : BT::ConditionNode(name, config) {}

  static BT::PortsList providedPorts() { return {}; }

  BT::NodeStatus tick() override
  {
    auto& manager = RemoteControlManager::getInstance();
    if (manager.isDpadLeftPressed()) {
      manager.setDpadLeftPressed(false);
      return BT::NodeStatus::SUCCESS;
    }
    return BT::NodeStatus::FAILURE;
  }
};

// dpad上ボタンチェックConditionノード
class IsDpadUpPressed : public BT::ConditionNode
{
public:
  IsDpadUpPressed(const std::string& name, const BT::NodeConfig& config)
    : BT::ConditionNode(name, config) {}

  static BT::PortsList providedPorts() { return {}; }

  BT::NodeStatus tick() override
  {
    auto& manager = RemoteControlManager::getInstance();
    if (manager.isDpadUpPressed()) {
      manager.setDpadUpPressed(false);
      return BT::NodeStatus::SUCCESS;
    }
    return BT::NodeStatus::FAILURE;
  }
};

// dpad右ボタンチェックConditionノード
class IsDpadRightPressed : public BT::ConditionNode
{
public:
  IsDpadRightPressed(const std::string& name, const BT::NodeConfig& config)
    : BT::ConditionNode(name, config) {}

  static BT::PortsList providedPorts() { return {}; }

  BT::NodeStatus tick() override
  {
    auto& manager = RemoteControlManager::getInstance();
    if (manager.isDpadRightPressed()) {
      manager.setDpadRightPressed(false);
      return BT::NodeStatus::SUCCESS;
    }
    return BT::NodeStatus::FAILURE;
  }
};

// dpad下ボタンチェックConditionノード
class IsDpadDownPressed : public BT::ConditionNode
{
public:
  IsDpadDownPressed(const std::string& name, const BT::NodeConfig& config)
    : BT::ConditionNode(name, config) {}

  static BT::PortsList providedPorts() { return {}; }

  BT::NodeStatus tick() override
  {
    auto& manager = RemoteControlManager::getInstance();
    if (manager.isDpadDownPressed()) {
      manager.setDpadDownPressed(false);
      return BT::NodeStatus::SUCCESS;
    }
    return BT::NodeStatus::FAILURE;
  }
};

// Task実行ノード（Task1~4で使用）
class TaskAction : public BT::StatefulActionNode
{
public:
  TaskAction(const std::string& name, const BT::NodeConfig& config)
    : BT::StatefulActionNode(name, config) {}

  static BT::PortsList providedPorts()
  {
    return {
      BT::InputPort<std::string>("task_name", "タスク名"),
      BT::InputPort<double>("target_position", "目標位置")
    };
  }

  BT::NodeStatus onStart() override
  {
    auto task_name = getInput<std::string>("task_name");
    auto target_pos = getInput<double>("target_position");

    std::string name_str = task_name.value_or("不明");
    double pos = target_pos.value_or(0.0);

    RCLCPP_INFO(
      rclcpp::get_logger("TaskAction"),
      "[%s] 開始 - 目標位置: %.2f",
      name_str.c_str(), pos
    );

    // ここで実際の動作を開始
    // 例: moveit2のプランニング、dynamixelへの指令送信など

    start_time_ = std::chrono::steady_clock::now();
    return BT::NodeStatus::RUNNING;
  }

  BT::NodeStatus onRunning() override
  {
    // 動作完了チェック
    auto elapsed = std::chrono::duration_cast<std::chrono::milliseconds>(
      std::chrono::steady_clock::now() - start_time_
    ).count();

    // 例: 2秒で完了とする（実際の実装では動作完了フラグをチェック）
    if (elapsed > 2000) {
      RCLCPP_INFO(rclcpp::get_logger("TaskAction"), "タスク完了");
      return BT::NodeStatus::SUCCESS;
    }

    return BT::NodeStatus::RUNNING;
  }

  void onHalted() override
  {
    RCLCPP_WARN(rclcpp::get_logger("TaskAction"), "タスクが中断されました");
    // 動作を停止する処理
  }

private:
  std::chrono::steady_clock::time_point start_time_;
};

// 常にRUNNINGを返すノード（待機用）
class AlwaysRunning : public BT::StatefulActionNode
{
public:
  AlwaysRunning(const std::string& name, const BT::NodeConfig& config)
    : BT::StatefulActionNode(name, config) {}

  static BT::PortsList providedPorts() { return {}; }

  BT::NodeStatus onStart() override
  {
    return BT::NodeStatus::RUNNING;
  }

  BT::NodeStatus onRunning() override
  {
    return BT::NodeStatus::RUNNING;
  }

  void onHalted() override
  {
    // 何もしない
  }
};

}  // namespace nhk_bt

#endif  // NHK_BT__REMOTE_CONTROL_NODES_HPP_
