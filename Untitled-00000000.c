#include<stdio.h>
int main()
{
    int a=1;
    int b=2;
    int c=3;
    int max;
    if (a>=b && a>=c )
    {
        max=a;
    }
    else if(b>=a && b>=c)
    {
        max=b;
    }
    else 
    {
        max=c;
    }
    printf("%d\n",max);
    return 0;
}