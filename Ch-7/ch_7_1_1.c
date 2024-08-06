#include <stdio.h>

/*
    If else statement:
        - syntax:
            if(condition)
            {
                // statement(s)
            }
            else
            {
                // statement(s)
            }

    Ladder:
        - syntax:
            if(condition)
            {
                // statement(s)
            }
            else if(condition)
            {
                // statement(s)
            }
            .
            .
            .
            else
            {
                // statement(s)
            }
*/

// N is positive, negative or nuteral.
// N is odd or even.
// Odd  : not divisible by zero     =>  n%2 != 0
// Even : divisible by zero         =>  n%2 == 0

int main()
{
    int a, b;

    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);

    if (a > b) // TRUE
    {
        printf("A is big");
    }
    else if (a == b)
    {
        printf("Both are same");
    }
    else // FALSE
    {
        printf("B is big");
    }
}