#include <stdio.h>

/*
    ODD:
        - n%2 == 1
        - n%2 != 0
    EVEN:
        - n%2 == 0
        - n%2 != 1
*/

int main()
{
    // N..1 =>  ODD
    int n;

    printf("Enter n: ");
    scanf("%d", &n);

    while (n >= 1)
    {
        if (n % 2 != 0)
        {
            printf("%d ", n);
        }
        n--;
    }
}