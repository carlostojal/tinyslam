#pragma once

#include <cmath>

namespace tinyslam::geometry {

    /* \brief 2-dimensional position class. Has a pair of "x" and "y" coordinates. */
	class Position2D {

	    protected:
    		/* \brief "x" coordinate. */
    		float x;
    		/* \brief "y" coordinate. */
    		float y;

        public:
    		/* \brief Class constructor. Receives "x" and "y" coordinates. */
    		Position2D(float x, float y);

    		/* \brief "x" coordinate getter. */
    		float getX() const;

    		/* \brief "y" coordinate getter. */
    		float getY() const;

            /* \brief Get the Euclidean distance. */
            float getEuclideanDist(Position2D other) const;
	};
}
