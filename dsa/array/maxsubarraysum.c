#include <stdio.h>

//BRute force 
int maxSubarraySum(int arr[], int n) {
    int maxSum = arr[0];

    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {

            int sum = 0;

            for (int k = i; k <= j; k++) {
                sum += arr[k];
            }

            if (sum > maxSum)
                maxSum = sum;
        }
    }

    return maxSum;
}

int main() {
    int arr[] = {2, -3, 6, -5, 4, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Maximum sum = %d", maxSubarraySum(arr, n));

    return 0;
}