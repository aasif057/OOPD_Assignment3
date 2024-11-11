#include "Platform.h"
#include "Line.h"
#include "Station.h"
#include <iostream>

int main() {
    // Create two platforms with different stoppage intervals
    StoppagePlatform p1(30);  // Platform allowing stoppage every 30 minutes
    StoppagePlatform p2(10);  // Platform allowing through trains every 10 minutes

    // Create lines with associated platforms
    Line line1(&p1);  // Line 1 with platform p1
    Line line2(&p2);  // Line 2 with platform p2

    // Add train timings (this should be valid as per the stoppage intervals)
    try {
        line1.addTrainTiming(30);  // Should be valid
        line2.addTrainTiming(10);  // Should be valid
        line1.addTrainTiming(35);  // This should throw an error, as it's invalid
    } catch (const std::invalid_argument& e) {
        std::cout << "Error: " << e.what() << std::endl;
    }

    // Create a station and add lines
    Station<int> station(101);  // Using integer ID for the station
    station.addLine(line1);
    station.addLine(line2);

    // Show station details
    station.showDetails();

    return 0;
}
