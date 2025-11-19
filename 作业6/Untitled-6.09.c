#include<stdio.h>
int mystrlen(char str[])
{
    int i;
    for(i=0;str[i]!='\0';i++);
    return (i);
}
int main()
{
    char input_str[100];
    printf("请输入一个字符串: ");
    scanf("%s",input_str);
    int len=mystrlen(input_str);
    printf("字符串的长度是:%d\n",len);
    return 0;
}