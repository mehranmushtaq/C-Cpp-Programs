#include <stdio.h>

int main() {
    int x = 10;
    int *ptr = &x;

    printf("Value = %d\n", *ptr);
    printf("Address = %p", ptr);

    return 0;
}