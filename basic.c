#include <stdio.h>
//even or odd
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if(num % 2 == 0)
        printf("Even");
    else
        printf("Odd");

    return 0;
}

//largest of three numbers
int main() {
    int a, b, c;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if(a >= b && a >= c)
        printf("Largest = %d", a);
    else if(b >= a && b >= c)
        printf("Largest = %d", b);
    else
        printf("Largest = %d", c);

    return 0;
}
