#include <iostream>
using namespace std;

// Check if Array is soretd

bool isSorted(int*arr,int n,int i){
    if(i == n-1){
        return true;
    }  
    if (arr[i] > arr[i+1]){
        return false;
    }
    return isSorted(arr,n-1,i+1);
}
