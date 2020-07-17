#include <stdio.h>
#include <math.h>
int main()
{
    double x,y,z,h,r,d;
    scanf("%lf%lf%lf%lf",&x,&y,&z,&h);
   // h=90-60;
    r=sin(h*3.1415926535897932);
    d=cos(h*3.1415926535897932);
    z=x*(d/r);
    printf("%lf %lf %lf",z,d,r);




}

