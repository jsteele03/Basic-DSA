#pragma once
#include <iostream>

// Print a C-style array
inline void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << "\n";
}

inline void printGraph(int graph[][MAX_EDGES], int graph_sizes[], int num_nodes) {
    for (int i = 0; i < num_nodes; i++) {
        std::cout << i << ": ";
        for (int j = 0; j < graph_sizes[i]; j++) {
            std::cout << graph[i][j] << " ";
        }
        std::cout << "\n";
    }
}