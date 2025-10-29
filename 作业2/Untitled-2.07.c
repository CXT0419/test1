#include <stdio.h>
int main()
{
char a;int b;
printf("请输入一个字符：");
scanf("%c",&a);
b=(int)a;
printf("\n\n%c的ASCII码为%d\n",a,b);
return 0;
}
