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

void border(char symbol, int length)
{
    printf("\n");
    for (int i = 0; i < length; i++)
    {
        printf("%c", symbol);
    }
    printf("\n");
}

void printArray(int a[], int n)
{
    border('=', 30);
    printf("Array elements: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    border('=', 30);
}

// TNRS
char getChar()
{
    return 'A';
}

float getPi()
{
    return 3.14;
}

// TSRS
int getInt(char varName[])
{
    int n;
    printf("Enter %s: ", varName);
    scanf("%d", &n);
    return n;
}

int getArrayElement(char arrName[], int index)
{
    int n;
    printf("Enter %s[%d]: ", arrName, index);
    scanf("%d", &n);
    return n;
}

int getSum(int a, int b)
{
    return a + b;
}

int getArraySum(int a[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
    }
    return sum;
}

float getArrayAvg(int a[], int n)
{
    int sum = getArraySum(a, n);
    float avg = (float)sum / (float)n;
    return avg;
}

/*
    Recursion:
        - function calls itself.
        - it must be used with condition.
*/

void loop(int s, int e)
{
    printf("%d ", s++);
    if (s <= e)
    {
        loop(s, e);
    }
}

/*
    n = 5;

    5 + 4 + 3 + 2 + 1;

    5 + nSum(4)
    4 + nSum(3)
    3 + nSum(2)
    2 + nSum(1)
*/

int nSum(int n)
{
    if (n <= 1)
    {
        return 1;
    }
    else
    {
        return n + nSum(n - 1);
    }
}