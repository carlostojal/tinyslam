#include <memory>
#include <tinyslam/graphslam/Node.hpp>

using namespace tinyslam::graphslam;

Node::Node(const tinyslam::geometry::Pose2D& pose) : pose(pose) {
}

unsigned long Node::getId() const {
    return this->id;
}

tinyslam::geometry::Pose2D Node::getPose() const {
    return this->pose;
}

std::set<std::shared_ptr<Landmark>> Node::getEdges() const {
    return this->edges;
}

void Node::setPose(tinyslam::geometry::Pose2D pose) {
    this->pose = pose;
}

void Node::assocMeasurement(Landmark measurement) {
    // create the edge
    // insert in the set
}
