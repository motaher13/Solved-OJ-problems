#include <stdio.h>
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    double v,D,d,t;
    while(scanf("%lf%lf",&D,&v)){
            if(D==0&&v==0)break;
    t=((2*D*D*D)-((12*v)/3.14159265358979323846264338))/2;
    if(t<0)t=-t;
    t=pow(t,0.33333333);
    printf("%.3lf\n",t);

    }
  return 0;
}
