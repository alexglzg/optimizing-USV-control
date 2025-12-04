#include "slros_initialize.h"

ros::NodeHandle * SLROSNodePtr;
const std::string SLROSNodeName = "UsvNuFLController";

// For Block UsvNuFLController/Subscribe
SimulinkSubscriber<std_msgs::Float64, SL_Bus_UsvNuFLController_std_msgs_Float64> Sub_UsvNuFLController_126;

// For Block UsvNuFLController/Subscribe1
SimulinkSubscriber<geometry_msgs::Vector3, SL_Bus_UsvNuFLController_geometry_msgs_Vector3> Sub_UsvNuFLController_172;

// For Block UsvNuFLController/Subscribe2
SimulinkSubscriber<std_msgs::Float64, SL_Bus_UsvNuFLController_std_msgs_Float64> Sub_UsvNuFLController_187;

// For Block UsvNuFLController/Thrust Publisher/Publish1
SimulinkPublisher<std_msgs::Float64, SL_Bus_UsvNuFLController_std_msgs_Float64> Pub_UsvNuFLController_156;

// For Block UsvNuFLController/Thrust Publisher/Publish2
SimulinkPublisher<geometry_msgs::Pose2D, SL_Bus_UsvNuFLController_geometry_msgs_Pose2D> Pub_UsvNuFLController_128;

// For Block UsvNuFLController/Thrust Publisher/Publish3
SimulinkPublisher<std_msgs::Float64, SL_Bus_UsvNuFLController_std_msgs_Float64> Pub_UsvNuFLController_157;

void slros_node_init(int argc, char** argv)
{
  ros::init(argc, argv, SLROSNodeName);
  SLROSNodePtr = new ros::NodeHandle();
}

