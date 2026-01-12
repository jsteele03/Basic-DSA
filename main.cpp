#include "data/dataset.h"
#include "utils/print.h"
#include <iostream>

int binary_search(int arr[], int size, int desired_number);

void dfs(int node, int graph[][MAX_EDGES], int graph_sizes[], bool visited[]);

int main() {
    Dataset data = loadDataset();

    // BS
    int target = 11;
    int idx = binary_search(data.array, data.size, target);

    if (idx != -1)
        std::cout << "Found " << target << " at index " << idx << "\n";
    else
        std::cout << target << " not found.\n";

    // DFS
    bool visited[MAX_NODES] = {false};

    std::cout << "DFS starting from node 0: ";
    dfs(0, data.graph, data.graph_sizes, visited);
    std::cout << "\n";

    return 0;
}
