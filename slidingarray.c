#include <stdio.h>
#include <limits.h>

int maxArraySum(int arr[], int n, int k) {
    int wSum = 0;

    // Step 1: Calculate sum of first 'k' elements
    for (int i = 0; i < k; i++) {
        wSum = wSum + arr[i];
    }

    int maxSum = wSum;

    // Step 2: Slide the window across the array
    for (int j = k; j < n; j++) {
        wSum = wSum + arr[j] - arr[j - k]; // Add new, remove old
        if (wSum > maxSum) {
            maxSum = wSum;
        }
    }

    return maxSum;
}

int main() {
    int arr[7] = {-1, 2, 4, 5, 4, 3, 7};
    int k = 3;
    int n = sizeof(arr) / sizeof(arr[0]);

    int result = maxArraySum(arr, n, k);
    printf("%d", result);

    return 0;
}
