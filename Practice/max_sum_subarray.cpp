// Given an array of integers (which may include both positive and negative numbers), find the maximum sum of any contiguous subarray.
#include <iostream>
using namespace std;

int main() {
    int arr[5] = {-8, 0, -2, 3, 13};
    int n = 5;

    int sum = 0;
    int maxSum = arr[0];  // initialize with first element

    for (int i = 0; i < n; i++) {
        sum = sum + arr[i];
        if (sum > maxSum) {
            maxSum = sum;
        }
        if (sum < 0) {
            sum = 0;
        }
    }

    cout << "Maximum subarray sum = " << maxSum << endl;
    return 0;
}
