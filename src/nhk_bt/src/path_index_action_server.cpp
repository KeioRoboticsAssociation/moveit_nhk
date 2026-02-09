#include <functional>
#include <memory>
#include <thread>
#include <vector>

#include "nhk_action_interfaces/action/path_index.hpp"
#include "rclcpp/rclcpp.hpp"
#include "rclcpp_action/rclcpp_action.hpp"
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
                             0.0, 1.9545,  // index 0
                             0.0, 1.7505,  // index 1
                             0.0, 1.5303,  // index 2
                             0.0, -1.5303, // index 3
                             0.0, -1.7505, // index 4
                             0.0, -1.9545  // index 5
                         });

    arm_cmd_publisher_ =
        this->create_publisher<std_msgs::msg::Float32MultiArray>(arm_cmd_topic_,
                                                                 10);

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

  rclcpp_action::Server<PathIndex>::SharedPtr action_server_;
  rclcpp::Publisher<std_msgs::msg::Float32MultiArray>::SharedPtr
      arm_cmd_publisher_;
  std::vector<double> path_commands_;
  std::string arm_cmd_topic_;

  rclcpp_action::GoalResponse
  handle_goal(const rclcpp_action::GoalUUID &,
              std::shared_ptr<const PathIndex::Goal> goal) {
    RCLCPP_INFO(get_logger(), "Received goal path_index=%d", goal->path_index);
    if (goal->path_index < 0 || goal->path_index >= kPathCount) {
      RCLCPP_WARN(get_logger(), "Rejecting goal: path_index must be 0..5");
      return rclcpp_action::GoalResponse::REJECT;
    }
    if (path_commands_.size() < static_cast<size_t>(kPathCount * 2)) {
      RCLCPP_ERROR(get_logger(),
                   "Rejecting goal: path_commands must contain at least %d "
                   "values, got %zu",
                   kPathCount * 2, path_commands_.size());
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

    if (goal_handle->is_canceling()) {
      result->success = false;
      goal_handle->canceled(result);
      RCLCPP_INFO(get_logger(), "Goal canceled before publish");
      return;
    }

    const size_t offset = static_cast<size_t>(path_index) * 2;
    std_msgs::msg::Float32MultiArray arm_cmd_msg;
    arm_cmd_msg.data = {static_cast<float>(path_commands_[offset]),
                        static_cast<float>(path_commands_[offset + 1])};
    arm_cmd_publisher_->publish(arm_cmd_msg);

    RCLCPP_INFO(get_logger(),
                "Published /arm_cmd from path_index=%d: [%.4f, %.4f]",
                path_index, arm_cmd_msg.data[0], arm_cmd_msg.data[1]);

    feedback->dummy = true;
    goal_handle->publish_feedback(feedback);

    result->success = true;
    goal_handle->succeed(result);
    RCLCPP_INFO(get_logger(), "Goal succeeded");
  }
};

int main(int argc, char **argv) {
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<PathIndexActionServer>());
  rclcpp::shutdown();
  return 0;
}
