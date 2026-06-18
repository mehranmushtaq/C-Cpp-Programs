#include <stdio.h>

struct Rectangle {
    int length;
    int breadth;
};

int area(struct Rectangle r) {
    return r.length * r.breadth;
}

int main() {
    struct Rectangle r = {5, 4};

    printf("Area = %d", area(r));

    return 0;
}