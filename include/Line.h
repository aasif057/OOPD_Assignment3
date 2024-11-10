#ifndef LINE_H
#define LINE_H

#include <vector>

class Platform;

class Line {
private:
    std::vector<int> trainTimings;
    Platform* platform;  // Associated platform

public:
    Line(Platform* plat);  // Constructor with platform association
    void addTrainTiming(int time);  // Add timing with validation
    void showTrainTimings() const;  // Display train timings
};

#endif
