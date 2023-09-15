#include <stdio.h>
int name1()
//int main()
{
    int a;
    float d = 999.8386;
    printf("float 999.8386: %e",d);
    char fullname[100];
    gets(fullname);
    printf("fullname: %s\n",fullname);
    char ch, name[40];
    printf("please enter the data \n");
    scanf("%d %f %c %s", &a, &d, &ch, name);
    printf("\n the values accepted are:%d, %f, %c, %s",a, d, ch, name);
    return 0;
}