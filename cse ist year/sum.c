#include <stdio.h>
// for loop
int main() {
    int n, i, sum = 0;

    printf("Enter n: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        sum += i;
    }

    printf("Sum = %d\n", sum);
    return 0;
}

// while loop
int main() {
    int n, i = 1, sum = 0;

    printf("Enter n: ");
    scanf("%d", &n);

    while(i <= n) {
        sum += i;
        i++;
    }

    printf("Sum = %d\n", sum);
    return 0;
}


// do while loop
int main() {
    int n, i = 1, sum = 0;

    printf("Enter n: ");
    scanf("%d", &n);

    if(n > 0) {
        do {
            sum += i;
            i++;
        } while(i <= n);
    }

    printf("Sum of n numbers = %d\n", sum);
    return 0;
}