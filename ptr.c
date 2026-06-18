#include <stdio.h>

int main() {
    int a = 10, b = 20;
    int *p1 = &a, *p2 = &b;

    int sum = *p1 + *p2;

    printf("Sum = %d", sum);

    return 0;
}