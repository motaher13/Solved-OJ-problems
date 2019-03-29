#include <stdio.h>
#include <math.h>
#define pi acos (-1)
int main()
{
    int t;
    double w,r,d,l,p,q;
    scanf("%d",&t);
    while(t--){
    scanf("%lf",&l);
     r=l/5;

    w=(l/10)*6;

    d=(l*w)-(pi*r*r);
    printf("%0.2lf %0.2lf\n",pi*r*r,d);
    }
    return 0;
}
