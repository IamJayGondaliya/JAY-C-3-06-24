#include "functions.c"

int main()
{
    printf("START\n");

    int a, b;

    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);

    // Arguments
    sum(a, b);
    sub(10, 5);
    printf("END\n");
}