#include<stdio.h>
#include <stdlib.h>

int PrintArray(int *arr,int n){
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}

//Dynamic Memory Allocation using Malloc
int main(){
    int n;
    printf("enetr size of array:");
    scanf("%d",&n);
    int *arr = malloc(n*sizeof *arr);
    if( arr == NULL){
        printf("memory allocation Failed");
        return 1;
    }
    printf("enter elements of array:");
    for(int i =0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    PrintArray(arr,n);
    free(arr);
    return 0;
}

// Insertion At Beginning of Array
int main(){
    int n,element;
    printf("enter element to insert:");
    scanf("%d",&element);
    printf("enter size of array:");
    scanf("%d",&n);
    int *arr = malloc((n+1)*sizeof *arr);
    if( arr == NULL){
        printf("memory allocation Failed");
        return 1;
    }
    printf("enter elements of array:");
    for(int i =0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i =n;i>0;i--){
        arr[i]=arr[i-1];
  
    }
    arr[0]=element;
    n++;
    PrintArray(arr,n);
    free(arr);
    return 0;
}

// Insertion at End
int main(){
    int n,element;
    printf("enter element to insert:");
    scanf("%d",&element);
    printf("enter size of array:");
    scanf("%d",&n);
    int *arr = malloc((n+1)*sizeof *arr);
    if( arr == NULL){
        printf("memory allocation Failed");
        return 1;
    }
    printf("enter elements of array:");
    for(int i =0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    arr[n]=element;
    n++;
    PrintArray(arr,n);
    free(arr);
    return 0;
} 

// Insert at any position
int main(){
    int n,element;
    int pos;
    printf("enter position to insert:");
    scanf("%d",&pos);
    printf("enter element to insert:");
    scanf("%d",&element);
    printf("enter size of array:");
    scanf("%d",&n);
    int *arr = malloc((n+1)*sizeof *arr);
    if( arr == NULL){
        printf("memory allocation Failed");
        return 1;
    }
    if (pos < 1 || pos > n + 1) {
    printf("Invalid position");
    free(arr);
    return 1;
    }
    printf("enter elements of array:");
    for(int i =0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i =n;i>=pos;i--){
        arr[i]=arr[i-1];
  
    }
    arr[pos-1]=element;
    n++;
    PrintArray(arr,n);
    free(arr);
    return 0;
}

//Delete from beginning
int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int *arr = malloc(n * sizeof *arr);
    if (arr == NULL) {
        printf("Memory allocation failed");
        return 1;
    }
    printf("Enter array elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    n--;
    printf("Array after deletion: ");
    PrintArray(arr, n);
    free(arr);
    return 0;
}

// Delete from end
int main(){
    int n;
    printf("enter size of array:");
    scanf("%d",&n);
    int *arr = malloc(n*sizeof *arr);
    if( arr == NULL){
        printf("memory allocation Failed");
        return 1;
    }
    printf("enter elements of array:");
    for(int i =0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    n--;
    PrintArray(arr,n);
    free(arr);
    return 0;
}

// Delete from any position
int main(){
    int n;
    int pos;
    printf("enter position to delete:");
    scanf("%d",&pos);
    printf("enter size of array:");
    scanf("%d",&n);
    int *arr = malloc(n*sizeof *arr);
    if( arr == NULL){
        printf("memory allocation Failed");
        return 1;
    }
    if (pos < 1 || pos > n) {
    printf("Invalid position");
    free(arr);
    return 1;
    }
    printf("enter elements of array:");
    for(int i =0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i =pos-1;i<n-1;i++){
        arr[i]=arr[i+1];
  
    }
    n--;
    PrintArray(arr,n);
    free(arr);
    return 0;
}