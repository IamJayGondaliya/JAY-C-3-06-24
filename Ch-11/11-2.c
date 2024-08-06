#include <stdio.h>

/*
    5 4 3 2 1
    _ 4 3 2 1
    _ _ 3 2 1
    _ _ _ 2 1
    _ _ _ _ 1

    1 0 1 0 1
    _ 0 1 0 1
    _ _ 1 0 1
    _ _ _ 0 1
    _ _ _ _ 1

    * * * * *
    _ * * * *
    _ _ * * *
    _ _ _ * *
    _ _ _ _ *

5 =>
4 => _         => 4
3 => _ _       => 4 3
2 => _ _ _     => 4 3 2
1 => _ _ _ _   => 4 3 2 1
*/

int main()
{
    // Row
    for (int i = 5; i >= 1; i--)
    {
        // Space
        for (int s = 4; s >= i; s--)
        {
            printf("  ");
        }
        // Column
        for (int j = i; j >= 1; j--)
        {
            printf("%d ", j % 2);
        }
        printf("\n");
    }
}