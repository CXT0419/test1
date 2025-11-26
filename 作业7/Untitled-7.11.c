#include<stdio.h>
int main()
{
    int a,b;
    int *p,*q;
    p=&a;
    q=&b;
    printf("请输入两个整数:");
    scanf("%d,%d",p,q);
    printf("%d,%d\n",a,b);
    printf("%d,%d\n",*p,*q);
    return 0;
}