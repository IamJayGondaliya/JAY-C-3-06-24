#include <stdio.h>

struct Student
{
    int id;
    char name[50];
    float per;
};

int main()
{
    // Object   =>  Variable
    struct Student s1;

    printf("Enter id\t: ");
    scanf("%d", &s1.id);
    printf("Enter name\t: ");
    scanf("%s", &s1.name);
    printf("Enter per\t: ");
    scanf("%f", &s1.per);

    printf("Id\t: %d\n", s1.id);
    printf("Name\t: %s\n", s1.name);
    printf("Per\t: %.2f\n", s1.per);
}