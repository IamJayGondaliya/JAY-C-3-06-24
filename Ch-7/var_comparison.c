#include <stdio.h>
#define P printf
#define S scanf

int main()
{
    int a, b, c, d;

    P("Enter a: ");
    S("%d", &a);
    P("Enter b: ");
    S("%d", &b);
    P("Enter c: ");
    S("%d", &c);
    P("Enter d: ");
    S("%d", &d);

    if (a == b && b == c && c == d && d == a)
    {
        P("All are same....");
    }
    else if (a > b)
    {
        // a
        if (a > c)
        {
            // a
            if (a > d)
            {
                // a
                P("a is big");
            }
            else
            {
                // d
                P("d is big");
            }
        }
        else
        {
            // c
            if (c > d)
            {
                // c
                P("c is big");
            }
            else
            {
                // d
                P("d is big");
            }
        }
    }
    else
    {
        // b
        if (b > c)
        {
            // b
            if (b > d)
            {
                // b
                P("b is big");
            }
            else
            {
                // d
                P("d is big");
            }
        }
        else
        {
            // c
            if (c > d)
            {
                // c
                P("c is big");
            }
            else
            {
                // d
                P("d is big");
            }
        }
    }
}