#include <stdio.h>

/*
    100 - 91    =>  A1
    90  - 81    =>  A2
    80  - 71    =>  B1
    70  - 61    =>  B2
    60  - 51    =>  C1
    50  - 41    =>  C2
    40  - 33    =>  D
    33  - 0     =>  Fail
*/

int main()
{
    float marks;

    printf("Enter your marks: ");
    scanf("%f", &marks);

    if (marks >= 91 && marks <= 100)
    {
        printf("Grade: A1");
    }
    else if (marks >= 81 && marks <= 90)
    {
        printf("Grade: A2");
    }
    else if (marks >= 71 && marks <= 80)
    {
        printf("Grade: B1");
    }
    else if (marks >= 61 && marks <= 70)
    {
        printf("Grade: B2");
    }
    else if (marks >= 51 && marks <= 60)
    {
        printf("Grade: C1");
    }
    else if (marks >= 41 && marks <= 50)
    {
        printf("Grade: C2");
    }
    else if (marks >= 33 && marks <= 40)
    {
        printf("Grade: D");
    }
    else if (marks >= 0 && marks <= 32)
    {
        printf("BETTER LUCK NEXT TIME !!");
    }
    else
    {
        printf("We don't have any grade to measure your smartness !!");
    }
}