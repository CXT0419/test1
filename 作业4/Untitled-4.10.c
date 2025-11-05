#include<stdio.h>
int main()
{
    int i,j,k,n=0;
    for(i=0;i<=20;i++)
        for(j=0;j<=50;j++)
          {for(k=0;k<=100;k++)
               if(i+j+k==100 && 2*i+3*j+5*k==100)
                  {n++;
                    printf("第%d种:%3d %3d %3d",n,i,j,k);
                    if(n%3==0)printf("\n");
                }
          }
            return 0;
}