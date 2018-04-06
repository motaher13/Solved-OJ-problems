#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,k,l,t;
    scanf("%d",&t);
    double a,b,c,d,m,n;
    char r,s,y;
    for(int cs=1;cs<=t;cs++)
    {
        a=3.14159265359;
        scanf("%lf%c%c%c%lf",&m,&r,&s,&y,&n);
        d=400/a;
        printf("%lf\n",d);
        a=sqrt(d*d/(m*m+n*n));

        m=m*a;
        n=n*a;
        printf("Case %d: %lf %lf\n",cs,m,n);

    }
    return 0;
}
