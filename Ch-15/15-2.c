#include <stdio.h>
#include <string.h>

/*
    fs = "a";
    ls = "A";

    int ans = strcmp(fs,ls);
            = 97 - 65
            = 32
            = 1

    fs = "A";
    ls = "a";

    int ans = strcmp(fs,ls);
            = 65 - 97
            = -32
            = -1

    => Same
    fs = "a";
    ls = "a";

    int ans = strcmp(fs,ls);
            = 97 - 97
            = 0
            = 0

*/

int main()
{
    char fn[20] = "Aman";
    char ln[20];

    // ln = fn;
    strcpy(ln, fn);

    printf("The name is: %s", ln);
    // int l = strlen(str);

    // printf("Answer\t: %d\n", ans);

    // strupr(str);
    // strlwr(str);
    // strrev(str);
}