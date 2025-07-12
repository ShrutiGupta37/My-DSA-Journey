#include <stdio.h>

void printArray(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}
int partition(int A[], int low, int high)
{
    int pivot = A[low];
    int i = low + 1;
    int j = high;

    do
    {
        while (A[i] <= pivot)
        {
            i++;
        }

        while (A[j] > pivot)
        {
            j--;
        }
        if (i < j)
        {
            int temp = A[i];
            A[i] = A[j];
            A[j] = temp;
        }
    } while (i < j);
       int temp = A[low];
            A[low] = A[j];
            A[j] = temp;
            return j;
}

void quicksort(int A[], int low, int high)
{
    if (low < high)
    {
        int partitionIndex = partition(A, low, high);
        quicksort(A, low, partitionIndex - 1);  // sort left sub-array
        quicksort(A, partitionIndex + 1, high); // sort right sub-array
    }
}

int main()
{
    int A[] = {2, 4, 2, 5, 7, 3, 8};
    int size_A = sizeof(A) / sizeof(A[0]);
    printArray(A, size_A);
    quicksort(A, 0, size_A - 1);
    printArray(A, size_A);
}