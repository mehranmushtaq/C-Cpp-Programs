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
void Func(int n){
    if (n ==0){
        return ;
    }
    printf("%d ", n);
    Func(n-1);
}
int main(){
    int num =5;
    Func(num);
    return 0;
}


//numbers in Ascending order
void Func(int n){
    if (n ==0){
        return ;
    }
    Func(n-1);
    printf("%d ", n);
    
}
int main(){
    int num =5;
    Func(num);
    return 0;
}
