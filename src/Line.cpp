#include "Line.h"
#include <iostream>
#include <algorithm>

Line::Line(Platform* platform, bool isThroughLine) : platform(platform), isThroughLine(isThroughLine) {}

void Line::addTrainTiming(int hours, int minutes) {
    int timingInMinutes = hours * 60 + minutes;

    // Check for duplicate timings
    if (std::find(trainTimings.begin(), trainTimings.end(), timingInMinutes) != trainTimings.end()) {
        throw std::invalid_argument("Train timing already exists for this line.");
    }

    // Check the stoppage interval
    if (timingInMinutes % platform->getStoppageInterval() != 0) {
        throw std::invalid_argument("Train timing does not comply with platform stoppage interval.");
    }

    // Add valid timing
    trainTimings.push_back(timingInMinutes);
}

void Line::showTrainTimings() const {
    std::cout << "Platform Type: " << (isThroughLine ? "Through" : "Stoppage") << std::endl;
    std::cout << "Train timings: ";
    for (const auto& timing : trainTimings) {
        int hours = timing / 60;
        int minutes = timing % 60;
        std::cout << hours << ":" << (minutes < 10 ? "0" : "") << minutes << " ";
    }
    std::cout << std::endl;
}
