#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,k,l,m,p,q,t;
    long long n,sum;
    double a,b;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%lld %lf %lf",&n,&a,&b);

        if((b/2)<a)
        {
            sum=(n/2)*b+(n%2)*a;
        }
        else
            sum=n*a;

        printf("%lld\n",sum);

    }
}
