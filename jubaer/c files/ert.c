#include <stdio.h>

int main()
{
     int a=555,b=555,ara[89];
     int x,y,c=0,sum,i=0;
     while(a+b+c!=0)
{
     x=a%10;
     y=b%10;
     ara[i]=(x+y+c)%10;
     c=(x+y+c)/10;
     a/=10;
     b/=10;
     i++;
}
     while(i>0){
     printf("%d",ara[i]);
     i--;
     }





}
