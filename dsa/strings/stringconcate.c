#include <stdio.h>

void concatenate(char *p, char *q) {
    while (*p != '\0') {
        p++;
    }

   
    while (*q != '\0') {
        *p = *q;
        p++;
        q++;
    }

    
    *p = '\0';
}

int main() {
    char p[100] = "Hello ";
    char q[] = "World";

    concatenate(p,q);

    printf("%s", p);

    return 0;
}