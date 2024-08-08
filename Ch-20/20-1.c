#include <stdio.h>

/*
    int     =>  2 / 4
    float   =>  4
    char    =>  1

    int a[5];
*/

int main()
{
    int a[5];
    int *p;

    // p = &a;
    p = &a[0];

    for (int i = 0; i < 5; i++)
    {
        printf("Enter a[%d]: ", i);
        scanf("%d", p + i);
    }

    for (int i = 0; i < 5; i++)
    {
        printf("a[%d]: %d\n", i, *(p + i));
    }
}