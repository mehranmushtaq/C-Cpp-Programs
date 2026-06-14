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



//numbers in descending  order
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

//Sum of N Numbers 
int Sum(int n){
    if(n ==1){
        return 1;
    }
    return n + Sum(n-1);
}
int main(){
    printf("%d",Sum(5));
    return 0;
}

//fibonacci series using recursion
int fibo(int n){
    if(n==0 || n==1){
        return n;
    }
    return fibo(n-1)+fibo(n-2);
}

int main(){
    int num=5;
    printf("%d",fibo(num));
    return 0;
}