#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll ara[100000]= {0};
vector<ll>vc;
ll q[100000]= {0};
ll m=1000000007,d;

ll bm(ll p)
{
    if(p==0)
        return 1;
    if(p%2==0)
    {

        ll j=bm(p/2);
        return ((j%m)*(j%m))%m;
    }
    else
    {

        return((d%m)*(bm(p-1)%m))%m;
    }
}

int main()
{
    ll i,j,k,l,n,p,t,r;

    for(i=2; i<100000; i=(i==2?3:i+2))
    {
        if(ara[i]==0)
        {
            vc.push_back(i);
            for(j=1; j*i<100000; j++)
                ara[i*j]=1;
        }
    }

    scanf("%lld",&t);
    for(r=1; r<=t; r++)
    {
        scanf("%lld %lld",&n,&p);

        for(i=0; i<=sqrt(n); i++)
            q[i]=0;
        ll e=n;

        for(i=0; i<vc.size()&&vc[i]<=sqrt(e); i++)
        {
            while(e%vc[i]==0)
            {
                e=e/vc[i];
                q[i]++;
            }
        }
        ll j=1;
        printf("%lld\n",e);
        if(e!=0)
        {
            d=e;
            ll f=p;
            k=bm(f+1);
            k--;
            d=(d-1)%m;
            k=k/d;
            j=(k*j)%m;

        }

        for(i=0; vc[i]<=sqrt(n); i++)
            if(q[i]>0)
            {
                d=vc[i];
                ll f=q[i]*p;
                k=bm(f+1);
                k--;
                d=(d-1)%m;
                k=k/d;
                j=(k*j)%m;
            }

        printf("Case %lld: %lld\n",r,j);



}
return 0;
}
