#include "Platform.h"
#include "Line.h"
#include "Station.h"
#include <iostream>
#include <limits>
#include <stdexcept>
#include <sstream>

int main() {
    try {
        // Input Station ID
        std::cout << "Enter Station ID (integer or string): ";
        std::string stationID;
        std::cin >> stationID;

        Station<std::string> station(stationID); // Use std::string as Station ID

        // Input number of lines
        int numLines;
        std::cout << "Enter the number of lines for the station: ";
        std::cin >> numLines;

        for (int i = 0; i < numLines; ++i) {
            std::cout << "Configuring Line " << i + 1 << std::endl;

            // Choose platform type for the line
            int platformChoice;
            std::cout << "Choose platform type for Line " << i + 1
                      << " (1 for Stoppage, 2 for Through): ";
            std::cin >> platformChoice;

            Platform* platform;
            if (platformChoice == 1) {
                platform = new StoppagePlatform(30); // Stoppage every 30 minutes
            } else if (platformChoice == 2) {
                platform = new ThroughPlatform(); // Through every 10 minutes
            } else {
                std::cerr << "Invalid platform type. Exiting program." << std::endl;
                return 1;
            }

            Line line(platform, platformChoice == 2); // Create the line with the platform

            // Input train timings for the line
            int numTimings;
            std::cout << "Enter the number of train timings for Line " << i + 1 << ": ";
            std::cin >> numTimings;

            std::cout << "Enter the train timings in hh:mm format:" << std::endl;
            for (int j = 0; j < numTimings; ++j) {
                while (true) {
                    std::string timeInput;
                    std::cout << "Timing " << j + 1 << ": ";
                    std::cin >> timeInput;

                    try {
                        // Parse input as hh:mm
                        std::stringstream ss(timeInput);
                        int hours, minutes;
                        char colon;

                        ss >> hours >> colon >> minutes;

                        // Validate parsing success
                        if (ss.fail() || colon != ':' || hours < 0 || hours > 23 || minutes < 0 || minutes > 59) {
                            throw std::invalid_argument("Invalid time format. Please use hh:mm (24-hour format).");
                        }

                        // Add the timing
                        line.addTrainTiming(hours, minutes);
                        break; // Exit loop on success

                    } catch (const std::invalid_argument& e) {
                        std::cout << "Error: " << e.what() << " Try again." << std::endl;
                    }
                }
            }

            // Add the line to the station
            station.addLine(line);
        }

        // Show station details
        station.showDetails();

    } catch (const std::exception& e) {
        std::cerr << "An error occurred: " << e.what() << std::endl;
    }

    return 0;
}
