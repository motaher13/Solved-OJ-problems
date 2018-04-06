#include <stdio.h>
#include <math.h>
#define pi acos (-1)
int main()
{
    double a,r,n,m,t,total;
    scanf("%lf",&t);
    while(t--)
    {
        scanf("%lf",&n);
        m = (n/10)*6;
        total = n*m;
        r = n/5;
        a = pi*r*r;
        printf("%0.2lf %0.2lf\n",a,total-a);
    }
    return 0;
}
