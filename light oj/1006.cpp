#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll a,b,c,d,e,f,n;
ll ara[10100]={0};
ll fb(ll m);
int main()
{
    ll i,j,k,l,m,t;
    scanf("%lld",&t);
    for(int cs=1;cs<=t;cs++)
    {
        scanf("%lld %lld %lld %lld %lld %lld %lld",&ara[0],&ara[1],&ara[2],&ara[3],&ara[4],&ara[5],&n);
        for(i=0;i<=5;i++)
            ara[i]=ara[i]%10000007;
        for(i=6;i<=n;i++)
            ara[i]=-1;
        a=fb(n);
        printf("Case %d: %lld\n",cs,a);
    }
    return 0;
}

ll fb(ll m)
{
    if(m<0) return 0;
    if(ara[m]==-1)
        ara[m]=(fb(m-1)%10000007 + fb(m-2)%10000007 + fb(m-3)%10000007 + fb(m-4)%10000007 + fb(m-5)%10000007 + fb(m-6)%10000007)%10000007;
    return ara[m];
}
