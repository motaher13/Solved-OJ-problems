#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,c,s,d,t,ic,oc,y,v,r;
    while(scanf("%lf %lf %lf",&a,&b,&c)==3)
    {
        s=(a+b+c)/2;
        t=sqrt(s*(s-a)*(s-b)*(s-c));
        ic=3.14159265358*(t/s)*(t/s);
        oc=3.14159265358*(a*b*c/(4*t))*(a*b*c/(4*t));
        y=oc-t;
        v=t-ic;
        r=ic;
        printf("%.4lf %.4lf %.4lf\n",y,v,r);
    }
    return 0;
}
