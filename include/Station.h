#ifndef STATION_H
#define STATION_H

#include "Line.h"
#include <vector>
#include <string>
#include <iostream>

template <typename T>
class Station {
public:
    Station(T id);  // Constructor that accepts a station ID
    void addLine(const Line& line);  // Add a line to the station
    void showDetails() const;  // Show details of the station

private:
    T id;  // Station ID (can be int or string)
    std::vector<Line> lines;  // Vector to store lines
};

#endif
