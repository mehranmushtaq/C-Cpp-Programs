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