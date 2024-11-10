#include "Platform.h"
#include <stdexcept>

StoppagePlatform::StoppagePlatform(int interval) {
    setStoppageInterval(interval);
}

int StoppagePlatform::getStoppageInterval() const {
    return stoppageInterval;
}

void StoppagePlatform::setStoppageInterval(int interval) {
    if (interval != 30) {
        throw std::invalid_argument("StoppagePlatform interval must be 30 minutes.");
    }
    stoppageInterval = interval;
}

ThroughPlatform::ThroughPlatform(int interval) {
    setStoppageInterval(interval);
}

int ThroughPlatform::getStoppageInterval() const {
    return stoppageInterval;
}

void ThroughPlatform::setStoppageInterval(int interval) {
    if (interval != 10) {
        throw std::invalid_argument("ThroughPlatform interval must be 10 minutes.");
    }
    stoppageInterval = interval;
}
