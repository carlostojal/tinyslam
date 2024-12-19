#pragma once

#include "Landmark.hpp"
#include <memory>

namespace tinyslam::graphslam {

    /* \brief Represents a landmark measurement/observation. */
    class Measurement {
        private:
            /* \brief Measurement identifier. */
            unsigned long id;

            /* \brief Landmark reference. */
            std::shared_ptr<Landmark> landmark;

        public:
            /* \brief Measurement class constructor. */
            Measurement(std::shared_ptr<Landmark> landmark);

            /* \brief Landmark getter. */
            std::shared_ptr<Landmark> getLandmark() const;
    };
}
