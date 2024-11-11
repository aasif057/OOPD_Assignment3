#include <iostream>
#include "Platform.h"
#include "Line.h"
#include "Station.h"

int main() {
    try {
        StoppagePlatform p1(30);  // Platform allowing stoppage every 30 minutes
        ThroughPlatform p2;       // Platform allowing through trains every 10 minutes by default

        Line line1(&p1);  // Line associated with p1
        Line line2(&p2);  // Line associated with p2

        // Adding train timings
        line1.addTrainTiming(30); // Valid timing for stoppage platform
        line2.addTrainTiming(10); // Valid timing for through platform

        // Trying an invalid timing, will throw an exception
        line1.addTrainTiming(25); // Invalid timing for stoppage platform

    } catch (const std::invalid_argument& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}
