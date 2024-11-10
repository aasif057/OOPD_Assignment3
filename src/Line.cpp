#include "Line.h"
#include "Platform.h"
#include <iostream>
#include <stdexcept>

Line::Line(Platform* plat) : platform(plat) {}

void Line::addTrainTiming(int time) {
    if (time % platform->getStoppageInterval() != 0) {
        throw std::invalid_argument("Train timing does not comply with platform stoppage interval.");
    }
    trainTimings.push_back(time);
}

void Line::showTrainTimings() const {
    std::cout << "Train timings on this line:" << std::endl;
    for (int time : trainTimings) {
        std::cout << "Train at: " << time << " minutes" << std::endl;
    }
}
