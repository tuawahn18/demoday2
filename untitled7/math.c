#include <stdio.h>
//int math()
int main()
{
    int i, a, b, c, d;
    int r1,r2,r3;
    i = 10;
    a = 18;
    b = 8;
    c = 20;
    d = 5;
    r1 = ++i %7;
    printf("i = %d,r1=%d\n",i,r1);
    r2 = 5*(c-d+3);
    printf("r2=%d\n",r2);
    r3 = a*(b+c/d);
    printf("r3=%d\n",r3);
    return 0;
}