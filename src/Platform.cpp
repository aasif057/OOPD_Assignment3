#include "Platform.h"

StoppagePlatform::StoppagePlatform(int interval) : stoppageInterval(interval) {}

int StoppagePlatform::getStoppageInterval() const {
    return stoppageInterval;  // Returns the stoppage interval (e.g., 30 minutes)
}

ThroughPlatform::ThroughPlatform() {}

int ThroughPlatform::getStoppageInterval() const {
    return 10;  // Through train stops every 10 minutes
}
