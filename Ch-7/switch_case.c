#include <stdio.h>

/*
    Selectional statement:
        - switch case.
        - only support int & character.
        - syntax:

            switch(varName)
            {
                case val1:
                    // statement(s)
                    break;
                case val2:
                    // statement(s)
                    break;
                .
                .
                default:
                    // statement(s)
            }
*/

int main()
{
    int a, b;
    char choice;

    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);

    printf("Enter + for addition\n");
    printf("Enter - for subtraction\n");
    printf("Enter * for multiplication\n");
    printf("Enter / for division\n");
    printf("Enter %% for modulo\n");
    printf("Enter your choice: ");
    fflush(stdin);
    scanf("%c", &choice);

    switch (choice)
    {
    case '+':
        printf("Sum: %d\n", a + b);
        break;
    case '-':
        printf("Sub: %d\n", a - b);
        break;
    case '*':
        printf("Mul: %d\n", a * b);
        break;
    case '/':
        printf("Dib: %d\n", a / b);
        break;
    case '%':
        printf("Mod: %d\n", a % b);
        break;
    default:
        printf("Invalid choice...");
    }
}