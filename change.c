#include <stdio.h>

int main()
{

    int a=5;

    int b=6;

    int c;

    c=a;
    a=b;
    b=c;
    printf("a=%d,b=%d,c=%d",a,b,c);

    return 0;
}