# optimizing-USV-control
Codebase for "Optimizing unmanned surface vehicle control: A data-enabled learning approach."

## sim_usv

ROS pkg with USV simulation environment, including:
- dynamic model of the USV
- URDF of the USV
- RViz configuration to visualize the simulation
- Scripts to run the experiments

## usvnuflcontroller

ROS pkg from MATLAB code generation with surge speed and yaw rate controller node.

To modify PID gains, access UsvNuFLController_data.cpp and change the values of:
- Surge speed PID: Pu, Iu, Du
- Yaw rate PID: Pr, Ir, Dr

The code was generated using UsvNuFLController.slx

## Testing the system

roslaunch sim_usv sim_trialnu_1.launch
- Runs experiment 1: follow a predefined velocity profile (profile.mat).

roslaunch sim_usv sim_trialnu_2.launch
- Runs the special experiment: use the data from experiment 1 to build the surge speed and yaw rate references.
- Special case trialnu_2x5.py amplifies the reference velocities to avoid oscillating around 0 m/s or 0 rad/s.

roslaunch sim_suv sim_trialnu_sines.launch
- Runs the validation scenario: following a different velocity profile built with sine waves.

roslaunch sim_usv usv_simulation.launch
- Standalone USV simulation, which can be used for general controller tests.

## Available data
Rosbags from our implementation are available in the repository. These rosbags were used directly for the data-driven gain optimization.

# TODO:
At this moment, the data-enabled learning algorithm implementation cannot be publicly released due to ongoing related research. Once the project/IP constraints are resolved, we will be able to add it to the public codebase.
