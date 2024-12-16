#pragma once

namespace tinyslam::types {

	class Position2D {

		/* \brief "x" coordinate. */
		protected float x;
		/* \brief "y" coordinate. */
		protected float y;

		/* \brief Class constructor. Receives "x" and "y" coordinates. */
		public Position2D(float x, float y);

		/* \brief "x" coordinate getter. */
		public float getX() const;

		/* \brief "y" coordinate getter. */
		public float getY() const;
	};
}

