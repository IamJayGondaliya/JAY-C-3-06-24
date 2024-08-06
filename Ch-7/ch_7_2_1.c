#include <stdio.h>

int main()
{
    int a, b, c;

    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);
    printf("Enter c: ");
    scanf("%d", &c);

    if (a == b && b == c && c == a)
    {
        printf("All are same...");
    }
    else if (a > b)
    {
        if (a > c)
        {
            printf("a is big");
        }
        else
        {
            printf("c is big");
        }
    }
    else
    {
        if (b > c)
        {
            printf("b is big");
        }
        else
        {
            printf("c is big");
        }
    }
}