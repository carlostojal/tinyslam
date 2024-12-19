#pragma once

#include <memory>
#include <set>
#include "../geometry/Pose2D.hpp"
#include "Landmark.hpp"

namespace tinyslam::graphslam {

    /* \brief GraphSLAM node type. */
    class Node {

        private:
            /* \brief Node unique identifier. */
            unsigned long id;

            /* \brief Robot pose at this node. */
            geometry::Pose2D pose;

            /* \brief Set of landmark measurements (edges). */
            std::set<std::shared_ptr<Landmark>> edges;

        public:
            /* \brief Node constructor. */
            Node(const geometry::Pose2D& pose);

            /* \brief Node ID getter. */
            unsigned long getId() const;

            /* \brief Pose getter. */
            geometry::Pose2D getPose() const;

            /* \brief Edge set getter. */
            std::set<std::shared_ptr<Landmark>> getEdges() const;

            /* \brief Pose setter. */
            void setPose(geometry::Pose2D pose);

            /* \brief Associate a measurement to the node. */
            void assocMeasurement(Landmark measurement);

    };
}
