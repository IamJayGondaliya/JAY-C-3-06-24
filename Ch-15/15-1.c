#include <stdio.h>

/*
    A   =>  65
    a   =>  97

    =>  %s
*/

int main()
{
    char str[20];

    printf("Enter name: ");
    scanf("%[^\n]", &str);

    // lowercase
    // for (int i = 0; i < 20; i++)
    // for (int i = 0; str[i] != NULL; i++)
    for (int i = 0; str[i] != '\0'; i++)
    {
        printf("%d ", i);
        if (str[i] >= 65 && str[i] <= 90)
        {
            str[i] += 32;
        }
    }

    printf("\nThe name is: %s", str);
}