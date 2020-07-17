#include <stdio.h>
int main()
{
    int temp[31];
    int avg,max,min;
    int days,i;
    printf("enter your days :");
    scanf("%d",&days);
    for(i=0;i<days;i++){
    printf("enter temparature \n");
    scanf("%d",&temp[i]);
    }
    avg=0;
    for(i=0;i<days;i++){
    avg=temp[i]+avg;
    }
    printf("avg %d",avg/days);
    max>0;
    min<200;
    for(i=0;i<days;i++){
    if(max<temp[i])max=temp[i];
    if(max>temp[i])max=temp[i];
    }
    printf("minimum %d",min);
    printf("max %d",max);
    return 0;
}
