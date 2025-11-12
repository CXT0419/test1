#include<stdio.h>
int main()
{
    int a[4]={0};
    int i;
    for(i=0;i<4;i++)scanf("%d",&a[i]);
    a[0]=0;
    for(i=0;i<4;i++) a[0]=a[0]+a[i];
    printf("%d",a[0]);
    return 0;
}