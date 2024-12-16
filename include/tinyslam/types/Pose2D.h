#pragma once

#include <tinyslam/types/Position2D.h>

using namespace tinyslam;


namespace tinyslam::types {

	/*
	 * \brief Robot pose in 2-dimensional space (2D coordinates and heading).
	 */
	class Pose2D : types::Position2D {
		
		/* \brief Heading/yaw angle in radians. */
		private float theta;

		/* \brief Pose2D class constructor. */
		public Pose2D(float x, float y, float theta);

		/* \brief "theta" getter. */
		public float getTheta() const;
	};
}

