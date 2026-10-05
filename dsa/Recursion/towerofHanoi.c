#include <stdio.h>

void hanoi(int n, char source, char auxiliary, char destination) {
    if (n == 0)
        return;

    hanoi(n - 1, source, destination, auxiliary);

    printf("Move disk %d from %c to %c\n",
           n, source, destination);

    hanoi(n - 1, auxiliary, source, destination);
}

int main() {
    hanoi(3, 'A', 'B', 'C');

    return 0;
}