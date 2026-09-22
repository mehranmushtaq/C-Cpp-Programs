#include <stdio.h>

void copyString(char *q, char *p) {
    while (*q != '\0') {
        *p = *q;
        q++;
        p++;
    }

    *p = '\0';
}

int main() {
    char q[100], p[100];

    printf("Enter a string: ");
    fgets(q, sizeof(q), stdin);

    copyString(q, p);

    printf("Copied string: %s", p);

    return 0;
}