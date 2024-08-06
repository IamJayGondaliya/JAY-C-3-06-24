#include <stdio.h>

/*

    Merge 2 arrays:

    a: 1, 2, 3, 4
    b: 5, 6, 7, 8, 9, 10

    c: 1, 2, 3, 4, 5, 6, 7, 8, 9, 10

*/

// Ascending Sort
int main()
{
    int n;

    printf("Enter size: ");
    scanf("%d", &n);

    int a[10];

    // Input
    for (int i = 0; i < n; i++)
    {
        printf("Enter a[%d]: ", i);
        scanf("%d", &a[i]);
    }

    // Output
    printf("Array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    // Sorting
    // Fixed one element
    for (int i = 0; i < n; i++)
    {
        // Compare to each
        for (int j = i + 1; j < n; j++)
        {
            // Copare & swap
            if (a[i] > a[j])
            {
                // Swap
                a[i] = a[i] + a[j];
                a[j] = a[i] - a[j];
                a[i] = a[i] - a[j];
            }
        }
    }

    printf("\nSorted array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}