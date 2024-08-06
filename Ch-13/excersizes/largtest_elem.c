#include <stdio.h>

// Largest
int main()
{
    int n;

    printf("Enter size: ");
    scanf("%d", &n);

    int a[10], large = 0;

    // Input
    for (int i = 0; i < n; i++)
    {
        printf("Enter a[%d]: ", i);
        scanf("%d", &a[i]);

        // Largest value
        if (a[i] > large)
        {
            large = a[i];
        }
    }

    // Output
    printf("Array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    printf("\nLargest: %d", large);
}