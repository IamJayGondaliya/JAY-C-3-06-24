#include "functions.c"

int main()
{
    int n = getInt("array length");

    int a[5];

    for (int i = 0; i < n; i++)
    {
        a[i] = getArrayElement("a", i);
    }

    printArray(a, n);

    printf("Average: %.2f", getArrayAvg(a, n));
    border('-', 10);
}