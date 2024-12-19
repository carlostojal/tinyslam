#pragma once

#include "Pose2D.hpp"
#include <memory>
#include <set>
#include <tinyslam/geometry/Pose2D.hpp>
#include <tinyslam/geometry/Edge.hpp>

namespace tinyslam::graphslam {

    /* \brief GraphSLAM node type. */
    template <typename MeasurementT>
    class Node {

        private:
            /* \brief Node unique identifier. */
            unsigned long id;

            /* \brief Robot pose at this node. */
            Pose2D pose;

            /* \brief Set of landmark measurements (edges). */
            std::set<Edge<MeasurementT>> edges;

        public:
            /* \brief Node constructor. */
            Node();

            /* \brief Node ID getter. */
            unsigned long getId() const;

            /* \brief Pose getter. */
            Pose2D getPose() const;

            /* \brief Edge set getter. */
            std::set<Edge> getEdges() const;

            /* \brief Pose setter. */
            void setPose(Pose2D pose);

    };
}
