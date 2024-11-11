#include "Station.h"

// Constructor that initializes station ID
template <typename T>
Station<T>::Station(T id) : id(id) {}

// Add a line to the station
template <typename T>
void Station<T>::addLine(const Line& line) {
    lines.push_back(line);
}

// Show details of the station
template <typename T>
void Station<T>::showDetails() const {
    std::cout << "Station ID: " << id << std::endl;
    for (const auto& line : lines) {
        std::cout << "Train timings for line:" << std::endl;
        auto timings = line.getTrainTimings();
        for (const auto& timing : timings) {
            std::cout << "  " << timing << " minutes" << std::endl;
        }
    }
}

// Explicit template instantiation
template class Station<int>;
template class Station<std::string>;
