#include<stdio.h>
int main()
{
    char str[61],*p;
    int i;
    for(i=0;i<60;i++)
    {
        str[i]=getchar();
        if(str[i]='\n') break;
    }
    str[i]='\0';
    p=str;
    while(*p)
    putchar(*p++);
    return 0;
}