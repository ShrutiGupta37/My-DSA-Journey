#include <stdio.h>
#include <stdbool.h>
#define N 5

# Graph: 0 -- 1 -- 2
#        |    |
#        3 -- 4


int graph[N][N] = {
    {0, 1, 0, 1, 0},  
    {1, 0, 1, 0, 1},  
    {0, 1, 0, 0, 0},  
    {1, 0, 0, 0, 1},  
    {0, 1, 0, 1, 0}   
};

bool visited[N];

void DFS_VISIT(int u) {
    visited[u] = true;
    printf("%d ", u);  

    for (int v = 0; v < N; v++) {
        if (graph[u][v] == 1 && !visited[v]) {
            DFS_VISIT(v);
        }
    }
}

void DFS() {
    // initially visited = false for all vertices
    for (int i = 0; i < N; i++) {
        visited[i] = false;
    }

    // for each vertex u
    for (int i = 0; i < N; i++) {
        if (!visited[i]) {
            DFS_VISIT(i);
        }
    }
}

int main() {
    printf("DFS Traversal of Graph:\n");
    DFS();
    return 0;
}
