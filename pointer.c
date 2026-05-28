#include <stdio.h>

int main() {
    int x = 5;
    int *p = &x;

    printf("Value of x = %d\n", x);
    printf("Address of x = %p\n", &x);
    printf("Pointer p stores = %p\n", p);
    printf("Value using pointer = %d\n", *p);

    return 0;
}

int main() {
    int arr[3] = {10, 20, 30};
    int *ptr = arr;

    printf("%d\n", *ptr);
    printf("%d\n", *(ptr + 1));
    printf("%d\n", *(ptr + 2));

    return 0;
}