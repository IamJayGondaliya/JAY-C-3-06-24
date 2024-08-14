#include <stdio.h>

struct Student
{
    int id;
    char name[50];
    float per;
};

int main()
{
    // Array of Object   =>  Variable
    struct Student s[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Student no: %d/%d\n", i + 1, 5);
        printf("Enter id\t: ");
        scanf("%d", &s[i].id);
        printf("Enter name\t: ");
        scanf("%s", &s[i].name);
        printf("Enter per\t: ");
        scanf("%f", &s[i].per);
    }

    for (int i = 0; i < 5; i++)
    {
        printf("Student no: %d/%d\n", i + 1, 5);
        printf("Id\t: %d\n", s[i].id);
        printf("Name\t: %s\n", s[i].name);
        printf("Per\t: %.2f\n", s[i].per);
    }
}