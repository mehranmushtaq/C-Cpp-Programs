#include <stdio.h>

int main() {
    int num, reverse = 0, res, org;

    printf("Enter number: ");
    scanf("%d", &num);

    org = num;

    while (num != 0) {
        res = num % 10;
        reverse = reverse * 10 + res;
        num = num / 10;
    }

    if (org == reverse) {
        printf("%d is a palindrome", org);
    } else {
        printf("%d is not a palindrome", org);
    }

    return 0;
}