#include <stdio.h>
#include <math.h>
int main()
{
   double a,b,c,k,d;
  while(scanf("%lf%lf%lf",&a,&b,&c)==3){
   k=(a+b+c)/2;
   if(k==0)printf("The radius of the round table is: %.3lf",k);
   else{
    d=(sqrt(k))*sqrt(k-a)*sqrt(k-b)*sqrt(k-c);
   k=d/k;
   printf("The radius of the round table is: %.3lf",k);
   }
   printf("\n");
  }
return 0;
}
