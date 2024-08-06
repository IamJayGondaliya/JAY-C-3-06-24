#include<stdio.h>
#define P printf

int main()
{

    int a,b,c,d;

    printf("Enter a, b, c & d: ");
    scanf("%d%d%d%d",&a,&b,&c,&d);

    (a>b)
        ? (a>c)
                ? (a>d)
                        ? P("a is big")
                        : P("d is big")
                : (c>d)
                        ? P("c is big")
                        : P("d is big")
        : (b>c)
                ? (b>d)
                        ? P("b is big")
                        : P("d is big")
                : (c>d)
                        ? P("c is big")
                        : P("d is big");

}