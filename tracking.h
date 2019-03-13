#ifndef TRACKING_H_
#define TRACKING_H_

#include "kalman_filter.h"
#include "measurement_package.h"
#include "pch.h"
#include <vector>
#include <string>
#include <fstream>


class Tracking {
public:
	Tracking();
	virtual ~Tracking();

	/*create a function called ProcessMeasurement, take parameter which is a const var called
	MeasurementPackage and assign to the physical address of var  measurement_pack, is a pointer*/

	//When the function is called every time we receive NEW data from given sensor
	//use class MeasurementPackage from measurement_package.h
	void ProcessMeasurement(const MeasurementPackage &measurement_pack);
	KalmanFilter kf_;
	//create and use Kalmanfilter obj kf_, from kalmanfilter.h


private:
	bool is_initialized_;
	int64_t previous_timestamp_;

	//acceleration noise components
	float noise_ax;
	float noise_ay;
};

#endif  // TRACKING_H_