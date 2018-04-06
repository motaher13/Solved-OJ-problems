#include <stdio.h>
#include <math.h>
int main()
{
    double i,j,k,l;
   while(scanf("%lf%lf%lf",&j,&k,&l)==3){
    i=(j+k+l)/2;

    i=i*(i-j)*(i-k)*(i-l);
     if(i<=0)printf("-1.000\n");
    else
        {
            i=(sqrt(i)*4)/3;
            printf("%.3lf\n",i);
        }

   }
   return 0;
}
