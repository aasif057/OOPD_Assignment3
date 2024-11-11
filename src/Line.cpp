#include "Line.h"
#include <stdexcept>  // Include this for std::invalid_argument

// Constructor initializes platform pointer
Line::Line(Platform* platform) : platform(platform) {}

// Add a train timing to the trainTimings vector
void Line::addTrainTiming(int timing) {
    int interval = platform->getStoppageInterval();
    if (timing % interval != 0) {
        throw std::invalid_argument("Train timing does not comply with platform stoppage interval.");
    }
    trainTimings.push_back(timing);  // Add valid timing to the vector
}

// Return all train timings
std::vector<int> Line::getTrainTimings() const {
    return trainTimings;
}
