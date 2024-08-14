#include <stdio.h>

// call by value
void swap(int a, int b)
{
    a = a + b;
    b = a - b;
    a = a - b;

    printf("Inside swap...\n");
    printf("a: %d\n", a);
    printf("b: %d\n", b);
}

// call by reference
void cbr(int *a, int *b)
{
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;

    printf("Inside cbr...\n");
    printf("a: %d\n", *a);
    printf("b: %d\n", *b);
}

int main()
{
    int a = 10;
    int b = 20;

    cbr(&a, &b);

    printf("Inside main...\n");
    printf("a: %d\n", a);
    printf("b: %d\n", b);
}