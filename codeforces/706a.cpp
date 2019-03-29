#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l,n;
    double a,b,c,d,v,f,mn=2147483647;
    scanf("%lf %lf",&a,&b);
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%lf %lf %lf",&c,&d,&v);
        f=sqrt((a-c)*(a-c)+(b-d)*(b-d));
        f=f/v;
        if(f<mn)
            mn=f;
    }
    printf("%.20lf\n",mn);
    return 0;
}
