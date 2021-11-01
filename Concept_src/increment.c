#include<stdio.h>

int main ()
{
    int a=2, b=2,c,d;

    c=++a;
    d=b++;

    printf("a=%d\nb=%d\nc=%d\ne=%d\n", a,b,c,d);

    return 0;
}