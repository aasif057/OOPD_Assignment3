#ifndef LINE_H
#define LINE_H

#include "Platform.h"
#include <vector>
#include <stdexcept>
#include <algorithm>

class Line {
public:
    Line(Platform* platform, bool isThroughLine);
    
    void addTrainTiming(int hours, int minutes);
    void showTrainTimings() const;
    
private:
    Platform* platform;  // Each line corresponds to a single platform
    bool isThroughLine;  // Indicates whether this is a through train line
    std::vector<int> trainTimings;  // Stores timings in minutes since midnight
};

#endif
