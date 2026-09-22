#include <stdio.h>

int length(char *str) {
    int len = 0;

    while (*str != '\0') {
        len++;
        str++;
    }

    return len;
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Length = %d", length(str));

    return 0;
}