#ifndef _SLROS_INITIALIZE_H_
#define _SLROS_INITIALIZE_H_

#include "slros_busmsg_conversion.h"
#include "slros_generic.h"

extern ros::NodeHandle * SLROSNodePtr;
extern const std::string SLROSNodeName;

// For Block UsvNuFLController/Subscribe
extern SimulinkSubscriber<std_msgs::Float64, SL_Bus_UsvNuFLController_std_msgs_Float64> Sub_UsvNuFLController_126;

// For Block UsvNuFLController/Subscribe1
extern SimulinkSubscriber<geometry_msgs::Vector3, SL_Bus_UsvNuFLController_geometry_msgs_Vector3> Sub_UsvNuFLController_172;

// For Block UsvNuFLController/Subscribe2
extern SimulinkSubscriber<std_msgs::Float64, SL_Bus_UsvNuFLController_std_msgs_Float64> Sub_UsvNuFLController_187;

// For Block UsvNuFLController/Thrust Publisher/Publish1
extern SimulinkPublisher<std_msgs::Float64, SL_Bus_UsvNuFLController_std_msgs_Float64> Pub_UsvNuFLController_156;

// For Block UsvNuFLController/Thrust Publisher/Publish2
extern SimulinkPublisher<geometry_msgs::Pose2D, SL_Bus_UsvNuFLController_geometry_msgs_Pose2D> Pub_UsvNuFLController_128;

// For Block UsvNuFLController/Thrust Publisher/Publish3
extern SimulinkPublisher<std_msgs::Float64, SL_Bus_UsvNuFLController_std_msgs_Float64> Pub_UsvNuFLController_157;

void slros_node_init(int argc, char** argv);

#endif
