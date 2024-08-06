#include <stdio.h>

/*
    2D array:
        - collection of 1D arrays.
        - syntax:

            data_type array_name[row][column];

            row:    no. of 1D arrays.
            column: no. of elements in each 1D array.

    matrix:

        1 2 3
        4 5 6
        7 8 9

    diagonal elements:

        1
          5
            9

    anti-diagonal elements:

            3
          5
        7

*/

int main()
{
    int r, c;

    printf("Enter row\t: ");
    scanf("%d", &r);

    printf("Enter column\t: ");
    scanf("%d", &c);

    // 2D array - dynamic
    int a[3][3];

    // Row
    for (int i = 0; i < r; i++)
    {
        // Column
        for (int j = 0; j < c; j++)
        {
            printf("Enter a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    // Matrix form
    // Row
    for (int i = 0; i < r; i++)
    {
        // Column
        for (int j = 0; j < c; j++)
        {
            if (i + j == r - 1)
            {
                printf("%d ", a[i][j]);
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
}