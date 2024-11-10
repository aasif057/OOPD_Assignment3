#include "Station.h"
#include "Line.h"

template <typename T>
Station<T>::Station(T id) : stationID(id) {}

template <typename T>
void Station<T>::addLine(Line line) {
    lines.push_back(line);
}

template <typename T>
void Station<T>::showDetails() const {
    std::cout << "Station ID: " << stationID << std::endl;
    for (const auto& line : lines) {
        line.showTrainTimings();
    }
}
