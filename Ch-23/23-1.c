#include <stdio.h>

int main()
{
    FILE *fp = fopen("data1.txt", "r");

    int a, b;
    int arr[5];

    for (int i = 0; i < 5; i++)
    {
        fscanf(fp, "%d", &arr[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        printf("arr[%d]: %d\n", i, arr[i]);
    }
}