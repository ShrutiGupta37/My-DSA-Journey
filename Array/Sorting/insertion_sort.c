#include <stdio.h>

int main() {
    int i, j,temp;
    int A[5]={2,4,10,6,7};

    // Insertion Sort
    for (i = 1; i < 5; i++) {
        temp = A[i];
        j = i - 1;

        while (j >= 0 && A[j] > temp) {
            A[j + 1] = A[j];
            j--;
        }
        A[j + 1] = temp;
    }

    printf("Sorted array: ");
    for (i = 0; i <5; i++) {
        printf("%d ", A[i]);
    }

    return 0;
}
