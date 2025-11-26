#include<stdio.h>
void swap(int*x,int*y);
void main()
{
    int i,j;
    i=12;
    j-36;
    printf("i and j before swapping:%d%d\n",i,j);
    swap(&i,&j);
    printf("i and j after swapping:%d%d\n",i,j);
}
void swap(int*x,int*y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}