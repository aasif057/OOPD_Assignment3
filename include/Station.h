#ifndef STATION_H
#define STATION_H

#include "Line.h"
#include <vector>
#include <string>
#include <iostream>

template <typename T>
class Station {
public:
    Station(T id);
    void addLine(const Line& line);  
    void showDetails() const;

private:
    T id;  // Station ID, can be int or string
    std::vector<Line> lines;  // List of lines associated with the station
};

#endif
