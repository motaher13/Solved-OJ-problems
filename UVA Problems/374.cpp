#include<bits/stdc++.h>
using namespace std;
long long m,n;
long long bm(long long p);
int main()
{

    long long i,j,k,p;
    while(scanf("%lld %lld %lld",&n,&p,&m)==3)
    {
        j=bm(p);
        printf("%lld\n",j);
    }
    return 0;
}

long long bm(long long p)
{
    if(p==0)
        return 1;
    if(p%2==0)
    {
        long long j=bm(p/2);
        return ((j%m)*(j%m))%m;
    }
    else
        return((n%m)*(bm(p-1)%m))%m;
}
