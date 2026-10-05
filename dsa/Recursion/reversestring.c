#include <stdio.h>
#include <string.h>

void reverse(char str[], int index) {
    if (index < 0)
        return;

    printf("%c", str[index]);

    reverse(str, index - 1);
}

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    reverse(str, strlen(str) - 1);

    return 0;
}