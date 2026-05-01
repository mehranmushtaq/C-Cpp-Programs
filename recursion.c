#include<stdio.h>

//Factorial
long int fact(long int n){
    if( n== 0 || n==1){
        return 1;
    }
    return n * fact(n-1);
}
int main(){
    printf("%ld",fact(5));
    return 0;
}



//numbers in descending order order
void DescFunc(int n){
    if (n ==0){
        return ;
    }
    printf("%d ", n);
    DescFunc(n-1);
}
int main(){
    int num =5;
    DescFunc(num);
    return 0;
}


//numbers in Ascending order
void AsceFunc(int n){
    if (n == 0){
        return;
    AsceFunc(n-1);
    printf("%d ", n);
    
}
}
int main(){
    int num =5;
    AsceFunc(num);
    return 0;
}
