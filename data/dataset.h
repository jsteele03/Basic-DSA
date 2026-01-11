#pragma once
#include <vector>
#include <unordered_map>

struct Dataset {
    // Array / String data
    std::vector<int> array;

    // Graph (adjacency list)
    std::unordered_map<int, std::vector<int>> graph;
};

Dataset loadDataset();
