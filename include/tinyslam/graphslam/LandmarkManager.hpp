#pragma once

#include <memory>
#include <unordered_map>

#include "Landmark.hpp"

namespace tinyslam::graphslam {

    /* \brief Manages all map landmarks. */
    class LandmarkManager {

        private:
            /* Last used landmark ID. */
            unsigned long last_used_id = 0;
            /* \brief Map of landmark IDs to instances. */
            std::unordered_map<unsigned long, std::shared_ptr<Landmark>> landmark_map;

        public:
            /* \brief Landmark manager constructor. */
            LandmarkManager();

            /* \brief Get next landmark ID to be used. */
            unsigned long getNextID() const;

            /* \brief Register a new landmark. */
            std::shared_ptr<Landmark> registerLandmark(Landmark& new_landmark);

            /* \brief Get a landmark by ID. */
            std::shared_ptr<Landmark> getByID(unsigned long id) const;

    };
}
