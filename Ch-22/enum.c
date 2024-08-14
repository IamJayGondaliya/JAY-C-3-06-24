#include <stdio.h>

enum Days
{
    sun,      // 0
    mon = 10, // 10
    tue,      // 11
    wed,      // 12
    thu = 50, // 50
    fri,      // 51
    sat       // 52
};

int main()
{
    printf("Value: %d", thu);
}