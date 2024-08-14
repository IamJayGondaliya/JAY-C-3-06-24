#include <stdio.h>

int main()
{

    int a = 25;

    int *p1 = &a;
    int **p2 = &p1;
    int ***p3 = &p2;

    **p2 = 10;

    printf("a\t: %d\t%u\n", a, &a);
    printf("p1\t: %d\t%u\t%d\n", *p1, &p1, p1);
    printf("p2\t: %d\t%u\t%d\n", **p2, &p2, p2);
    printf("p3\t: %d\t%u\t%d\n", ***p3, &p3, p3);
}