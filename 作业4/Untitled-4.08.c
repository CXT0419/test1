#include<stdio.h>
int main()
{
    int n,sum=0;
    n=2345;
    do
    {
        sum=sum+n%10;
        n=n/10;
    }while (n);
    printf("summ=%d\n",sum);
    return 0;
}