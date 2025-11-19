#include<stdio.h>
int sstrcmp(char s[],char t[])
{
    int i=0,j=0;
    while(s[i]&&t[j]&&s[i]==t[j]);{i++;j++;}
    return s[i]-t[j];
}
int main()
{
    int x;
    char s1[50],s2[50];
    scanf("%s%s",s1,s2);
    x=sstrcmp(s1,s2);
    printf("%d\n",x);
    return 0;
}