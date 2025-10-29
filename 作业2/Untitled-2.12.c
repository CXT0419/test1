#include <stdio.h>
#define PI 3.1415926
int main()
{
    float r=5.0;
    float circumference=2*PI*r;
    float area=PI*r*r;
    printf("周长：%.3f\n",circumference);
    printf("面积：%.3f\n",area);
    return 0;
}