#pragma once

#include "../geometry/Position2D.hpp"

namespace tinyslam::graphslam {

    /* \brief Landmark class. Represents a uniquely identifiable feature in 2D space. */
    class Landmark {

        private:
            /* \brief Landmark identifier. */
            unsigned long id;

            /* \brief Landmark position in 2-dimensional space. */
            geometry::Position2D position;

        public:
            /* \brief Landmark class constructor. */
            Landmark(const geometry::Position2D& position);

            /* \brief ID getter. */
            unsigned long getID() const;

            /* \brief Position getter. */
            geometry::Position2D getPosition() const;

            /* \brief ID setter. */
            void setID(unsigned long id);

    };
}
