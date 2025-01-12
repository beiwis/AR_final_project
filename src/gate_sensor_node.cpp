#include "lab3_drones/gate_sensor.hpp"

int main(int argc, char** argv) {
    ros::init(argc, argv, "gate_sensor");
    ros::NodeHandle nh("~");

    GateSensor gate_sensor(nh);

    while (ros::ok())
    {
        ros::spinOnce();
    }
	return 0;
}