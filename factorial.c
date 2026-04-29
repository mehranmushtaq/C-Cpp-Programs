#include <stdio.h>
//for loop
int main() {
    int n, i;
    long long fact = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        fact = fact * i;
    }

    printf("Factorial of %d = %lld", n, fact);
    return 0;
}


//while loop
int main() {
    int n, i = 1;
    long long fact = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    while(i <= n) {
        fact = fact * i;
        i++;
    }

    printf("Factorial of %d = %lld", n, fact);
    return 0;
}


//do while
int main() {
    int n, i = 1;
    long long fact = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    if(n == 0) {
        fact = 1;
    } else {
        do {
            fact = fact * i;
            i++;
        } while(i <= n);
    }

    printf("Factorial of %d = %lld", n, fact);
    return 0;
}

//factorial using recursion
int fact(int n){
    if(n==0 || n==1){
        return 1;
    }
    return n * fact(n-1);
}

int main(){
    printf("%d",fact(5));
    return 0;
}