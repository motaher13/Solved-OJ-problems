#include <stdio.h>
#include <math.h>
int main()
{
    double a,b,t,y;
   while(scanf("%lf %lf",&a,&b)==2){
    y=1/a;
    t=pow(b,y);
    printf("%.0lf\n",t);
    }
   return 0;

}
