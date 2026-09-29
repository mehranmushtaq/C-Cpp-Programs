#include <stdio.h>

void linearSearch(int arr[], int n, int key) {
    int count =0;
    int flag =0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            printf("found at position %d\n",i);
            count++;
            flag=1;
        }
    }
    if(flag ==0){
        printf("element not found\n");
    }else{
        printf("total occurences = %d\n",count);
    }

   
}

int main() {
    int arr[] = {10, 20, 10, 40, 50};
    int n = 5;
    int key = 10;

    int result = linearSearch(arr, n, key);
    return 0;
}