#include <stdio.h>

int main()
{
    int a[5];
    int *ptr[5];

    for (int i = 0; i < 5; i++)
    {
        ptr[i] = &a[i];
    }

    for (int i = 0; i < 5; i++)
    {
        printf("Enter a[%d]: ", i);
        scanf("%d", ptr[i]);
    }

    // Sorting
    for (int i = 0; i < 5; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            if (*ptr[i] > *ptr[j])
            {
                *ptr[i] = *ptr[i] + *ptr[j];
                *ptr[j] = *ptr[i] - *ptr[j];
                *ptr[i] = *ptr[i] - *ptr[j];
            }
        }
    }

    for (int i = 0; i < 5; i++)
    {
        printf("a[%d]: %d\n", i, a[i]);
    }
}