#include <stdio.h>
int main()
{
   int temp[31],i,avg,max,min;
   int days;
   scanf("%d",&days);
   for(i=0;i<days;i++){
   printf("enter the noonday temparature %d",i+1);
   scanf("%d",&temp[i]);
   }
   avg=0;
   for(i=0;i<days;i++){
   avg=avg+temp[i];
   printf("%d",avg/days);
   }
   min=200;
   max=0;
   for(i=0;i<days;i++){
   if(min>temp[i])min=temp[i];
   if(max<temp[i])max=temp[i];
   }
   printf("minimum %d\n",min);
   printf("maximum %d\n",max);
   return 0;
}


