#include "Platform.h"

// Default constructor for StoppagePlatform, sets interval to 30 minutes
StoppagePlatform::StoppagePlatform() {}

// Get the stoppage interval for StoppagePlatform (every 30 minutes)
int StoppagePlatform::getStoppageInterval() const {
    return 30;  // 30-minute stoppage interval
}

// Default constructor for ThroughPlatform, sets interval to 10 minutes
ThroughPlatform::ThroughPlatform() {}

// Get the stoppage interval for ThroughPlatform (every 10 minutes)
int ThroughPlatform::getStoppageInterval() const {
    return 10;  // 10-minute through train interval
}
