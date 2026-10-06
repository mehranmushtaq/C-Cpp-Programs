#include <stdio.h>

void display(int arr[], int n)
{
    printf("Array: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int insert(int arr[], int n, int pos, int value)
{
    for (int i = n; i > pos; i--)
        arr[i] = arr[i - 1];

    arr[pos] = value;
    return n + 1;
}

int delete(int arr[], int n, int pos)
{
    for (int i = pos; i < n - 1; i++)
        arr[i] = arr[i + 1];

    return n - 1;
}

int main()
{
    int arr[100], n, choice, pos, value;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("\n1. Insertion\n");
    printf("2. Deletion\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    if (choice == 1)
    {
        printf("Enter position (0 to %d): ", n);
        scanf("%d", &pos);

        printf("Enter value: ");
        scanf("%d", &value);

        if (pos < 0 || pos > n)
            printf("Invalid position\n");
        else
        {
            n = insert(arr, n, pos, value);
            display(arr, n);
        }
    }
    else if (choice == 2)
    {
        printf("Enter position (0 to %d): ", n - 1);
        scanf("%d", &pos);

        if (pos < 0 || pos >= n)
            printf("Invalid position\n");
        else
        {
            n = delete(arr, n, pos);
            display(arr, n);
        }
    }
    else
    {
        printf("Invalid choice\n");
    }

    return 0;
}