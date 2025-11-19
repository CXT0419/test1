#include<stdio.h>
double fun(double x,double y);
{
    int i;
    double z;
    for(i=1,z=x;i<y;i++)z=z*x;
    return z;
}
int main()
{
    double base;
    int exponent;
    printf("请输入底数x和指数y:");
    scanf("%lf%d",&base,&exponent);
    double result=fun(base,exponent);
    printf("%.2lf的%d次方的结果是:%.2lf\n",base,exponent,result);
    return 0;  
}