#include "Platform.h"

// StoppagePlatform constructor, initializes stoppage interval
StoppagePlatform::StoppagePlatform(int interval) : stoppageInterval(interval) {}

// Get the stoppage interval
int StoppagePlatform::getStoppageInterval() const {
    return stoppageInterval;
}

// Set the stoppage interval
void StoppagePlatform::setStoppageInterval(int interval) {
    stoppageInterval = interval;
}
