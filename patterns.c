#include <stdio.h>
//star triangle
int main() {
    int i, j;

    for(i = 1; i <= 5; i++) {
        for(j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

//Inverted Triangle
int main() {
    int i, j;

for(i = 5; i >= 1; i--) {
    for(j = 1; j <= i; j++) {
        printf("*");
    }
    printf("\n");
}
}

//Right Angled Triangle
int main() {
    int i, j;

for(i = 1; i <= 5; i++) {

    // spaces
    for(j = 1; j <= 5 - i; j++) {
        printf(" ");
    }

    // stars
    for(j = 1; j <= i; j++) {
        printf("*");
    }

    printf("\n");
}}

//Pyramid
int main() {
    int i, j;
for(i = 1; i <= 5; i++) {

    // spaces
    for(j = 1; j <= 5 - i; j++) {
        printf(" ");
    }

    // stars (odd numbers)
    for(j = 1; j <= (2*i - 1); j++) {
        printf("*");
    }

    printf("\n");
}
}

//Diamond Pattern
// upper pyramid
int main() {
    int i, j;

for(i = 1; i <= 5; i++) {
    for(j = 1; j <= 5 - i; j++) printf(" ");
    for(j = 1; j <= 2*i - 1; j++) printf("*");
    printf("\n");
}

// lower pyramid
for(i = 4; i >= 1; i--) {
    for(j = 1; j <= 5 - i; j++) printf(" ");
    for(j = 1; j <= 2*i - 1; j++) printf("*");
    printf("\n");
}
}
