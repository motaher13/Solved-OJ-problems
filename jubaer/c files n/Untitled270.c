#include <stdio.h>
int main()
{
    int temp[31],i,max,min,avg;
    int days;
    scanf("%d",&days);
    for(i=0;i<days;i++){
    printf("number of days %d",i+1);
    scanf("%d",&temp[i]);
    }
    avg=0;
    for(i=0;i<days;i++){
    avg=temp[i]+avg;
    printf("%d",avg);
    }
    min=0;
    max=200;
    for(i=0;i<days;i++){
    if(max<temp[i])max=temp[i];
    if(min>temp[i])min=temp[i];
    }
    printf("max:%d , min:%d",max,min);
    return 0;
}
