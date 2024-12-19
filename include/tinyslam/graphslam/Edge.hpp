#pragma once

#include <memory>
namespace tinyslam::graphslam {

    /* \brief GraphSLAM edge type. */
    template <typename MeasurementT>
    class Edge {

        private:
            std::shared_ptr<MeasurementT> landmark;

        public:
            /* \brief Edge constructor.
             *
             * \param node Node which this edge connects to.
             * \param measurement Measurement observed.
            */
            Edge(Node& node, MeasurementT& measurement);

            /* \brief Node getter. */
            Node getNode() const;

            /* \brief Measurement getter. */
            MeasurementT getMeasurement() const;

    };
}
