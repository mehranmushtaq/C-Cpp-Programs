#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    while (str[i] != '\0') {
        i++;
    }

    printf("Length = %d", i);
    return 0;
}


int main() {
    char str[100];
    int i, len;

    printf("Enter a string: ");
    scanf("%s", str);

    len = strlen(str);

    for (i = len - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }

    return 0;
}