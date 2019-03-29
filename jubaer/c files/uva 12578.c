#include <stdio.h>

int main()
{
    int t;
    double w,r,d,l;
    scanf("%d",&t);
    while(t--){
    scanf("%lf",&l);
     r=l/5;
    printf("%.2lf",3.1415926535898*r*r);
    w=(l/10)*6;

    d=(l*w)-(3.1415926535898*r*r);
    printf("%.2lf\n",d);
    }
    return 0;
}
