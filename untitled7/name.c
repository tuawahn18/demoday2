#include <stdio.h>
int name()
//int main()
{
    char fullname[100];
    printf("Moi ban nhap ten:");
    gets(fullname);
    printf("Xin chao ban %s", fullname);
    return 0;
}