//using DFS detect cycle in directed graph
// concept :if a node appears more than once in a path then we will call it cycle.

#include <stdio.h>
#define N 5

int visited[N];
int recstack[N];

// Example Directed Graph
// 0 → 1 → 2
// ↑    |
// |    ↓
// 3 ←  4
int graph[N][N] = {
    {0, 1, 0, 0, 0},  
    {0, 0, 1, 0, 1},  
    {0, 0, 0, 0, 0},   
    {1, 0, 0, 0, 0},  
    {0, 0, 0, 1, 0}   
};

int DFS_VISIT(int graph[N][N], int u) {
    visited[u] = 1;
    recstack[u] = 1;

    for (int v = 0; v < N; v++) {
        if (graph[u][v] == 1) {
            if (!visited[v]){
                if(DFS_VISIT(graph, v)) 
                    return 1; // cycle found
            }
            else if (recstack[v] == 1) {
                return 1; // cycle found
            }
        }
    }

    recstack[u] = 0; // remove from recursion stack
    return 0;
}

int main() {
    for (int i = 0; i < N; i++) {
        visited[i] = 0;
        recstack[i] = 0;
    }

    for (int i = 0; i < N; i++) {
        if (!visited[i]) {
            if (DFS_VISIT(graph, i)) {
                printf("Cycle found\n");
                return 0;
            }
        }
    }

    printf("No cycle found\n");
    return 0;
}
//time complexity = O(N^2)
