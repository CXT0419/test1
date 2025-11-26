#include<stdio.h>
int main()
{
    int a[6]={2,4,6,8,10,12};
    int s,i,*p;
    s=0;
    p=a;
    for(i=0;i<6;i++)
    s+=*p++;
    printf("s=%d\n",s);
    return 0;
}