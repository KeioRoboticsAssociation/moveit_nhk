#include <functional>
#include <memory>
#include <thread>
#include <vector>

#include "nhk_action_interfaces/action/path_index.hpp"
#include "rclcpp/rclcpp.hpp"
#include "rclcpp_action/rclcpp_action.hpp"
#include "rogilink_flex_interfaces/msg/frame.hpp"
#include "std_msgs/msg/float32_multi_array.hpp"

class PathIndexActionServer : public rclcpp::Node {
public:
  using PathIndex = nhk_action_interfaces::action::PathIndex;
  using GoalHandlePathIndex = rclcpp_action::ServerGoalHandle<PathIndex>;

  PathIndexActionServer() : Node("path_index_action_server") {
    arm_cmd_topic_ =
        this->declare_parameter<std::string>("arm_cmd_topic", "/arm_cmd");
    path_commands_ = this->declare_parameter<std::vector<double>>(
        "path_commands", std::vector<double>{
                             // [Slider 1_2, Revolute 1_1, Revolute 1_4]
                             0.0, 1.9545, -0.3838,  // index 0
                             0.0, 1.7505, -0.1798,  // index 1
                             0.0, 1.5303, 0.0405,   // index 2
                             0.0, -1.5303, -0.0405, // index 3
                             0.0, -1.7505, 0.1798,  // index 4
                             0.0, -1.9545, 0.3838   // index 5
                         });

    arm_cmd_publisher_ =
        this->create_publisher<std_msgs::msg::Float32MultiArray>(arm_cmd_topic_,
                                                                 10);

    // Subscribe to ud_is_reached
    ud_is_reached_sub_ =
        this->create_subscription<rogilink_flex_interfaces::msg::Frame>(
            "/rogilink_reception/ud_is_reached", 10,
            std::bind(&PathIndexActionServer::on_ud_is_reached, this,
                      std::placeholders::_1));

    using namespace std::placeholders;
    action_server_ = rclcpp_action::create_server<PathIndex>(
        this, "path_index",
        std::bind(&PathIndexActionServer::handle_goal, this, _1, _2),
        std::bind(&PathIndexActionServer::handle_cancel, this, _1),
        std::bind(&PathIndexActionServer::handle_accepted, this, _1));

    RCLCPP_INFO(
        get_logger(),
        "PathIndex Action Server started: /path_index, publish topic: %s",
        arm_cmd_topic_.c_str());
  }

private:
  static constexpr int kPathCount = 6;
  static constexpr int kValuesPerPath = 3;

  rclcpp_action::Server<PathIndex>::SharedPtr action_server_;
  rclcpp::Publisher<std_msgs::msg::Float32MultiArray>::SharedPtr
      arm_cmd_publisher_;
  rclcpp::Subscription<rogilink_flex_interfaces::msg::Frame>::SharedPtr
      ud_is_reached_sub_;
  std::vector<double> path_commands_;
  std::string arm_cmd_topic_;
  bool is_reached_ = false;

  void on_ud_is_reached(
      const rogilink_flex_interfaces::msg::Frame::SharedPtr msg) {
    if (!msg->data.empty() && msg->data[0] != 0) {
      is_reached_ = true;
    }
  }

  rclcpp_action::GoalResponse
  handle_goal(const rclcpp_action::GoalUUID &,
              std::shared_ptr<const PathIndex::Goal> goal) {
    RCLCPP_INFO(get_logger(), "Received goal path_index=%d", goal->path_index);
    if (goal->path_index < 0 || goal->path_index >= kPathCount) {
      RCLCPP_WARN(get_logger(), "Rejecting goal: path_index must be 0..5");
      return rclcpp_action::GoalResponse::REJECT;
    }
    if (path_commands_.size() <
        static_cast<size_t>(kPathCount * kValuesPerPath)) {
      RCLCPP_ERROR(get_logger(),
                   "Rejecting goal: path_commands must contain at least %d "
                   "values, got %zu",
                   kPathCount * kValuesPerPath, path_commands_.size());
      return rclcpp_action::GoalResponse::REJECT;
    }
    return rclcpp_action::GoalResponse::ACCEPT_AND_EXECUTE;
  }

  rclcpp_action::CancelResponse
  handle_cancel(const std::shared_ptr<GoalHandlePathIndex>) {
    RCLCPP_INFO(get_logger(), "Received cancel request");
    return rclcpp_action::CancelResponse::ACCEPT;
  }

  void handle_accepted(const std::shared_ptr<GoalHandlePathIndex> goal_handle) {
    std::thread(
        [this](std::shared_ptr<GoalHandlePathIndex> gh) { execute(gh); },
        goal_handle)
        .detach();
  }

  void execute(const std::shared_ptr<GoalHandlePathIndex> goal_handle) {
    const int path_index = goal_handle->get_goal()->path_index;
    auto feedback = std::make_shared<PathIndex::Feedback>();
    auto result = std::make_shared<PathIndex::Result>();

    is_reached_ = false; // Reset state

    const size_t offset = static_cast<size_t>(path_index) * kValuesPerPath;
    std_msgs::msg::Float32MultiArray arm_cmd_msg;
    arm_cmd_msg.data = {static_cast<float>(path_commands_[offset]),
                        static_cast<float>(path_commands_[offset + 1]),
                        static_cast<float>(path_commands_[offset + 2])};
    arm_cmd_publisher_->publish(arm_cmd_msg);

    RCLCPP_INFO(get_logger(),
                "Published /arm_cmd from path_index=%d: [%.4f, %.4f, %.4f]",
                path_index, arm_cmd_msg.data[0], arm_cmd_msg.data[1],
                arm_cmd_msg.data[2]);

    rclcpp::Rate loop_rate(10);
    const auto start_time = this->now();
    const auto validation_timeout = std::chrono::seconds(10); // Safety timeout

    while (rclcpp::ok()) {
      if (goal_handle->is_canceling()) {
        result->success = false;
        goal_handle->canceled(result);
        RCLCPP_INFO(get_logger(), "Goal canceled");
        return;
      }

      if (is_reached_) {
        break; // Success
      }

      if (this->now() - start_time > validation_timeout) {
        RCLCPP_WARN(get_logger(), "Goal timed out waiting for ud_is_reached");
        // Optional: result->success = false; goal_handle->aborted(result); return;
        // For now, we allow timeout to just end the action or maybe retry?
        // Let's assume timeout = abort for safety.
        result->success = false;
        goal_handle->abort(result);
        return;
      }

      feedback->dummy = false;
      goal_handle->publish_feedback(feedback);
      loop_rate.sleep();
    }

    result->success = true;
    goal_handle->succeed(result);
    RCLCPP_INFO(get_logger(), "Goal succeeded (reached signal received)");
  }
};

int main(int argc, char **argv) {
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<PathIndexActionServer>());
  rclcpp::shutdown();
  return 0;
}
