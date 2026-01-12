#include <iostream>
#include "data/dataset.h"

// void dfs(
//     int node,
//     int graph[][MAX_EDGES],
//     int graph_sizes[],
//     bool visited[]
// ) {
//     visited[node] = true;
//     std::cout << node << " ";

//     for (int i = 0; i < graph_sizes[node]; i++) {
//         int neighbor = graph[node][i];
//         if (!visited[neighbor]) {
//             dfs(neighbor, graph, graph_sizes, visited);
//         }
//     }
// }

// void dfs(
//     int node,
//     int graph[][MAX_EDGES],
//     int graph_sizes[],
//     bool visited[]
// ) {
//     visited[node] = true;
//     std::cout << node << " ";
//     for (int i = 0; i < graph_sizes[node]; i++) {
//         int neighbor = graph[node][i];
//         if (!visited[neighbor]) {
//             dfs(neighbor, graph, graph_sizes, visited);
//         }
//     }
// }

// void dfs(int node, int graph[][MAX_EDGES], int graph_sizes[], bool visited[]) {
//     visited[node] = true;
//     std::cout << node << " ";
//     for (int i = 0; i < graph_sizes[node]; i++) {
//         int neighbor = graph[node][i];
//         if (!visited[neighbor]) {
//             dfs(neighbor, graph, graph_sizes, visited);
//         }
//     }
// }

// void dfs(int node, int graph[][MAX_EDGES], int graph_sizes[], bool visited[]) {
//     visited[node] = true;
//     std::cout << node << " ";
//     for (int i = 0; i < graph_sizes[node]; i++) {
//         int neighbor = graph[node][i];
//         if (!visited[neighbor]) {
//             dfs(neighbor, graph, graph_sizes, visited);
//         }
//     }
// }

void dfs(int node, int graph[][MAX_EDGES], int graph_sizes[], bool visited[]) {
    visited[node] = true;
    std::cout << node << " ";
    for (int i = 0; i < graph_sizes[node]; i++) {
        int neighbor = graph[node][i];
        if (!visited[neighbor]) {
            dfs(neighbor, graph, graph_sizes, visited);
        }
    }
}