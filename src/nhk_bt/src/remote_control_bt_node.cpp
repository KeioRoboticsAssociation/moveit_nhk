#include <rclcpp/rclcpp.hpp>
#include <sensor_msgs/msg/joy.hpp>
#include <behaviortree_cpp_v3/behavior_tree.h>
#include <behaviortree_cpp_v3/bt_factory.h>
#include <behaviortree_cpp_v3/loggers/bt_cout_logger.h>
#include "nhk_bt/remote_control_nodes.hpp"

class RemoteControlBTNode : public rclcpp::Node
{
public:
  RemoteControlBTNode()
  : Node("remote_control_bt_node")
  {
    // パラメータの宣言
    this->declare_parameter<std::string>("bt_xml_path", "");
    this->declare_parameter<int>("circle_button_index", 1);  // PS4: 丸ボタン
    this->declare_parameter<int>("cross_button_index", 0);   // PS4: ×ボタン
    this->declare_parameter<int>("dpad_horizontal_axis", 6); // PS4: dpad横軸（左=1, 右=-1）
    this->declare_parameter<int>("dpad_vertical_axis", 7);   // PS4: dpad縦軸（上=1, 下=-1）

    // パラメータの取得
    std::string bt_xml_path = this->get_parameter("bt_xml_path").as_string();
    circle_button_index_ = this->get_parameter("circle_button_index").as_int();
    cross_button_index_ = this->get_parameter("cross_button_index").as_int();
    dpad_horizontal_axis_ = this->get_parameter("dpad_horizontal_axis").as_int();
    dpad_vertical_axis_ = this->get_parameter("dpad_vertical_axis").as_int();

    if (bt_xml_path.empty()) {
      RCLCPP_ERROR(this->get_logger(), "bt_xml_pathパラメータが設定されていません");
      rclcpp::shutdown();
      return;
    }

    // BehaviorTreeファクトリのセットアップ
    setupBehaviorTree(bt_xml_path);

    // Joyサブスクライバの作成
    joy_subscription_ = this->create_subscription<sensor_msgs::msg::Joy>(
      "joy", 10,
      std::bind(&RemoteControlBTNode::joyCallback, this, std::placeholders::_1)
    );

    // BehaviorTreeの実行タイマー（10Hz）
    bt_timer_ = this->create_wall_timer(
      std::chrono::milliseconds(100),
      std::bind(&RemoteControlBTNode::executeBehaviorTree, this)
    );

    RCLCPP_INFO(this->get_logger(), "Remote Control BT Node 起動完了");
    RCLCPP_INFO(this->get_logger(), "BTファイル: %s", bt_xml_path.c_str());
    RCLCPP_INFO(this->get_logger(), "丸ボタン: %d, ×ボタン: %d", circle_button_index_, cross_button_index_);
  }

private:
  void setupBehaviorTree(const std::string& xml_path)
  {
    // カスタムノードの登録
    factory_.registerNodeType<nhk_bt::WaitForCircleButton>("WaitForCircleButton");
    factory_.registerNodeType<nhk_bt::IsCrossButtonPressed>("IsCrossButtonPressed");
    factory_.registerNodeType<nhk_bt::ResetSequenceState>("ResetSequenceState");

    // 汎用ステップノードをStep1, Step2, Step3として登録
    factory_.registerNodeType<nhk_bt::SequenceStep>("Step1");
    factory_.registerNodeType<nhk_bt::SequenceStep>("Step2");
    factory_.registerNodeType<nhk_bt::SequenceStep>("Step3");

    // dpadボタンチェックノードの登録
    factory_.registerNodeType<nhk_bt::IsDpadLeftPressed>("IsDpadLeftPressed");
    factory_.registerNodeType<nhk_bt::IsDpadUpPressed>("IsDpadUpPressed");
    factory_.registerNodeType<nhk_bt::IsDpadRightPressed>("IsDpadRightPressed");
    factory_.registerNodeType<nhk_bt::IsDpadDownPressed>("IsDpadDownPressed");

    // Taskノードの登録
    factory_.registerNodeType<nhk_bt::TaskAction>("Task1");
    factory_.registerNodeType<nhk_bt::TaskAction>("Task2");
    factory_.registerNodeType<nhk_bt::TaskAction>("Task3");
    factory_.registerNodeType<nhk_bt::TaskAction>("Task4");

    // AlwaysRunningノードの登録
    factory_.registerNodeType<nhk_bt::AlwaysRunning>("AlwaysRunning");

    // XMLからツリーを作成
    try {
      tree_ = factory_.createTreeFromFile(xml_path);
      RCLCPP_INFO(this->get_logger(), "BehaviorTreeを正常にロードしました");

      // ロガーの作成（デバッグ用）
      logger_ = std::make_unique<BT::StdCoutLogger>(tree_);
    }
    catch (const std::exception& e) {
      RCLCPP_ERROR(this->get_logger(), "BehaviorTreeのロードに失敗: %s", e.what());
      rclcpp::shutdown();
    }
  }

  void joyCallback(const sensor_msgs::msg::Joy::SharedPtr msg)
  {
    auto& manager = nhk_bt::RemoteControlManager::getInstance();

    // ボタンの範囲チェック
    if (circle_button_index_ < static_cast<int>(msg->buttons.size()) &&
        cross_button_index_ < static_cast<int>(msg->buttons.size()))
    {
      // 丸ボタンのチェック（立ち上がりエッジ検出）
      bool circle_pressed = msg->buttons[circle_button_index_] == 1;
      if (circle_pressed && !prev_circle_button_) {
        manager.setCircleButtonPressed(true);
        RCLCPP_INFO(this->get_logger(), "丸ボタン押下検出");
      }
      prev_circle_button_ = circle_pressed;

      // ×ボタンのチェック（立ち上がりエッジ検出）
      bool cross_pressed = msg->buttons[cross_button_index_] == 1;
      if (cross_pressed && !prev_cross_button_) {
        manager.setCrossButtonPressed(true);
        RCLCPP_INFO(this->get_logger(), "×ボタン押下検出");
      }
      prev_cross_button_ = cross_pressed;
    }

    // dpadのチェック（axesから取得、立ち上がりエッジ検出）
    if (dpad_horizontal_axis_ < static_cast<int>(msg->axes.size())) {
      // 左: axes[6] == 1
      bool dpad_left_pressed = (msg->axes[dpad_horizontal_axis_] > 0.5);
      if (dpad_left_pressed && !prev_dpad_left_) {
        manager.setDpadLeftPressed(true);
        RCLCPP_INFO(this->get_logger(), "dpad左押下検出");
      }
      prev_dpad_left_ = dpad_left_pressed;

      // 右: axes[6] == -1
      bool dpad_right_pressed = (msg->axes[dpad_horizontal_axis_] < -0.5);
      if (dpad_right_pressed && !prev_dpad_right_) {
        manager.setDpadRightPressed(true);
        RCLCPP_INFO(this->get_logger(), "dpad右押下検出");
      }
      prev_dpad_right_ = dpad_right_pressed;
    }

    if (dpad_vertical_axis_ < static_cast<int>(msg->axes.size())) {
      // 上: axes[7] == 1
      bool dpad_up_pressed = (msg->axes[dpad_vertical_axis_] > 0.5);
      if (dpad_up_pressed && !prev_dpad_up_) {
        manager.setDpadUpPressed(true);
        RCLCPP_INFO(this->get_logger(), "dpad上押下検出");
      }
      prev_dpad_up_ = dpad_up_pressed;

      // 下: axes[7] == -1
      bool dpad_down_pressed = (msg->axes[dpad_vertical_axis_] < -0.5);
      if (dpad_down_pressed && !prev_dpad_down_) {
        manager.setDpadDownPressed(true);
        RCLCPP_INFO(this->get_logger(), "dpad下押下検出");
      }
      prev_dpad_down_ = dpad_down_pressed;
    }
  }

  void executeBehaviorTree()
  {
    if (!tree_.rootNode()) {
      return;
    }

    // BehaviorTreeを1ティック実行
    try {
      BT::NodeStatus status = tree_.tickRoot();

      // 状態が変化した場合のみログ出力
      if (status != prev_bt_status_) {
        switch (status) {
          case BT::NodeStatus::SUCCESS:
            RCLCPP_DEBUG(this->get_logger(), "BT Status: SUCCESS");
            break;
          case BT::NodeStatus::FAILURE:
            RCLCPP_DEBUG(this->get_logger(), "BT Status: FAILURE");
            break;
          case BT::NodeStatus::RUNNING:
            RCLCPP_DEBUG(this->get_logger(), "BT Status: RUNNING");
            break;
          default:
            break;
        }
        prev_bt_status_ = status;
      }
    }
    catch (const std::exception& e) {
      RCLCPP_ERROR(this->get_logger(), "BT実行エラー: %s", e.what());
    }
  }

  // メンバ変数
  BT::BehaviorTreeFactory factory_;
  BT::Tree tree_;
  std::unique_ptr<BT::StdCoutLogger> logger_;

  rclcpp::Subscription<sensor_msgs::msg::Joy>::SharedPtr joy_subscription_;
  rclcpp::TimerBase::SharedPtr bt_timer_;

  int circle_button_index_;
  int cross_button_index_;
  int dpad_horizontal_axis_;
  int dpad_vertical_axis_;

  bool prev_circle_button_{false};
  bool prev_cross_button_{false};
  bool prev_dpad_left_{false};
  bool prev_dpad_up_{false};
  bool prev_dpad_right_{false};
  bool prev_dpad_down_{false};

  BT::NodeStatus prev_bt_status_{BT::NodeStatus::IDLE};
};

int main(int argc, char** argv)
{
  rclcpp::init(argc, argv);
  auto node = std::make_shared<RemoteControlBTNode>();
  rclcpp::spin(node);
  rclcpp::shutdown();
  return 0;
}
