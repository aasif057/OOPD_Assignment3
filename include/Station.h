#ifndef STATION_H
#define STATION_H

#include <vector>
#include <iostream>
#include <string>

template <typename T>
class Station {
private:
    T stationID;
    std::vector<class Line> lines;  // Stores multiple lines at this station

public:
    Station(T id);  // Constructor with station ID
    void addLine(Line line);  // Add a line to the station
    void showDetails() const;  // Display station details
};

// #include "Station.cpp"  // Include implementation for template

#endif
    