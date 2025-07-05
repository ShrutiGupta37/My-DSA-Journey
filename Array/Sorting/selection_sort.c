#include <stdio.h>

int main() {
    int A[4] = {7,5,4,2};
    int i, j, min, temp;

    // Selection Sort in Ascending Order
    for (i = 0; i < 3; i++) {
        min = i; 
        for (j = i + 1; j < 4; j++) {
            if (A[j] < A[min]) {
                min = j;
            }
        }
        temp = A[i];
        A[i] = A[min];
        A[min] = temp;
    }

    printf("Sorted Array : ");
    for (i = 0; i < 4; i++) {
        printf("%d ", A[i]);
    }

    return 0;
}
