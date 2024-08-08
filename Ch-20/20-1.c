#include <stdio.h>

/*
    int     =>  2 / 4
    float   =>  4
    char    =>  1

    int a[5];

    p + 0   =>  &a[0]
    p + 1   =>  &a[1]
    p + 2   =>  &a[2]
    p + 3   =>  &a[3]
    p + 4   =>  &a[4]
    p + i

    a[0]    =>  *(p + 0)
    a[1]    =>  *(p + 1)
    a[2]    =>  *(p + 2)
    a[3]    =>  *(p + 3)
    a[4]    =>  *(p + 4)
            =>  *(p + i)


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
        scanf("%d", &a[i]);
        // scanf("%d", p + i);
    }

    for (int i = 0; i < 5; i++)
    {
        printf("a[%d]: %d\n", i, *(p + i));
    }
}