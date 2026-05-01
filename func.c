#include <stdio.h>
long int Factorial(int n){
    long int fact=1;
    for(int i = 2 ; i<=n;i++){
        fact *=i;
    }
    return fact;
}
int main(){
    printf("%ld=factorial",Factorial(5));
    return 0;
}