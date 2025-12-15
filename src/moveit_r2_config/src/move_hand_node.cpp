#include <functional>
#include <memory>
#include <string>

#include <geometry_msgs/msg/vector3.hpp>
#include <moveit/move_group_interface/move_group_interface.h>
#include <rclcpp/rclcpp.hpp>

class MoveHandController
{
public:
  explicit MoveHandController(const rclcpp::Node::SharedPtr & node)
  : node_(node)
  {
    group_name_ = node_->declare_parameter<std::string>("group_name", "arm_with_hand");
    tip_link_ = node_->declare_parameter<std::string>("tip_link", "link5_1");
    topic_name_ = node_->declare_parameter<std::string>("topic_name", "/move_hand");
    position_tolerance_ = node_->declare_parameter<double>("position_tolerance", 0.005);
    orientation_tolerance_ = node_->declare_parameter<double>("orientation_tolerance", 0.05);
    planning_time_ = node_->declare_parameter<double>("planning_time", 5.0);
    planning_attempts_ = node_->declare_parameter<int>("planning_attempts", 5);

    move_group_ = std::make_shared<moveit::planning_interface::MoveGroupInterface>(node_, group_name_);
    move_group_->setEndEffectorLink(tip_link_);
    move_group_->setGoalPositionTolerance(position_tolerance_);
    move_group_->setGoalOrientationTolerance(orientation_tolerance_);
    move_group_->setPlanningTime(planning_time_);
    move_group_->setNumPlanningAttempts(planning_attempts_);

    using std::placeholders::_1;
    subscription_ = node_->create_subscription<geometry_msgs::msg::Vector3>(
      topic_name_, rclcpp::QoS(10),
      std::bind(&MoveHandController::moveHandCallback, this, _1));

    RCLCPP_INFO(
      node_->get_logger(), "Listening to %s for relative commands on %s",
      topic_name_.c_str(), tip_link_.c_str());
  }

private:
  void moveHandCallback(const geometry_msgs::msg::Vector3::SharedPtr msg)
  {
    auto current_pose = move_group_->getCurrentPose(tip_link_);
    auto target_pose = current_pose.pose;

    // Vector3 offsets are interpreted directly in the world/base frame.
    target_pose.position.x += msg->x;
    target_pose.position.y += msg->y;
    target_pose.position.z += msg->z;

    move_group_->setStartStateToCurrentState();
    move_group_->setPoseTarget(target_pose, tip_link_);
    auto const result = move_group_->move();
    move_group_->stop();
    move_group_->clearPoseTargets();

    if (result == moveit::core::MoveItErrorCode::SUCCESS) {
      RCLCPP_INFO(
        node_->get_logger(), "Moved %s by Vector3(%.3f, %.3f, %.3f)",
        tip_link_.c_str(), msg->x, msg->y, msg->z);
    } else {
      RCLCPP_WARN(
        node_->get_logger(),
        "MoveIt planning/execution failed for Vector3(%.3f, %.3f, %.3f) (error code: %d)",
        msg->x, msg->y, msg->z, result.val);
    }
  }

  rclcpp::Node::SharedPtr node_;
  std::string group_name_;
  std::string tip_link_;
  std::string topic_name_;
  double position_tolerance_;
  double orientation_tolerance_;
  double planning_time_;
  int planning_attempts_;
  std::shared_ptr<moveit::planning_interface::MoveGroupInterface> move_group_;
  rclcpp::Subscription<geometry_msgs::msg::Vector3>::SharedPtr subscription_;
};

int main(int argc, char ** argv)
{
  rclcpp::init(argc, argv);
  auto node = std::make_shared<rclcpp::Node>("move_hand_node");
  MoveHandController controller(node);
  rclcpp::spin(node);
  rclcpp::shutdown();
  return 0;
}
