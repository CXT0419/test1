#include<stdio.h>
#include<string.h>
int main()
{
    char a[10],b[10];
    int c,d;
    scanf("%s",a);
    scanf("%s",b);
    printf("a=%s,b=%s\n",a,b);
    c=strlen(a);
    d=strlen(b);
    if(c<d){
        strcpy(b,a);
    }
    printf("a=%s,b=%s\n",a,b);
    return 0;
}