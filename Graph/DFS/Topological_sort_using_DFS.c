//  Topological sort is not possible if there is a loop in the graph
#include <stdio.h>
#include <stdlib.h>

#define N 6   // number of vertices

int graph[N][N] = {
    {0, 1, 0, 1, 0, 0}, // 0 → 1, 0 → 3
    {0, 0, 1, 0, 0, 0}, // 1 → 2
    {0, 0, 0, 1, 0, 0}, // 2 → 3
    {0, 0, 0, 0, 0, 0}, // 3 → none
    {0, 0, 1, 0, 0, 1}, // 4 → 2, 4 → 5
    {0, 0, 0, 0, 0, 0}  // 5 → none
};

int visited[N];
int stack[N];
int top = -1;


void push(int v) {
    top=top+1;
    stack[top] = v;
}

// DFS function
void DFS(int v) {
    visited[v] = 1;

    for (int i = 0; i < N; i++) {
        if (graph[v][i] && !visited[i]) {
            DFS(i);
        }
    }

    // after visiting all children, push node into stack
    push(v);
}

// Topological Sort
void topologicalSort() {
    for (int i = 0; i < N; i++) {
        visited[i] = 0;
    }

    for (int i = 0; i < N; i++) {
        if (!visited[i]) {
            DFS(i);
        }
    }

    // Print stack in reverse order
    printf("Topological Sort Order: ");
    while (top != -1) {
        printf("%d ", stack[top--]);
    }
    printf("\n");
}

int main() {
    topologicalSort();
    return 0;
}

//output : 4 5 0 1 2 3
