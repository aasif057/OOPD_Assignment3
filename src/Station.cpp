#include "Station.h"
#include <iostream>

template <typename T>
Station<T>::Station(T id) : id(id) {}

template <typename T>
void Station<T>::addLine(const Line& line) {
    lines.push_back(line);
}

template <typename T>
void Station<T>::showDetails() const {
    std::cout << "Station ID: " << id << std::endl;
    for (const auto& line : lines) {
        std::cout << "Train timings for line:" << std::endl;
        line.showTrainTimings();
    }
}

// Explicit template instantiation
template class Station<int>;
template class Station<std::string>;
