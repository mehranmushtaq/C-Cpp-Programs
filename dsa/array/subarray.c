#include <stdio.h>

void printSubarrays(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {

            for (int k = i; k <= j; k++) {
                printf("%d ", arr[k]);
            }

            printf("\n");
        }
    }
}

int main() {
    int arr[] = {1, 2, 3};
    int n = 3;

    printSubarrays(arr, n);

    return 0;
}