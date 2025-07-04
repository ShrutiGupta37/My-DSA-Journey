#include<stdio.h>

int Binary_search(int A[], int x, int lef, int righ) {
    if (lef > righ)  
        return -1;

    int mid = (lef + righ) / 2;

    if (A[mid] == x)
        return mid;
    else if (x < A[mid])
        return Binary_search(A, x, lef, mid - 1);
    else
        return Binary_search(A, x, mid + 1, righ);
}

int main() {
    int A[10], i, x;

    printf("Enter 10 elements in ascending order: ");
    for (i = 0; i < 10; i++) {
        scanf("%d", &A[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &x);

    int z = Binary_search(A, x, 0, 9);

    if (z == -1) {
        printf("Element not found\n");
    } else {
        printf("Element found at index %d\n", z);
    }

    return 0;
}
