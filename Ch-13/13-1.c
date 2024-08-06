#include <stdio.h>

/*
    Array:
        - collection of value which may be of same data type.

    1D array:
        - one dimensional array
        - collection of values.

        datatype array_name[size];
*/

int main()
{
    int n, sum = 0;

    printf("Enter array size: ");
    scanf("%d", &n);

    int array[10];

    for (int i = 0; i < n; i++)
    {
        printf("Enter a[%d]: ", i);
        scanf("%d", &array[i]);

        sum += array[i];
    }

    for (int i = 0; i < n; i++)
    {
        printf("Value of a[%d]: %d\n", i, array[i]);
    }

    printf("Sum: %d", sum);
}