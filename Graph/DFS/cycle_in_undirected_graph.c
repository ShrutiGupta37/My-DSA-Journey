//cycle detection in undirected graph
//concept:if we encounter an already visited vertex that is not the parent then a cycle exists

#include <stdio.h>
#define N 5

int visited[N];
// Example Undirected Graph
// 0 -- 1 -- 2
// |    
// 3 -- 4
int graph[N][N] = {
    {0, 1, 0, 1, 0},  
    {1, 0, 1, 0, 0},  
    {0, 1, 0, 0, 0},  
    {1, 0, 0, 0, 1},  
    {0, 0, 0, 1, 0}   
};

int DFS_VISIT(int u, int parent) {
    visited[u] = 1;
    for (int v = 0; v < N; v++) {
        if (graph[u][v] == 1) {
            if (!visited[v]){
                if(DFS_VISIT(v,u)) 
                    return 1; // cycle found
            }
            else if (v!=parent) {
                return 1; // cycle found
            }
        }
    }
    return 0;
}

int main() {
    for (int i = 0; i < N; i++) {
        visited[i] = 0;
    
    }

    for (int i = 0; i < N; i++) {
        if (!visited[i]) {
            if (DFS_VISIT(i,-1)) {
                printf("Cycle found\n");
                return 0;
            }
        }
    }

    printf("No cycle found\n");
    return 0;
}

//output=cycle not found
//time complexity = O(N^2)
