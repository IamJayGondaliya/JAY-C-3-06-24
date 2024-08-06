#include "functions.c"

int main()
{
    int n = getInt("any number");

    printf("Sum of %d: %d", n, nSum(n));
}