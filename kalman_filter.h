#ifndef KALMAN_FILTER_H_
#define KALMAN_FILTER_H_

#include "pch.h"
#include <Eigen/Dense>

using Eigen::MatrixXd;
using Eigen::VectorXd;

class KalmanFilter {
public:
	/**
	 * Constructor
	 */
	KalmanFilter();
	//will define this function in main.cpp

	/**
	 * Destructor
	 */
	virtual ~KalmanFilter();

	/**
	 * Predict Predicts the state and the state covariance
	 *   using the process model
	 */
	 // Predict the state and the state covariance using the process model
	void Predict();
	//will define this function in main.cpp

	/**
	 * Updates the state and
	 * @param z The measurement at k+1
	 */
	void Update(const VectorXd &z);

	// state vector
	VectorXd x_;

	// state covariance matrix
	MatrixXd P_;

	// state transistion matrix
	MatrixXd F_;

	// process covariance matrix
	MatrixXd Q_;

	// measurement matrix
	MatrixXd H_;

	// measurement covariance matrix
	MatrixXd R_;
};

#endif  // KALMAN_FILTER_H_