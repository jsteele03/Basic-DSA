#pragma once
#include <vector>
#include <iostream>

inline void printVector(const std::vector<int>& v) {
    for (int x : v) std::cout << x << " ";
    std::cout << "\n";
}
