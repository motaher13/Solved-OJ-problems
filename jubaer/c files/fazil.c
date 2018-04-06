#include <stdio.h>
#include <string.h>
#include <math.h>
int main()
{
   int i;
    int sum=0;
   char str[100];
gets(str);

   for(i=0;i<=strlen(str)-1;i++){
   if(str[i]=='0')
   sum=sum+0;

   else if(str[i]=='1')sum=sum+pow(2,i);
printf("%d\n",sum);
   }




}
