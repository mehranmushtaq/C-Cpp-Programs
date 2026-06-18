#include <iostream>
using namespace std;

int firstOccurrence(int arr[], int n, int key, int i) {
    
    if (i == n)
        return -1;

    
    if (arr[i] == key)
        return i;

    
    return firstOccurrence(arr, n, key, i + 1);
}

int main() {
    int arr[] = {4, 2, 1, 2, 5, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 2;

    int index = firstOccurrence(arr, n, key, 0);

    if (index != -1)
        cout << "First occurrence at index " << index;
    else
        cout << "Element not found";

    return 0;
}