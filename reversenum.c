#include <stdio.h>

int main() {
    int n, rev = 0, rem;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (n != 0) {
        rem = n % 10;
        rev = rev * 10 + rem;
        n /= 10;
    }

    printf("Revers number = %d", rev);

    return 0;
}

// Function to reverse a number
int reverseNumber(int n) {
    int reversed = 0, remainder;

    while (n != 0) {
        remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n = n / 10;
    }

    return reversed;
}

int main() {
    int number, result;

    printf("Enter a number: ");
    scanf("%d", &number);

    result = reverseNumber(number);

    printf("Reversed number = %d\n", result);

    return 0;
}