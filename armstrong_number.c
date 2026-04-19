#include <stdio.h>
#include <math.h>

int main() {
    int n, original, remainder, digits = 0;
    double sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;

 
    int temp = n;
    while (temp != 0) {
        digits++;
        temp /= 10;
    }

    temp = n;

    
    while (temp != 0) {
        remainder = temp % 10;
        sum += pow(remainder, digits);
        temp /= 10;
    }

 
    if ((int)sum == original)
        printf("Armstrong number\n");
    else
        printf("Not an Armstrong number\n");

    return 0;
}

//without math.h library

int main() {
    int n, original, remainder, digits = 0;
    int sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;

    
    int temp = n;
    while (temp != 0) {
        digits++;
        temp /= 10;
    }

    temp = n;

    
    while (temp != 0) {
        remainder = temp % 10;

        int power = 1;
        for (int i = 0; i < digits; i++) {
            power *= remainder;   // manual exponent
        }

        sum += power;
        temp /= 10;
    }

    // Check
    if (sum == original)
        printf("Armstrong number\n");
    else
        printf("Not an Armstrong number\n");

    return 0;
}