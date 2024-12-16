#pragma once

#include <memory>
#include <tinyslam/types/Pose2D.h>
#include <tinyslam/types/Position2D.h>

using namespace tinyslam;

namespace tinyslam::types {

	/* \brief Landmark measurement class. */
	class Measurement {

		/* \brief Landmark position. */
		private types::Position2D landmark_pos;

		/* \brief Pointer to robot pose at landmark. */
		private std::shared_prt<types::Pose2D> robot_pose;

		/* \brief Measurement class constructor. */
		public Measurement(types::Position2D landmark_pos, std::shared_prt<types::Pose2D> robot_pose);

		/* \brief Measurement class destructor. */
		public ~Measurement();

		/* \brief Landmark position getter. */
		public types::Position2D getLandmarkPos() const;

		/* \brief Robot pose getter. */
		public std::shared_ptr<types::Pose2D> getRobotPose() const;
	};

}

