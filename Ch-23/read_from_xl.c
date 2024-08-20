#include <stdio.h>

struct Student
{
    int id;
    char name[50];
    float per;
};

int main()
{
    FILE *fp = fopen("db.xls", "r");

    struct Student s1;

    fscanf(fp, "%d", &s1.id);
    fscanf(fp, "%s", &s1.name);
    fscanf(fp, "%f", &s1.per);

    printf("Id\t: %d\nName\t: %s\nPer\t: %.2f\n", s1.id, s1.name, s1.per);
}