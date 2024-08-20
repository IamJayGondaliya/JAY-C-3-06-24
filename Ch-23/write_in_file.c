#include <stdio.h>

int main()
{
    FILE *fp = fopen("my_data.txt", "w");

    int n;

    printf("Enter n: ");
    scanf("%d", &n);

    for (int i = 1; i <= 10; i++)
    {
        fprintf(fp, "%d * %d = %d\n", n, i, n * i);
    }

    fclose(fp);
}