#include <stdio.h>
#include <math.h>
int main()
{
   char str[1000];
   int i,j,k,sum;
  while(scanf("%s",str)!=EOF){
   sum=0;
   for(i=strlen(str)-1,j=0;i>=0;i--,j++){
   if(str[i]=='1')sum=sum+pow(2,j);
   }
   printf("%d\n",sum);
   }
}
