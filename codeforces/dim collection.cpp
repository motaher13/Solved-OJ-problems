#include<stdio.h>
int main()
{
    int i,bangla[10],english[10],math[10],total[10];
    for(i=1;i<=5;i++)
    {
        scanf("%d",&bangla[i]);


    }
    for(i=1;i<=5;i++)
    {
        scanf("%d",&english[i]);

    }
    for(i=1;i<=5;i++)
    {
        scanf("%d",&math[i]);

    }
    for(i=1;i<=5;i++)
    {

        total[i]=bangla[i]+english[i]+math[i];

    }
    for(i=1;i<=5;i++)
    {
        printf("%d ",total[i]);
    }
    //printf("%d ",total[i]);

}
