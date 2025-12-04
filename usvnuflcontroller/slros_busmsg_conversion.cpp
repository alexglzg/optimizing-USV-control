#include "slros_busmsg_conversion.h"


// Conversions between SL_Bus_UsvNuFLController_geometry_msgs_Pose2D and geometry_msgs::Pose2D

void convertFromBus(geometry_msgs::Pose2D* msgPtr, SL_Bus_UsvNuFLController_geometry_msgs_Pose2D const* busPtr)
{
  const std::string rosMessageType("geometry_msgs/Pose2D");

  msgPtr->theta =  busPtr->Theta;
  msgPtr->x =  busPtr->X;
  msgPtr->y =  busPtr->Y;
}

void convertToBus(SL_Bus_UsvNuFLController_geometry_msgs_Pose2D* busPtr, geometry_msgs::Pose2D const* msgPtr)
{
  const std::string rosMessageType("geometry_msgs/Pose2D");

  busPtr->Theta =  msgPtr->theta;
  busPtr->X =  msgPtr->x;
  busPtr->Y =  msgPtr->y;
}


// Conversions between SL_Bus_UsvNuFLController_geometry_msgs_Vector3 and geometry_msgs::Vector3

void convertFromBus(geometry_msgs::Vector3* msgPtr, SL_Bus_UsvNuFLController_geometry_msgs_Vector3 const* busPtr)
{
  const std::string rosMessageType("geometry_msgs/Vector3");

  msgPtr->x =  busPtr->X;
  msgPtr->y =  busPtr->Y;
  msgPtr->z =  busPtr->Z;
}

void convertToBus(SL_Bus_UsvNuFLController_geometry_msgs_Vector3* busPtr, geometry_msgs::Vector3 const* msgPtr)
{
  const std::string rosMessageType("geometry_msgs/Vector3");

  busPtr->X =  msgPtr->x;
  busPtr->Y =  msgPtr->y;
  busPtr->Z =  msgPtr->z;
}


// Conversions between SL_Bus_UsvNuFLController_std_msgs_Float64 and std_msgs::Float64

void convertFromBus(std_msgs::Float64* msgPtr, SL_Bus_UsvNuFLController_std_msgs_Float64 const* busPtr)
{
  const std::string rosMessageType("std_msgs/Float64");

  msgPtr->data =  busPtr->Data;
}

void convertToBus(SL_Bus_UsvNuFLController_std_msgs_Float64* busPtr, std_msgs::Float64 const* msgPtr)
{
  const std::string rosMessageType("std_msgs/Float64");

  busPtr->Data =  msgPtr->data;
}

