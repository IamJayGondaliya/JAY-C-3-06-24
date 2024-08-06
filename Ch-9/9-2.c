#include <stdio.h>

/*
    Exit control loop:
        - fastest loop.
        - syntax:

            initialization
            do
            {
                // statements
                // updation
            } while (condition);
*/

int main()
{

    int n;

    printf("Enter n: ");
    scanf("%d", &n);

    do
    {
        if (n % 2 != 0)
        {
            printf("%d ", n);
        }
        n--;
    } while (n >= 1);
}