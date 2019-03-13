#ifndef MEASUREMENT_PACKAGE_H_
#define MEASUREMENT_PACKAGE_H_
/*#include guards.Once the header is included, it checks if a unique value (in this case MEASUREMENT_PACKAGE_H_)
is defined. Then if it's not defined, it defines it and continues to the rest of the page.
When the code is included again, the first ifndef fails, resulting in a blank file.
That prevents double declaration of any identifiers such as types, enums and static variables.*/

#include "pch.h"
#include <Eigen/Dense>

//Sensor data is organized in package obj now, pass as an argument to the process measurement function
// this class composed of a timestamp_ var, sensor_type and raw_measurements_
class MeasurementPackage {
public:

	/* use enum to create a type called SensorType, its value hv option LASER or RADAR
by default LASER=0,RADAR=1*/
	enum SensorType {
		LASER, RADAR
	} sensor_type_;
	// a variable called sensor_type_ is created uder the type SensorType


	//this is to use the VectorXd inside namespace Eigen
	Eigen::VectorXd raw_measurements_;
	//create a vector called raw_measurements_, with most recent raw measurements
	// if MeasurementPackage comes from laser sensor, the raw measurements vector will contain
	//just observed x and y position

	int64_t timestamp_;
	//create a int var called timestamp_, which is a point in time where to measurement was created by sensor 

};

#endif  // MEASUREMENT_PACKAGE_H_