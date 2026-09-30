#include <stdio.h>
//factorial in c
int main() {
    int n, i;
    long long fact = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        fact *= i;
    }

    printf("Factorial = %lld", fact);
    return 0;
}

//multiplication table
int main() {
    int n, i;

    printf("Enter a number: ");
    scanf("%d", &n);

    for(i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", n, i, n*i);
    }

    return 0;
}

//reverse a number
int main() {
    int num, reverse = 0, remainder;

    printf("Enter a number: ");
    scanf("%d", &num);

    while(num != 0) {
        remainder = num % 10;
        reverse = reverse * 10 + remainder;
        num /= 10;
    }

    printf("Reversed number = %d", reverse);
    return 0;
}