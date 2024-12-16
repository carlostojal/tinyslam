#pragma once

#include <tinyslam/types/Measurement.h>
#include <tinyslam/types/Pose.h>

namespace tinyslam {
	
	/* \brief Abstract SLAM class. */
	class SLAM {

		/* \brief Add a raw measurement. */
		virtual void addMeasurement(types::Measurement measurement);

		/* \brief Add a robot pose belief. */
		virtual void addPose(types::Pose2D pose);
		
		/* \brief Optimize the map. */
		virtual void optimize();
	};
}

