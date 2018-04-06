#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,k,l;
    double m1,m2,m3,n,p,q;
    while(scanf("%lf %lf %lf",&m1,&m2,&m3)==3)
    {

        n=(m1+m2+m3)/2;
        q=n*(n-m1)*(n-m2)*(n-m3);
        if(q<=0)
            p=-1.000;
        else
        p=4*sqrt(q)/3;
        printf("%.3lf\n",p);
    }
    return 0;
}
