
// Insertion at End of Array

#include <stdio.h>

int main() {
    int arr[100], n, element, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to insert: ");
    scanf("%d", &element);

    arr[n] = element;
    n++;

    printf("Array after insertion:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}


// Insertion at Beginning of Array

int main() {
    int arr[100], n, element, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to insert at      beginning: ");
    scanf("%d", &element);

    for(i = n; i > 0; i--) {
        arr[i] = arr[i - 1];
    }

    arr[0] = element;
    n++;

    printf("Array after insertion:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

// Insertion at a Particular Position

int main() {
    int arr[100], n, element, pos, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter position: ");
    scanf("%d", &pos);

    printf("Enter element to insert: ");
    scanf("%d", &element);

    for(i = n; i >= pos; i--) {
        arr[i] = arr[i - 1];
    }

    arr[pos - 1] = element;
    n++;

    printf("Array after insertion:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

// Find Maximum Element

int main() {
    int arr[5] = {12, 45, 7, 89, 34};
    int max = arr[0];

    for(int i = 1; i < 5; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }

    printf("Maximum = %d", max);

    return 0;
}

//find largest element
int main() {
    int arr[5] = {10, 25, 7, 99, 45};
    int max = arr[0];

    for(int i=1; i<5; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }

    printf("Largest = %d", max);

    return 0;
}
