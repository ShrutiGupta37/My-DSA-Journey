#include <stdio.h>
#define MAX_SIZE 100

void traverse(int A[], int n) {
    printf("Array Elements:\n");
    for (int i = 1; i <= n; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");
}

int insert(int A[], int n) {
    int pos, val;
    if (n >= MAX_SIZE) {
        printf("Overflow\n");
        return n;
    }

    printf("Enter position (1 to %d): ", n + 1);
    scanf("%d", &pos);
    if (pos < 1 || pos > n + 1) {
        printf("Invalid position!\n");
        return n;
    }

    printf("Enter value to insert: ");
    scanf("%d", &val);

    // Shift elements to the right from the end
    for (int i = n; i >= pos; i--) {
        A[i + 1] = A[i];
    }

    A[pos] = val;
    printf("Element inserted successfully\n");

    return n + 1;
}

int deleteElement(int A[], int n) {
    int pos;
    if (n <= 0) {
        printf("Underflow\n");
        return n;
    }

    printf("Enter position to delete: ", n);
    scanf("%d", &pos);
    if (pos < 1 || pos > n) {
        printf("Invalid position!\n");
        return n;
    }

    // Shift elements to the left
    for (int i = pos; i < n; i++) {
        A[i] = A[i + 1];
    }

    printf("Element deleted successfully\n");

    return n - 1;
}

int main() {
    int x, A[MAX_SIZE], n;

    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter elements:\n");
    for (int i = 1; i <= n; i++) {
        scanf("%d", &A[i]);
    }

    while (1) {
        printf("\n=======================\n");
        printf("1. Traverse the Array\n");
        printf("2. Insert an Element\n");
        printf("3. Delete an Element\n");
        printf("4. Exit\n");
        printf("========================\n");
        printf("choose a no.: ");
        scanf("%d", &x);

        switch (x) {
            case 1:
                traverse(A, n);
                break;

            case 2:
                n = insert(A, n);
                break;

            case 3:
                n = deleteElement(A, n);
                break;

            case 4:
                return 0;

            default:
                printf("Invalid option\n");
        }
    }

    return 0;
}
