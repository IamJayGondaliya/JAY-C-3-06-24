#include <stdio.h>

// function
// TSRN - Parameters
void sum(int a, int b)
{
    printf("Sum of %d and %d: %d\n", a, b, a + b);
}

void sub(int x, int y)
{
    printf("Sub of %d and %d: %d\n", x, y, x - y);
}

// TNRS
int getSum()
{
    int a = 10, b = 5;
    return a + b;
}

int getInt()
{
    int n;
    printf("Enter any number: ");
    scanf("%d", &n);
    return n;
}

char getChar()
{
    return 'A';
}

float getPi()
{
    return 3.14;
}