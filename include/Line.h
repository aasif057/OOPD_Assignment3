#ifndef LINE_H
#define LINE_H

#include "Platform.h"
#include <vector>

class Line {
public:
    Line(Platform* platform);  // Constructor accepts a platform pointer
    void addTrainTiming(int timing);  // Add train timing
    std::vector<int> getTrainTimings() const;  // Get all train timings

private:
    Platform* platform;  // Pointer to the associated platform
    std::vector<int> trainTimings;  // Vector to store train timings
};

#endif
