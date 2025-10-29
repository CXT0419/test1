#include <stdio.h>
void main()
{
    int sex,weight,cubage;
    printf("男性，体重130");
    scanf("%d,%d",&sex,&weight);
    if(sex>=0)
    {
        if(weight>=120)
        {
            cubage=200;
            printf("此人应该输血：%d毫升\n",cubage);
        }
        else
        {
            cubage=180;
            printf("此人应该输血：%d毫升\n",cubage);
        }
    }
    else
    {
        if(weight>=100)
        {cubage=150;
        printf("此人应该输血：%d毫升\n",cubage);}
        else
        {
            cubage=120;
            printf("此人应该输血：%d毫升\n",cubage);
        }
    }
}