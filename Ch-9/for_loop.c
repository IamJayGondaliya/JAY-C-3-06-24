#include <stdio.h>

/*
    For loop:
        - enrty control loop.
        - syntax:

            for( initialization ; condition ; updation )
            {
                // statements
            }

    - Input: 50
    - Output: 11 22 33 44
*/

int main()
{
    int n;

    printf("Enter any number: ");
    scanf("%d", &n);

    for (int i = 1; i <= 10; i++)
    {
        printf("%d * %d = %d\n", n, i, n * i);
    }
}