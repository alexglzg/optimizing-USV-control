# Optimizing USV Control

Codebase for the paper *"Optimizing unmanned surface vehicle control: A data-enabled learning approach."*

## Overview

This repository contains ROS packages for simulating and controlling an unmanned surface vehicle (USV), including a dynamic model, visualization tools, and experimental scripts.

[![USV Experiment](http://img.youtube.com/vi/GjhJKboKg5Y/0.jpg)]([https://youtu.be/your_video_id](https://youtu.be/GjhJKboKg5Y))


## Requirements

**Tested Environments:**
- Ubuntu 16.04 with ROS Kinetic
- Ubuntu 20.04 with ROS Noetic

**Dependencies:**
- ROS 1
- Eigen
- scipy.io (Python)

## Packages

### sim_usv

ROS package with the USV simulation environment:
- Dynamic model of the USV
- URDF description
- RViz configuration for visualization
- Launch files for running experiments

### usvnuflcontroller

ROS package generated from MATLAB containing surge speed and yaw rate controllers.

**Tuning PID Gains:**  
Edit `UsvNuFLController_data.cpp` and modify:
- Surge speed: `Pu`, `Iu`, `Du`
- Yaw rate: `Pr`, `Ir`, `Dr`

The controller was generated from `UsvNuFLController.slx`.

## Usage
```bash
# Experiment 1: Follow predefined velocity profile (profile.mat)
roslaunch sim_usv sim_trialnu_1.launch

# Experiment 2: Use data from Experiment 1 to build velocity references
roslaunch sim_usv sim_trialnu_2.launch

# Validation: Follow sine-wave velocity profile
roslaunch sim_usv sim_trialnu_sines.launch

# Standalone simulation for general controller testing
roslaunch sim_usv usv_simulation.launch
```

## Data

Rosbags from our implementation are included in the repository. These were used directly for data-driven gain optimization.

## License

This project is licensed under the MIT License. See [LICENSE](LICENSE) for details.

## Note

The data-enabled learning algorithm implementation is not yet publicly available due to ongoing research. It will be released once project/IP constraints are resolved.
