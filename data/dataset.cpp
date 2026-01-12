#include "dataset.h"

Dataset loadDataset() {
    Dataset d;

    // ---------- Array ----------
    int temp[10] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
    for (int i = 0; i < 10; i++) {
        d.array[i] = temp[i];
    }
    d.size = 10;

    // ---------- Graph ----------
    d.num_nodes = 6;

    // Node 0 -> 1, 2
    d.graph[0][0] = 1;
    d.graph[0][1] = 2;
    d.graph_sizes[0] = 2;

    // Node 1 -> 0, 3, 4
    d.graph[1][0] = 0;
    d.graph[1][1] = 3;
    d.graph[1][2] = 4;
    d.graph_sizes[1] = 3;

    // Node 2 -> 0, 5
    d.graph[2][0] = 0;
    d.graph[2][1] = 5;
    d.graph_sizes[2] = 2;

    // Node 3 -> 1
    d.graph[3][0] = 1;
    d.graph_sizes[3] = 1;

    // Node 4 -> 1
    d.graph[4][0] = 1;
    d.graph_sizes[4] = 1;

    // Node 5 -> 2
    d.graph[5][0] = 2;
    d.graph_sizes[5] = 1;

    return d;
}
