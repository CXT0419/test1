#include<stdio.h>
float func(float a,float b)
{
    float c;
    c=a*a+b*b;
    return c;
}
int main()
{
    float x,y;
    float z;
    printf("请输入两个浮点数（用空格分隔）:");
    scanf("%f,%f",&x,&y);
    z=func(x,y);
    printf("z=%f\n",z);
    return 0;

}