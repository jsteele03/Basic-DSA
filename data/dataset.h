#pragma once

// Max limits (easy to change later)
#define MAX_NODES 6
#define MAX_EDGES 4

struct Dataset {
    // ---------- Array data ----------
    int array[10];
    int size;

    // ---------- Graph data ----------
    int graph[MAX_NODES][MAX_EDGES]; // adjacency list
    int graph_sizes[MAX_NODES];      // number of neighbors per node
    int num_nodes;
};

Dataset loadDataset();
