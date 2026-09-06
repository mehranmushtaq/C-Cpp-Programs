#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void Parray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int Partition(int arr[],int si,int ei){
    int pivot = arr[ei];
    int i = si-1;
    for(int j=si;j<ei;j++){
        if(arr[j]<pivot){
        i++;
        swap(arr[i],arr[j]);
        }
    }
    i++;
    swap(arr[i],arr[ei]);
    return i;
}

void QS(int arr[],int si,int ei){
    if(si>=ei){
        return ;
    }
        int k = Partition(arr,si,ei); //pivot index
        
        QS(arr,si,k-1);
        QS(arr,k+1,ei);
    
}
int main(){
    int arr[]={3,2,5,6,7,4};
    int n = 6;
    QS(arr,0,n-1);
    Parray(arr,n);
    return 0;
}