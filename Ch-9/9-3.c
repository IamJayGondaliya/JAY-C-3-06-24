#include <stdio.h>

/*
    n: 20

    output: 1 2 4 5 7 8 10 11 13 14 16 17 19 20
*/

int main()
{
    int n;

tmp:
    printf("Enter 1..20: ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("ERROR: Enter number in gien range only !!\n");
        goto tmp;
    }

    for (int i = 1; i <= n; i++)
    {
        if (i > 20)
        {
            break; // exit
        }
        if (i % 3 == 0)
        {
            continue; // skip
        }
        printf("%d ", i);
    }

    
}