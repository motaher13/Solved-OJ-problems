#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,k,l;
    double r,n,m,p,q,a;
    double pi = 2 * acos (0.0);
    while(scanf("%lf %lf",&r,&n)==2)
    {
        a=n*r*r*sin(2*pi/n)/2;
        printf("%.3lf\n",a);
    }
    return 0;
}
